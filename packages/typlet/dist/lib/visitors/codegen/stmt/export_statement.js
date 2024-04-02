import { Unreachable } from "../../effects.js";
import { visitDeclaration } from "../decl/index.js";

/**
 * @type {import("../../types.js").CodegenVisitor}
 */
export function visitExportStatement(env, node) {
	const declarationNode = node.childForFieldName("declaration");
	if (declarationNode == null) throw new Unreachable();
	return visitDeclaration(env, declarationNode, true);
}
