import dedent from "dedent";
import { Unreachable } from "../../effects.js";
import { visitTypeParameters } from "../frag/type_parameters.js";

/**
 * @satisfies {import('../../types.js').CodegenVisitor}
 */
export const visitDeclStructType = (env, node, shouldExport = false) => {
	const $export = shouldExport ? "export " : "";
	const nameNode = node.childForFieldName("name");
	if (nameNode == null) throw new Unreachable();
	const $name = nameNode.text;
	const typeParamsNode = node.childForFieldName("type_params");
	const $typeParams =
		(typeParamsNode && visitTypeParameters(env, typeParamsNode).dts) ?? "";
	const fieldNodeList = node.childrenForFieldName("fields");

	return {
		dts: dedent`
      declare const __${$name}_Nominal: unique symbol;
      ${$export}type ${$name}${$typeParams} = (
        { [__${$name}_Nominal]: never } &
        {
          ${fieldNodeList
						.map((fieldNode) => {
							const nameNode = fieldNode.childForFieldName("name");
							const typeNode = fieldNode.childForFieldName("type");
							if (nameNode == null || typeNode == null) throw new Unreachable();
							return `${nameNode.text}: ${typeNode.text}`;
						})
						.join(",\n")}
        }
      );
      ${$export}declare const ${$name}: {
        make: ${$typeParams}(p0: {
          ${fieldNodeList
						.map((fieldNode) => {
							const nameNode = fieldNode.childForFieldName("name");
							const typeNode = fieldNode.childForFieldName("type");
							if (nameNode == null || typeNode == null) throw new Unreachable();
							return `${nameNode.text}: ${typeNode.text}`;
						})
						.join(",\n")}
        }) => ${$name},
      }
    `,
		js: dedent`
      ${$export}const ${$name} = {
        make: (obj) => obj
      };
    `,
	};
};
