import Parser from "tree-sitter";
import TreeSitterTyplet from "tree-sitter-typlet";
import { SourceFile } from "./source-file.js";
import * as Check from "./visitors/check/index.js";
import { Scope } from "./scope.js";
import * as Codegen from "./visitors/codegen/index.js";
import path from "node:path";
import { fs } from "zx";
import { Env } from "./visitors/env.js";
import { Unreachable } from "./visitors/effects.js";
import pc from "picocolors";

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
		for (const file of this.#sources) {
			const env = new Env(file, Scope.make({ global: null, parent: null }));
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
					`${pc.bgGreen(pc.bold(pc.black(" Compiled ")))} ${pc.underline(
						file.path,
					)} => ${path.join(
						dir,
						`${name}.{${pc.blue("dts")},${pc.yellow("js")}}`,
					)}`,
				);
				await fs.mkdirs(dir);
				await fs.writeFile(path.join(dir, `${name}.d.ts`), generated.dts ?? "");
				await fs.writeFile(path.join(dir, `${name}.js`), generated.js ?? "");
			} catch (e) {
				if (e instanceof Unreachable) {
					console.error();
					console.error(
						`  ${pc.underline(pc.red("# We broke the compiler!"))}`,
					);
					console.error(
						`  ${pc.gray(
							"-",
						)} Please report the Internal Compiler Error on the GitHub`,
					);
					console.error();
					console.error(e);
					process.exit(1);
				}
				console.error(
					`${pc.bgRed("  Failed  ")} ${pc.underline(file.path)}: ${
						e instanceof Error ? e.message : e
					}`,
				);
			}
		}
	}
}
