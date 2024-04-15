import { Unreachable } from "../../effects.js";

/**
 * @type {import("../../types.js").CodegenVisitor}
 */
export function visitUseStatement(env, node) {
	const pathNode = node.childForFieldName("path");
	if (pathNode == null) throw new Unreachable();
	let $path = pathNode.text;
	if ($path.endsWith('.typlet"')) {
		$path = $path.slice(0, -'.typlet"'.length) + '.js"';
	}

	const wholeNode = node.childForFieldName("whole");
	if (wholeNode) {
		const $name = wholeNode.text;
		return {
			dts: `import * as ${$name} from ${$path};`,
			js: `import * as ${$name} from ${$path};`,
		};
	}

	const partListNode = node.childForFieldName("part");
	if (partListNode) {
		const $names = partListNode
			.childrenForFieldName("list")
			.map((part) => {
				const originalNode = part.childForFieldName("original");
				if (originalNode == null) throw new Unreachable();
				const aliasNode = part.childForFieldName("alias");
				return aliasNode == null
					? originalNode.text
					: `${originalNode.text} as ${aliasNode.text}`;
			})
			.join(", ");
		return {
			dts: `import { ${$names} } from ${$path};`,
			js: `import { ${$names} } from ${$path};`,
		};
	}

	throw new Unreachable();
}
