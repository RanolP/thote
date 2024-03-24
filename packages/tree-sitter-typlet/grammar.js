/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const decimals = /[0-9](_?[0-9])*/;
const simple_numeric = seq(decimals, optional(seq(".", decimals)));

module.exports = grammar({
	name: "typlet",

	inline: ($) => [$.statement, $.declaration, $.expression],

	precedences: ($) => [
		[$.unit_absolute_length, $.unit_relative_length, $.float, $.integer],
	],

	rules: {
		// TODO: add the actual grammar rules
		program: ($) => seq(optional($.shebang), repeat($.statement)),

		shebang: ($) => /#!.*/,

		statement: ($) =>
			choice($.expression_statement, $.export_statement, $.declaration),

		export_statement: ($) => seq("export", field("declaration", $.declaration)),
		declaration: ($) =>
			choice($.decl_unit_type, $.decl_tuple_type, $.decl_struct_type),
		decl_unit_type: ($) => seq("type", field("name", $.identifier)),
		decl_tuple_type: ($) =>
			seq(
				"type",
				field("name", $.identifier),
				"(",
				seq(
					field("fields", $.type),
					repeat(seq(",", field("fields", $.type))),
					optional(","),
				),
				")",
			),
		decl_struct_type: ($) =>
			seq(
				"type",
				field("name", $.identifier),
				"{",
				seq(
					field("fields", $.struct_field),
					repeat(seq(",", field("fields", $.struct_field))),
					optional(","),
				),
				"}",
			),
		struct_field: ($) =>
			seq(field("name", $.identifier), ":", field("type", $.type)),

		expression_statement: ($) => $.expression,
		expression: ($) =>
			choice(
				$.binary_operation,
				$.unit_absolute_length,
				$.unit_relative_length,
				$.float,
				$.integer,
				$.boolean,
				$.string,
				$.name,
			),

		binary_operation: ($) => {
			/**
			 * @satisfies {Array<[string[]] | [string[], 'right']>}
			 */
			const operators = [
				[["==", "!=", "<", "<=", ">", ">="]],
				[["+", "-"]],
				[["*", "/"]],
			];
			return choice(
				...operators.map(([operators, associativity = "left"], precedence) =>
					(associativity === "right" ? prec.right : prec.left)(
						precedence,
						seq(
							field("lhs", $.expression),
							field("operator", choice(...operators)),
							field("rhs", $.expression),
						),
					),
				),
			);
		},
		unit_absolute_length: ($) => token(seq(simple_numeric, choice("px"))),
		unit_relative_length: ($) => token(seq(simple_numeric, choice("em", "%"))),
		integer: ($) =>
			token(
				choice(
					seq(choice("0b", "0B"), /[01](_?[01])*/),
					seq(choice("0o", "0O"), /[0-7](_?[0-7])*/),
					seq(choice("0x", "0X"), /[0-9a-fA-F](_?[0-9a-fA-F])*/),
					decimals,
				),
			),

		float: ($) =>
			token(
				choice(
					seq(decimals, optional(seq(".", decimals)), /[eE][+-]?/, decimals),
					seq(decimals, ".", decimals),
				),
			),
		boolean: ($) => token(choice("true", "false")),
		string: ($) =>
			token(
				seq(
					'"',
					repeat(
						choice(
							/[^"\x0A\x0B\x0C\x0D\x85\u{2028}\u{2029}\\]/,
							/\\[nrt"\\]/,
							/\\x[0-9a-fA-F]{2}/,
							/\\u\{[0-9a-fA-F]{4}\}/,
						),
					),
					'"',
				),
			),

		name: ($) => $.identifier,

		type: ($) => $.identifier,

		_underscore: ($) => token("_"),
		identifier: ($) => token(/[\p{ID_Start}][\p{ID_Continue}]*/),
		_word: ($) => token(/[a-zA-Z]+|_/),
	},

	word: ($) => $._word,
});
