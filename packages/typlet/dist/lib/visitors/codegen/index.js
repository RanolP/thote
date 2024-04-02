import { visitProgram } from "./program.js";

/**
 * @type {import('../types.js').CodegenVisitor}
 */
export function visitRootNode(env, node) {
	if (node.type === "program") {
		return visitProgram(env, node);
	} else {
		throw new Error("Root node is not a program");
	}
}
