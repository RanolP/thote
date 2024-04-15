import dedent from "dedent";
import { Unreachable } from "../../effects.js";
import { visitTypeParameters } from "../frag/type_parameters.js";

/**
 * @satisfies {import('../../types.js').CodegenVisitor}
 */
export const visitDeclEffect = (env, node, shouldExport = true) => {
	const $export = shouldExport ? "export " : "";
	const nameNode = node.childForFieldName("name");
	if (nameNode == null) throw new Unreachable();
	const $name = nameNode.text;
	const typeParamsNode = node.childForFieldName("type_params");
	const $typeParams =
		(typeParamsNode && visitTypeParameters(env, typeParamsNode).dts) ?? "";

	return {
		dts: dedent`
      ${$export}interface ${$name}_Capability${$typeParams} {}
    `,
		js: dedent`
    `,
	};
};
