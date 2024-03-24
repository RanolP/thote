import { NotImplemented } from "../../effects.js";
import { visitDeclStructType } from "./visit-decl-struct-type.js";
import { visitDeclTupleType } from "./visit-decl-tuple-type.js";

/**
 * @type {import('../../types.js').CodegenVisitor}
 */
export function visitDeclaration(env, node) {
	switch (node.type) {
		case "decl_tuple_type":
			return visitDeclTupleType(env, node);
		case "decl_struct_type":
			return visitDeclStructType(env, node);
		default:
			throw new NotImplemented("visitDeclaration", node);
	}
}
