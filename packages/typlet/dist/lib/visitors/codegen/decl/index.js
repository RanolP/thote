import { NotImplemented } from "../../effects.js";
import { visitDeclEffect } from "./decl-effect.js";
import { visitDeclStructType } from "./decl-struct-type.js";
import { visitDeclTupleType } from "./decl-tuple-type.js";

/**
 * @satisfies {import('../../types.js').CodegenVisitor}
 */
export const visitDeclaration = (env, node, shouldExport = false) => {
	switch (node.type) {
		case "decl_tuple_type":
			return visitDeclTupleType(env, node, shouldExport);
		case "decl_struct_type":
			return visitDeclStructType(env, node, shouldExport);
		case "decl_effect":
			return visitDeclEffect(env, node, shouldExport);
		default:
			throw new NotImplemented("visitDeclaration", node);
	}
};
