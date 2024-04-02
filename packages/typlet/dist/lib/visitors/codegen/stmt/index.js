import { NotImplemented } from "../../effects.js";
import { visitDeclaration } from "../decl/index.js";
import { visitBindingStatement } from "./binding_statement.js";
import { visitEscapeHatch } from "./escape_hatch.js";
import { visitExportStatement } from "./export_statement.js";
import { visitImportStatement } from "./import_statement.js";

/**
 * @type {import('../../types.js').CodegenVisitor}
 */
export function visitStatement(env, node) {
	switch (node.type) {
		case "escape_hatch":
			return visitEscapeHatch(env, node);
		case "export_statement":
			return visitExportStatement(env, node);
		case "import_statement":
			return visitImportStatement(env, node);
		case "binding_statement":
			return visitBindingStatement(env, node);
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
