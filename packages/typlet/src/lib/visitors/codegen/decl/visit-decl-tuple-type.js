import dedent from "dedent";
import { Unreachable } from "../../effects.js";

/**
 * @satisfies {import('../../types.js').CodegenVisitor}
 */
export const visitDeclTupleType = (env, node, shouldExport = false) => {
	const $export = shouldExport ? "export " : "";
	const nameNode = node.childForFieldName("name");
	if (nameNode == null) throw new Unreachable();
	const $name = nameNode.text;
	const fields = node.childrenForFieldName("fields");
	const $fields = fields.map((node) => node.text);

	return {
		dts: dedent`
      declare const __${$name}_Nominal: unique symbol;
      ${$export}type ${$name} = (
        { [__${$name}_Nominal]: never } &
        [${$fields.join(", ")}]
      );
      ${$export}declare const ${$name}: {
        make: (${$fields.map((ty, i) => `p${i}: ${ty}`).join(", ")}) => ${$name},
      }
    `,
		js: dedent`
      ${$export}const ${$name} = {
        make: (${$fields.map((_, i) => `p${i}`).join(", ")}) => [${$fields
					.map((_, i) => `p${i}`)
					.join(", ")}]
      }
    `,
	};
};
