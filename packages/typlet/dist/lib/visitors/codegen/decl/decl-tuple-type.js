import dedent from "dedent";
import { Unreachable } from "../../effects.js";
import { visitTypeParameters } from "../frag/type_parameters.js";

/**
 * @satisfies {import('../../types.js').CodegenVisitor}
 */
export const visitDeclTupleType = (env, node, shouldExport = true) => {
	const $export = shouldExport ? "export " : "";
	const nameNode = node.childForFieldName("name");
	if (nameNode == null) throw new Unreachable();
	const $name = nameNode.text;
	const typeParamsNode = node.childForFieldName("type_params");
	const $typeParams =
		(typeParamsNode && visitTypeParameters(env, typeParamsNode).dts) ?? "";
	const fieldNodeList = node.childrenForFieldName("fields");
	const $fieldList = fieldNodeList.map((node) => node.text);

	return {
		dts: dedent`
      declare const __${$name}_Nominal: unique symbol;
      ${$export}type ${$name}${$typeParams} = (
        { [__${$name}_Nominal]: never } &
        [${$fieldList.join(", ")}]
      );
      ${$export}declare const ${$name}: {
        make: ${$typeParams}(${$fieldList
					.map((ty, i) => `p${i}: ${ty}`)
					.join(", ")}) => ${$name},
      }
    `,
		js: dedent`
      ${$export}const ${$name} = {
        make: (${$fieldList.map((_, i) => `p${i}`).join(", ")}) => [${$fieldList
					.map((_, i) => `p${i}`)
					.join(", ")}]
      }
    `,
	};
};
