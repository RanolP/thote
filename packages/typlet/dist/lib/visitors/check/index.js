import { visitProgram } from "./program.js";

/**
 * @type {import('../types.js').Visitor<void>}
 */
export function visitRootNode(env, node) {
	if (node.type === "program") {
		visitProgram(env, node);
	} else {
		throw new Error("Root node is not a program");
	}
}
