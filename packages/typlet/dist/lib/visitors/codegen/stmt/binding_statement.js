import { Unreachable } from "../../effects.js";
import { visitDeclaration } from "../decl/index.js";

/**
 * @type {import("../../types.js").CodegenVisitor}
 */
export function visitBindingStatement(env, node) {
	const kindNode = node.childForFieldName("kind");
	if (kindNode == null) throw new Unreachable();
	const nameNode = node.childForFieldName("name");
	if (nameNode == null) throw new Unreachable();
	const $name = nameNode.text;
	const typeNode = node.childForFieldName("type");
	const valueNode = node.childForFieldName("value");

	/** @TODO */
	const $type = null;

	const $specifier =
		kindNode.text === "let" ? "const" : kindNode.text === "mut" ? "let" : null;
	if ($specifier == null) throw new Unreachable();

	return {
		dts: $type ? `${$specifier} ${$name}: ${$type}` : ``,
		js: `${$specifier} ${$name}`,
	};
}
