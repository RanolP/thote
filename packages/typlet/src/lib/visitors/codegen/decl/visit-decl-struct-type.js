import dedent from "dedent";
import { Unreachable } from "../../effects.js";

/**
 * @satisfies {import('../../types.js').CodegenVisitor}
 */
export const visitDeclStructType = (env, node, shouldExport = false) => {
	const $export = shouldExport ? "export " : "";
	const nameNode = node.childForFieldName("name");
	if (nameNode == null) throw new Unreachable();
	const $name = nameNode.text;
	const fields = node.childrenForFieldName("fields");

	return {
		dts: dedent`
      declare const __${$name}_Nominal: unique symbol;
      ${$export}type ${$name} = (
        { [__${$name}_Nominal]: never } &
        {
          ${fields
						.map((node) => {
							const name = node.childForFieldName("name");
							const type = node.childForFieldName("type");
							if (name == null || type == null) throw new Unreachable();
							return `${name.text}: ${type.text}`;
						})
						.join(",\n")}
        }
      );
      ${$export}declare const ${$name}: {
        make: (p0: {
          ${fields
						.map((node) => {
							const name = node.childForFieldName("name");
							const type = node.childForFieldName("type");
							if (name == null || type == null) throw new Unreachable();
							return `${name.text}: ${type.text}`;
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
