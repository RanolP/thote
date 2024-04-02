import { Unreachable } from "../../effects.js";
import { visitDeclaration } from "../decl/index.js";

/**
 * @type {import("../../types.js").CodegenVisitor}
 */
export function visitEscapeHatch(env, node) {
	const sourceNode = node.childForFieldName("source");
	if (sourceNode == null) throw new Unreachable();

	return {
		dts: ``,
		js: sourceNode.text,
	};
}
