/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const decimals = /[0-9](_?[0-9])*/;
const simple_numeric = seq(decimals, optional(seq(".", decimals)));

module.exports = grammar({
	name: "typlet",

	inline: ($) => [$.statement, $.declaration, $.expression],

	precedences: ($) => [
		[$.unit_absolute_length, $.unit_relative_length, $.float, $.integer],
		[$.if_expression, $.binary_operation],
	],

	rules: {
		// TODO: add the actual grammar rules
		program: ($) => seq(optional($.shebang), repeat($.statement)),

		shebang: ($) => /#!.*/,

		statement: ($) =>
			seq(
				choice(
					$.escape_hatch,
					$.use_statement,
					$.declaration,
					$.binding_statement,
					$.expression_statement,
				),
				$._separator,
			),
		escape_hatch: ($) =>
			seq("__ESCAPE_JS```", field("source", $.escape_hatch_source), "```"),
		escape_hatch_source: ($) => /[^`]*/,

		use_statement: ($) =>
			seq(
				"use",
				field("path", $.string),
				choice(
					seq("as", field("whole", $.identifier)),
					seq(":", field("part", $.use_part_list)),
				),
			),
		use_part_list: ($) =>
			seq(
				"{",
				field("list", $.use_part),
				repeat(seq(",", field("list", $.use_part))),
				optional(","),
				"}",
			),
		use_part: ($) =>
			seq(
				field("original", $.identifier),
				optional(seq("as", field("alias", $.identifier))),
			),
		binding_statement: ($) =>
			seq(
				field("kind", choice("let", "mut")),
				field("name", $.identifier),
				optional(seq(":", field("type", $.type))),
				optional(seq("=", field("value", $.expression))),
			),

		declaration: ($) =>
			choice(
				$.decl_unit_type,
				$.decl_tuple_type,
				$.decl_struct_type,
				$.decl_effect,
				$.decl_fn,
			),
		decl_unit_type: ($) => seq("type", field("name", $.identifier)),
		decl_tuple_type: ($) =>
			seq(
				"type",
				field("name", $.identifier),
				optional(field("type_params", $.type_parameters)),
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
				optional(field("type_params", $.type_parameters)),
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
		decl_effect: ($) =>
			seq(
				"effect",
				field("name", $.identifier),
				optional(field("type_params", $.type_parameters)),
				"{",
				repeat($.fn_signature),
				"}",
			),
		decl_fn: ($) =>
			choice(
				seq(
					optional(field("extern", "extern")),
					field("signature", $.fn_signature),
				),
				seq(field("signature", $.fn_signature), field("body", $.block)),
			),
		fn_signature: ($) =>
			seq(
				"fn",
				field("name", $.identifier),
				"(",
				optional(
					seq(
						field("params", $.fn_param),
						repeat(seq(",", field("params", $.fn_param))),
						optional(","),
					),
				),
				")",
				optional(seq("->", field("return", $.type))),
				optional(seq("where") /**  @TODO */),
			),
		fn_param: ($) =>
			seq(
				optional(field("mut", "mut")),
				field("name", $.identifier),
				":",
				field("type", $.type),
			),

		// Expressions

		expression_statement: ($) => $.expression,
		expression: ($) =>
			choice(
				$._parenthesis,
				$.binary_operation,
				$.unit_absolute_length,
				$.unit_relative_length,
				$.float,
				$.integer,
				$.boolean,
				$.string,
				$.name,
				$.if_expression,
				$.block,
			),

		_parenthesis: ($) => seq("(", $.expression, ")"),
		if_expression: ($) =>
			prec.right(
				seq(
					"if",
					field("condition", $.expression),
					field("then", choice($.block, seq("then", $.expression))),
					optional(seq("else", field("else", choice($.block, $.expression)))),
				),
			),

		binary_operation: ($) => {
			/** @satisfies {Array<[string[]] | [string[], 'right']>} */
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

		// Fragments

		type: ($) => seq($.identifier, optional($.type_parameters)),
		type_parameters: ($) =>
			seq("<", field("list", choice($.name, $.type_constraint)), ">"),
		type_constraint: ($) =>
			choice(seq(field("name", $.name), ":", field("constraint", $.type))),
		identifier: ($) => token(/[\p{ID_Start}][\p{ID_Continue}]*/),
		block: ($) =>
			seq(
				"{",
				repeat(field("statements", $.statement)),
				optional(field("expression", $.expression)),
				"}",
			),
		_word: ($) => token(/[a-zA-Z]+|_/),

		_separator: ($) => choice(";", $._vertical_space),
		_vertical_space: ($) =>
			/\r\n|[\n\u{000B}\u{000C}\r\u{0085}\u{2028}\u{2029}]/,
	},

	word: ($) => $._word,
});
