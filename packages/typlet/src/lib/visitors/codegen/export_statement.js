import { NotImplemented, Unreachable } from "../effects.js";
import { visitDeclTupleType } from "./decl/visit-decl-tuple-type.js";

/**
 * @type {import("../types.js").CodegenVisitor}
 */
export function visitExportStatement(env, node) {
	const declarationNode = node.childForFieldName("declaration");
	if (declarationNode == null) throw new Unreachable();
	switch (declarationNode.type) {
		case "decl_tuple_type":
			return visitDeclTupleType(env, declarationNode, true);
		default:
			throw new NotImplemented("visitExportStatement", node);
	}
}
