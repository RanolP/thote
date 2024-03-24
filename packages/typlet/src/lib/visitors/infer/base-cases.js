import { NotImplemented } from "../effects.js";

/**
 * @type {import('./types.js').InferenceRule}
 */
export function inferBaseCases(env, node) {
	switch (node.type) {
		case "unit_absolute_length":
		case "unit_relative_length":
			throw new NotImplemented("inferBaseCases", node);
		case "float":
			return { kind: "literal", name: "{float}" };
		case "integer":
			return { kind: "literal", name: "{integer}" };
		case "boolean":
			return { kind: "primitive", name: "bool" };
		case "string":
			return { kind: "primitive", name: "string" };
		default:
			throw new NotImplemented("inferBaseCases", node);
	}
}
