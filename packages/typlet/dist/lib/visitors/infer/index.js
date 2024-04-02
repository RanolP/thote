import { inferBaseCases } from "./base-cases.js";

/**
 * @type {import('./types.js').InferenceRule}
 */
export function infer(env, node) {
	return inferBaseCases(env, node);
}
