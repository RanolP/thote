import Parser from "tree-sitter";
import TreeSitterTyplet from "tree-sitter-typlet";
import { SourceFile } from "./source-file.js";
import * as Check from "./visitors/check/index.js";
import { Scope } from "./symbol-table.js";
import * as Codegen from "./visitors/codegen/index.js";
import path from "node:path";
import { fs } from "zx";

/**
 * @typedef {{
 *   targetPath: string;
 * 	 rootPath: string;
 * }} CompilerConfig
 */

export class TypletCompiler {
	/**
	 * @type {Parser}
	 */
	#parser;
	/**
	 * @type {SourceFile[]}
	 */
	#sources = [];

	/**
	 * @param {Partial<CompilerConfig>} config
	 */
	constructor(config = {}) {
		/**
		 * @type {CompilerConfig}
		 */
		this.config = {
			targetPath: config.targetPath ?? "dist",
			rootPath: config.rootPath ?? ".",
		};
		this.#parser = new Parser();
		this.#parser.setLanguage(TreeSitterTyplet);
	}

	/**
	 * @param {SourceFile[]} files
	 */
	addSource(...files) {
		this.#sources.push(...files);
	}

	async compile() {
		const env = new Scope();
		for (const file of this.#sources) {
			const ast = this.#parser.parse(file.content);
			try {
				Check.visitRootNode(env, ast.rootNode);
				const generated = Codegen.visitRootNode(env, ast.rootNode);
				const targetPath = path.join(
					this.config.targetPath,
					path.relative(this.config.rootPath, file.path),
				);
				const { dir, name } = path.parse(targetPath);
				console.log(
					`Compiled ${file.path} into ${path.join(dir, `${name}.{dts,js}`)}`,
				);
				await fs.mkdirs(dir);
				await fs.writeFile(path.join(dir, `${name}.d.ts`), generated.dts ?? "");
				await fs.writeFile(path.join(dir, `${name}.js`), generated.js ?? "");
			} catch (e) {
				console.error(`Failed to compile ${file.path}: ${e}`);
			}
		}
	}
}
