import { NotImplemented, Unreachable } from "../../effects.js";

/**
 * @type {import("../../types.js").CodegenVisitor}
 */
export function visitTypeParameters(env, node) {
	const list = node.childrenForFieldName("list") ?? [];

	return {
		dts:
			list.length === 0
				? ""
				: [
						"<",
						list
							.map((node) => {
								/** @type {string} */
								let $name;
								switch (node.type) {
									case "name":
										$name = node.text;
										break;
									case "type_constraint":
										const nameNode = node.childForFieldName("name");
										if (!nameNode) throw new Unreachable();
										$name = nameNode?.text;
										break;
									default:
										throw new NotImplemented("visitTypeParameters", node);
								}
								return `${$name},`;
							})
							.join(" "),
						">",
				  ].join(""),
	};
}
