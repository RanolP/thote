import { NotImplemented } from "../effects.js";
import { visitDeclaration } from "./decl/index.js";
import { visitExportStatement } from "./export_statement.js";
import { visitImportStatement } from "./import_statement.js";

/**
 * @type {import('../types.js').CodegenVisitor}
 */
export function visitStatement(env, node) {
	switch (node.type) {
		case "export_statement":
			return visitExportStatement(env, node);
		case "import_statement":
			return visitImportStatement(env, node);
		default:
			try {
				return visitDeclaration(env, node);
			} catch (e) {
				if (e instanceof NotImplemented) {
					throw new NotImplemented("visitStatement", node);
				} else {
					throw e;
				}
			}
	}
}
