#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 292
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 28
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 46

enum ts_symbol_identifiers {
  sym__word = 1,
  sym_shebang = 2,
  anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE = 3,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 4,
  sym_escape_hatch_source = 5,
  anon_sym_use = 6,
  anon_sym_as = 7,
  anon_sym_COLON = 8,
  anon_sym_LBRACE = 9,
  anon_sym_COMMA = 10,
  anon_sym_RBRACE = 11,
  anon_sym_let = 12,
  anon_sym_mut = 13,
  anon_sym_EQ = 14,
  anon_sym_type = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_effect = 18,
  anon_sym_extern = 19,
  anon_sym_fn = 20,
  anon_sym_DASH_GT = 21,
  anon_sym_where = 22,
  anon_sym_if = 23,
  anon_sym_then = 24,
  anon_sym_else = 25,
  anon_sym_EQ_EQ = 26,
  anon_sym_BANG_EQ = 27,
  anon_sym_LT = 28,
  anon_sym_LT_EQ = 29,
  anon_sym_GT = 30,
  anon_sym_GT_EQ = 31,
  anon_sym_PLUS = 32,
  anon_sym_DASH = 33,
  anon_sym_STAR = 34,
  anon_sym_SLASH = 35,
  sym_unit_absolute_length = 36,
  sym_unit_relative_length = 37,
  sym_integer = 38,
  sym_float = 39,
  sym_boolean = 40,
  sym_string = 41,
  sym_identifier = 42,
  anon_sym_SEMI = 43,
  sym__vertical_space = 44,
  sym_program = 45,
  sym_escape_hatch = 46,
  sym_use_statement = 47,
  sym_use_part_list = 48,
  sym_use_part = 49,
  sym_binding_statement = 50,
  sym_decl_unit_type = 51,
  sym_decl_tuple_type = 52,
  sym_decl_struct_type = 53,
  sym_struct_field = 54,
  sym_decl_effect = 55,
  sym_decl_fn = 56,
  sym_fn_signature = 57,
  sym_fn_param = 58,
  sym_expression_statement = 59,
  sym__parenthesis = 60,
  sym_if_expression = 61,
  sym_binary_operation = 62,
  sym_name = 63,
  sym_type = 64,
  sym_type_parameters = 65,
  sym_type_constraint = 66,
  sym_block = 67,
  sym__separator = 68,
  aux_sym_program_repeat1 = 69,
  aux_sym_use_part_list_repeat1 = 70,
  aux_sym_decl_tuple_type_repeat1 = 71,
  aux_sym_decl_struct_type_repeat1 = 72,
  aux_sym_decl_effect_repeat1 = 73,
  aux_sym_fn_signature_repeat1 = 74,
  aux_sym_block_repeat1 = 75,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__word] = "_word",
  [sym_shebang] = "shebang",
  [anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE] = "__ESCAPE_JS```",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [sym_escape_hatch_source] = "escape_hatch_source",
  [anon_sym_use] = "use",
  [anon_sym_as] = "as",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_let] = "let",
  [anon_sym_mut] = "mut",
  [anon_sym_EQ] = "=",
  [anon_sym_type] = "type",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_effect] = "effect",
  [anon_sym_extern] = "extern",
  [anon_sym_fn] = "fn",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_where] = "where",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [sym_unit_absolute_length] = "unit_absolute_length",
  [sym_unit_relative_length] = "unit_relative_length",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [sym__vertical_space] = "_vertical_space",
  [sym_program] = "program",
  [sym_escape_hatch] = "escape_hatch",
  [sym_use_statement] = "use_statement",
  [sym_use_part_list] = "use_part_list",
  [sym_use_part] = "use_part",
  [sym_binding_statement] = "binding_statement",
  [sym_decl_unit_type] = "decl_unit_type",
  [sym_decl_tuple_type] = "decl_tuple_type",
  [sym_decl_struct_type] = "decl_struct_type",
  [sym_struct_field] = "struct_field",
  [sym_decl_effect] = "decl_effect",
  [sym_decl_fn] = "decl_fn",
  [sym_fn_signature] = "fn_signature",
  [sym_fn_param] = "fn_param",
  [sym_expression_statement] = "expression_statement",
  [sym__parenthesis] = "_parenthesis",
  [sym_if_expression] = "if_expression",
  [sym_binary_operation] = "binary_operation",
  [sym_name] = "name",
  [sym_type] = "type",
  [sym_type_parameters] = "type_parameters",
  [sym_type_constraint] = "type_constraint",
  [sym_block] = "block",
  [sym__separator] = "_separator",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_use_part_list_repeat1] = "use_part_list_repeat1",
  [aux_sym_decl_tuple_type_repeat1] = "decl_tuple_type_repeat1",
  [aux_sym_decl_struct_type_repeat1] = "decl_struct_type_repeat1",
  [aux_sym_decl_effect_repeat1] = "decl_effect_repeat1",
  [aux_sym_fn_signature_repeat1] = "fn_signature_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__word] = sym__word,
  [sym_shebang] = sym_shebang,
  [anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE] = anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [sym_escape_hatch_source] = sym_escape_hatch_source,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_mut] = anon_sym_mut,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_effect] = anon_sym_effect,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_unit_absolute_length] = sym_unit_absolute_length,
  [sym_unit_relative_length] = sym_unit_relative_length,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym__vertical_space] = sym__vertical_space,
  [sym_program] = sym_program,
  [sym_escape_hatch] = sym_escape_hatch,
  [sym_use_statement] = sym_use_statement,
  [sym_use_part_list] = sym_use_part_list,
  [sym_use_part] = sym_use_part,
  [sym_binding_statement] = sym_binding_statement,
  [sym_decl_unit_type] = sym_decl_unit_type,
  [sym_decl_tuple_type] = sym_decl_tuple_type,
  [sym_decl_struct_type] = sym_decl_struct_type,
  [sym_struct_field] = sym_struct_field,
  [sym_decl_effect] = sym_decl_effect,
  [sym_decl_fn] = sym_decl_fn,
  [sym_fn_signature] = sym_fn_signature,
  [sym_fn_param] = sym_fn_param,
  [sym_expression_statement] = sym_expression_statement,
  [sym__parenthesis] = sym__parenthesis,
  [sym_if_expression] = sym_if_expression,
  [sym_binary_operation] = sym_binary_operation,
  [sym_name] = sym_name,
  [sym_type] = sym_type,
  [sym_type_parameters] = sym_type_parameters,
  [sym_type_constraint] = sym_type_constraint,
  [sym_block] = sym_block,
  [sym__separator] = sym__separator,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_use_part_list_repeat1] = aux_sym_use_part_list_repeat1,
  [aux_sym_decl_tuple_type_repeat1] = aux_sym_decl_tuple_type_repeat1,
  [aux_sym_decl_struct_type_repeat1] = aux_sym_decl_struct_type_repeat1,
  [aux_sym_decl_effect_repeat1] = aux_sym_decl_effect_repeat1,
  [aux_sym_fn_signature_repeat1] = aux_sym_fn_signature_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_shebang] = {
    .visible = true,
    .named = true,
  },
  [anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_hatch_source] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_effect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_unit_absolute_length] = {
    .visible = true,
    .named = true,
  },
  [sym_unit_relative_length] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym__vertical_space] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_hatch] = {
    .visible = true,
    .named = true,
  },
  [sym_use_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_use_part_list] = {
    .visible = true,
    .named = true,
  },
  [sym_use_part] = {
    .visible = true,
    .named = true,
  },
  [sym_binding_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_unit_type] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_tuple_type] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_struct_type] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_field] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_effect] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_fn] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_param] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__parenthesis] = {
    .visible = false,
    .named = true,
  },
  [sym_if_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_type_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__separator] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_use_part_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decl_tuple_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decl_struct_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decl_effect_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fn_signature_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alias = 1,
  field_body = 2,
  field_condition = 3,
  field_constraint = 4,
  field_else = 5,
  field_expression = 6,
  field_extern = 7,
  field_fields = 8,
  field_kind = 9,
  field_lhs = 10,
  field_list = 11,
  field_mut = 12,
  field_name = 13,
  field_operator = 14,
  field_original = 15,
  field_params = 16,
  field_part = 17,
  field_path = 18,
  field_return = 19,
  field_rhs = 20,
  field_signature = 21,
  field_source = 22,
  field_statements = 23,
  field_then = 24,
  field_type = 25,
  field_type_params = 26,
  field_value = 27,
  field_whole = 28,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_constraint] = "constraint",
  [field_else] = "else",
  [field_expression] = "expression",
  [field_extern] = "extern",
  [field_fields] = "fields",
  [field_kind] = "kind",
  [field_lhs] = "lhs",
  [field_list] = "list",
  [field_mut] = "mut",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_original] = "original",
  [field_params] = "params",
  [field_part] = "part",
  [field_path] = "path",
  [field_return] = "return",
  [field_rhs] = "rhs",
  [field_signature] = "signature",
  [field_source] = "source",
  [field_statements] = "statements",
  [field_then] = "then",
  [field_type] = "type",
  [field_type_params] = "type_params",
  [field_value] = "value",
  [field_whole] = "whole",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 3},
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 2},
  [16] = {.index = 26, .length = 3},
  [17] = {.index = 29, .length = 3},
  [18] = {.index = 32, .length = 3},
  [19] = {.index = 35, .length = 1},
  [20] = {.index = 36, .length = 2},
  [21] = {.index = 38, .length = 1},
  [22] = {.index = 39, .length = 2},
  [23] = {.index = 41, .length = 2},
  [24] = {.index = 43, .length = 3},
  [25] = {.index = 46, .length = 4},
  [26] = {.index = 50, .length = 2},
  [27] = {.index = 52, .length = 1},
  [28] = {.index = 53, .length = 3},
  [29] = {.index = 56, .length = 2},
  [30] = {.index = 58, .length = 2},
  [31] = {.index = 60, .length = 3},
  [32] = {.index = 63, .length = 2},
  [33] = {.index = 65, .length = 1},
  [34] = {.index = 66, .length = 3},
  [35] = {.index = 69, .length = 2},
  [36] = {.index = 71, .length = 4},
  [37] = {.index = 75, .length = 2},
  [38] = {.index = 77, .length = 2},
  [39] = {.index = 79, .length = 2},
  [40] = {.index = 81, .length = 4},
  [41] = {.index = 85, .length = 3},
  [42] = {.index = 88, .length = 3},
  [43] = {.index = 91, .length = 3},
  [44] = {.index = 94, .length = 4},
  [45] = {.index = 98, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_signature, 0},
  [1] =
    {field_kind, 0},
    {field_name, 1},
  [3] =
    {field_name, 1},
  [4] =
    {field_extern, 0},
    {field_signature, 1},
  [6] =
    {field_body, 1},
    {field_signature, 0},
  [8] =
    {field_source, 1},
  [9] =
    {field_expression, 1},
  [10] =
    {field_statements, 0},
    {field_statements, 1},
  [12] =
    {field_statements, 1, .inherited = true},
  [13] =
    {field_statements, 0, .inherited = true},
    {field_statements, 1, .inherited = true},
  [15] =
    {field_condition, 1},
    {field_then, 2},
  [17] =
    {field_lhs, 0},
    {field_operator, 1},
    {field_rhs, 2},
  [20] =
    {field_path, 1},
    {field_whole, 3},
  [22] =
    {field_part, 3},
    {field_path, 1},
  [24] =
    {field_expression, 2},
    {field_statements, 1, .inherited = true},
  [26] =
    {field_kind, 0},
    {field_name, 1},
    {field_type, 3},
  [29] =
    {field_kind, 0},
    {field_name, 1},
    {field_value, 3},
  [32] =
    {field_condition, 1},
    {field_then, 2},
    {field_then, 3},
  [35] =
    {field_original, 0},
  [36] =
    {field_fields, 3},
    {field_name, 1},
  [38] =
    {field_list, 1},
  [39] =
    {field_name, 1},
    {field_type_params, 2},
  [41] =
    {field_name, 1},
    {field_params, 3},
  [43] =
    {field_condition, 1},
    {field_else, 4},
    {field_then, 2},
  [46] =
    {field_kind, 0},
    {field_name, 1},
    {field_type, 3},
    {field_value, 5},
  [50] =
    {field_name, 0},
    {field_type, 2},
  [52] =
    {field_fields, 1},
  [53] =
    {field_fields, 3},
    {field_fields, 4, .inherited = true},
    {field_name, 1},
  [56] =
    {field_fields, 0, .inherited = true},
    {field_fields, 1, .inherited = true},
  [58] =
    {field_constraint, 2},
    {field_name, 0},
  [60] =
    {field_fields, 4},
    {field_name, 1},
    {field_type_params, 2},
  [63] =
    {field_name, 1},
    {field_return, 5},
  [65] =
    {field_params, 1},
  [66] =
    {field_name, 1},
    {field_params, 3},
    {field_params, 4, .inherited = true},
  [69] =
    {field_params, 0, .inherited = true},
    {field_params, 1, .inherited = true},
  [71] =
    {field_condition, 1},
    {field_else, 5},
    {field_then, 2},
    {field_then, 3},
  [75] =
    {field_alias, 2},
    {field_original, 0},
  [77] =
    {field_list, 1},
    {field_list, 2, .inherited = true},
  [79] =
    {field_list, 0, .inherited = true},
    {field_list, 1, .inherited = true},
  [81] =
    {field_fields, 4},
    {field_fields, 5, .inherited = true},
    {field_name, 1},
    {field_type_params, 2},
  [85] =
    {field_mut, 0},
    {field_name, 1},
    {field_type, 3},
  [88] =
    {field_name, 1},
    {field_params, 3},
    {field_return, 6},
  [91] =
    {field_name, 1},
    {field_params, 3},
    {field_return, 7},
  [94] =
    {field_name, 1},
    {field_params, 3},
    {field_params, 4, .inherited = true},
    {field_return, 7},
  [98] =
    {field_name, 1},
    {field_params, 3},
    {field_params, 4, .inherited = true},
    {field_return, 8},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 6,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 14,
  [19] = 17,
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 23,
  [27] = 21,
  [28] = 16,
  [29] = 15,
  [30] = 25,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 43,
  [46] = 46,
  [47] = 32,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 46,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 35,
  [58] = 34,
  [59] = 36,
  [60] = 37,
  [61] = 38,
  [62] = 39,
  [63] = 44,
  [64] = 40,
  [65] = 41,
  [66] = 42,
  [67] = 55,
  [68] = 56,
  [69] = 53,
  [70] = 50,
  [71] = 49,
  [72] = 31,
  [73] = 48,
  [74] = 52,
  [75] = 54,
  [76] = 33,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 78,
  [83] = 83,
  [84] = 79,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 86,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 87,
  [93] = 93,
  [94] = 89,
  [95] = 90,
  [96] = 81,
  [97] = 91,
  [98] = 77,
  [99] = 80,
  [100] = 85,
  [101] = 83,
  [102] = 93,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 106,
  [108] = 108,
  [109] = 109,
  [110] = 108,
  [111] = 111,
  [112] = 112,
  [113] = 112,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 109,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 118,
  [126] = 126,
  [127] = 127,
  [128] = 114,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 121,
  [133] = 115,
  [134] = 134,
  [135] = 127,
  [136] = 116,
  [137] = 117,
  [138] = 130,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 129,
  [146] = 146,
  [147] = 124,
  [148] = 148,
  [149] = 123,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 122,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 160,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 139,
  [190] = 167,
  [191] = 191,
  [192] = 174,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 195,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 234,
  [237] = 175,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 163,
  [245] = 245,
  [246] = 246,
  [247] = 172,
  [248] = 206,
  [249] = 173,
  [250] = 250,
  [251] = 251,
  [252] = 210,
  [253] = 176,
  [254] = 254,
  [255] = 179,
  [256] = 199,
  [257] = 180,
  [258] = 258,
  [259] = 182,
  [260] = 260,
  [261] = 184,
  [262] = 185,
  [263] = 48,
  [264] = 223,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 273,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 277,
  [290] = 290,
  [291] = 284,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43471
    ? (c < 4186
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3634
            ? (c < 3406
              ? (c < 3313
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3332 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3386 || c == 3389))))
              : (c <= 3406 || (c < 3482
                ? (c < 3450
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3414)
                    : c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))))))
            : (c <= 3635 || (c < 3776
              ? (c < 3724
                ? (c < 3716
                  ? (c < 3713
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3762
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3760)
                  : (c <= 3763 || c == 3773))))
              : (c <= 3780 || (c < 3913
                ? (c < 3840
                  ? (c < 3804
                    ? c == 3782
                    : c <= 3807)
                  : (c <= 3840 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4159
                  ? (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))))))))))))
      : (c <= 4189 || (c < 8126
        ? (c < 6108
          ? (c < 4802
            ? (c < 4682
              ? (c < 4256
                ? (c < 4206
                  ? (c < 4197
                    ? c == 4193
                    : c <= 4198)
                  : (c <= 4208 || (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))))
              : (c <= 4685 || (c < 4746
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))))))
            : (c <= 4805 || (c < 5761
              ? (c < 4992
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))))
              : (c <= 5786 || (c < 5952
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))))))))
          : (c <= 6108 || (c < 7258
            ? (c < 6656
              ? (c < 6400
                ? (c < 6314
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))
                : (c <= 6430 || (c < 6528
                  ? (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))))
              : (c <= 6678 || (c < 7043
                ? (c < 6917
                  ? (c < 6823
                    ? (c >= 6688 && c <= 6740)
                    : c <= 6823)
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7168
                  ? (c < 7098
                    ? (c >= 7086 && c <= 7087)
                    : c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))))))
            : (c <= 7293 || (c < 7960
              ? (c < 7406
                ? (c < 7357
                  ? (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)
                  : (c <= 7359 || (c >= 7401 && c <= 7404)))
                : (c <= 7411 || (c < 7424
                  ? (c < 7418
                    ? (c >= 7413 && c <= 7414)
                    : c <= 7418)
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8027
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))))))))))
        : (c <= 8126 || (c < 12293
          ? (c < 8517
            ? (c < 8450
              ? (c < 8178
                ? (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))
                : (c <= 8180 || (c < 8319
                  ? (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)
                  : (c <= 8319 || (c >= 8336 && c <= 8348)))))
              : (c <= 8450 || (c < 8484
                ? (c < 8469
                  ? (c < 8458
                    ? c == 8455
                    : c <= 8467)
                  : (c <= 8469 || (c >= 8472 && c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))
            : (c <= 8521 || (c < 11631
              ? (c < 11506
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))
              : (c <= 11631 || (c < 11704
                ? (c < 11688
                  ? (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))))))))
          : (c <= 12295 || (c < 42656
            ? (c < 12704
              ? (c < 12443
                ? (c < 12344
                  ? (c < 12337
                    ? (c >= 12321 && c <= 12329)
                    : c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))
                : (c <= 12447 || (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))
              : (c <= 12735 || (c < 42240
                ? (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c < 42538
                    ? (c >= 42512 && c <= 42527)
                    : c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))))))
            : (c <= 42735 || (c < 43020
              ? (c < 42963
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 43011
                  ? (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))))
              : (c <= 43042 || (c < 43261
                ? (c < 43250
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43187)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43301)
                    : c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))))))))))))
    : (c <= 43471 || (c < 70784
      ? (c < 66979
        ? (c < 64467
          ? (c < 43808
            ? (c < 43701
              ? (c < 43588
                ? (c < 43514
                  ? (c < 43494
                    ? (c >= 43488 && c <= 43492)
                    : c <= 43503)
                  : (c <= 43518 || (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)))
                : (c <= 43595 || (c < 43646
                  ? (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)
                  : (c <= 43695 || c == 43697))))
              : (c <= 43702 || (c < 43744
                ? (c < 43714
                  ? (c < 43712
                    ? (c >= 43705 && c <= 43709)
                    : c <= 43712)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))
                : (c <= 43754 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))))))
            : (c <= 43814 || (c < 64256
              ? (c < 44032
                ? (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))))
              : (c <= 64262 || (c < 64312
                ? (c < 64287
                  ? (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64285)
                  : (c <= 64296 || (c >= 64298 && c <= 64310)))
                : (c <= 64316 || (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))))))
          : (c <= 64829 || (c < 65856
            ? (c < 65482
              ? (c < 65142
                ? (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))))
              : (c <= 65487 || (c < 65576
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))))
            : (c <= 65908 || (c < 66560
              ? (c < 66384
                ? (c < 66304
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))
                : (c <= 66421 || (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))))
              : (c <= 66717 || (c < 66928
                ? (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))
                : (c <= 66938 || (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))))))))
        : (c <= 66993 || (c < 69376
          ? (c < 67968
            ? (c < 67594
              ? (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || c == 67592))))
              : (c <= 67637 || (c < 67712
                ? (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))
                : (c <= 67742 || (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))))))
            : (c <= 68023 || (c < 68352
              ? (c < 68121
                ? (c < 68112
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68096)
                  : (c <= 68115 || (c >= 68117 && c <= 68119)))
                : (c <= 68149 || (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c >= 68297 && c <= 68324)))))
              : (c <= 68405 || (c < 68736
                ? (c < 68480
                  ? (c < 68448
                    ? (c >= 68416 && c <= 68437)
                    : c <= 68466)
                  : (c <= 68497 || (c >= 68608 && c <= 68680)))
                : (c <= 68786 || (c < 69248
                  ? (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68899)
                  : (c <= 69289 || (c >= 69296 && c <= 69297)))))))))
          : (c <= 69404 || (c < 70144
            ? (c < 69840
              ? (c < 69600
                ? (c < 69488
                  ? (c < 69424
                    ? c == 69415
                    : c <= 69445)
                  : (c <= 69505 || (c >= 69552 && c <= 69572)))
                : (c <= 69622 || (c < 69749
                  ? (c < 69745
                    ? (c >= 69635 && c <= 69687)
                    : c <= 69746)
                  : (c <= 69749 || (c >= 69763 && c <= 69807)))))
              : (c <= 69864 || (c < 70006
                ? (c < 69959
                  ? (c < 69956
                    ? (c >= 69891 && c <= 69926)
                    : c <= 69956)
                  : (c <= 69959 || (c >= 69968 && c <= 70002)))
                : (c <= 70006 || (c < 70106
                  ? (c < 70081
                    ? (c >= 70019 && c <= 70066)
                    : c <= 70084)
                  : (c <= 70106 || c == 70108))))))
            : (c <= 70161 || (c < 70419
              ? (c < 70287
                ? (c < 70280
                  ? (c < 70272
                    ? (c >= 70163 && c <= 70187)
                    : c <= 70278)
                  : (c <= 70280 || (c >= 70282 && c <= 70285)))
                : (c <= 70301 || (c < 70405
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70366)
                  : (c <= 70412 || (c >= 70415 && c <= 70416)))))
              : (c <= 70440 || (c < 70480
                ? (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || c == 70461))
                : (c <= 70480 || (c < 70727
                  ? (c < 70656
                    ? (c >= 70493 && c <= 70497)
                    : c <= 70708)
                  : (c <= 70730 || (c >= 70751 && c <= 70753)))))))))))))
      : (c <= 70831 || (c < 119966
        ? (c < 73066
          ? (c < 72106
            ? (c < 71680
              ? (c < 71236
                ? (c < 71040
                  ? (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)
                  : (c <= 71086 || (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)))
                : (c <= 71236 || (c < 71424
                  ? (c < 71352
                    ? (c >= 71296 && c <= 71338)
                    : c <= 71352)
                  : (c <= 71450 || (c >= 71488 && c <= 71494)))))
              : (c <= 71723 || (c < 71957
                ? (c < 71945
                  ? (c < 71935
                    ? (c >= 71840 && c <= 71903)
                    : c <= 71942)
                  : (c <= 71945 || (c >= 71948 && c <= 71955)))
                : (c <= 71958 || (c < 72001
                  ? (c < 71999
                    ? (c >= 71960 && c <= 71983)
                    : c <= 71999)
                  : (c <= 72001 || (c >= 72096 && c <= 72103)))))))
            : (c <= 72144 || (c < 72704
              ? (c < 72250
                ? (c < 72192
                  ? (c < 72163
                    ? c == 72161
                    : c <= 72163)
                  : (c <= 72192 || (c >= 72203 && c <= 72242)))
                : (c <= 72250 || (c < 72349
                  ? (c < 72284
                    ? c == 72272
                    : c <= 72329)
                  : (c <= 72349 || (c >= 72368 && c <= 72440)))))
              : (c <= 72712 || (c < 72968
                ? (c < 72818
                  ? (c < 72768
                    ? (c >= 72714 && c <= 72750)
                    : c <= 72768)
                  : (c <= 72847 || (c >= 72960 && c <= 72966)))
                : (c <= 72969 || (c < 73056
                  ? (c < 73030
                    ? (c >= 72971 && c <= 73008)
                    : c <= 73030)
                  : (c <= 73061 || (c >= 73063 && c <= 73064)))))))))
          : (c <= 73097 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73648
                  ? (c < 73440
                    ? c == 73112
                    : c <= 73458)
                  : (c <= 73648 || (c >= 73728 && c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43584
    ? (c < 3776
      ? (c < 2741
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 890
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))))))))
        : (c <= 2745 || (c < 3165
          ? (c < 2949
            ? (c < 2858
              ? (c < 2790
                ? (c < 2763
                  ? (c < 2759
                    ? (c >= 2748 && c <= 2757)
                    : c <= 2761)
                  : (c <= 2765 || (c < 2784
                    ? c == 2768
                    : c <= 2787)))
                : (c <= 2799 || (c < 2821
                  ? (c < 2817
                    ? (c >= 2809 && c <= 2815)
                    : c <= 2819)
                  : (c <= 2828 || (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)))))
              : (c <= 2864 || (c < 2901
                ? (c < 2876
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2884 || (c < 2891
                    ? (c >= 2887 && c <= 2888)
                    : c <= 2893)))
                : (c <= 2903 || (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))))))
            : (c <= 2954 || (c < 3024
              ? (c < 2979
                ? (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))
                : (c <= 2980 || (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))))
              : (c <= 3024 || (c < 3114
                ? (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)))
                : (c <= 3129 || (c < 3146
                  ? (c < 3142
                    ? (c >= 3132 && c <= 3140)
                    : c <= 3144)
                  : (c <= 3149 || (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)))))))))
          : (c <= 3165 || (c < 3430
            ? (c < 3285
              ? (c < 3218
                ? (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))
                : (c <= 3240 || (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))))
              : (c <= 3286 || (c < 3342
                ? (c < 3302
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)
                  : (c <= 3311 || (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)))
                : (c <= 3344 || (c < 3402
                  ? (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3406 || (c < 3423
                    ? (c >= 3412 && c <= 3415)
                    : c <= 3427)))))))
            : (c <= 3439 || (c < 3558
              ? (c < 3517
                ? (c < 3461
                  ? (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)
                  : (c <= 3478 || (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)))
                : (c <= 3517 || (c < 3535
                  ? (c < 3530
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3530)
                  : (c <= 3540 || (c < 3544
                    ? c == 3542
                    : c <= 3551)))))
              : (c <= 3567 || (c < 3716
                ? (c < 3648
                  ? (c < 3585
                    ? (c >= 3570 && c <= 3571)
                    : c <= 3642)
                  : (c <= 3662 || (c < 3713
                    ? (c >= 3664 && c <= 3673)
                    : c <= 3714)))
                : (c <= 3716 || (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3773)))))))))))))
      : (c <= 3780 || (c < 8008
        ? (c < 5870
          ? (c < 4682
            ? (c < 3913
              ? (c < 3864
                ? (c < 3792
                  ? (c < 3784
                    ? c == 3782
                    : c <= 3789)
                  : (c <= 3801 || (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)))
                : (c <= 3865 || (c < 3895
                  ? (c < 3893
                    ? (c >= 3872 && c <= 3881)
                    : c <= 3893)
                  : (c <= 3895 || (c < 3902
                    ? c == 3897
                    : c <= 3911)))))
              : (c <= 3948 || (c < 4176
                ? (c < 3993
                  ? (c < 3974
                    ? (c >= 3953 && c <= 3972)
                    : c <= 3991)
                  : (c <= 4028 || (c < 4096
                    ? c == 4038
                    : c <= 4169)))
                : (c <= 4253 || (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)))))))
            : (c <= 4685 || (c < 4824
              ? (c < 4752
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)))))
              : (c <= 4880 || (c < 5024
                ? (c < 4957
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 4959 || (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)))))))))
          : (c <= 5880 || (c < 6656
            ? (c < 6159
              ? (c < 6002
                ? (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5909)
                    : c <= 5940)
                  : (c <= 5971 || (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)))
                : (c <= 6003 || (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6099)
                    : c <= 6103)
                  : (c <= 6109 || (c < 6155
                    ? (c >= 6112 && c <= 6121)
                    : c <= 6157)))))
              : (c <= 6169 || (c < 6448
                ? (c < 6320
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6432
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6443)))
                : (c <= 6459 || (c < 6528
                  ? (c < 6512
                    ? (c >= 6470 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c < 6608
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6618)))))))
            : (c <= 6683 || (c < 7168
              ? (c < 6832
                ? (c < 6783
                  ? (c < 6752
                    ? (c >= 6688 && c <= 6750)
                    : c <= 6780)
                  : (c <= 6793 || (c < 6823
                    ? (c >= 6800 && c <= 6809)
                    : c <= 6823)))
                : (c <= 6845 || (c < 6992
                  ? (c < 6912
                    ? (c >= 6847 && c <= 6862)
                    : c <= 6988)
                  : (c <= 7001 || (c < 7040
                    ? (c >= 7019 && c <= 7027)
                    : c <= 7155)))))
              : (c <= 7223 || (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7960
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))))))))
        : (c <= 8013 || (c < 11696
          ? (c < 8450
            ? (c < 8150
              ? (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)))))
              : (c <= 8155 || (c < 8305
                ? (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)
                  : (c <= 8188 || (c < 8276
                    ? (c >= 8255 && c <= 8256)
                    : c <= 8276)))
                : (c <= 8305 || (c < 8400
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8412 || (c < 8421
                    ? c == 8417
                    : c <= 8432)))))))
            : (c <= 8450 || (c < 8544
              ? (c < 8486
                ? (c < 8469
                  ? (c < 8458
                    ? c == 8455
                    : c <= 8467)
                  : (c <= 8469 || (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)))
                : (c <= 8486 || (c < 8508
                  ? (c < 8490
                    ? c == 8488
                    : c <= 8505)
                  : (c <= 8511 || (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)))))
              : (c <= 8584 || (c < 11568
                ? (c < 11520
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11507)
                  : (c <= 11557 || (c < 11565
                    ? c == 11559
                    : c <= 11565)))
                : (c <= 11623 || (c < 11680
                  ? (c < 11647
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))))))))
          : (c <= 11702 || (c < 42560
            ? (c < 12441
              ? (c < 11744
                ? (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)))
                : (c <= 11775 || (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)
                  : (c <= 12341 || (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)))))
              : (c <= 12447 || (c < 12784
                ? (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)))
                : (c <= 12799 || (c < 42192
                  ? (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))))))
            : (c <= 42607 || (c < 43136
              ? (c < 42960
                ? (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43047 || (c < 43072
                    ? c == 43052
                    : c <= 43123)))))
              : (c <= 43205 || (c < 43360
                ? (c < 43259
                  ? (c < 43232
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)
                  : (c <= 43259 || (c < 43312
                    ? (c >= 43261 && c <= 43309)
                    : c <= 43347)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43392 && c <= 43456)
                    : c <= 43481)
                  : (c <= 43518 || (c >= 43520 && c <= 43574)))))))))))))))
    : (c <= 43597 || (c < 71488
      ? (c < 67680
        ? (c < 65490
          ? (c < 64285
            ? (c < 43824
              ? (c < 43762
                ? (c < 43642
                  ? (c < 43616
                    ? (c >= 43600 && c <= 43609)
                    : c <= 43638)
                  : (c <= 43714 || (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43759)))
                : (c <= 43766 || (c < 43793
                  ? (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)
                  : (c <= 43798 || (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)))))
              : (c <= 43866 || (c < 55216
                ? (c < 44012
                  ? (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44010)
                  : (c <= 44013 || (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 55203)))
                : (c <= 55238 || (c < 64112
                  ? (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)
                  : (c <= 64217 || (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)))))))
            : (c <= 64296 || (c < 65056
              ? (c < 64326
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)))
                : (c <= 64433 || (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))))
              : (c <= 65071 || (c < 65313
                ? (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))
                : (c <= 65338 || (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))))))))
          : (c <= 65495 || (c < 66776
            ? (c < 66208
              ? (c < 65599
                ? (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)))
                : (c <= 65613 || (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c < 66176
                    ? c == 66045
                    : c <= 66204)))))
              : (c <= 66256 || (c < 66464
                ? (c < 66349
                  ? (c < 66304
                    ? c == 66272
                    : c <= 66335)
                  : (c <= 66378 || (c < 66432
                    ? (c >= 66384 && c <= 66426)
                    : c <= 66461)))
                : (c <= 66499 || (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c < 66736
                    ? (c >= 66720 && c <= 66729)
                    : c <= 66771)))))))
            : (c <= 66811 || (c < 67392
              ? (c < 66964
                ? (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)))
                : (c <= 66965 || (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))))
              : (c <= 67413 || (c < 67592
                ? (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)))
                : (c <= 67592 || (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))))))))
        : (c <= 67702 || (c < 70006
          ? (c < 68736
            ? (c < 68121
              ? (c < 67968
                ? (c < 67828
                  ? (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)
                  : (c <= 67829 || (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)))
                : (c <= 68023 || (c < 68101
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)
                  : (c <= 68102 || (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)))))
              : (c <= 68149 || (c < 68297
                ? (c < 68192
                  ? (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)
                  : (c <= 68220 || (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)))
                : (c <= 68326 || (c < 68448
                  ? (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)
                  : (c <= 68466 || (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)))))))
            : (c <= 68786 || (c < 69600
              ? (c < 69296
                ? (c < 68912
                  ? (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)
                  : (c <= 68921 || (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)))
                : (c <= 69297 || (c < 69424
                  ? (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)
                  : (c <= 69456 || (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)))))
              : (c <= 69622 || (c < 69872
                ? (c < 69759
                  ? (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)
                  : (c <= 69818 || (c < 69840
                    ? c == 69826
                    : c <= 69864)))
                : (c <= 69881 || (c < 69956
                  ? (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)
                  : (c <= 69959 || (c >= 69968 && c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43584
    ? (c < 3776
      ? (c < 2741
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'b' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 890
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))))))))
        : (c <= 2745 || (c < 3165
          ? (c < 2949
            ? (c < 2858
              ? (c < 2790
                ? (c < 2763
                  ? (c < 2759
                    ? (c >= 2748 && c <= 2757)
                    : c <= 2761)
                  : (c <= 2765 || (c < 2784
                    ? c == 2768
                    : c <= 2787)))
                : (c <= 2799 || (c < 2821
                  ? (c < 2817
                    ? (c >= 2809 && c <= 2815)
                    : c <= 2819)
                  : (c <= 2828 || (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)))))
              : (c <= 2864 || (c < 2901
                ? (c < 2876
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2884 || (c < 2891
                    ? (c >= 2887 && c <= 2888)
                    : c <= 2893)))
                : (c <= 2903 || (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))))))
            : (c <= 2954 || (c < 3024
              ? (c < 2979
                ? (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))
                : (c <= 2980 || (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))))
              : (c <= 3024 || (c < 3114
                ? (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)))
                : (c <= 3129 || (c < 3146
                  ? (c < 3142
                    ? (c >= 3132 && c <= 3140)
                    : c <= 3144)
                  : (c <= 3149 || (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)))))))))
          : (c <= 3165 || (c < 3430
            ? (c < 3285
              ? (c < 3218
                ? (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))
                : (c <= 3240 || (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))))
              : (c <= 3286 || (c < 3342
                ? (c < 3302
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)
                  : (c <= 3311 || (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)))
                : (c <= 3344 || (c < 3402
                  ? (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3406 || (c < 3423
                    ? (c >= 3412 && c <= 3415)
                    : c <= 3427)))))))
            : (c <= 3439 || (c < 3558
              ? (c < 3517
                ? (c < 3461
                  ? (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)
                  : (c <= 3478 || (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)))
                : (c <= 3517 || (c < 3535
                  ? (c < 3530
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3530)
                  : (c <= 3540 || (c < 3544
                    ? c == 3542
                    : c <= 3551)))))
              : (c <= 3567 || (c < 3716
                ? (c < 3648
                  ? (c < 3585
                    ? (c >= 3570 && c <= 3571)
                    : c <= 3642)
                  : (c <= 3662 || (c < 3713
                    ? (c >= 3664 && c <= 3673)
                    : c <= 3714)))
                : (c <= 3716 || (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3773)))))))))))))
      : (c <= 3780 || (c < 8008
        ? (c < 5870
          ? (c < 4682
            ? (c < 3913
              ? (c < 3864
                ? (c < 3792
                  ? (c < 3784
                    ? c == 3782
                    : c <= 3789)
                  : (c <= 3801 || (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)))
                : (c <= 3865 || (c < 3895
                  ? (c < 3893
                    ? (c >= 3872 && c <= 3881)
                    : c <= 3893)
                  : (c <= 3895 || (c < 3902
                    ? c == 3897
                    : c <= 3911)))))
              : (c <= 3948 || (c < 4176
                ? (c < 3993
                  ? (c < 3974
                    ? (c >= 3953 && c <= 3972)
                    : c <= 3991)
                  : (c <= 4028 || (c < 4096
                    ? c == 4038
                    : c <= 4169)))
                : (c <= 4253 || (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)))))))
            : (c <= 4685 || (c < 4824
              ? (c < 4752
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)))))
              : (c <= 4880 || (c < 5024
                ? (c < 4957
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 4959 || (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)))))))))
          : (c <= 5880 || (c < 6656
            ? (c < 6159
              ? (c < 6002
                ? (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5909)
                    : c <= 5940)
                  : (c <= 5971 || (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)))
                : (c <= 6003 || (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6099)
                    : c <= 6103)
                  : (c <= 6109 || (c < 6155
                    ? (c >= 6112 && c <= 6121)
                    : c <= 6157)))))
              : (c <= 6169 || (c < 6448
                ? (c < 6320
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6432
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6443)))
                : (c <= 6459 || (c < 6528
                  ? (c < 6512
                    ? (c >= 6470 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c < 6608
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6618)))))))
            : (c <= 6683 || (c < 7168
              ? (c < 6832
                ? (c < 6783
                  ? (c < 6752
                    ? (c >= 6688 && c <= 6750)
                    : c <= 6780)
                  : (c <= 6793 || (c < 6823
                    ? (c >= 6800 && c <= 6809)
                    : c <= 6823)))
                : (c <= 6845 || (c < 6992
                  ? (c < 6912
                    ? (c >= 6847 && c <= 6862)
                    : c <= 6988)
                  : (c <= 7001 || (c < 7040
                    ? (c >= 7019 && c <= 7027)
                    : c <= 7155)))))
              : (c <= 7223 || (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7960
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))))))))
        : (c <= 8013 || (c < 11696
          ? (c < 8450
            ? (c < 8150
              ? (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)))))
              : (c <= 8155 || (c < 8305
                ? (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)
                  : (c <= 8188 || (c < 8276
                    ? (c >= 8255 && c <= 8256)
                    : c <= 8276)))
                : (c <= 8305 || (c < 8400
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8412 || (c < 8421
                    ? c == 8417
                    : c <= 8432)))))))
            : (c <= 8450 || (c < 8544
              ? (c < 8486
                ? (c < 8469
                  ? (c < 8458
                    ? c == 8455
                    : c <= 8467)
                  : (c <= 8469 || (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)))
                : (c <= 8486 || (c < 8508
                  ? (c < 8490
                    ? c == 8488
                    : c <= 8505)
                  : (c <= 8511 || (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)))))
              : (c <= 8584 || (c < 11568
                ? (c < 11520
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11507)
                  : (c <= 11557 || (c < 11565
                    ? c == 11559
                    : c <= 11565)))
                : (c <= 11623 || (c < 11680
                  ? (c < 11647
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))))))))
          : (c <= 11702 || (c < 42560
            ? (c < 12441
              ? (c < 11744
                ? (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)))
                : (c <= 11775 || (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)
                  : (c <= 12341 || (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)))))
              : (c <= 12447 || (c < 12784
                ? (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)))
                : (c <= 12799 || (c < 42192
                  ? (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))))))
            : (c <= 42607 || (c < 43136
              ? (c < 42960
                ? (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43047 || (c < 43072
                    ? c == 43052
                    : c <= 43123)))))
              : (c <= 43205 || (c < 43360
                ? (c < 43259
                  ? (c < 43232
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)
                  : (c <= 43259 || (c < 43312
                    ? (c >= 43261 && c <= 43309)
                    : c <= 43347)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43392 && c <= 43456)
                    : c <= 43481)
                  : (c <= 43518 || (c >= 43520 && c <= 43574)))))))))))))))
    : (c <= 43597 || (c < 71488
      ? (c < 67680
        ? (c < 65490
          ? (c < 64285
            ? (c < 43824
              ? (c < 43762
                ? (c < 43642
                  ? (c < 43616
                    ? (c >= 43600 && c <= 43609)
                    : c <= 43638)
                  : (c <= 43714 || (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43759)))
                : (c <= 43766 || (c < 43793
                  ? (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)
                  : (c <= 43798 || (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)))))
              : (c <= 43866 || (c < 55216
                ? (c < 44012
                  ? (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44010)
                  : (c <= 44013 || (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 55203)))
                : (c <= 55238 || (c < 64112
                  ? (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)
                  : (c <= 64217 || (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)))))))
            : (c <= 64296 || (c < 65056
              ? (c < 64326
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)))
                : (c <= 64433 || (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))))
              : (c <= 65071 || (c < 65313
                ? (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))
                : (c <= 65338 || (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))))))))
          : (c <= 65495 || (c < 66776
            ? (c < 66208
              ? (c < 65599
                ? (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)))
                : (c <= 65613 || (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c < 66176
                    ? c == 66045
                    : c <= 66204)))))
              : (c <= 66256 || (c < 66464
                ? (c < 66349
                  ? (c < 66304
                    ? c == 66272
                    : c <= 66335)
                  : (c <= 66378 || (c < 66432
                    ? (c >= 66384 && c <= 66426)
                    : c <= 66461)))
                : (c <= 66499 || (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c < 66736
                    ? (c >= 66720 && c <= 66729)
                    : c <= 66771)))))))
            : (c <= 66811 || (c < 67392
              ? (c < 66964
                ? (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)))
                : (c <= 66965 || (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))))
              : (c <= 67413 || (c < 67592
                ? (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)))
                : (c <= 67592 || (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))))))))
        : (c <= 67702 || (c < 70006
          ? (c < 68736
            ? (c < 68121
              ? (c < 67968
                ? (c < 67828
                  ? (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)
                  : (c <= 67829 || (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)))
                : (c <= 68023 || (c < 68101
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)
                  : (c <= 68102 || (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)))))
              : (c <= 68149 || (c < 68297
                ? (c < 68192
                  ? (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)
                  : (c <= 68220 || (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)))
                : (c <= 68326 || (c < 68448
                  ? (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)
                  : (c <= 68466 || (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)))))))
            : (c <= 68786 || (c < 69600
              ? (c < 69296
                ? (c < 68912
                  ? (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)
                  : (c <= 68921 || (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)))
                : (c <= 69297 || (c < 69424
                  ? (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)
                  : (c <= 69456 || (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)))))
              : (c <= 69622 || (c < 69872
                ? (c < 69759
                  ? (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)
                  : (c <= 69818 || (c < 69840
                    ? c == 69826
                    : c <= 69864)))
                : (c <= 69881 || (c < 69956
                  ? (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)
                  : (c <= 69959 || (c >= 69968 && c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(91);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '0') ADVANCE(99);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == ';') ADVANCE(163);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '>') ADVANCE(89);
      if (lookahead == '_') ADVANCE(136);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == 'f') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead == 'm') ADVANCE(160);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == '}') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(166);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(91);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == ';') ADVANCE(163);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(89);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(164);
      if (('\n' <= lookahead && lookahead <= '\f')) ADVANCE(165);
      END_STATE();
    case 2:
      if (lookahead == '\r') ADVANCE(166);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(91);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == ';') ADVANCE(163);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(89);
      if (lookahead == '_') ADVANCE(135);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(164);
      if (('\n' <= lookahead && lookahead <= '\f')) ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 3:
      if (lookahead == '\r') ADVANCE(166);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ';') ADVANCE(163);
      if (lookahead == '<') ADVANCE(85);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '_') ADVANCE(135);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(164);
      if (('\n' <= lookahead && lookahead <= '\f')) ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 4:
      if (lookahead == '\r') ADVANCE(166);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == ';') ADVANCE(163);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(164);
      if (('\n' <= lookahead && lookahead <= '\f')) ADVANCE(165);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(91);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(89);
      if (lookahead == '_') ADVANCE(135);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == '}') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(52);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == '0') ADVANCE(99);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == '{') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(134);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != 133 &&
          lookahead != 8232 &&
          lookahead != 8233) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '<') ADVANCE(85);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == '_') ADVANCE(135);
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == '}') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == 'm') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(134);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == '}') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(134);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(80);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'J') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'P') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'S') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'S') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(17);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == '`') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == '`') ADVANCE(53);
      END_STATE();
    case 27:
      if (lookahead == '`') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == '`') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == '`') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == '}') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30)
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(35);
      if (lookahead == 'x') ADVANCE(46);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(8);
      END_STATE();
    case 34:
      if (lookahead == 'x') ADVANCE(96);
      END_STATE();
    case 35:
      if (lookahead == '{') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == '}') ADVANCE(8);
      END_STATE();
    case 37:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 38:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(100);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(101);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(91);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '0') ADVANCE(99);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(89);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'f') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == 'm') ADVANCE(132);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == 'u') ADVANCE(126);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == '}') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(134);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_escape_hatch_source);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_escape_hatch_source);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_use);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_use);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_let);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_mut);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_mut);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_type);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_effect);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_effect);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_extern);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_extern);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_fn);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_if);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(80);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_unit_absolute_length);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_unit_relative_length);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '%') ADVANCE(97);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'E') ADVANCE(37);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'p') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '%') ADVANCE(97);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(38);
      if (lookahead == 'E') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(39);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(44);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'p') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '%') ADVANCE(97);
      if (lookahead == 'E') ADVANCE(37);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'p') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_boolean);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_boolean);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(79);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(134);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(120);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(134);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(130);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(58);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(110);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(123);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(106);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(70);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(128);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(82);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 'x') ADVANCE(131);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(112);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(127);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(76);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(115);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(121);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead == 'y') ADVANCE(122);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(133);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(111);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(114);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(64);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(66);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(74);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(113);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(129);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(114);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__word);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(17);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'x') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == 'y') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__vertical_space);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__vertical_space);
      if (lookahead == '\r') ADVANCE(166);
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(164);
      if (('\n' <= lookahead && lookahead <= '\f')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__vertical_space);
      if (('\n' <= lookahead && lookahead <= '\f')) ADVANCE(165);
      if (lookahead == '\r') ADVANCE(166);
      if (lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(164);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(2);
      if (lookahead == 't') ADVANCE(3);
      if (lookahead == 'w') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'h') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'h') ADVANCE(8);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 6:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 50},
  [2] = {.lex_state = 50},
  [3] = {.lex_state = 50},
  [4] = {.lex_state = 50},
  [5] = {.lex_state = 50},
  [6] = {.lex_state = 50},
  [7] = {.lex_state = 50},
  [8] = {.lex_state = 50},
  [9] = {.lex_state = 50},
  [10] = {.lex_state = 50},
  [11] = {.lex_state = 50},
  [12] = {.lex_state = 50},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 50},
  [107] = {.lex_state = 50},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 30},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 30},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 30},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 30},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 30},
  [143] = {.lex_state = 11},
  [144] = {.lex_state = 11},
  [145] = {.lex_state = 9},
  [146] = {.lex_state = 11},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 11},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 11},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 11},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 11},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 11},
  [171] = {.lex_state = 11},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 11},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 9},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 11},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 11},
  [195] = {.lex_state = 11},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 11},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 11},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 11},
  [210] = {.lex_state = 11},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 11},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 11},
  [215] = {.lex_state = 11},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 11},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 30},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 7},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 11},
  [234] = {.lex_state = 11},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 11},
  [237] = {.lex_state = 30},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 11},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 1},
  [243] = {.lex_state = 1},
  [244] = {.lex_state = 30},
  [245] = {.lex_state = 11},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 30},
  [248] = {.lex_state = 11},
  [249] = {.lex_state = 30},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 11},
  [253] = {.lex_state = 30},
  [254] = {.lex_state = 11},
  [255] = {.lex_state = 30},
  [256] = {.lex_state = 11},
  [257] = {.lex_state = 30},
  [258] = {.lex_state = 11},
  [259] = {.lex_state = 30},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 30},
  [262] = {.lex_state = 30},
  [263] = {.lex_state = 7},
  [264] = {.lex_state = 7},
  [265] = {.lex_state = 11},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 11},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 11},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 7},
  [274] = {.lex_state = 11},
  [275] = {.lex_state = 11},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 55},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 7},
  [282] = {.lex_state = 7},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 11},
  [285] = {.lex_state = 11},
  [286] = {.lex_state = 11},
  [287] = {.lex_state = 11},
  [288] = {.lex_state = 11},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 11},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [sym_shebang] = ACTIONS(1),
    [anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_mut] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_effect] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_unit_absolute_length] = ACTIONS(1),
    [sym_unit_relative_length] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(283),
    [sym_escape_hatch] = STATE(187),
    [sym_use_statement] = STATE(187),
    [sym_binding_statement] = STATE(187),
    [sym_decl_unit_type] = STATE(187),
    [sym_decl_tuple_type] = STATE(187),
    [sym_decl_struct_type] = STATE(187),
    [sym_decl_effect] = STATE(187),
    [sym_decl_fn] = STATE(187),
    [sym_fn_signature] = STATE(131),
    [sym_expression_statement] = STATE(187),
    [sym__parenthesis] = STATE(105),
    [sym_if_expression] = STATE(105),
    [sym_binary_operation] = STATE(105),
    [sym_name] = STATE(105),
    [sym_block] = STATE(105),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_shebang] = ACTIONS(5),
    [anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_mut] = ACTIONS(13),
    [anon_sym_type] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_effect] = ACTIONS(19),
    [anon_sym_extern] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(25),
    [sym_unit_absolute_length] = ACTIONS(27),
    [sym_unit_relative_length] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [sym_float] = ACTIONS(29),
    [sym_boolean] = ACTIONS(29),
    [sym_string] = ACTIONS(27),
    [sym_identifier] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_effect,
    ACTIONS(21), 1,
      anon_sym_extern,
    ACTIONS(23), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_program_repeat1,
    STATE(131), 1,
      sym_fn_signature,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    ACTIONS(27), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(29), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(105), 5,
      sym__parenthesis,
      sym_if_expression,
      sym_binary_operation,
      sym_name,
      sym_block,
    STATE(187), 9,
      sym_escape_hatch,
      sym_use_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [72] = 18,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_effect,
    ACTIONS(21), 1,
      anon_sym_extern,
    ACTIONS(23), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      aux_sym_program_repeat1,
    STATE(131), 1,
      sym_fn_signature,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    ACTIONS(27), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(29), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(105), 5,
      sym__parenthesis,
      sym_if_expression,
      sym_binary_operation,
      sym_name,
      sym_block,
    STATE(187), 9,
      sym_escape_hatch,
      sym_use_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [144] = 18,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_effect,
    ACTIONS(21), 1,
      anon_sym_extern,
    ACTIONS(23), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_block_repeat1,
    STATE(131), 1,
      sym_fn_signature,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    ACTIONS(37), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(39), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(86), 5,
      sym__parenthesis,
      sym_if_expression,
      sym_binary_operation,
      sym_name,
      sym_block,
    STATE(159), 9,
      sym_escape_hatch,
      sym_use_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [216] = 18,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_effect,
    ACTIONS(21), 1,
      anon_sym_extern,
    ACTIONS(23), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      aux_sym_block_repeat1,
    STATE(131), 1,
      sym_fn_signature,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    ACTIONS(43), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(45), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(88), 5,
      sym__parenthesis,
      sym_if_expression,
      sym_binary_operation,
      sym_name,
      sym_block,
    STATE(159), 9,
      sym_escape_hatch,
      sym_use_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [288] = 26,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_effect,
    ACTIONS(21), 1,
      anon_sym_extern,
    ACTIONS(23), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      sym_unit_absolute_length,
    ACTIONS(51), 1,
      sym_unit_relative_length,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      sym_float,
    ACTIONS(57), 1,
      sym_boolean,
    ACTIONS(59), 1,
      sym_string,
    STATE(7), 1,
      aux_sym_block_repeat1,
    STATE(83), 1,
      sym_block,
    STATE(85), 1,
      sym_name,
    STATE(92), 1,
      sym_binary_operation,
    STATE(93), 1,
      sym_if_expression,
    STATE(95), 1,
      sym__parenthesis,
    STATE(131), 1,
      sym_fn_signature,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(159), 9,
      sym_escape_hatch,
      sym_use_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [376] = 18,
    ACTIONS(61), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(64), 1,
      anon_sym_use,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 1,
      anon_sym_type,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_effect,
    ACTIONS(84), 1,
      anon_sym_extern,
    ACTIONS(87), 1,
      anon_sym_fn,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(99), 1,
      sym_identifier,
    STATE(7), 1,
      aux_sym_block_repeat1,
    STATE(131), 1,
      sym_fn_signature,
    ACTIONS(72), 2,
      anon_sym_let,
      anon_sym_mut,
    ACTIONS(93), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(96), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(105), 5,
      sym__parenthesis,
      sym_if_expression,
      sym_binary_operation,
      sym_name,
      sym_block,
    STATE(159), 9,
      sym_escape_hatch,
      sym_use_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [448] = 18,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_effect,
    ACTIONS(21), 1,
      anon_sym_extern,
    ACTIONS(23), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_program_repeat1,
    STATE(131), 1,
      sym_fn_signature,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    ACTIONS(27), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(29), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(105), 5,
      sym__parenthesis,
      sym_if_expression,
      sym_binary_operation,
      sym_name,
      sym_block,
    STATE(187), 9,
      sym_escape_hatch,
      sym_use_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [520] = 18,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(109), 1,
      anon_sym_use,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      anon_sym_type,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_effect,
    ACTIONS(127), 1,
      anon_sym_extern,
    ACTIONS(130), 1,
      anon_sym_fn,
    ACTIONS(133), 1,
      anon_sym_if,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(9), 1,
      aux_sym_program_repeat1,
    STATE(131), 1,
      sym_fn_signature,
    ACTIONS(115), 2,
      anon_sym_let,
      anon_sym_mut,
    ACTIONS(136), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(139), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(105), 5,
      sym__parenthesis,
      sym_if_expression,
      sym_binary_operation,
      sym_name,
      sym_block,
    STATE(187), 9,
      sym_escape_hatch,
      sym_use_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [592] = 26,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_effect,
    ACTIONS(21), 1,
      anon_sym_extern,
    ACTIONS(23), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    ACTIONS(147), 1,
      sym_unit_absolute_length,
    ACTIONS(149), 1,
      sym_unit_relative_length,
    ACTIONS(151), 1,
      sym_integer,
    ACTIONS(153), 1,
      sym_float,
    ACTIONS(155), 1,
      sym_boolean,
    ACTIONS(157), 1,
      sym_string,
    STATE(7), 1,
      aux_sym_block_repeat1,
    STATE(87), 1,
      sym_binary_operation,
    STATE(90), 1,
      sym__parenthesis,
    STATE(100), 1,
      sym_name,
    STATE(101), 1,
      sym_block,
    STATE(102), 1,
      sym_if_expression,
    STATE(131), 1,
      sym_fn_signature,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(159), 9,
      sym_escape_hatch,
      sym_use_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [680] = 2,
    ACTIONS(159), 7,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(161), 12,
      anon_sym_use,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      anon_sym_if,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [704] = 2,
    ACTIONS(104), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(163), 12,
      anon_sym_use,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      anon_sym_if,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [728] = 7,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(165), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(167), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(104), 5,
      sym__parenthesis,
      sym_if_expression,
      sym_binary_operation,
      sym_name,
      sym_block,
  [758] = 7,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(169), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(171), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(69), 5,
      sym__parenthesis,
      sym_if_expression,
      sym_binary_operation,
      sym_name,
      sym_block,
  [788] = 7,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_if,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(179), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(181), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(49), 5,
      sym__parenthesis,
      sym_if_expression,
      sym_binary_operation,
      sym_name,
      sym_block,
  [818] = 7,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_if,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(187), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(50), 5,
      sym__parenthesis,
      sym_if_expression,
      sym_binary_operation,
      sym_name,
      sym_block,
  [848] = 7,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_if,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(189), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(191), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(78), 5,
      sym__parenthesis,
      sym_if_expression,
      sym_binary_operation,
      sym_name,
      sym_block,
  [878] = 7,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_if,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(193), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(195), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(53), 5,
      sym__parenthesis,
      sym_if_expression,
      sym_binary_operation,
      sym_name,
      sym_block,
  [908] = 7,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_if,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(197), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(199), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(82), 5,
      sym__parenthesis,
      sym_if_expression,
      sym_binary_operation,
      sym_name,
      sym_block,
  [938] = 7,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_if,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(201), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(203), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(107), 5,
      sym__parenthesis,
      sym_if_expression,
      sym_binary_operation,
      sym_name,
      sym_block,
  [968] = 7,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(205), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(207), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(32), 5,
      sym__parenthesis,
      sym_if_expression,
      sym_binary_operation,
      sym_name,
      sym_block,
  [998] = 7,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_if,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(209), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(211), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(106), 5,
      sym__parenthesis,
      sym_if_expression,
      sym_binary_operation,
      sym_name,
      sym_block,
  [1028] = 7,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(213), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(215), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(46), 5,
      sym__parenthesis,
      sym_if_expression,
      sym_binary_operation,
      sym_name,
      sym_block,
  [1058] = 7,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(217), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(219), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(103), 5,
      sym__parenthesis,
      sym_if_expression,
      sym_binary_operation,
      sym_name,
      sym_block,
  [1088] = 7,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_if,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(221), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(223), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(55), 5,
      sym__parenthesis,
      sym_if_expression,
      sym_binary_operation,
      sym_name,
      sym_block,
  [1118] = 7,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_if,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(225), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(227), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(51), 5,
      sym__parenthesis,
      sym_if_expression,
      sym_binary_operation,
      sym_name,
      sym_block,
  [1148] = 7,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_if,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(229), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(231), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(47), 5,
      sym__parenthesis,
      sym_if_expression,
      sym_binary_operation,
      sym_name,
      sym_block,
  [1178] = 7,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(233), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(235), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(70), 5,
      sym__parenthesis,
      sym_if_expression,
      sym_binary_operation,
      sym_name,
      sym_block,
  [1208] = 7,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(237), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(239), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(71), 5,
      sym__parenthesis,
      sym_if_expression,
      sym_binary_operation,
      sym_name,
      sym_block,
  [1238] = 7,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(241), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(243), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(67), 5,
      sym__parenthesis,
      sym_if_expression,
      sym_binary_operation,
      sym_name,
      sym_block,
  [1268] = 2,
    ACTIONS(247), 1,
      sym__vertical_space,
    ACTIONS(245), 13,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SEMI,
  [1287] = 5,
    ACTIONS(251), 1,
      anon_sym_else,
    ACTIONS(257), 1,
      sym__vertical_space,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(249), 8,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_SEMI,
  [1312] = 2,
    ACTIONS(261), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(259), 12,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1331] = 2,
    ACTIONS(261), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(259), 12,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1350] = 2,
    ACTIONS(261), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(259), 12,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1369] = 2,
    ACTIONS(261), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(259), 12,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1388] = 2,
    ACTIONS(261), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(259), 12,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1407] = 2,
    ACTIONS(261), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(259), 12,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1426] = 2,
    ACTIONS(261), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(259), 12,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1445] = 2,
    ACTIONS(261), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(259), 12,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1464] = 2,
    ACTIONS(261), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(259), 12,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1483] = 2,
    ACTIONS(261), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(259), 12,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1502] = 2,
    ACTIONS(265), 1,
      sym__vertical_space,
    ACTIONS(263), 13,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SEMI,
  [1521] = 2,
    ACTIONS(269), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(267), 12,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1540] = 2,
    ACTIONS(263), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 12,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1559] = 4,
    ACTIONS(273), 1,
      sym__vertical_space,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(271), 9,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_SEMI,
  [1582] = 5,
    ACTIONS(275), 1,
      anon_sym_else,
    ACTIONS(249), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(277), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(257), 7,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1607] = 2,
    ACTIONS(283), 1,
      sym__vertical_space,
    ACTIONS(281), 13,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SEMI,
  [1626] = 2,
    ACTIONS(287), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(285), 12,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1645] = 3,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(287), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(285), 10,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1666] = 4,
    ACTIONS(271), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(277), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(273), 8,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1689] = 2,
    ACTIONS(291), 1,
      sym__vertical_space,
    ACTIONS(289), 13,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SEMI,
  [1708] = 4,
    ACTIONS(277), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(287), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(285), 8,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1731] = 2,
    ACTIONS(261), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(259), 12,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1750] = 4,
    ACTIONS(277), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(295), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(293), 8,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1773] = 3,
    ACTIONS(299), 1,
      anon_sym_else,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(297), 11,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1794] = 2,
    ACTIONS(259), 1,
      sym__vertical_space,
    ACTIONS(261), 13,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SEMI,
  [1813] = 2,
    ACTIONS(259), 1,
      sym__vertical_space,
    ACTIONS(261), 13,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SEMI,
  [1832] = 2,
    ACTIONS(259), 1,
      sym__vertical_space,
    ACTIONS(261), 13,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SEMI,
  [1851] = 2,
    ACTIONS(259), 1,
      sym__vertical_space,
    ACTIONS(261), 13,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SEMI,
  [1870] = 2,
    ACTIONS(259), 1,
      sym__vertical_space,
    ACTIONS(261), 13,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SEMI,
  [1889] = 2,
    ACTIONS(259), 1,
      sym__vertical_space,
    ACTIONS(261), 13,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SEMI,
  [1908] = 2,
    ACTIONS(267), 1,
      sym__vertical_space,
    ACTIONS(269), 13,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SEMI,
  [1927] = 2,
    ACTIONS(259), 1,
      sym__vertical_space,
    ACTIONS(261), 13,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SEMI,
  [1946] = 2,
    ACTIONS(259), 1,
      sym__vertical_space,
    ACTIONS(261), 13,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SEMI,
  [1965] = 2,
    ACTIONS(259), 1,
      sym__vertical_space,
    ACTIONS(261), 13,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SEMI,
  [1984] = 4,
    ACTIONS(293), 1,
      sym__vertical_space,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(295), 9,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_SEMI,
  [2007] = 3,
    ACTIONS(297), 1,
      sym__vertical_space,
    ACTIONS(303), 1,
      anon_sym_else,
    ACTIONS(301), 12,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SEMI,
  [2028] = 4,
    ACTIONS(285), 1,
      sym__vertical_space,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(287), 9,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_SEMI,
  [2051] = 3,
    ACTIONS(285), 1,
      sym__vertical_space,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(287), 11,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SEMI,
  [2072] = 2,
    ACTIONS(285), 1,
      sym__vertical_space,
    ACTIONS(287), 13,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SEMI,
  [2091] = 2,
    ACTIONS(245), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(247), 12,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2110] = 2,
    ACTIONS(281), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(283), 12,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2129] = 2,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 12,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2148] = 2,
    ACTIONS(259), 1,
      sym__vertical_space,
    ACTIONS(261), 13,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SEMI,
  [2167] = 2,
    ACTIONS(259), 1,
      sym__vertical_space,
    ACTIONS(261), 13,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_SEMI,
  [2186] = 6,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__vertical_space,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2212] = 7,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(313), 1,
      anon_sym_then,
    STATE(68), 1,
      sym_block,
    ACTIONS(277), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2240] = 6,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__vertical_space,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2266] = 6,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__vertical_space,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2292] = 6,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__vertical_space,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2318] = 7,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(325), 1,
      anon_sym_then,
    STATE(56), 1,
      sym_block,
    ACTIONS(277), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2346] = 6,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__vertical_space,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2372] = 6,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__vertical_space,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2398] = 6,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__vertical_space,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2424] = 6,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__vertical_space,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2450] = 6,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__vertical_space,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2476] = 6,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__vertical_space,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2502] = 6,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__vertical_space,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2528] = 6,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__vertical_space,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2554] = 6,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__vertical_space,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2580] = 6,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__vertical_space,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2606] = 6,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__vertical_space,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2632] = 6,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__vertical_space,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2658] = 6,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__vertical_space,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2684] = 6,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__vertical_space,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2710] = 6,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__vertical_space,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2736] = 6,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__vertical_space,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2762] = 6,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__vertical_space,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2788] = 6,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__vertical_space,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2814] = 6,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__vertical_space,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2840] = 6,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__vertical_space,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2866] = 5,
    ACTIONS(367), 1,
      anon_sym_SEMI,
    ACTIONS(369), 1,
      sym__vertical_space,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2889] = 5,
    ACTIONS(371), 1,
      anon_sym_SEMI,
    ACTIONS(373), 1,
      sym__vertical_space,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2912] = 5,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym__vertical_space,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(307), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2935] = 5,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    ACTIONS(277), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2957] = 5,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    ACTIONS(277), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2979] = 3,
    ACTIONS(381), 1,
      anon_sym_LT,
    STATE(112), 1,
      sym_type_parameters,
    ACTIONS(379), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_fn,
      anon_sym_where,
      anon_sym_GT,
  [2994] = 1,
    ACTIONS(383), 8,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_fn,
      anon_sym_where,
      anon_sym_GT,
  [3005] = 4,
    ACTIONS(379), 1,
      sym__vertical_space,
    ACTIONS(387), 1,
      anon_sym_LT,
    STATE(113), 1,
      sym_type_parameters,
    ACTIONS(385), 4,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_where,
      anon_sym_SEMI,
  [3021] = 6,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_LT,
    ACTIONS(395), 1,
      anon_sym_SEMI,
    ACTIONS(397), 1,
      sym__vertical_space,
    STATE(269), 1,
      sym_type_parameters,
  [3040] = 1,
    ACTIONS(399), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_fn,
      anon_sym_where,
      anon_sym_GT,
  [3049] = 2,
    ACTIONS(399), 1,
      sym__vertical_space,
    ACTIONS(401), 4,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_where,
      anon_sym_SEMI,
  [3059] = 4,
    ACTIONS(405), 1,
      anon_sym_DASH_GT,
    ACTIONS(407), 1,
      anon_sym_where,
    ACTIONS(409), 1,
      sym__vertical_space,
    ACTIONS(403), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [3073] = 4,
    ACTIONS(413), 1,
      anon_sym_DASH_GT,
    ACTIONS(415), 1,
      anon_sym_where,
    ACTIONS(417), 1,
      sym__vertical_space,
    ACTIONS(411), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [3087] = 4,
    ACTIONS(421), 1,
      anon_sym_DASH_GT,
    ACTIONS(423), 1,
      anon_sym_where,
    ACTIONS(425), 1,
      sym__vertical_space,
    ACTIONS(419), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [3101] = 4,
    ACTIONS(429), 1,
      anon_sym_DASH_GT,
    ACTIONS(431), 1,
      anon_sym_where,
    ACTIONS(433), 1,
      sym__vertical_space,
    ACTIONS(427), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [3115] = 4,
    ACTIONS(437), 1,
      anon_sym_DASH_GT,
    ACTIONS(439), 1,
      anon_sym_where,
    ACTIONS(441), 1,
      sym__vertical_space,
    ACTIONS(435), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [3129] = 2,
    ACTIONS(383), 1,
      sym__vertical_space,
    ACTIONS(443), 4,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_where,
      anon_sym_SEMI,
  [3139] = 3,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
    ACTIONS(447), 1,
      anon_sym_fn,
    STATE(126), 2,
      sym_fn_signature,
      aux_sym_decl_effect_repeat1,
  [3150] = 4,
    ACTIONS(449), 1,
      anon_sym_mut,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    ACTIONS(453), 1,
      sym_identifier,
    STATE(190), 1,
      sym_fn_param,
  [3163] = 3,
    ACTIONS(457), 1,
      anon_sym_where,
    ACTIONS(459), 1,
      sym__vertical_space,
    ACTIONS(455), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [3174] = 3,
    ACTIONS(463), 1,
      anon_sym_where,
    ACTIONS(465), 1,
      sym__vertical_space,
    ACTIONS(461), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [3185] = 3,
    ACTIONS(469), 1,
      anon_sym_where,
    ACTIONS(471), 1,
      sym__vertical_space,
    ACTIONS(467), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [3196] = 3,
    ACTIONS(473), 1,
      anon_sym_DASH_GT,
    ACTIONS(475), 1,
      anon_sym_where,
    ACTIONS(441), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [3207] = 3,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
    ACTIONS(479), 1,
      anon_sym_fn,
    STATE(126), 2,
      sym_fn_signature,
      aux_sym_decl_effect_repeat1,
  [3218] = 4,
    ACTIONS(449), 1,
      anon_sym_mut,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      sym_fn_param,
  [3231] = 3,
    ACTIONS(484), 1,
      anon_sym_DASH_GT,
    ACTIONS(486), 1,
      anon_sym_where,
    ACTIONS(409), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [3242] = 3,
    ACTIONS(490), 1,
      anon_sym_where,
    ACTIONS(492), 1,
      sym__vertical_space,
    ACTIONS(488), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [3253] = 4,
    ACTIONS(449), 1,
      anon_sym_mut,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      sym_fn_param,
  [3266] = 4,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    ACTIONS(498), 1,
      anon_sym_SEMI,
    ACTIONS(500), 1,
      sym__vertical_space,
    STATE(246), 1,
      sym_block,
  [3279] = 4,
    ACTIONS(449), 1,
      anon_sym_mut,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      sym_fn_param,
  [3292] = 3,
    ACTIONS(504), 1,
      anon_sym_DASH_GT,
    ACTIONS(506), 1,
      anon_sym_where,
    ACTIONS(417), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [3303] = 3,
    ACTIONS(447), 1,
      anon_sym_fn,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
    STATE(142), 2,
      sym_fn_signature,
      aux_sym_decl_effect_repeat1,
  [3314] = 4,
    ACTIONS(449), 1,
      anon_sym_mut,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      sym_fn_param,
  [3327] = 3,
    ACTIONS(512), 1,
      anon_sym_DASH_GT,
    ACTIONS(514), 1,
      anon_sym_where,
    ACTIONS(425), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [3338] = 3,
    ACTIONS(516), 1,
      anon_sym_DASH_GT,
    ACTIONS(518), 1,
      anon_sym_where,
    ACTIONS(433), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [3349] = 4,
    ACTIONS(449), 1,
      anon_sym_mut,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      sym_fn_param,
  [3362] = 3,
    ACTIONS(524), 1,
      anon_sym_where,
    ACTIONS(526), 1,
      sym__vertical_space,
    ACTIONS(522), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [3373] = 3,
    ACTIONS(447), 1,
      anon_sym_fn,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
    STATE(120), 2,
      sym_fn_signature,
      aux_sym_decl_effect_repeat1,
  [3384] = 4,
    ACTIONS(530), 1,
      anon_sym_COLON,
    ACTIONS(532), 1,
      anon_sym_EQ,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(536), 1,
      sym__vertical_space,
  [3397] = 3,
    ACTIONS(447), 1,
      anon_sym_fn,
    ACTIONS(538), 1,
      anon_sym_RBRACE,
    STATE(126), 2,
      sym_fn_signature,
      aux_sym_decl_effect_repeat1,
  [3408] = 3,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
    ACTIONS(542), 1,
      sym_identifier,
    STATE(198), 1,
      sym_use_part,
  [3418] = 3,
    ACTIONS(542), 1,
      sym_identifier,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
    STATE(198), 1,
      sym_use_part,
  [3428] = 2,
    ACTIONS(546), 1,
      anon_sym_where,
    ACTIONS(492), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [3436] = 3,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    ACTIONS(550), 1,
      sym_identifier,
    STATE(225), 1,
      sym_type,
  [3446] = 2,
    ACTIONS(552), 1,
      anon_sym_where,
    ACTIONS(471), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [3454] = 3,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      aux_sym_decl_tuple_type_repeat1,
  [3464] = 2,
    ACTIONS(559), 1,
      anon_sym_where,
    ACTIONS(465), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [3472] = 3,
    ACTIONS(561), 1,
      anon_sym_RBRACE,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(228), 1,
      sym_struct_field,
  [3482] = 3,
    ACTIONS(381), 1,
      anon_sym_LT,
    ACTIONS(565), 1,
      anon_sym_LBRACE,
    STATE(271), 1,
      sym_type_parameters,
  [3492] = 3,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
    STATE(168), 1,
      aux_sym_decl_struct_type_repeat1,
  [3502] = 3,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    STATE(225), 1,
      sym_type,
  [3512] = 2,
    ACTIONS(573), 1,
      anon_sym_where,
    ACTIONS(459), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [3520] = 3,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      aux_sym_decl_tuple_type_repeat1,
  [3530] = 3,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      aux_sym_decl_tuple_type_repeat1,
  [3540] = 2,
    ACTIONS(583), 1,
      anon_sym_as,
    ACTIONS(585), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3548] = 3,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(587), 1,
      anon_sym_RBRACE,
    STATE(228), 1,
      sym_struct_field,
  [3558] = 3,
    ACTIONS(589), 1,
      anon_sym_SEMI,
    ACTIONS(591), 1,
      sym__vertical_space,
    STATE(11), 1,
      sym__separator,
  [3568] = 3,
    ACTIONS(593), 1,
      sym_identifier,
    STATE(223), 1,
      sym_name,
    STATE(282), 1,
      sym_type_constraint,
  [3578] = 3,
    ACTIONS(595), 1,
      anon_sym_COMMA,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      aux_sym_decl_struct_type_repeat1,
  [3588] = 3,
    ACTIONS(599), 1,
      anon_sym_EQ,
    ACTIONS(601), 1,
      anon_sym_SEMI,
    ACTIONS(603), 1,
      sym__vertical_space,
  [3598] = 2,
    ACTIONS(425), 1,
      sym__vertical_space,
    ACTIONS(419), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [3606] = 3,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    ACTIONS(607), 1,
      anon_sym_RBRACE,
    STATE(169), 1,
      aux_sym_use_part_list_repeat1,
  [3616] = 3,
    ACTIONS(593), 1,
      sym_identifier,
    STATE(264), 1,
      sym_name,
    STATE(273), 1,
      sym_type_constraint,
  [3626] = 3,
    ACTIONS(609), 1,
      anon_sym_COMMA,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      aux_sym_fn_signature_repeat1,
  [3636] = 3,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    ACTIONS(616), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      aux_sym_fn_signature_repeat1,
  [3646] = 3,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    ACTIONS(621), 1,
      anon_sym_RBRACE,
    STATE(168), 1,
      aux_sym_decl_struct_type_repeat1,
  [3656] = 3,
    ACTIONS(623), 1,
      anon_sym_COMMA,
    ACTIONS(626), 1,
      anon_sym_RBRACE,
    STATE(169), 1,
      aux_sym_use_part_list_repeat1,
  [3666] = 3,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
    STATE(228), 1,
      sym_struct_field,
  [3676] = 3,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
    STATE(225), 1,
      sym_type,
  [3686] = 2,
    ACTIONS(634), 1,
      sym__vertical_space,
    ACTIONS(632), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [3694] = 2,
    ACTIONS(638), 1,
      sym__vertical_space,
    ACTIONS(636), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [3702] = 3,
    ACTIONS(640), 1,
      anon_sym_COMMA,
    ACTIONS(642), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      aux_sym_fn_signature_repeat1,
  [3712] = 2,
    ACTIONS(646), 1,
      sym__vertical_space,
    ACTIONS(644), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [3720] = 2,
    ACTIONS(409), 1,
      sym__vertical_space,
    ACTIONS(403), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [3728] = 3,
    ACTIONS(449), 1,
      anon_sym_mut,
    ACTIONS(453), 1,
      sym_identifier,
    STATE(216), 1,
      sym_fn_param,
  [3738] = 3,
    ACTIONS(648), 1,
      anon_sym_COMMA,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      aux_sym_decl_tuple_type_repeat1,
  [3748] = 2,
    ACTIONS(654), 1,
      sym__vertical_space,
    ACTIONS(652), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [3756] = 2,
    ACTIONS(658), 1,
      sym__vertical_space,
    ACTIONS(656), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [3764] = 3,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    ACTIONS(662), 1,
      anon_sym_RBRACE,
    STATE(152), 1,
      aux_sym_decl_struct_type_repeat1,
  [3774] = 2,
    ACTIONS(666), 1,
      sym__vertical_space,
    ACTIONS(664), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [3782] = 3,
    ACTIONS(668), 1,
      anon_sym_COMMA,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      aux_sym_decl_tuple_type_repeat1,
  [3792] = 2,
    ACTIONS(674), 1,
      sym__vertical_space,
    ACTIONS(672), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [3800] = 2,
    ACTIONS(678), 1,
      sym__vertical_space,
    ACTIONS(676), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [3808] = 3,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    STATE(225), 1,
      sym_type,
  [3818] = 3,
    ACTIONS(682), 1,
      anon_sym_SEMI,
    ACTIONS(684), 1,
      sym__vertical_space,
    STATE(12), 1,
      sym__separator,
  [3828] = 3,
    ACTIONS(686), 1,
      anon_sym_COMMA,
    ACTIONS(688), 1,
      anon_sym_RBRACE,
    STATE(168), 1,
      aux_sym_decl_struct_type_repeat1,
  [3838] = 2,
    ACTIONS(690), 1,
      anon_sym_where,
    ACTIONS(526), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [3846] = 3,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      aux_sym_fn_signature_repeat1,
  [3856] = 3,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(696), 1,
      anon_sym_RBRACE,
    STATE(228), 1,
      sym_struct_field,
  [3866] = 3,
    ACTIONS(698), 1,
      anon_sym_COMMA,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      aux_sym_fn_signature_repeat1,
  [3876] = 3,
    ACTIONS(702), 1,
      anon_sym_COMMA,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
    STATE(164), 1,
      aux_sym_use_part_list_repeat1,
  [3886] = 2,
    ACTIONS(542), 1,
      sym_identifier,
    STATE(193), 1,
      sym_use_part,
  [3893] = 2,
    ACTIONS(550), 1,
      sym_identifier,
    STATE(145), 1,
      sym_type,
  [3900] = 2,
    ACTIONS(706), 1,
      anon_sym_SEMI,
    ACTIONS(708), 1,
      sym__vertical_space,
  [3907] = 2,
    ACTIONS(710), 1,
      anon_sym_SEMI,
    ACTIONS(712), 1,
      sym__vertical_space,
  [3914] = 1,
    ACTIONS(714), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3919] = 2,
    ACTIONS(716), 1,
      sym_identifier,
    STATE(122), 1,
      sym_type,
  [3926] = 2,
    ACTIONS(718), 1,
      anon_sym_SEMI,
    ACTIONS(720), 1,
      sym__vertical_space,
  [3933] = 2,
    ACTIONS(722), 1,
      anon_sym_SEMI,
    ACTIONS(724), 1,
      sym__vertical_space,
  [3940] = 1,
    ACTIONS(726), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3945] = 2,
    ACTIONS(728), 1,
      anon_sym_SEMI,
    ACTIONS(730), 1,
      sym__vertical_space,
  [3952] = 1,
    ACTIONS(732), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3957] = 2,
    ACTIONS(734), 1,
      anon_sym_SEMI,
    ACTIONS(736), 1,
      sym__vertical_space,
  [3964] = 2,
    ACTIONS(716), 1,
      sym_identifier,
    STATE(124), 1,
      sym_type,
  [3971] = 2,
    ACTIONS(738), 1,
      anon_sym_SEMI,
    ACTIONS(740), 1,
      sym__vertical_space,
  [3978] = 2,
    ACTIONS(742), 1,
      anon_sym_SEMI,
    ACTIONS(744), 1,
      sym__vertical_space,
  [3985] = 2,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(228), 1,
      sym_struct_field,
  [3992] = 2,
    ACTIONS(716), 1,
      sym_identifier,
    STATE(123), 1,
      sym_type,
  [3999] = 2,
    ACTIONS(746), 1,
      anon_sym_SEMI,
    ACTIONS(748), 1,
      sym__vertical_space,
  [4006] = 2,
    ACTIONS(550), 1,
      sym_identifier,
    STATE(225), 1,
      sym_type,
  [4013] = 2,
    ACTIONS(750), 1,
      anon_sym_SEMI,
    ACTIONS(752), 1,
      sym__vertical_space,
  [4020] = 2,
    ACTIONS(542), 1,
      sym_identifier,
    STATE(198), 1,
      sym_use_part,
  [4027] = 2,
    ACTIONS(716), 1,
      sym_identifier,
    STATE(129), 1,
      sym_type,
  [4034] = 1,
    ACTIONS(754), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4039] = 1,
    ACTIONS(756), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4044] = 2,
    ACTIONS(550), 1,
      sym_identifier,
    STATE(204), 1,
      sym_type,
  [4051] = 2,
    ACTIONS(758), 1,
      anon_sym_SEMI,
    ACTIONS(760), 1,
      sym__vertical_space,
  [4058] = 2,
    ACTIONS(762), 1,
      anon_sym_fn,
    STATE(235), 1,
      sym_fn_signature,
  [4065] = 2,
    ACTIONS(764), 1,
      anon_sym_SEMI,
    ACTIONS(766), 1,
      sym__vertical_space,
  [4072] = 2,
    ACTIONS(768), 1,
      anon_sym_SEMI,
    ACTIONS(770), 1,
      sym__vertical_space,
  [4079] = 2,
    ACTIONS(772), 1,
      anon_sym_COLON,
    ACTIONS(774), 1,
      anon_sym_GT,
  [4086] = 2,
    ACTIONS(776), 1,
      anon_sym_SEMI,
    ACTIONS(778), 1,
      sym__vertical_space,
  [4093] = 1,
    ACTIONS(780), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4098] = 2,
    ACTIONS(782), 1,
      anon_sym_SEMI,
    ACTIONS(784), 1,
      sym__vertical_space,
  [4105] = 2,
    ACTIONS(786), 1,
      anon_sym_SEMI,
    ACTIONS(788), 1,
      sym__vertical_space,
  [4112] = 1,
    ACTIONS(790), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4117] = 2,
    ACTIONS(792), 1,
      anon_sym_SEMI,
    ACTIONS(794), 1,
      sym__vertical_space,
  [4124] = 1,
    ACTIONS(796), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4129] = 2,
    ACTIONS(798), 1,
      anon_sym_SEMI,
    ACTIONS(800), 1,
      sym__vertical_space,
  [4136] = 2,
    ACTIONS(802), 1,
      anon_sym_as,
    ACTIONS(804), 1,
      anon_sym_COLON,
  [4143] = 2,
    ACTIONS(550), 1,
      sym_identifier,
    STATE(217), 1,
      sym_type,
  [4150] = 2,
    ACTIONS(716), 1,
      sym_identifier,
    STATE(139), 1,
      sym_type,
  [4157] = 2,
    ACTIONS(806), 1,
      anon_sym_SEMI,
    ACTIONS(808), 1,
      sym__vertical_space,
  [4164] = 2,
    ACTIONS(550), 1,
      sym_identifier,
    STATE(189), 1,
      sym_type,
  [4171] = 1,
    ACTIONS(646), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [4176] = 2,
    ACTIONS(810), 1,
      anon_sym_SEMI,
    ACTIONS(812), 1,
      sym__vertical_space,
  [4183] = 2,
    ACTIONS(814), 1,
      anon_sym_SEMI,
    ACTIONS(816), 1,
      sym__vertical_space,
  [4190] = 2,
    ACTIONS(550), 1,
      sym_identifier,
    STATE(281), 1,
      sym_type,
  [4197] = 2,
    ACTIONS(818), 1,
      anon_sym_SEMI,
    ACTIONS(820), 1,
      sym__vertical_space,
  [4204] = 2,
    ACTIONS(822), 1,
      anon_sym_SEMI,
    ACTIONS(824), 1,
      sym__vertical_space,
  [4211] = 2,
    ACTIONS(826), 1,
      anon_sym_SEMI,
    ACTIONS(828), 1,
      sym__vertical_space,
  [4218] = 1,
    ACTIONS(425), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [4223] = 2,
    ACTIONS(550), 1,
      sym_identifier,
    STATE(230), 1,
      sym_type,
  [4230] = 2,
    ACTIONS(830), 1,
      anon_sym_SEMI,
    ACTIONS(832), 1,
      sym__vertical_space,
  [4237] = 1,
    ACTIONS(634), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [4242] = 2,
    ACTIONS(550), 1,
      sym_identifier,
    STATE(147), 1,
      sym_type,
  [4249] = 1,
    ACTIONS(638), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [4254] = 2,
    ACTIONS(834), 1,
      anon_sym_SEMI,
    ACTIONS(836), 1,
      sym__vertical_space,
  [4261] = 2,
    ACTIONS(838), 1,
      anon_sym_SEMI,
    ACTIONS(840), 1,
      sym__vertical_space,
  [4268] = 2,
    ACTIONS(550), 1,
      sym_identifier,
    STATE(149), 1,
      sym_type,
  [4275] = 1,
    ACTIONS(409), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [4280] = 2,
    ACTIONS(550), 1,
      sym_identifier,
    STATE(178), 1,
      sym_type,
  [4287] = 1,
    ACTIONS(654), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [4292] = 2,
    ACTIONS(550), 1,
      sym_identifier,
    STATE(154), 1,
      sym_type,
  [4299] = 1,
    ACTIONS(658), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [4304] = 2,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(181), 1,
      sym_struct_field,
  [4311] = 1,
    ACTIONS(666), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [4316] = 2,
    ACTIONS(842), 1,
      anon_sym_LBRACE,
    STATE(266), 1,
      sym_use_part_list,
  [4323] = 1,
    ACTIONS(674), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [4328] = 1,
    ACTIONS(678), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [4333] = 1,
    ACTIONS(283), 2,
      anon_sym_COLON,
      anon_sym_GT,
  [4338] = 2,
    ACTIONS(772), 1,
      anon_sym_COLON,
    ACTIONS(844), 1,
      anon_sym_GT,
  [4345] = 2,
    ACTIONS(716), 1,
      sym_identifier,
    STATE(162), 1,
      sym_type,
  [4352] = 2,
    ACTIONS(846), 1,
      anon_sym_SEMI,
    ACTIONS(848), 1,
      sym__vertical_space,
  [4359] = 2,
    ACTIONS(850), 1,
      anon_sym_SEMI,
    ACTIONS(852), 1,
      sym__vertical_space,
  [4366] = 2,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(161), 1,
      sym_struct_field,
  [4373] = 2,
    ACTIONS(854), 1,
      anon_sym_LBRACE,
    ACTIONS(856), 1,
      anon_sym_LPAREN,
  [4380] = 2,
    ACTIONS(550), 1,
      sym_identifier,
    STATE(156), 1,
      sym_type,
  [4387] = 1,
    ACTIONS(858), 1,
      anon_sym_LBRACE,
  [4391] = 1,
    ACTIONS(860), 1,
      anon_sym_COLON,
  [4395] = 1,
    ACTIONS(844), 1,
      anon_sym_GT,
  [4399] = 1,
    ACTIONS(862), 1,
      sym_identifier,
  [4403] = 1,
    ACTIONS(864), 1,
      sym_identifier,
  [4407] = 1,
    ACTIONS(866), 1,
      anon_sym_COLON,
  [4411] = 1,
    ACTIONS(868), 1,
      anon_sym_LPAREN,
  [4415] = 1,
    ACTIONS(870), 1,
      anon_sym_COLON,
  [4419] = 1,
    ACTIONS(872), 1,
      sym_escape_hatch_source,
  [4423] = 1,
    ACTIONS(874), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [4427] = 1,
    ACTIONS(876), 1,
      anon_sym_GT,
  [4431] = 1,
    ACTIONS(774), 1,
      anon_sym_GT,
  [4435] = 1,
    ACTIONS(878), 1,
      ts_builtin_sym_end,
  [4439] = 1,
    ACTIONS(880), 1,
      sym_identifier,
  [4443] = 1,
    ACTIONS(882), 1,
      sym_identifier,
  [4447] = 1,
    ACTIONS(884), 1,
      sym_identifier,
  [4451] = 1,
    ACTIONS(886), 1,
      sym_identifier,
  [4455] = 1,
    ACTIONS(888), 1,
      sym_identifier,
  [4459] = 1,
    ACTIONS(890), 1,
      anon_sym_LPAREN,
  [4463] = 1,
    ACTIONS(892), 1,
      sym_string,
  [4467] = 1,
    ACTIONS(894), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 144,
  [SMALL_STATE(5)] = 216,
  [SMALL_STATE(6)] = 288,
  [SMALL_STATE(7)] = 376,
  [SMALL_STATE(8)] = 448,
  [SMALL_STATE(9)] = 520,
  [SMALL_STATE(10)] = 592,
  [SMALL_STATE(11)] = 680,
  [SMALL_STATE(12)] = 704,
  [SMALL_STATE(13)] = 728,
  [SMALL_STATE(14)] = 758,
  [SMALL_STATE(15)] = 788,
  [SMALL_STATE(16)] = 818,
  [SMALL_STATE(17)] = 848,
  [SMALL_STATE(18)] = 878,
  [SMALL_STATE(19)] = 908,
  [SMALL_STATE(20)] = 938,
  [SMALL_STATE(21)] = 968,
  [SMALL_STATE(22)] = 998,
  [SMALL_STATE(23)] = 1028,
  [SMALL_STATE(24)] = 1058,
  [SMALL_STATE(25)] = 1088,
  [SMALL_STATE(26)] = 1118,
  [SMALL_STATE(27)] = 1148,
  [SMALL_STATE(28)] = 1178,
  [SMALL_STATE(29)] = 1208,
  [SMALL_STATE(30)] = 1238,
  [SMALL_STATE(31)] = 1268,
  [SMALL_STATE(32)] = 1287,
  [SMALL_STATE(33)] = 1312,
  [SMALL_STATE(34)] = 1331,
  [SMALL_STATE(35)] = 1350,
  [SMALL_STATE(36)] = 1369,
  [SMALL_STATE(37)] = 1388,
  [SMALL_STATE(38)] = 1407,
  [SMALL_STATE(39)] = 1426,
  [SMALL_STATE(40)] = 1445,
  [SMALL_STATE(41)] = 1464,
  [SMALL_STATE(42)] = 1483,
  [SMALL_STATE(43)] = 1502,
  [SMALL_STATE(44)] = 1521,
  [SMALL_STATE(45)] = 1540,
  [SMALL_STATE(46)] = 1559,
  [SMALL_STATE(47)] = 1582,
  [SMALL_STATE(48)] = 1607,
  [SMALL_STATE(49)] = 1626,
  [SMALL_STATE(50)] = 1645,
  [SMALL_STATE(51)] = 1666,
  [SMALL_STATE(52)] = 1689,
  [SMALL_STATE(53)] = 1708,
  [SMALL_STATE(54)] = 1731,
  [SMALL_STATE(55)] = 1750,
  [SMALL_STATE(56)] = 1773,
  [SMALL_STATE(57)] = 1794,
  [SMALL_STATE(58)] = 1813,
  [SMALL_STATE(59)] = 1832,
  [SMALL_STATE(60)] = 1851,
  [SMALL_STATE(61)] = 1870,
  [SMALL_STATE(62)] = 1889,
  [SMALL_STATE(63)] = 1908,
  [SMALL_STATE(64)] = 1927,
  [SMALL_STATE(65)] = 1946,
  [SMALL_STATE(66)] = 1965,
  [SMALL_STATE(67)] = 1984,
  [SMALL_STATE(68)] = 2007,
  [SMALL_STATE(69)] = 2028,
  [SMALL_STATE(70)] = 2051,
  [SMALL_STATE(71)] = 2072,
  [SMALL_STATE(72)] = 2091,
  [SMALL_STATE(73)] = 2110,
  [SMALL_STATE(74)] = 2129,
  [SMALL_STATE(75)] = 2148,
  [SMALL_STATE(76)] = 2167,
  [SMALL_STATE(77)] = 2186,
  [SMALL_STATE(78)] = 2212,
  [SMALL_STATE(79)] = 2240,
  [SMALL_STATE(80)] = 2266,
  [SMALL_STATE(81)] = 2292,
  [SMALL_STATE(82)] = 2318,
  [SMALL_STATE(83)] = 2346,
  [SMALL_STATE(84)] = 2372,
  [SMALL_STATE(85)] = 2398,
  [SMALL_STATE(86)] = 2424,
  [SMALL_STATE(87)] = 2450,
  [SMALL_STATE(88)] = 2476,
  [SMALL_STATE(89)] = 2502,
  [SMALL_STATE(90)] = 2528,
  [SMALL_STATE(91)] = 2554,
  [SMALL_STATE(92)] = 2580,
  [SMALL_STATE(93)] = 2606,
  [SMALL_STATE(94)] = 2632,
  [SMALL_STATE(95)] = 2658,
  [SMALL_STATE(96)] = 2684,
  [SMALL_STATE(97)] = 2710,
  [SMALL_STATE(98)] = 2736,
  [SMALL_STATE(99)] = 2762,
  [SMALL_STATE(100)] = 2788,
  [SMALL_STATE(101)] = 2814,
  [SMALL_STATE(102)] = 2840,
  [SMALL_STATE(103)] = 2866,
  [SMALL_STATE(104)] = 2889,
  [SMALL_STATE(105)] = 2912,
  [SMALL_STATE(106)] = 2935,
  [SMALL_STATE(107)] = 2957,
  [SMALL_STATE(108)] = 2979,
  [SMALL_STATE(109)] = 2994,
  [SMALL_STATE(110)] = 3005,
  [SMALL_STATE(111)] = 3021,
  [SMALL_STATE(112)] = 3040,
  [SMALL_STATE(113)] = 3049,
  [SMALL_STATE(114)] = 3059,
  [SMALL_STATE(115)] = 3073,
  [SMALL_STATE(116)] = 3087,
  [SMALL_STATE(117)] = 3101,
  [SMALL_STATE(118)] = 3115,
  [SMALL_STATE(119)] = 3129,
  [SMALL_STATE(120)] = 3139,
  [SMALL_STATE(121)] = 3150,
  [SMALL_STATE(122)] = 3163,
  [SMALL_STATE(123)] = 3174,
  [SMALL_STATE(124)] = 3185,
  [SMALL_STATE(125)] = 3196,
  [SMALL_STATE(126)] = 3207,
  [SMALL_STATE(127)] = 3218,
  [SMALL_STATE(128)] = 3231,
  [SMALL_STATE(129)] = 3242,
  [SMALL_STATE(130)] = 3253,
  [SMALL_STATE(131)] = 3266,
  [SMALL_STATE(132)] = 3279,
  [SMALL_STATE(133)] = 3292,
  [SMALL_STATE(134)] = 3303,
  [SMALL_STATE(135)] = 3314,
  [SMALL_STATE(136)] = 3327,
  [SMALL_STATE(137)] = 3338,
  [SMALL_STATE(138)] = 3349,
  [SMALL_STATE(139)] = 3362,
  [SMALL_STATE(140)] = 3373,
  [SMALL_STATE(141)] = 3384,
  [SMALL_STATE(142)] = 3397,
  [SMALL_STATE(143)] = 3408,
  [SMALL_STATE(144)] = 3418,
  [SMALL_STATE(145)] = 3428,
  [SMALL_STATE(146)] = 3436,
  [SMALL_STATE(147)] = 3446,
  [SMALL_STATE(148)] = 3454,
  [SMALL_STATE(149)] = 3464,
  [SMALL_STATE(150)] = 3472,
  [SMALL_STATE(151)] = 3482,
  [SMALL_STATE(152)] = 3492,
  [SMALL_STATE(153)] = 3502,
  [SMALL_STATE(154)] = 3512,
  [SMALL_STATE(155)] = 3520,
  [SMALL_STATE(156)] = 3530,
  [SMALL_STATE(157)] = 3540,
  [SMALL_STATE(158)] = 3548,
  [SMALL_STATE(159)] = 3558,
  [SMALL_STATE(160)] = 3568,
  [SMALL_STATE(161)] = 3578,
  [SMALL_STATE(162)] = 3588,
  [SMALL_STATE(163)] = 3598,
  [SMALL_STATE(164)] = 3606,
  [SMALL_STATE(165)] = 3616,
  [SMALL_STATE(166)] = 3626,
  [SMALL_STATE(167)] = 3636,
  [SMALL_STATE(168)] = 3646,
  [SMALL_STATE(169)] = 3656,
  [SMALL_STATE(170)] = 3666,
  [SMALL_STATE(171)] = 3676,
  [SMALL_STATE(172)] = 3686,
  [SMALL_STATE(173)] = 3694,
  [SMALL_STATE(174)] = 3702,
  [SMALL_STATE(175)] = 3712,
  [SMALL_STATE(176)] = 3720,
  [SMALL_STATE(177)] = 3728,
  [SMALL_STATE(178)] = 3738,
  [SMALL_STATE(179)] = 3748,
  [SMALL_STATE(180)] = 3756,
  [SMALL_STATE(181)] = 3764,
  [SMALL_STATE(182)] = 3774,
  [SMALL_STATE(183)] = 3782,
  [SMALL_STATE(184)] = 3792,
  [SMALL_STATE(185)] = 3800,
  [SMALL_STATE(186)] = 3808,
  [SMALL_STATE(187)] = 3818,
  [SMALL_STATE(188)] = 3828,
  [SMALL_STATE(189)] = 3838,
  [SMALL_STATE(190)] = 3846,
  [SMALL_STATE(191)] = 3856,
  [SMALL_STATE(192)] = 3866,
  [SMALL_STATE(193)] = 3876,
  [SMALL_STATE(194)] = 3886,
  [SMALL_STATE(195)] = 3893,
  [SMALL_STATE(196)] = 3900,
  [SMALL_STATE(197)] = 3907,
  [SMALL_STATE(198)] = 3914,
  [SMALL_STATE(199)] = 3919,
  [SMALL_STATE(200)] = 3926,
  [SMALL_STATE(201)] = 3933,
  [SMALL_STATE(202)] = 3940,
  [SMALL_STATE(203)] = 3945,
  [SMALL_STATE(204)] = 3952,
  [SMALL_STATE(205)] = 3957,
  [SMALL_STATE(206)] = 3964,
  [SMALL_STATE(207)] = 3971,
  [SMALL_STATE(208)] = 3978,
  [SMALL_STATE(209)] = 3985,
  [SMALL_STATE(210)] = 3992,
  [SMALL_STATE(211)] = 3999,
  [SMALL_STATE(212)] = 4006,
  [SMALL_STATE(213)] = 4013,
  [SMALL_STATE(214)] = 4020,
  [SMALL_STATE(215)] = 4027,
  [SMALL_STATE(216)] = 4034,
  [SMALL_STATE(217)] = 4039,
  [SMALL_STATE(218)] = 4044,
  [SMALL_STATE(219)] = 4051,
  [SMALL_STATE(220)] = 4058,
  [SMALL_STATE(221)] = 4065,
  [SMALL_STATE(222)] = 4072,
  [SMALL_STATE(223)] = 4079,
  [SMALL_STATE(224)] = 4086,
  [SMALL_STATE(225)] = 4093,
  [SMALL_STATE(226)] = 4098,
  [SMALL_STATE(227)] = 4105,
  [SMALL_STATE(228)] = 4112,
  [SMALL_STATE(229)] = 4117,
  [SMALL_STATE(230)] = 4124,
  [SMALL_STATE(231)] = 4129,
  [SMALL_STATE(232)] = 4136,
  [SMALL_STATE(233)] = 4143,
  [SMALL_STATE(234)] = 4150,
  [SMALL_STATE(235)] = 4157,
  [SMALL_STATE(236)] = 4164,
  [SMALL_STATE(237)] = 4171,
  [SMALL_STATE(238)] = 4176,
  [SMALL_STATE(239)] = 4183,
  [SMALL_STATE(240)] = 4190,
  [SMALL_STATE(241)] = 4197,
  [SMALL_STATE(242)] = 4204,
  [SMALL_STATE(243)] = 4211,
  [SMALL_STATE(244)] = 4218,
  [SMALL_STATE(245)] = 4223,
  [SMALL_STATE(246)] = 4230,
  [SMALL_STATE(247)] = 4237,
  [SMALL_STATE(248)] = 4242,
  [SMALL_STATE(249)] = 4249,
  [SMALL_STATE(250)] = 4254,
  [SMALL_STATE(251)] = 4261,
  [SMALL_STATE(252)] = 4268,
  [SMALL_STATE(253)] = 4275,
  [SMALL_STATE(254)] = 4280,
  [SMALL_STATE(255)] = 4287,
  [SMALL_STATE(256)] = 4292,
  [SMALL_STATE(257)] = 4299,
  [SMALL_STATE(258)] = 4304,
  [SMALL_STATE(259)] = 4311,
  [SMALL_STATE(260)] = 4316,
  [SMALL_STATE(261)] = 4323,
  [SMALL_STATE(262)] = 4328,
  [SMALL_STATE(263)] = 4333,
  [SMALL_STATE(264)] = 4338,
  [SMALL_STATE(265)] = 4345,
  [SMALL_STATE(266)] = 4352,
  [SMALL_STATE(267)] = 4359,
  [SMALL_STATE(268)] = 4366,
  [SMALL_STATE(269)] = 4373,
  [SMALL_STATE(270)] = 4380,
  [SMALL_STATE(271)] = 4387,
  [SMALL_STATE(272)] = 4391,
  [SMALL_STATE(273)] = 4395,
  [SMALL_STATE(274)] = 4399,
  [SMALL_STATE(275)] = 4403,
  [SMALL_STATE(276)] = 4407,
  [SMALL_STATE(277)] = 4411,
  [SMALL_STATE(278)] = 4415,
  [SMALL_STATE(279)] = 4419,
  [SMALL_STATE(280)] = 4423,
  [SMALL_STATE(281)] = 4427,
  [SMALL_STATE(282)] = 4431,
  [SMALL_STATE(283)] = 4435,
  [SMALL_STATE(284)] = 4439,
  [SMALL_STATE(285)] = 4443,
  [SMALL_STATE(286)] = 4447,
  [SMALL_STATE(287)] = 4451,
  [SMALL_STATE(288)] = 4455,
  [SMALL_STATE(289)] = 4459,
  [SMALL_STATE(290)] = 4463,
  [SMALL_STATE(291)] = 4467,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 10), SHIFT_REPEAT(279),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 10), SHIFT_REPEAT(290),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 10), SHIFT_REPEAT(5),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 10),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 10), SHIFT_REPEAT(288),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 10), SHIFT_REPEAT(287),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 10), SHIFT_REPEAT(22),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 10), SHIFT_REPEAT(286),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 10), SHIFT_REPEAT(220),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 10), SHIFT_REPEAT(284),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 10), SHIFT_REPEAT(17),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 10), SHIFT_REPEAT(105),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 10), SHIFT_REPEAT(105),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 10), SHIFT_REPEAT(48),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(279),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(290),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(288),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(287),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(286),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(220),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(284),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(105),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(105),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(48),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 8),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 8),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 9),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 9),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 4, .production_id = 18),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 4, .production_id = 18),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 15),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 15),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 7),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 7),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesis, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parenthesis, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 5, .production_id = 24),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 5, .production_id = 24),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3, .production_id = 12),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3, .production_id = 12),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 6, .production_id = 36),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 6, .production_id = 36),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 3, .production_id = 11),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 3, .production_id = 11),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_statement, 6, .production_id = 25),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_statement, 6, .production_id = 25),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_statement, 4, .production_id = 17),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_statement, 4, .production_id = 17),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3, .production_id = 21),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_unit_type, 2, .production_id = 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_unit_type, 2, .production_id = 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 7, .production_id = 34),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 7, .production_id = 34),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 4, .production_id = 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 4, .production_id = 3),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 6, .production_id = 23),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 6, .production_id = 23),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 6, .production_id = 34),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 6, .production_id = 34),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 5, .production_id = 23),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 5, .production_id = 23),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3, .production_id = 21),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 9, .production_id = 45),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 9, .production_id = 45),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 8, .production_id = 44),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 8, .production_id = 44),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 8, .production_id = 43),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 8, .production_id = 43),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_effect_repeat1, 2),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_effect_repeat1, 2), SHIFT_REPEAT(291),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 7, .production_id = 42),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 7, .production_id = 42),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 1, .production_id = 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 1, .production_id = 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 6, .production_id = 32),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 6, .production_id = 32),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_statement, 2, .production_id = 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_statement, 2, .production_id = 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_tuple_type_repeat1, 2, .production_id = 29), SHIFT_REPEAT(212),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_tuple_type_repeat1, 2, .production_id = 29),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_part, 1, .production_id = 19),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_statement, 4, .production_id = 16),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_statement, 4, .production_id = 16),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fn_signature_repeat1, 2, .production_id = 35), SHIFT_REPEAT(177),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fn_signature_repeat1, 2, .production_id = 35),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_struct_type_repeat1, 2, .production_id = 29), SHIFT_REPEAT(209),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_struct_type_repeat1, 2, .production_id = 29),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_part_list_repeat1, 2, .production_id = 39), SHIFT_REPEAT(214),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_part_list_repeat1, 2, .production_id = 39),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 7, .production_id = 32),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 7, .production_id = 32),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 7, .production_id = 23),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 7, .production_id = 23),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 5, .production_id = 3),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 5, .production_id = 3),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 8, .production_id = 42),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 8, .production_id = 42),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 8, .production_id = 34),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 8, .production_id = 34),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 9, .production_id = 43),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 9, .production_id = 43),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 9, .production_id = 44),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 9, .production_id = 44),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 10, .production_id = 45),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 10, .production_id = 45),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 8, .production_id = 40),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 8, .production_id = 40),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 7, .production_id = 31),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 7, .production_id = 31),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_part_list_repeat1, 2, .production_id = 21),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 7, .production_id = 40),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 7, .production_id = 40),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 7, .production_id = 31),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 7, .production_id = 31),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_part, 3, .production_id = 37),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 7, .production_id = 40),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 7, .production_id = 40),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_param, 4, .production_id = 41),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_part_list, 4, .production_id = 38),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_part_list, 4, .production_id = 38),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_part_list, 4, .production_id = 21),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_part_list, 4, .production_id = 21),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 7, .production_id = 28),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 7, .production_id = 28),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 7, .production_id = 28),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 7, .production_id = 28),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_part_list, 5, .production_id = 38),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_part_list, 5, .production_id = 38),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fn_signature_repeat1, 2, .production_id = 33),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_param, 3, .production_id = 26),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_effect, 6, .production_id = 22),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_effect, 6, .production_id = 22),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 6, .production_id = 31),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 6, .production_id = 31),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 6, .production_id = 31),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 6, .production_id = 31),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 6, .production_id = 28),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 6, .production_id = 28),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_tuple_type_repeat1, 2, .production_id = 27),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 6, .production_id = 20),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 6, .production_id = 20),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 6, .production_id = 28),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 6, .production_id = 28),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_struct_type_repeat1, 2, .production_id = 27),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 6, .production_id = 20),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 6, .production_id = 20),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3, .production_id = 26),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_part_list, 3, .production_id = 21),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_part_list, 3, .production_id = 21),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 2, .production_id = 4),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 2, .production_id = 4),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_effect, 5, .production_id = 22),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_effect, 5, .production_id = 22),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_effect, 5, .production_id = 3),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_effect, 5, .production_id = 3),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 5, .production_id = 20),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 5, .production_id = 20),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 5, .production_id = 20),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 5, .production_id = 20),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 8, .production_id = 40),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 8, .production_id = 40),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 2, .production_id = 5),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 2, .production_id = 5),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_hatch, 3, .production_id = 6),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_hatch, 3, .production_id = 6),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_effect, 4, .production_id = 3),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_effect, 4, .production_id = 3),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 4, .production_id = 14),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 4, .production_id = 14),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 4, .production_id = 13),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 4, .production_id = 13),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constraint, 3, .production_id = 30),
  [878] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_typlet() {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__word,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
