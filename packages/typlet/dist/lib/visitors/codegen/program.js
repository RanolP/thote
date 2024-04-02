import { visitStatement } from "./stmt/index.js";

/**
 * @type {import('../types.js').CodegenVisitor}
 */
export function visitProgram(env, node) {
	const jsList = [];
	const dtsList = [];

	for (const child of node.children) {
		switch (child.type) {
			case "shebang":
				jsList.push(child.text);
				continue;
			default:
				const { js, dts } = visitStatement(env, child);
				jsList.push(js);
				dtsList.push(dts);
				break;
		}
	}
	return {
		js: jsList.join("\n").trim(),
		dts: dtsList.join("\n").trim(),
	};
}
