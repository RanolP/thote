#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 348
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 23
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 81

enum ts_symbol_identifiers {
  sym__word = 1,
  sym_shebang = 2,
  anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE = 3,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 4,
  sym_escape_hatch_source = 5,
  anon_sym_import = 6,
  anon_sym_as = 7,
  anon_sym_COLON = 8,
  anon_sym_LBRACE = 9,
  anon_sym_COMMA = 10,
  anon_sym_RBRACE = 11,
  anon_sym_export = 12,
  anon_sym_let = 13,
  anon_sym_mut = 14,
  anon_sym_EQ = 15,
  anon_sym_type = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_effect = 19,
  anon_sym_extern = 20,
  anon_sym_fn = 21,
  anon_sym_DASH_GT = 22,
  anon_sym_where = 23,
  anon_sym_EQ_EQ = 24,
  anon_sym_BANG_EQ = 25,
  anon_sym_LT = 26,
  anon_sym_LT_EQ = 27,
  anon_sym_GT = 28,
  anon_sym_GT_EQ = 29,
  anon_sym_PLUS = 30,
  anon_sym_DASH = 31,
  anon_sym_STAR = 32,
  anon_sym_SLASH = 33,
  sym_unit_absolute_length = 34,
  sym_unit_relative_length = 35,
  sym_integer = 36,
  sym_float = 37,
  sym_boolean = 38,
  sym_string = 39,
  sym_identifier = 40,
  sym_program = 41,
  sym_escape_hatch = 42,
  sym_import_statement = 43,
  sym_import_part_list = 44,
  sym_import_part = 45,
  sym_export_statement = 46,
  sym_binding_statement = 47,
  sym_decl_unit_type = 48,
  sym_decl_tuple_type = 49,
  sym_decl_struct_type = 50,
  sym_struct_field = 51,
  sym_decl_effect = 52,
  sym_decl_fn = 53,
  sym_fn_param = 54,
  sym_expression_statement = 55,
  sym_binary_operation = 56,
  sym_name = 57,
  sym_type = 58,
  sym_type_parameters = 59,
  sym_type_constraint = 60,
  aux_sym_program_repeat1 = 61,
  aux_sym_import_part_list_repeat1 = 62,
  aux_sym_decl_tuple_type_repeat1 = 63,
  aux_sym_decl_struct_type_repeat1 = 64,
  aux_sym_decl_fn_repeat1 = 65,
  aux_sym_decl_fn_repeat2 = 66,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__word] = "_word",
  [sym_shebang] = "shebang",
  [anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE] = "__ESCAPE_JS```",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [sym_escape_hatch_source] = "escape_hatch_source",
  [anon_sym_import] = "import",
  [anon_sym_as] = "as",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_export] = "export",
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
  [sym_program] = "program",
  [sym_escape_hatch] = "escape_hatch",
  [sym_import_statement] = "import_statement",
  [sym_import_part_list] = "import_part_list",
  [sym_import_part] = "import_part",
  [sym_export_statement] = "export_statement",
  [sym_binding_statement] = "binding_statement",
  [sym_decl_unit_type] = "decl_unit_type",
  [sym_decl_tuple_type] = "decl_tuple_type",
  [sym_decl_struct_type] = "decl_struct_type",
  [sym_struct_field] = "struct_field",
  [sym_decl_effect] = "decl_effect",
  [sym_decl_fn] = "decl_fn",
  [sym_fn_param] = "fn_param",
  [sym_expression_statement] = "expression_statement",
  [sym_binary_operation] = "binary_operation",
  [sym_name] = "name",
  [sym_type] = "type",
  [sym_type_parameters] = "type_parameters",
  [sym_type_constraint] = "type_constraint",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_import_part_list_repeat1] = "import_part_list_repeat1",
  [aux_sym_decl_tuple_type_repeat1] = "decl_tuple_type_repeat1",
  [aux_sym_decl_struct_type_repeat1] = "decl_struct_type_repeat1",
  [aux_sym_decl_fn_repeat1] = "decl_fn_repeat1",
  [aux_sym_decl_fn_repeat2] = "decl_fn_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__word] = sym__word,
  [sym_shebang] = sym_shebang,
  [anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE] = anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [sym_escape_hatch_source] = sym_escape_hatch_source,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_export] = anon_sym_export,
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
  [sym_program] = sym_program,
  [sym_escape_hatch] = sym_escape_hatch,
  [sym_import_statement] = sym_import_statement,
  [sym_import_part_list] = sym_import_part_list,
  [sym_import_part] = sym_import_part,
  [sym_export_statement] = sym_export_statement,
  [sym_binding_statement] = sym_binding_statement,
  [sym_decl_unit_type] = sym_decl_unit_type,
  [sym_decl_tuple_type] = sym_decl_tuple_type,
  [sym_decl_struct_type] = sym_decl_struct_type,
  [sym_struct_field] = sym_struct_field,
  [sym_decl_effect] = sym_decl_effect,
  [sym_decl_fn] = sym_decl_fn,
  [sym_fn_param] = sym_fn_param,
  [sym_expression_statement] = sym_expression_statement,
  [sym_binary_operation] = sym_binary_operation,
  [sym_name] = sym_name,
  [sym_type] = sym_type,
  [sym_type_parameters] = sym_type_parameters,
  [sym_type_constraint] = sym_type_constraint,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_import_part_list_repeat1] = aux_sym_import_part_list_repeat1,
  [aux_sym_decl_tuple_type_repeat1] = aux_sym_decl_tuple_type_repeat1,
  [aux_sym_decl_struct_type_repeat1] = aux_sym_decl_struct_type_repeat1,
  [aux_sym_decl_fn_repeat1] = aux_sym_decl_fn_repeat1,
  [aux_sym_decl_fn_repeat2] = aux_sym_decl_fn_repeat2,
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
  [anon_sym_import] = {
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
  [anon_sym_export] = {
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
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_hatch] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_import_part_list] = {
    .visible = true,
    .named = true,
  },
  [sym_import_part] = {
    .visible = true,
    .named = true,
  },
  [sym_export_statement] = {
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
  [sym_fn_param] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
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
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_part_list_repeat1] = {
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
  [aux_sym_decl_fn_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decl_fn_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alias = 1,
  field_body = 2,
  field_constraint = 3,
  field_declaration = 4,
  field_extern = 5,
  field_fields = 6,
  field_kind = 7,
  field_lhs = 8,
  field_list = 9,
  field_mut = 10,
  field_name = 11,
  field_operator = 12,
  field_original = 13,
  field_params = 14,
  field_part = 15,
  field_path = 16,
  field_return = 17,
  field_rhs = 18,
  field_source = 19,
  field_type = 20,
  field_type_params = 21,
  field_value = 22,
  field_whole = 23,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_body] = "body",
  [field_constraint] = "constraint",
  [field_declaration] = "declaration",
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
  [field_source] = "source",
  [field_type] = "type",
  [field_type_params] = "type_params",
  [field_value] = "value",
  [field_whole] = "whole",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 3},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 3},
  [9] = {.index = 15, .length = 3},
  [10] = {.index = 18, .length = 1},
  [11] = {.index = 19, .length = 2},
  [12] = {.index = 21, .length = 1},
  [13] = {.index = 22, .length = 2},
  [14] = {.index = 24, .length = 2},
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 4},
  [17] = {.index = 32, .length = 2},
  [18] = {.index = 34, .length = 1},
  [19] = {.index = 35, .length = 3},
  [20] = {.index = 38, .length = 2},
  [21] = {.index = 40, .length = 2},
  [22] = {.index = 42, .length = 3},
  [23] = {.index = 45, .length = 3},
  [24] = {.index = 48, .length = 1},
  [25] = {.index = 49, .length = 2},
  [26] = {.index = 51, .length = 1},
  [27] = {.index = 52, .length = 3},
  [28] = {.index = 55, .length = 2},
  [29] = {.index = 57, .length = 2},
  [30] = {.index = 59, .length = 2},
  [31] = {.index = 61, .length = 2},
  [32] = {.index = 63, .length = 4},
  [33] = {.index = 67, .length = 3},
  [34] = {.index = 70, .length = 4},
  [35] = {.index = 74, .length = 3},
  [36] = {.index = 77, .length = 2},
  [37] = {.index = 79, .length = 2},
  [38] = {.index = 81, .length = 3},
  [39] = {.index = 84, .length = 3},
  [40] = {.index = 87, .length = 4},
  [41] = {.index = 91, .length = 2},
  [42] = {.index = 93, .length = 3},
  [43] = {.index = 96, .length = 3},
  [44] = {.index = 99, .length = 4},
  [45] = {.index = 103, .length = 3},
  [46] = {.index = 106, .length = 4},
  [47] = {.index = 110, .length = 4},
  [48] = {.index = 114, .length = 5},
  [49] = {.index = 119, .length = 3},
  [50] = {.index = 122, .length = 3},
  [51] = {.index = 125, .length = 4},
  [52] = {.index = 129, .length = 4},
  [53] = {.index = 133, .length = 4},
  [54] = {.index = 137, .length = 4},
  [55] = {.index = 141, .length = 5},
  [56] = {.index = 146, .length = 5},
  [57] = {.index = 151, .length = 3},
  [58] = {.index = 154, .length = 3},
  [59] = {.index = 157, .length = 4},
  [60] = {.index = 161, .length = 4},
  [61] = {.index = 165, .length = 4},
  [62] = {.index = 169, .length = 4},
  [63] = {.index = 173, .length = 5},
  [64] = {.index = 178, .length = 5},
  [65] = {.index = 183, .length = 4},
  [66] = {.index = 187, .length = 4},
  [67] = {.index = 191, .length = 4},
  [68] = {.index = 195, .length = 5},
  [69] = {.index = 200, .length = 5},
  [70] = {.index = 205, .length = 5},
  [71] = {.index = 210, .length = 5},
  [72] = {.index = 215, .length = 6},
  [73] = {.index = 221, .length = 4},
  [74] = {.index = 225, .length = 5},
  [75] = {.index = 230, .length = 5},
  [76] = {.index = 235, .length = 5},
  [77] = {.index = 240, .length = 6},
  [78] = {.index = 246, .length = 6},
  [79] = {.index = 252, .length = 5},
  [80] = {.index = 257, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_declaration, 1},
  [1] =
    {field_kind, 0},
    {field_name, 1},
  [3] =
    {field_name, 1},
  [4] =
    {field_source, 1},
  [5] =
    {field_lhs, 0},
    {field_operator, 1},
    {field_rhs, 2},
  [8] =
    {field_path, 1},
    {field_whole, 3},
  [10] =
    {field_part, 3},
    {field_path, 1},
  [12] =
    {field_kind, 0},
    {field_name, 1},
    {field_type, 3},
  [15] =
    {field_kind, 0},
    {field_name, 1},
    {field_value, 3},
  [18] =
    {field_original, 0},
  [19] =
    {field_fields, 3},
    {field_name, 1},
  [21] =
    {field_list, 1},
  [22] =
    {field_name, 1},
    {field_type_params, 2},
  [24] =
    {field_extern, 0},
    {field_name, 2},
  [26] =
    {field_name, 1},
    {field_params, 3},
  [28] =
    {field_kind, 0},
    {field_name, 1},
    {field_type, 3},
    {field_value, 5},
  [32] =
    {field_name, 0},
    {field_type, 2},
  [34] =
    {field_fields, 1},
  [35] =
    {field_fields, 3},
    {field_fields, 4, .inherited = true},
    {field_name, 1},
  [38] =
    {field_fields, 0, .inherited = true},
    {field_fields, 1, .inherited = true},
  [40] =
    {field_constraint, 2},
    {field_name, 0},
  [42] =
    {field_fields, 4},
    {field_name, 1},
    {field_type_params, 2},
  [45] =
    {field_extern, 0},
    {field_name, 2},
    {field_params, 4},
  [48] =
    {field_body, 0},
  [49] =
    {field_name, 1},
    {field_return, 5},
  [51] =
    {field_params, 1},
  [52] =
    {field_name, 1},
    {field_params, 3},
    {field_params, 4, .inherited = true},
  [55] =
    {field_params, 0, .inherited = true},
    {field_params, 1, .inherited = true},
  [57] =
    {field_alias, 2},
    {field_original, 0},
  [59] =
    {field_list, 1},
    {field_list, 2, .inherited = true},
  [61] =
    {field_list, 0, .inherited = true},
    {field_list, 1, .inherited = true},
  [63] =
    {field_fields, 4},
    {field_fields, 5, .inherited = true},
    {field_name, 1},
    {field_type_params, 2},
  [67] =
    {field_extern, 0},
    {field_name, 2},
    {field_return, 6},
  [70] =
    {field_extern, 0},
    {field_name, 2},
    {field_params, 4},
    {field_params, 5, .inherited = true},
  [74] =
    {field_mut, 0},
    {field_name, 1},
    {field_type, 3},
  [77] =
    {field_body, 5, .inherited = true},
    {field_name, 1},
  [79] =
    {field_body, 0, .inherited = true},
    {field_body, 1, .inherited = true},
  [81] =
    {field_name, 1},
    {field_params, 3},
    {field_return, 6},
  [84] =
    {field_body, 6, .inherited = true},
    {field_extern, 0},
    {field_name, 2},
  [87] =
    {field_extern, 0},
    {field_name, 2},
    {field_params, 4},
    {field_return, 7},
  [91] =
    {field_body, 6, .inherited = true},
    {field_name, 1},
  [93] =
    {field_name, 1},
    {field_params, 3},
    {field_return, 7},
  [96] =
    {field_body, 6, .inherited = true},
    {field_name, 1},
    {field_params, 3},
  [99] =
    {field_name, 1},
    {field_params, 3},
    {field_params, 4, .inherited = true},
    {field_return, 7},
  [103] =
    {field_body, 7, .inherited = true},
    {field_extern, 0},
    {field_name, 2},
  [106] =
    {field_extern, 0},
    {field_name, 2},
    {field_params, 4},
    {field_return, 8},
  [110] =
    {field_body, 7, .inherited = true},
    {field_extern, 0},
    {field_name, 2},
    {field_params, 4},
  [114] =
    {field_extern, 0},
    {field_name, 2},
    {field_params, 4},
    {field_params, 5, .inherited = true},
    {field_return, 8},
  [119] =
    {field_body, 7, .inherited = true},
    {field_name, 1},
    {field_return, 5},
  [122] =
    {field_body, 7, .inherited = true},
    {field_name, 1},
    {field_params, 3},
  [125] =
    {field_name, 1},
    {field_params, 3},
    {field_params, 4, .inherited = true},
    {field_return, 8},
  [129] =
    {field_body, 7, .inherited = true},
    {field_name, 1},
    {field_params, 3},
    {field_params, 4, .inherited = true},
  [133] =
    {field_body, 8, .inherited = true},
    {field_extern, 0},
    {field_name, 2},
    {field_return, 6},
  [137] =
    {field_body, 8, .inherited = true},
    {field_extern, 0},
    {field_name, 2},
    {field_params, 4},
  [141] =
    {field_extern, 0},
    {field_name, 2},
    {field_params, 4},
    {field_params, 5, .inherited = true},
    {field_return, 9},
  [146] =
    {field_body, 8, .inherited = true},
    {field_extern, 0},
    {field_name, 2},
    {field_params, 4},
    {field_params, 5, .inherited = true},
  [151] =
    {field_body, 8, .inherited = true},
    {field_name, 1},
    {field_return, 5},
  [154] =
    {field_body, 8, .inherited = true},
    {field_name, 1},
    {field_params, 3},
  [157] =
    {field_body, 8, .inherited = true},
    {field_name, 1},
    {field_params, 3},
    {field_return, 6},
  [161] =
    {field_body, 8, .inherited = true},
    {field_name, 1},
    {field_params, 3},
    {field_params, 4, .inherited = true},
  [165] =
    {field_body, 9, .inherited = true},
    {field_extern, 0},
    {field_name, 2},
    {field_return, 6},
  [169] =
    {field_body, 9, .inherited = true},
    {field_extern, 0},
    {field_name, 2},
    {field_params, 4},
  [173] =
    {field_body, 9, .inherited = true},
    {field_extern, 0},
    {field_name, 2},
    {field_params, 4},
    {field_return, 7},
  [178] =
    {field_body, 9, .inherited = true},
    {field_extern, 0},
    {field_name, 2},
    {field_params, 4},
    {field_params, 5, .inherited = true},
  [183] =
    {field_body, 9, .inherited = true},
    {field_name, 1},
    {field_params, 3},
    {field_return, 7},
  [187] =
    {field_body, 9, .inherited = true},
    {field_name, 1},
    {field_params, 3},
    {field_return, 6},
  [191] =
    {field_body, 9, .inherited = true},
    {field_name, 1},
    {field_params, 3},
    {field_params, 4, .inherited = true},
  [195] =
    {field_body, 9, .inherited = true},
    {field_name, 1},
    {field_params, 3},
    {field_params, 4, .inherited = true},
    {field_return, 7},
  [200] =
    {field_body, 10, .inherited = true},
    {field_extern, 0},
    {field_name, 2},
    {field_params, 4},
    {field_return, 8},
  [205] =
    {field_body, 10, .inherited = true},
    {field_extern, 0},
    {field_name, 2},
    {field_params, 4},
    {field_return, 7},
  [210] =
    {field_body, 10, .inherited = true},
    {field_extern, 0},
    {field_name, 2},
    {field_params, 4},
    {field_params, 5, .inherited = true},
  [215] =
    {field_body, 10, .inherited = true},
    {field_extern, 0},
    {field_name, 2},
    {field_params, 4},
    {field_params, 5, .inherited = true},
    {field_return, 8},
  [221] =
    {field_body, 10, .inherited = true},
    {field_name, 1},
    {field_params, 3},
    {field_return, 7},
  [225] =
    {field_body, 10, .inherited = true},
    {field_name, 1},
    {field_params, 3},
    {field_params, 4, .inherited = true},
    {field_return, 8},
  [230] =
    {field_body, 10, .inherited = true},
    {field_name, 1},
    {field_params, 3},
    {field_params, 4, .inherited = true},
    {field_return, 7},
  [235] =
    {field_body, 11, .inherited = true},
    {field_extern, 0},
    {field_name, 2},
    {field_params, 4},
    {field_return, 8},
  [240] =
    {field_body, 11, .inherited = true},
    {field_extern, 0},
    {field_name, 2},
    {field_params, 4},
    {field_params, 5, .inherited = true},
    {field_return, 9},
  [246] =
    {field_body, 11, .inherited = true},
    {field_extern, 0},
    {field_name, 2},
    {field_params, 4},
    {field_params, 5, .inherited = true},
    {field_return, 8},
  [252] =
    {field_body, 11, .inherited = true},
    {field_name, 1},
    {field_params, 3},
    {field_params, 4, .inherited = true},
    {field_return, 8},
  [257] =
    {field_body, 12, .inherited = true},
    {field_extern, 0},
    {field_name, 2},
    {field_params, 4},
    {field_params, 5, .inherited = true},
    {field_return, 9},
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
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
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
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 91,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 92,
  [115] = 115,
  [116] = 90,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
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
  [165] = 165,
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
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
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
  [215] = 215,
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
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 256,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 87,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 295,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 345,
  [347] = 347,
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
      if (eof) ADVANCE(60);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '+') ADVANCE(105);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == '0') ADVANCE(113);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '_') ADVANCE(159);
      if (lookahead == '`') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == 'l') ADVANCE(162);
      if (lookahead == 'm') ADVANCE(191);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == 'w') ADVANCE(171);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '}') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(61);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '0') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(123);
      if (lookahead == 't') ADVANCE(145);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(157);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != 133 &&
          lookahead != 8232 &&
          lookahead != 8233) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == 'm') ADVANCE(155);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(157);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '}') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(157);
      END_STATE();
    case 6:
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '_') ADVANCE(158);
      if (lookahead == '}') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(94);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'J') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'P') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'S') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == 'S') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(12);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == '`') ADVANCE(63);
      END_STATE();
    case 21:
      if (lookahead == '`') ADVANCE(62);
      END_STATE();
    case 22:
      if (lookahead == '`') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == '`') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == '`') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 't') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(111);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead == 'x') ADVANCE(53);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(3);
      END_STATE();
    case 40:
      if (lookahead == 'x') ADVANCE(110);
      END_STATE();
    case 41:
      if (lookahead == 'y') ADVANCE(35);
      END_STATE();
    case 42:
      if (lookahead == '{') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == '}') ADVANCE(3);
      END_STATE();
    case 44:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 45:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(114);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(115);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 57:
      if (eof) ADVANCE(60);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '+') ADVANCE(105);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == '0') ADVANCE(113);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'f') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '}') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(157);
      END_STATE();
    case 58:
      if (eof) ADVANCE(60);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '0') ADVANCE(113);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '>') ADVANCE(102);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'f') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '}') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(157);
      END_STATE();
    case 59:
      if (eof) ADVANCE(60);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '0') ADVANCE(113);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'f') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == 'w') ADVANCE(134);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '}') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(157);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_escape_hatch_source);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_escape_hatch_source);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_import);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_import);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_export);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_export);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_let);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_mut);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_mut);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_type);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_effect);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_effect);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_effect);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_extern);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_extern);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_fn);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_where);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_where);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(94);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_unit_absolute_length);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_unit_relative_length);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '%') ADVANCE(111);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'E') ADVANCE(44);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '%') ADVANCE(111);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(45);
      if (lookahead == 'E') ADVANCE(44);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(46);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(51);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '%') ADVANCE(111);
      if (lookahead == 'E') ADVANCE(44);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_boolean);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_boolean);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(93);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(135);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(157);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(152);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(150);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(124);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(120);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(82);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(96);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(143);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(148);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(133);
      if (lookahead == 'x') ADVANCE(140);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(126);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(131);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(149);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(142);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(90);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(146);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(147);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(138);
      if (lookahead == 't') ADVANCE(130);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(128);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(139);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(137);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == 'y') ADVANCE(141);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(156);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(153);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(154);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(129);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(127);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(75);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(77);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(87);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(73);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(67);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(151);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(127);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__word);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(12);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'n') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == 'x') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == 't') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(192);
      if (lookahead == 'y') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(2);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 57},
  [2] = {.lex_state = 57},
  [3] = {.lex_state = 57},
  [4] = {.lex_state = 57},
  [5] = {.lex_state = 57},
  [6] = {.lex_state = 57},
  [7] = {.lex_state = 57},
  [8] = {.lex_state = 57},
  [9] = {.lex_state = 57},
  [10] = {.lex_state = 57},
  [11] = {.lex_state = 57},
  [12] = {.lex_state = 57},
  [13] = {.lex_state = 57},
  [14] = {.lex_state = 57},
  [15] = {.lex_state = 57},
  [16] = {.lex_state = 57},
  [17] = {.lex_state = 57},
  [18] = {.lex_state = 57},
  [19] = {.lex_state = 57},
  [20] = {.lex_state = 57},
  [21] = {.lex_state = 57},
  [22] = {.lex_state = 57},
  [23] = {.lex_state = 57},
  [24] = {.lex_state = 57},
  [25] = {.lex_state = 57},
  [26] = {.lex_state = 57},
  [27] = {.lex_state = 57},
  [28] = {.lex_state = 57},
  [29] = {.lex_state = 57},
  [30] = {.lex_state = 57},
  [31] = {.lex_state = 57},
  [32] = {.lex_state = 57},
  [33] = {.lex_state = 57},
  [34] = {.lex_state = 57},
  [35] = {.lex_state = 57},
  [36] = {.lex_state = 57},
  [37] = {.lex_state = 57},
  [38] = {.lex_state = 57},
  [39] = {.lex_state = 57},
  [40] = {.lex_state = 57},
  [41] = {.lex_state = 57},
  [42] = {.lex_state = 57},
  [43] = {.lex_state = 57},
  [44] = {.lex_state = 57},
  [45] = {.lex_state = 57},
  [46] = {.lex_state = 57},
  [47] = {.lex_state = 57},
  [48] = {.lex_state = 57},
  [49] = {.lex_state = 57},
  [50] = {.lex_state = 57},
  [51] = {.lex_state = 57},
  [52] = {.lex_state = 57},
  [53] = {.lex_state = 57},
  [54] = {.lex_state = 57},
  [55] = {.lex_state = 57},
  [56] = {.lex_state = 57},
  [57] = {.lex_state = 57},
  [58] = {.lex_state = 57},
  [59] = {.lex_state = 57},
  [60] = {.lex_state = 57},
  [61] = {.lex_state = 57},
  [62] = {.lex_state = 57},
  [63] = {.lex_state = 57},
  [64] = {.lex_state = 57},
  [65] = {.lex_state = 57},
  [66] = {.lex_state = 57},
  [67] = {.lex_state = 57},
  [68] = {.lex_state = 57},
  [69] = {.lex_state = 57},
  [70] = {.lex_state = 57},
  [71] = {.lex_state = 57},
  [72] = {.lex_state = 57},
  [73] = {.lex_state = 57},
  [74] = {.lex_state = 57},
  [75] = {.lex_state = 57},
  [76] = {.lex_state = 57},
  [77] = {.lex_state = 57},
  [78] = {.lex_state = 57},
  [79] = {.lex_state = 57},
  [80] = {.lex_state = 57},
  [81] = {.lex_state = 57},
  [82] = {.lex_state = 57},
  [83] = {.lex_state = 57},
  [84] = {.lex_state = 57},
  [85] = {.lex_state = 57},
  [86] = {.lex_state = 57},
  [87] = {.lex_state = 57},
  [88] = {.lex_state = 57},
  [89] = {.lex_state = 57},
  [90] = {.lex_state = 58},
  [91] = {.lex_state = 58},
  [92] = {.lex_state = 58},
  [93] = {.lex_state = 57},
  [94] = {.lex_state = 59},
  [95] = {.lex_state = 59},
  [96] = {.lex_state = 59},
  [97] = {.lex_state = 59},
  [98] = {.lex_state = 59},
  [99] = {.lex_state = 59},
  [100] = {.lex_state = 59},
  [101] = {.lex_state = 59},
  [102] = {.lex_state = 59},
  [103] = {.lex_state = 59},
  [104] = {.lex_state = 59},
  [105] = {.lex_state = 59},
  [106] = {.lex_state = 59},
  [107] = {.lex_state = 59},
  [108] = {.lex_state = 59},
  [109] = {.lex_state = 59},
  [110] = {.lex_state = 59},
  [111] = {.lex_state = 59},
  [112] = {.lex_state = 58},
  [113] = {.lex_state = 59},
  [114] = {.lex_state = 59},
  [115] = {.lex_state = 59},
  [116] = {.lex_state = 59},
  [117] = {.lex_state = 59},
  [118] = {.lex_state = 57},
  [119] = {.lex_state = 57},
  [120] = {.lex_state = 57},
  [121] = {.lex_state = 57},
  [122] = {.lex_state = 57},
  [123] = {.lex_state = 57},
  [124] = {.lex_state = 57},
  [125] = {.lex_state = 57},
  [126] = {.lex_state = 57},
  [127] = {.lex_state = 57},
  [128] = {.lex_state = 57},
  [129] = {.lex_state = 57},
  [130] = {.lex_state = 57},
  [131] = {.lex_state = 57},
  [132] = {.lex_state = 57},
  [133] = {.lex_state = 58},
  [134] = {.lex_state = 57},
  [135] = {.lex_state = 57},
  [136] = {.lex_state = 57},
  [137] = {.lex_state = 57},
  [138] = {.lex_state = 57},
  [139] = {.lex_state = 57},
  [140] = {.lex_state = 57},
  [141] = {.lex_state = 57},
  [142] = {.lex_state = 57},
  [143] = {.lex_state = 57},
  [144] = {.lex_state = 57},
  [145] = {.lex_state = 57},
  [146] = {.lex_state = 57},
  [147] = {.lex_state = 57},
  [148] = {.lex_state = 57},
  [149] = {.lex_state = 57},
  [150] = {.lex_state = 57},
  [151] = {.lex_state = 57},
  [152] = {.lex_state = 57},
  [153] = {.lex_state = 57},
  [154] = {.lex_state = 57},
  [155] = {.lex_state = 57},
  [156] = {.lex_state = 57},
  [157] = {.lex_state = 57},
  [158] = {.lex_state = 57},
  [159] = {.lex_state = 57},
  [160] = {.lex_state = 57},
  [161] = {.lex_state = 57},
  [162] = {.lex_state = 57},
  [163] = {.lex_state = 57},
  [164] = {.lex_state = 57},
  [165] = {.lex_state = 57},
  [166] = {.lex_state = 57},
  [167] = {.lex_state = 57},
  [168] = {.lex_state = 57},
  [169] = {.lex_state = 57},
  [170] = {.lex_state = 57},
  [171] = {.lex_state = 57},
  [172] = {.lex_state = 57},
  [173] = {.lex_state = 57},
  [174] = {.lex_state = 57},
  [175] = {.lex_state = 57},
  [176] = {.lex_state = 57},
  [177] = {.lex_state = 57},
  [178] = {.lex_state = 57},
  [179] = {.lex_state = 57},
  [180] = {.lex_state = 57},
  [181] = {.lex_state = 57},
  [182] = {.lex_state = 57},
  [183] = {.lex_state = 57},
  [184] = {.lex_state = 57},
  [185] = {.lex_state = 57},
  [186] = {.lex_state = 57},
  [187] = {.lex_state = 57},
  [188] = {.lex_state = 57},
  [189] = {.lex_state = 57},
  [190] = {.lex_state = 57},
  [191] = {.lex_state = 57},
  [192] = {.lex_state = 57},
  [193] = {.lex_state = 57},
  [194] = {.lex_state = 57},
  [195] = {.lex_state = 57},
  [196] = {.lex_state = 57},
  [197] = {.lex_state = 57},
  [198] = {.lex_state = 57},
  [199] = {.lex_state = 57},
  [200] = {.lex_state = 57},
  [201] = {.lex_state = 57},
  [202] = {.lex_state = 57},
  [203] = {.lex_state = 57},
  [204] = {.lex_state = 57},
  [205] = {.lex_state = 57},
  [206] = {.lex_state = 57},
  [207] = {.lex_state = 57},
  [208] = {.lex_state = 57},
  [209] = {.lex_state = 57},
  [210] = {.lex_state = 57},
  [211] = {.lex_state = 57},
  [212] = {.lex_state = 57},
  [213] = {.lex_state = 57},
  [214] = {.lex_state = 57},
  [215] = {.lex_state = 57},
  [216] = {.lex_state = 57},
  [217] = {.lex_state = 57},
  [218] = {.lex_state = 57},
  [219] = {.lex_state = 57},
  [220] = {.lex_state = 57},
  [221] = {.lex_state = 57},
  [222] = {.lex_state = 57},
  [223] = {.lex_state = 57},
  [224] = {.lex_state = 57},
  [225] = {.lex_state = 57},
  [226] = {.lex_state = 57},
  [227] = {.lex_state = 57},
  [228] = {.lex_state = 57},
  [229] = {.lex_state = 57},
  [230] = {.lex_state = 57},
  [231] = {.lex_state = 57},
  [232] = {.lex_state = 57},
  [233] = {.lex_state = 57},
  [234] = {.lex_state = 57},
  [235] = {.lex_state = 57},
  [236] = {.lex_state = 57},
  [237] = {.lex_state = 57},
  [238] = {.lex_state = 57},
  [239] = {.lex_state = 57},
  [240] = {.lex_state = 57},
  [241] = {.lex_state = 57},
  [242] = {.lex_state = 2},
  [243] = {.lex_state = 26},
  [244] = {.lex_state = 2},
  [245] = {.lex_state = 2},
  [246] = {.lex_state = 2},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 4},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 4},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 5},
  [257] = {.lex_state = 5},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 6},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 5},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 5},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 5},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 5},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 5},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 5},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 4},
  [286] = {.lex_state = 5},
  [287] = {.lex_state = 5},
  [288] = {.lex_state = 5},
  [289] = {.lex_state = 5},
  [290] = {.lex_state = 5},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 5},
  [293] = {.lex_state = 5},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 58},
  [296] = {.lex_state = 5},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 58},
  [299] = {.lex_state = 5},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 5},
  [302] = {.lex_state = 58},
  [303] = {.lex_state = 5},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 5},
  [306] = {.lex_state = 5},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 5},
  [309] = {.lex_state = 5},
  [310] = {.lex_state = 5},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 6},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 5},
  [315] = {.lex_state = 5},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 5},
  [318] = {.lex_state = 5},
  [319] = {.lex_state = 5},
  [320] = {.lex_state = 5},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 5},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 5},
  [329] = {.lex_state = 5},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 5},
  [333] = {.lex_state = 5},
  [334] = {.lex_state = 26},
  [335] = {.lex_state = 64},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 5},
  [339] = {.lex_state = 58},
  [340] = {.lex_state = 5},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 5},
  [345] = {.lex_state = 58},
  [346] = {.lex_state = 58},
  [347] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [sym_shebang] = ACTIONS(1),
    [anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
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
  },
  [1] = {
    [sym_program] = STATE(325),
    [sym_escape_hatch] = STATE(14),
    [sym_import_statement] = STATE(14),
    [sym_export_statement] = STATE(14),
    [sym_binding_statement] = STATE(14),
    [sym_decl_unit_type] = STATE(14),
    [sym_decl_tuple_type] = STATE(14),
    [sym_decl_struct_type] = STATE(14),
    [sym_decl_effect] = STATE(14),
    [sym_decl_fn] = STATE(14),
    [sym_expression_statement] = STATE(14),
    [sym_binary_operation] = STATE(88),
    [sym_name] = STATE(88),
    [aux_sym_program_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_shebang] = ACTIONS(5),
    [anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_mut] = ACTIONS(13),
    [anon_sym_type] = ACTIONS(15),
    [anon_sym_effect] = ACTIONS(17),
    [anon_sym_extern] = ACTIONS(19),
    [anon_sym_fn] = ACTIONS(21),
    [sym_unit_absolute_length] = ACTIONS(23),
    [sym_unit_relative_length] = ACTIONS(23),
    [sym_integer] = ACTIONS(25),
    [sym_float] = ACTIONS(25),
    [sym_boolean] = ACTIONS(25),
    [sym_string] = ACTIONS(23),
    [sym_identifier] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [61] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [122] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [183] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [244] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [305] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [366] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [427] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [488] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [549] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [610] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [671] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [732] = 14,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(27), 11,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
      aux_sym_program_repeat1,
  [791] = 14,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(27), 11,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
      aux_sym_program_repeat1,
  [850] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [911] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [972] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [1033] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [1094] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [1155] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [1216] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [1277] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [1338] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [1399] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [1460] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [1521] = 14,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(84), 1,
      anon_sym_import,
    ACTIONS(87), 1,
      anon_sym_export,
    ACTIONS(93), 1,
      anon_sym_type,
    ACTIONS(96), 1,
      anon_sym_effect,
    ACTIONS(99), 1,
      anon_sym_extern,
    ACTIONS(102), 1,
      anon_sym_fn,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(90), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(105), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(108), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(27), 11,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
      aux_sym_program_repeat1,
  [1580] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [1641] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [1702] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [1763] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [1824] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [1885] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [1946] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [2007] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [2068] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [2129] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [2190] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [2251] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [2312] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [2373] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [2434] = 15,
    ACTIONS(142), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(145), 1,
      anon_sym_import,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    ACTIONS(150), 1,
      anon_sym_export,
    ACTIONS(156), 1,
      anon_sym_type,
    ACTIONS(159), 1,
      anon_sym_effect,
    ACTIONS(162), 1,
      anon_sym_extern,
    ACTIONS(165), 1,
      anon_sym_fn,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(153), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(168), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(171), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [2495] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [2556] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [2617] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [2678] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [2739] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [2800] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [2861] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [2922] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [2983] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [3044] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [3105] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [3166] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [3227] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [3288] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [3349] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [3410] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [3471] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [3532] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [3593] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [3654] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [3715] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [3776] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [3837] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [3898] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [3959] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [4020] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [4081] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [4142] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [4203] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [4264] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [4325] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [4386] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [4447] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [4508] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [4569] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [4630] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [4691] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [4752] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [4813] = 14,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(15), 11,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
      aux_sym_program_repeat1,
  [4872] = 15,
    ACTIONS(7), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_effect,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_decl_fn_repeat2,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(88), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(23), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(241), 10,
      sym_escape_hatch,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
      sym_expression_statement,
  [4933] = 2,
    ACTIONS(255), 14,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(257), 14,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [4966] = 3,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(255), 12,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(257), 14,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5001] = 4,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(261), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 10,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(257), 14,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5038] = 6,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(261), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(269), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(267), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(263), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(265), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5079] = 2,
    ACTIONS(271), 14,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(273), 14,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5112] = 6,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(261), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(269), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(267), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(275), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(277), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5153] = 6,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(261), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(269), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(267), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(279), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(281), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5194] = 2,
    ACTIONS(283), 12,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(285), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5223] = 4,
    ACTIONS(291), 1,
      anon_sym_LT,
    STATE(92), 1,
      sym_type_parameters,
    ACTIONS(287), 10,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(289), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5256] = 2,
    ACTIONS(293), 10,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(295), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5283] = 6,
    ACTIONS(291), 1,
      anon_sym_LT,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    STATE(316), 1,
      sym_type_parameters,
    ACTIONS(297), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(299), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5318] = 4,
    ACTIONS(305), 1,
      anon_sym_LT,
    STATE(114), 1,
      sym_type_parameters,
    ACTIONS(287), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(289), 13,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      anon_sym_where,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5349] = 5,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    ACTIONS(313), 1,
      anon_sym_DASH_GT,
    ACTIONS(315), 1,
      anon_sym_where,
    ACTIONS(307), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(309), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5381] = 5,
    ACTIONS(321), 1,
      anon_sym_LBRACE,
    ACTIONS(323), 1,
      anon_sym_DASH_GT,
    ACTIONS(325), 1,
      anon_sym_where,
    ACTIONS(317), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(319), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5413] = 5,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    ACTIONS(333), 1,
      anon_sym_DASH_GT,
    ACTIONS(335), 1,
      anon_sym_where,
    ACTIONS(327), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(329), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5445] = 5,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    ACTIONS(343), 1,
      anon_sym_DASH_GT,
    ACTIONS(345), 1,
      anon_sym_where,
    ACTIONS(337), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(339), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5477] = 5,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    ACTIONS(353), 1,
      anon_sym_DASH_GT,
    ACTIONS(355), 1,
      anon_sym_where,
    ACTIONS(347), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(349), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5509] = 5,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    ACTIONS(363), 1,
      anon_sym_DASH_GT,
    ACTIONS(365), 1,
      anon_sym_where,
    ACTIONS(357), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(359), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5541] = 5,
    ACTIONS(371), 1,
      anon_sym_LBRACE,
    ACTIONS(373), 1,
      anon_sym_DASH_GT,
    ACTIONS(375), 1,
      anon_sym_where,
    ACTIONS(367), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(369), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5573] = 5,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    ACTIONS(383), 1,
      anon_sym_DASH_GT,
    ACTIONS(385), 1,
      anon_sym_where,
    ACTIONS(377), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(379), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5605] = 5,
    ACTIONS(391), 1,
      anon_sym_LBRACE,
    ACTIONS(393), 1,
      anon_sym_DASH_GT,
    ACTIONS(395), 1,
      anon_sym_where,
    ACTIONS(387), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(389), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5637] = 5,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
    ACTIONS(403), 1,
      anon_sym_DASH_GT,
    ACTIONS(405), 1,
      anon_sym_where,
    ACTIONS(397), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(399), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5669] = 4,
    ACTIONS(411), 1,
      anon_sym_LBRACE,
    ACTIONS(413), 1,
      anon_sym_where,
    ACTIONS(407), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(409), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5698] = 4,
    ACTIONS(419), 1,
      anon_sym_LBRACE,
    ACTIONS(421), 1,
      anon_sym_where,
    ACTIONS(415), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(417), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5727] = 4,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
    ACTIONS(429), 1,
      anon_sym_where,
    ACTIONS(423), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(425), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5756] = 4,
    ACTIONS(435), 1,
      anon_sym_LBRACE,
    ACTIONS(437), 1,
      anon_sym_where,
    ACTIONS(431), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(433), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5785] = 4,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(445), 1,
      anon_sym_where,
    ACTIONS(439), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(441), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5814] = 4,
    ACTIONS(451), 1,
      anon_sym_LBRACE,
    ACTIONS(453), 1,
      anon_sym_where,
    ACTIONS(447), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(449), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5843] = 4,
    ACTIONS(459), 1,
      anon_sym_LBRACE,
    ACTIONS(461), 1,
      anon_sym_where,
    ACTIONS(455), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(457), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5872] = 4,
    ACTIONS(467), 1,
      anon_sym_COLON,
    ACTIONS(469), 1,
      anon_sym_EQ,
    ACTIONS(463), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(465), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5901] = 4,
    ACTIONS(475), 1,
      anon_sym_LBRACE,
    ACTIONS(477), 1,
      anon_sym_where,
    ACTIONS(471), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(473), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5930] = 2,
    ACTIONS(293), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(295), 13,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      anon_sym_where,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5955] = 4,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
    ACTIONS(485), 1,
      anon_sym_where,
    ACTIONS(479), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(481), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [5984] = 2,
    ACTIONS(283), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(285), 13,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      anon_sym_where,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6009] = 4,
    ACTIONS(491), 1,
      anon_sym_LBRACE,
    ACTIONS(493), 1,
      anon_sym_where,
    ACTIONS(487), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(489), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6038] = 3,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(495), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(497), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6064] = 3,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(501), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(503), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6090] = 3,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    ACTIONS(507), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(509), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6116] = 3,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(513), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(515), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6142] = 3,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(521), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6168] = 3,
    ACTIONS(529), 1,
      anon_sym_LBRACE,
    ACTIONS(525), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(527), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6194] = 3,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    ACTIONS(531), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(533), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6220] = 3,
    ACTIONS(537), 1,
      anon_sym_LBRACE,
    ACTIONS(367), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(369), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6246] = 3,
    ACTIONS(543), 1,
      anon_sym_LBRACE,
    ACTIONS(539), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(541), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6272] = 3,
    ACTIONS(549), 1,
      anon_sym_LBRACE,
    ACTIONS(545), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(547), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6298] = 3,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    ACTIONS(307), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(309), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6324] = 3,
    ACTIONS(557), 1,
      anon_sym_LBRACE,
    ACTIONS(553), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(555), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6350] = 3,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    ACTIONS(337), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(339), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6376] = 3,
    ACTIONS(563), 1,
      anon_sym_LBRACE,
    ACTIONS(559), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(561), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6402] = 3,
    ACTIONS(569), 1,
      anon_sym_LBRACE,
    ACTIONS(565), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(567), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6428] = 3,
    ACTIONS(575), 1,
      anon_sym_EQ,
    ACTIONS(571), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(573), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6454] = 3,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    ACTIONS(577), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(579), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6480] = 3,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
    ACTIONS(583), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(585), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6506] = 3,
    ACTIONS(593), 1,
      anon_sym_LBRACE,
    ACTIONS(589), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(591), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6532] = 3,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    ACTIONS(377), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(379), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6558] = 3,
    ACTIONS(599), 1,
      anon_sym_LBRACE,
    ACTIONS(595), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(597), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6584] = 2,
    ACTIONS(601), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(603), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6607] = 2,
    ACTIONS(605), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(607), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6630] = 2,
    ACTIONS(609), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(611), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6653] = 2,
    ACTIONS(613), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(615), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6676] = 2,
    ACTIONS(617), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(619), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6699] = 2,
    ACTIONS(621), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(623), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6722] = 2,
    ACTIONS(625), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(627), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6745] = 2,
    ACTIONS(629), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(631), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6768] = 2,
    ACTIONS(633), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(635), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6791] = 2,
    ACTIONS(637), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(639), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6814] = 2,
    ACTIONS(641), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(643), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6837] = 2,
    ACTIONS(645), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(647), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6860] = 2,
    ACTIONS(649), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(651), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6883] = 2,
    ACTIONS(653), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(655), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6906] = 2,
    ACTIONS(657), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(659), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6929] = 2,
    ACTIONS(661), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(663), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6952] = 2,
    ACTIONS(665), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(667), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6975] = 2,
    ACTIONS(669), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(671), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [6998] = 2,
    ACTIONS(673), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(675), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7021] = 2,
    ACTIONS(677), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(679), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7044] = 2,
    ACTIONS(681), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(683), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7067] = 2,
    ACTIONS(685), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(687), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7090] = 2,
    ACTIONS(689), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(691), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7113] = 2,
    ACTIONS(693), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(695), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7136] = 2,
    ACTIONS(697), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(699), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7159] = 2,
    ACTIONS(701), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(703), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7182] = 2,
    ACTIONS(705), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(707), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7205] = 2,
    ACTIONS(709), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(711), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7228] = 2,
    ACTIONS(713), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(715), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7251] = 2,
    ACTIONS(717), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(719), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7274] = 2,
    ACTIONS(721), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(723), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7297] = 2,
    ACTIONS(725), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(727), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7320] = 2,
    ACTIONS(729), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(731), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7343] = 2,
    ACTIONS(733), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(735), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7366] = 2,
    ACTIONS(737), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(739), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7389] = 2,
    ACTIONS(741), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(743), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7412] = 2,
    ACTIONS(745), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(747), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7435] = 2,
    ACTIONS(749), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(751), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7458] = 2,
    ACTIONS(753), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(755), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7481] = 2,
    ACTIONS(757), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(759), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7504] = 2,
    ACTIONS(761), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(763), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7527] = 2,
    ACTIONS(765), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(767), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7550] = 2,
    ACTIONS(769), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(771), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7573] = 2,
    ACTIONS(539), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(541), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7596] = 2,
    ACTIONS(773), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(775), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7619] = 2,
    ACTIONS(757), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(759), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7642] = 2,
    ACTIONS(777), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(779), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7665] = 2,
    ACTIONS(781), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(783), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7688] = 2,
    ACTIONS(785), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(787), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7711] = 2,
    ACTIONS(789), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(791), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7734] = 2,
    ACTIONS(793), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(795), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7757] = 2,
    ACTIONS(797), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(799), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7780] = 2,
    ACTIONS(801), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(803), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7803] = 2,
    ACTIONS(805), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(807), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7826] = 2,
    ACTIONS(809), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(811), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7849] = 2,
    ACTIONS(813), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(815), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7872] = 2,
    ACTIONS(817), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(819), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7895] = 2,
    ACTIONS(821), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(823), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7918] = 2,
    ACTIONS(513), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(515), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7941] = 2,
    ACTIONS(825), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(827), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7964] = 2,
    ACTIONS(817), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(819), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [7987] = 2,
    ACTIONS(829), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(831), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8010] = 2,
    ACTIONS(833), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(835), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8033] = 2,
    ACTIONS(837), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(839), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8056] = 2,
    ACTIONS(841), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(843), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8079] = 2,
    ACTIONS(845), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(847), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8102] = 2,
    ACTIONS(849), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(851), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8125] = 2,
    ACTIONS(853), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(855), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8148] = 2,
    ACTIONS(857), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(859), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8171] = 2,
    ACTIONS(861), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(863), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8194] = 2,
    ACTIONS(865), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(867), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8217] = 2,
    ACTIONS(869), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(871), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8240] = 2,
    ACTIONS(873), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(875), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8263] = 2,
    ACTIONS(519), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(521), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8286] = 2,
    ACTIONS(877), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(879), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8309] = 2,
    ACTIONS(881), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(883), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8332] = 2,
    ACTIONS(885), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(887), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8355] = 2,
    ACTIONS(873), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(875), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8378] = 2,
    ACTIONS(889), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(891), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8401] = 2,
    ACTIONS(893), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(895), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8424] = 2,
    ACTIONS(897), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(899), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8447] = 2,
    ACTIONS(901), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(903), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8470] = 2,
    ACTIONS(905), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(907), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8493] = 2,
    ACTIONS(909), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(911), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8516] = 2,
    ACTIONS(913), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(915), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8539] = 2,
    ACTIONS(917), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(919), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8562] = 2,
    ACTIONS(921), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(923), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8585] = 2,
    ACTIONS(925), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(927), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8608] = 2,
    ACTIONS(929), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(931), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8631] = 2,
    ACTIONS(933), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(935), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8654] = 2,
    ACTIONS(559), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(561), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8677] = 2,
    ACTIONS(937), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(939), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8700] = 2,
    ACTIONS(941), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(943), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8723] = 2,
    ACTIONS(945), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(947), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8746] = 2,
    ACTIONS(949), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(951), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8769] = 2,
    ACTIONS(953), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(955), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8792] = 2,
    ACTIONS(957), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(959), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8815] = 2,
    ACTIONS(961), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(963), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8838] = 2,
    ACTIONS(965), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(967), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8861] = 2,
    ACTIONS(941), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(943), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8884] = 2,
    ACTIONS(969), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(971), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8907] = 2,
    ACTIONS(973), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(975), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8930] = 2,
    ACTIONS(977), 5,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(979), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_extern,
      anon_sym_fn,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [8952] = 4,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(86), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(981), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(983), 3,
      sym_integer,
      sym_float,
      sym_boolean,
  [8970] = 5,
    ACTIONS(985), 1,
      anon_sym_type,
    ACTIONS(987), 1,
      anon_sym_effect,
    ACTIONS(989), 1,
      anon_sym_extern,
    ACTIONS(991), 1,
      anon_sym_fn,
    STATE(174), 5,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
  [8990] = 4,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(85), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(993), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(995), 3,
      sym_integer,
      sym_float,
      sym_boolean,
  [9008] = 4,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(84), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(997), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(999), 3,
      sym_integer,
      sym_float,
      sym_boolean,
  [9026] = 4,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(83), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(1001), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(1003), 3,
      sym_integer,
      sym_float,
      sym_boolean,
  [9044] = 4,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(89), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(1005), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(1007), 3,
      sym_integer,
      sym_float,
      sym_boolean,
  [9062] = 4,
    ACTIONS(1009), 1,
      anon_sym_mut,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
    ACTIONS(1013), 1,
      sym_identifier,
    STATE(313), 1,
      sym_fn_param,
  [9075] = 4,
    ACTIONS(1009), 1,
      anon_sym_mut,
    ACTIONS(1013), 1,
      sym_identifier,
    ACTIONS(1015), 1,
      anon_sym_RPAREN,
    STATE(313), 1,
      sym_fn_param,
  [9088] = 4,
    ACTIONS(1009), 1,
      anon_sym_mut,
    ACTIONS(1013), 1,
      sym_identifier,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
    STATE(313), 1,
      sym_fn_param,
  [9101] = 4,
    ACTIONS(1009), 1,
      anon_sym_mut,
    ACTIONS(1013), 1,
      sym_identifier,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
    STATE(313), 1,
      sym_fn_param,
  [9114] = 4,
    ACTIONS(1009), 1,
      anon_sym_mut,
    ACTIONS(1013), 1,
      sym_identifier,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    STATE(263), 1,
      sym_fn_param,
  [9127] = 4,
    ACTIONS(1009), 1,
      anon_sym_mut,
    ACTIONS(1013), 1,
      sym_identifier,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      sym_fn_param,
  [9140] = 3,
    ACTIONS(1025), 1,
      anon_sym_COMMA,
    ACTIONS(1028), 1,
      anon_sym_RBRACE,
    STATE(254), 1,
      aux_sym_decl_struct_type_repeat1,
  [9150] = 3,
    ACTIONS(1030), 1,
      anon_sym_COMMA,
    ACTIONS(1032), 1,
      anon_sym_RPAREN,
    STATE(262), 1,
      aux_sym_decl_fn_repeat1,
  [9160] = 3,
    ACTIONS(1034), 1,
      sym_identifier,
    STATE(295), 1,
      sym_name,
    STATE(346), 1,
      sym_type_constraint,
  [9170] = 3,
    ACTIONS(1036), 1,
      anon_sym_RBRACE,
    ACTIONS(1038), 1,
      sym_identifier,
    STATE(300), 1,
      sym_struct_field,
  [9180] = 3,
    ACTIONS(1040), 1,
      anon_sym_COMMA,
    ACTIONS(1042), 1,
      anon_sym_RBRACE,
    STATE(268), 1,
      aux_sym_import_part_list_repeat1,
  [9190] = 3,
    ACTIONS(1044), 1,
      anon_sym_COMMA,
    ACTIONS(1046), 1,
      anon_sym_RPAREN,
    STATE(260), 1,
      aux_sym_decl_tuple_type_repeat1,
  [9200] = 3,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
    STATE(260), 1,
      aux_sym_decl_tuple_type_repeat1,
  [9210] = 3,
    ACTIONS(1053), 1,
      anon_sym_COMMA,
    ACTIONS(1055), 1,
      anon_sym_RBRACE,
    STATE(254), 1,
      aux_sym_decl_struct_type_repeat1,
  [9220] = 3,
    ACTIONS(1057), 1,
      anon_sym_COMMA,
    ACTIONS(1059), 1,
      anon_sym_RPAREN,
    STATE(266), 1,
      aux_sym_decl_fn_repeat1,
  [9230] = 3,
    ACTIONS(1061), 1,
      anon_sym_COMMA,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      aux_sym_decl_fn_repeat1,
  [9240] = 2,
    ACTIONS(1065), 1,
      anon_sym_as,
    ACTIONS(1067), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9248] = 3,
    ACTIONS(1069), 1,
      anon_sym_COMMA,
    ACTIONS(1071), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      aux_sym_decl_tuple_type_repeat1,
  [9258] = 3,
    ACTIONS(1073), 1,
      anon_sym_COMMA,
    ACTIONS(1076), 1,
      anon_sym_RPAREN,
    STATE(266), 1,
      aux_sym_decl_fn_repeat1,
  [9268] = 3,
    ACTIONS(1078), 1,
      anon_sym_RBRACE,
    ACTIONS(1080), 1,
      sym_identifier,
    STATE(323), 1,
      sym_import_part,
  [9278] = 3,
    ACTIONS(1082), 1,
      anon_sym_COMMA,
    ACTIONS(1085), 1,
      anon_sym_RBRACE,
    STATE(268), 1,
      aux_sym_import_part_list_repeat1,
  [9288] = 3,
    ACTIONS(1038), 1,
      sym_identifier,
    ACTIONS(1087), 1,
      anon_sym_RBRACE,
    STATE(300), 1,
      sym_struct_field,
  [9298] = 3,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
    ACTIONS(1091), 1,
      sym_identifier,
    STATE(304), 1,
      sym_type,
  [9308] = 3,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
    ACTIONS(1095), 1,
      anon_sym_RBRACE,
    STATE(258), 1,
      aux_sym_import_part_list_repeat1,
  [9318] = 3,
    ACTIONS(1097), 1,
      anon_sym_COMMA,
    ACTIONS(1099), 1,
      anon_sym_RPAREN,
    STATE(266), 1,
      aux_sym_decl_fn_repeat1,
  [9328] = 3,
    ACTIONS(1034), 1,
      sym_identifier,
    STATE(302), 1,
      sym_name,
    STATE(345), 1,
      sym_type_constraint,
  [9338] = 3,
    ACTIONS(1038), 1,
      sym_identifier,
    ACTIONS(1101), 1,
      anon_sym_RBRACE,
    STATE(300), 1,
      sym_struct_field,
  [9348] = 3,
    ACTIONS(1103), 1,
      anon_sym_COMMA,
    ACTIONS(1105), 1,
      anon_sym_RBRACE,
    STATE(254), 1,
      aux_sym_decl_struct_type_repeat1,
  [9358] = 3,
    ACTIONS(1107), 1,
      anon_sym_COMMA,
    ACTIONS(1109), 1,
      anon_sym_RBRACE,
    STATE(275), 1,
      aux_sym_decl_struct_type_repeat1,
  [9368] = 3,
    ACTIONS(291), 1,
      anon_sym_LT,
    ACTIONS(1111), 1,
      anon_sym_LBRACE,
    STATE(327), 1,
      sym_type_parameters,
  [9378] = 3,
    ACTIONS(1091), 1,
      sym_identifier,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      sym_type,
  [9388] = 3,
    ACTIONS(1115), 1,
      anon_sym_COMMA,
    ACTIONS(1117), 1,
      anon_sym_RPAREN,
    STATE(260), 1,
      aux_sym_decl_tuple_type_repeat1,
  [9398] = 3,
    ACTIONS(1091), 1,
      sym_identifier,
    ACTIONS(1119), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      sym_type,
  [9408] = 3,
    ACTIONS(1121), 1,
      anon_sym_COMMA,
    ACTIONS(1123), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      aux_sym_decl_tuple_type_repeat1,
  [9418] = 3,
    ACTIONS(1091), 1,
      sym_identifier,
    ACTIONS(1125), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      sym_type,
  [9428] = 3,
    ACTIONS(1038), 1,
      sym_identifier,
    ACTIONS(1127), 1,
      anon_sym_RBRACE,
    STATE(300), 1,
      sym_struct_field,
  [9438] = 3,
    ACTIONS(1129), 1,
      anon_sym_COMMA,
    ACTIONS(1131), 1,
      anon_sym_RBRACE,
    STATE(261), 1,
      aux_sym_decl_struct_type_repeat1,
  [9448] = 3,
    ACTIONS(1009), 1,
      anon_sym_mut,
    ACTIONS(1013), 1,
      sym_identifier,
    STATE(313), 1,
      sym_fn_param,
  [9458] = 3,
    ACTIONS(1080), 1,
      sym_identifier,
    ACTIONS(1133), 1,
      anon_sym_RBRACE,
    STATE(323), 1,
      sym_import_part,
  [9468] = 2,
    ACTIONS(1135), 1,
      sym_identifier,
    STATE(115), 1,
      sym_type,
  [9475] = 2,
    ACTIONS(1038), 1,
      sym_identifier,
    STATE(300), 1,
      sym_struct_field,
  [9482] = 2,
    ACTIONS(1091), 1,
      sym_identifier,
    STATE(339), 1,
      sym_type,
  [9489] = 2,
    ACTIONS(1091), 1,
      sym_identifier,
    STATE(133), 1,
      sym_type,
  [9496] = 2,
    ACTIONS(1137), 1,
      anon_sym_LBRACE,
    STATE(227), 1,
      sym_import_part_list,
  [9503] = 2,
    ACTIONS(1135), 1,
      sym_identifier,
    STATE(106), 1,
      sym_type,
  [9510] = 2,
    ACTIONS(1135), 1,
      sym_identifier,
    STATE(113), 1,
      sym_type,
  [9517] = 2,
    ACTIONS(1080), 1,
      sym_identifier,
    STATE(323), 1,
      sym_import_part,
  [9524] = 2,
    ACTIONS(1139), 1,
      anon_sym_COLON,
    ACTIONS(1141), 1,
      anon_sym_GT,
  [9531] = 2,
    ACTIONS(1135), 1,
      sym_identifier,
    STATE(117), 1,
      sym_type,
  [9538] = 1,
    ACTIONS(1143), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9543] = 1,
    ACTIONS(271), 2,
      anon_sym_COLON,
      anon_sym_GT,
  [9548] = 2,
    ACTIONS(1080), 1,
      sym_identifier,
    STATE(271), 1,
      sym_import_part,
  [9555] = 1,
    ACTIONS(1145), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9560] = 2,
    ACTIONS(1135), 1,
      sym_identifier,
    STATE(108), 1,
      sym_type,
  [9567] = 2,
    ACTIONS(1139), 1,
      anon_sym_COLON,
    ACTIONS(1147), 1,
      anon_sym_GT,
  [9574] = 2,
    ACTIONS(1135), 1,
      sym_identifier,
    STATE(110), 1,
      sym_type,
  [9581] = 1,
    ACTIONS(1149), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9586] = 2,
    ACTIONS(1091), 1,
      sym_identifier,
    STATE(311), 1,
      sym_type,
  [9593] = 2,
    ACTIONS(1091), 1,
      sym_identifier,
    STATE(307), 1,
      sym_type,
  [9600] = 1,
    ACTIONS(1151), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9605] = 2,
    ACTIONS(1038), 1,
      sym_identifier,
    STATE(276), 1,
      sym_struct_field,
  [9612] = 2,
    ACTIONS(1135), 1,
      sym_identifier,
    STATE(111), 1,
      sym_type,
  [9619] = 2,
    ACTIONS(1091), 1,
      sym_identifier,
    STATE(265), 1,
      sym_type,
  [9626] = 1,
    ACTIONS(1153), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9631] = 2,
    ACTIONS(1155), 1,
      anon_sym_as,
    ACTIONS(1157), 1,
      anon_sym_COLON,
  [9638] = 1,
    ACTIONS(1159), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9643] = 2,
    ACTIONS(1135), 1,
      sym_identifier,
    STATE(107), 1,
      sym_type,
  [9650] = 2,
    ACTIONS(1091), 1,
      sym_identifier,
    STATE(297), 1,
      sym_type,
  [9657] = 2,
    ACTIONS(1161), 1,
      anon_sym_LBRACE,
    ACTIONS(1163), 1,
      anon_sym_LPAREN,
  [9664] = 2,
    ACTIONS(1135), 1,
      sym_identifier,
    STATE(105), 1,
      sym_type,
  [9671] = 2,
    ACTIONS(1091), 1,
      sym_identifier,
    STATE(304), 1,
      sym_type,
  [9678] = 2,
    ACTIONS(1135), 1,
      sym_identifier,
    STATE(109), 1,
      sym_type,
  [9685] = 2,
    ACTIONS(1091), 1,
      sym_identifier,
    STATE(281), 1,
      sym_type,
  [9692] = 1,
    ACTIONS(1165), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9697] = 2,
    ACTIONS(1038), 1,
      sym_identifier,
    STATE(284), 1,
      sym_struct_field,
  [9704] = 1,
    ACTIONS(1167), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9709] = 1,
    ACTIONS(1169), 1,
      anon_sym_LPAREN,
  [9713] = 1,
    ACTIONS(1171), 1,
      ts_builtin_sym_end,
  [9717] = 1,
    ACTIONS(1173), 1,
      anon_sym_RBRACE,
  [9721] = 1,
    ACTIONS(1175), 1,
      anon_sym_LBRACE,
  [9725] = 1,
    ACTIONS(1177), 1,
      sym_identifier,
  [9729] = 1,
    ACTIONS(1179), 1,
      sym_identifier,
  [9733] = 1,
    ACTIONS(1181), 1,
      anon_sym_RBRACE,
  [9737] = 1,
    ACTIONS(1183), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [9741] = 1,
    ACTIONS(1185), 1,
      sym_identifier,
  [9745] = 1,
    ACTIONS(1187), 1,
      sym_identifier,
  [9749] = 1,
    ACTIONS(1189), 1,
      anon_sym_fn,
  [9753] = 1,
    ACTIONS(1191), 1,
      sym_escape_hatch_source,
  [9757] = 1,
    ACTIONS(1193), 1,
      anon_sym_LPAREN,
  [9761] = 1,
    ACTIONS(1195), 1,
      anon_sym_COLON,
  [9765] = 1,
    ACTIONS(1197), 1,
      sym_identifier,
  [9769] = 1,
    ACTIONS(1199), 1,
      anon_sym_GT,
  [9773] = 1,
    ACTIONS(1201), 1,
      sym_identifier,
  [9777] = 1,
    ACTIONS(1203), 1,
      anon_sym_COLON,
  [9781] = 1,
    ACTIONS(1205), 1,
      sym_string,
  [9785] = 1,
    ACTIONS(1207), 1,
      anon_sym_COLON,
  [9789] = 1,
    ACTIONS(1209), 1,
      sym_identifier,
  [9793] = 1,
    ACTIONS(1147), 1,
      anon_sym_GT,
  [9797] = 1,
    ACTIONS(1141), 1,
      anon_sym_GT,
  [9801] = 1,
    ACTIONS(1211), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 61,
  [SMALL_STATE(4)] = 122,
  [SMALL_STATE(5)] = 183,
  [SMALL_STATE(6)] = 244,
  [SMALL_STATE(7)] = 305,
  [SMALL_STATE(8)] = 366,
  [SMALL_STATE(9)] = 427,
  [SMALL_STATE(10)] = 488,
  [SMALL_STATE(11)] = 549,
  [SMALL_STATE(12)] = 610,
  [SMALL_STATE(13)] = 671,
  [SMALL_STATE(14)] = 732,
  [SMALL_STATE(15)] = 791,
  [SMALL_STATE(16)] = 850,
  [SMALL_STATE(17)] = 911,
  [SMALL_STATE(18)] = 972,
  [SMALL_STATE(19)] = 1033,
  [SMALL_STATE(20)] = 1094,
  [SMALL_STATE(21)] = 1155,
  [SMALL_STATE(22)] = 1216,
  [SMALL_STATE(23)] = 1277,
  [SMALL_STATE(24)] = 1338,
  [SMALL_STATE(25)] = 1399,
  [SMALL_STATE(26)] = 1460,
  [SMALL_STATE(27)] = 1521,
  [SMALL_STATE(28)] = 1580,
  [SMALL_STATE(29)] = 1641,
  [SMALL_STATE(30)] = 1702,
  [SMALL_STATE(31)] = 1763,
  [SMALL_STATE(32)] = 1824,
  [SMALL_STATE(33)] = 1885,
  [SMALL_STATE(34)] = 1946,
  [SMALL_STATE(35)] = 2007,
  [SMALL_STATE(36)] = 2068,
  [SMALL_STATE(37)] = 2129,
  [SMALL_STATE(38)] = 2190,
  [SMALL_STATE(39)] = 2251,
  [SMALL_STATE(40)] = 2312,
  [SMALL_STATE(41)] = 2373,
  [SMALL_STATE(42)] = 2434,
  [SMALL_STATE(43)] = 2495,
  [SMALL_STATE(44)] = 2556,
  [SMALL_STATE(45)] = 2617,
  [SMALL_STATE(46)] = 2678,
  [SMALL_STATE(47)] = 2739,
  [SMALL_STATE(48)] = 2800,
  [SMALL_STATE(49)] = 2861,
  [SMALL_STATE(50)] = 2922,
  [SMALL_STATE(51)] = 2983,
  [SMALL_STATE(52)] = 3044,
  [SMALL_STATE(53)] = 3105,
  [SMALL_STATE(54)] = 3166,
  [SMALL_STATE(55)] = 3227,
  [SMALL_STATE(56)] = 3288,
  [SMALL_STATE(57)] = 3349,
  [SMALL_STATE(58)] = 3410,
  [SMALL_STATE(59)] = 3471,
  [SMALL_STATE(60)] = 3532,
  [SMALL_STATE(61)] = 3593,
  [SMALL_STATE(62)] = 3654,
  [SMALL_STATE(63)] = 3715,
  [SMALL_STATE(64)] = 3776,
  [SMALL_STATE(65)] = 3837,
  [SMALL_STATE(66)] = 3898,
  [SMALL_STATE(67)] = 3959,
  [SMALL_STATE(68)] = 4020,
  [SMALL_STATE(69)] = 4081,
  [SMALL_STATE(70)] = 4142,
  [SMALL_STATE(71)] = 4203,
  [SMALL_STATE(72)] = 4264,
  [SMALL_STATE(73)] = 4325,
  [SMALL_STATE(74)] = 4386,
  [SMALL_STATE(75)] = 4447,
  [SMALL_STATE(76)] = 4508,
  [SMALL_STATE(77)] = 4569,
  [SMALL_STATE(78)] = 4630,
  [SMALL_STATE(79)] = 4691,
  [SMALL_STATE(80)] = 4752,
  [SMALL_STATE(81)] = 4813,
  [SMALL_STATE(82)] = 4872,
  [SMALL_STATE(83)] = 4933,
  [SMALL_STATE(84)] = 4966,
  [SMALL_STATE(85)] = 5001,
  [SMALL_STATE(86)] = 5038,
  [SMALL_STATE(87)] = 5079,
  [SMALL_STATE(88)] = 5112,
  [SMALL_STATE(89)] = 5153,
  [SMALL_STATE(90)] = 5194,
  [SMALL_STATE(91)] = 5223,
  [SMALL_STATE(92)] = 5256,
  [SMALL_STATE(93)] = 5283,
  [SMALL_STATE(94)] = 5318,
  [SMALL_STATE(95)] = 5349,
  [SMALL_STATE(96)] = 5381,
  [SMALL_STATE(97)] = 5413,
  [SMALL_STATE(98)] = 5445,
  [SMALL_STATE(99)] = 5477,
  [SMALL_STATE(100)] = 5509,
  [SMALL_STATE(101)] = 5541,
  [SMALL_STATE(102)] = 5573,
  [SMALL_STATE(103)] = 5605,
  [SMALL_STATE(104)] = 5637,
  [SMALL_STATE(105)] = 5669,
  [SMALL_STATE(106)] = 5698,
  [SMALL_STATE(107)] = 5727,
  [SMALL_STATE(108)] = 5756,
  [SMALL_STATE(109)] = 5785,
  [SMALL_STATE(110)] = 5814,
  [SMALL_STATE(111)] = 5843,
  [SMALL_STATE(112)] = 5872,
  [SMALL_STATE(113)] = 5901,
  [SMALL_STATE(114)] = 5930,
  [SMALL_STATE(115)] = 5955,
  [SMALL_STATE(116)] = 5984,
  [SMALL_STATE(117)] = 6009,
  [SMALL_STATE(118)] = 6038,
  [SMALL_STATE(119)] = 6064,
  [SMALL_STATE(120)] = 6090,
  [SMALL_STATE(121)] = 6116,
  [SMALL_STATE(122)] = 6142,
  [SMALL_STATE(123)] = 6168,
  [SMALL_STATE(124)] = 6194,
  [SMALL_STATE(125)] = 6220,
  [SMALL_STATE(126)] = 6246,
  [SMALL_STATE(127)] = 6272,
  [SMALL_STATE(128)] = 6298,
  [SMALL_STATE(129)] = 6324,
  [SMALL_STATE(130)] = 6350,
  [SMALL_STATE(131)] = 6376,
  [SMALL_STATE(132)] = 6402,
  [SMALL_STATE(133)] = 6428,
  [SMALL_STATE(134)] = 6454,
  [SMALL_STATE(135)] = 6480,
  [SMALL_STATE(136)] = 6506,
  [SMALL_STATE(137)] = 6532,
  [SMALL_STATE(138)] = 6558,
  [SMALL_STATE(139)] = 6584,
  [SMALL_STATE(140)] = 6607,
  [SMALL_STATE(141)] = 6630,
  [SMALL_STATE(142)] = 6653,
  [SMALL_STATE(143)] = 6676,
  [SMALL_STATE(144)] = 6699,
  [SMALL_STATE(145)] = 6722,
  [SMALL_STATE(146)] = 6745,
  [SMALL_STATE(147)] = 6768,
  [SMALL_STATE(148)] = 6791,
  [SMALL_STATE(149)] = 6814,
  [SMALL_STATE(150)] = 6837,
  [SMALL_STATE(151)] = 6860,
  [SMALL_STATE(152)] = 6883,
  [SMALL_STATE(153)] = 6906,
  [SMALL_STATE(154)] = 6929,
  [SMALL_STATE(155)] = 6952,
  [SMALL_STATE(156)] = 6975,
  [SMALL_STATE(157)] = 6998,
  [SMALL_STATE(158)] = 7021,
  [SMALL_STATE(159)] = 7044,
  [SMALL_STATE(160)] = 7067,
  [SMALL_STATE(161)] = 7090,
  [SMALL_STATE(162)] = 7113,
  [SMALL_STATE(163)] = 7136,
  [SMALL_STATE(164)] = 7159,
  [SMALL_STATE(165)] = 7182,
  [SMALL_STATE(166)] = 7205,
  [SMALL_STATE(167)] = 7228,
  [SMALL_STATE(168)] = 7251,
  [SMALL_STATE(169)] = 7274,
  [SMALL_STATE(170)] = 7297,
  [SMALL_STATE(171)] = 7320,
  [SMALL_STATE(172)] = 7343,
  [SMALL_STATE(173)] = 7366,
  [SMALL_STATE(174)] = 7389,
  [SMALL_STATE(175)] = 7412,
  [SMALL_STATE(176)] = 7435,
  [SMALL_STATE(177)] = 7458,
  [SMALL_STATE(178)] = 7481,
  [SMALL_STATE(179)] = 7504,
  [SMALL_STATE(180)] = 7527,
  [SMALL_STATE(181)] = 7550,
  [SMALL_STATE(182)] = 7573,
  [SMALL_STATE(183)] = 7596,
  [SMALL_STATE(184)] = 7619,
  [SMALL_STATE(185)] = 7642,
  [SMALL_STATE(186)] = 7665,
  [SMALL_STATE(187)] = 7688,
  [SMALL_STATE(188)] = 7711,
  [SMALL_STATE(189)] = 7734,
  [SMALL_STATE(190)] = 7757,
  [SMALL_STATE(191)] = 7780,
  [SMALL_STATE(192)] = 7803,
  [SMALL_STATE(193)] = 7826,
  [SMALL_STATE(194)] = 7849,
  [SMALL_STATE(195)] = 7872,
  [SMALL_STATE(196)] = 7895,
  [SMALL_STATE(197)] = 7918,
  [SMALL_STATE(198)] = 7941,
  [SMALL_STATE(199)] = 7964,
  [SMALL_STATE(200)] = 7987,
  [SMALL_STATE(201)] = 8010,
  [SMALL_STATE(202)] = 8033,
  [SMALL_STATE(203)] = 8056,
  [SMALL_STATE(204)] = 8079,
  [SMALL_STATE(205)] = 8102,
  [SMALL_STATE(206)] = 8125,
  [SMALL_STATE(207)] = 8148,
  [SMALL_STATE(208)] = 8171,
  [SMALL_STATE(209)] = 8194,
  [SMALL_STATE(210)] = 8217,
  [SMALL_STATE(211)] = 8240,
  [SMALL_STATE(212)] = 8263,
  [SMALL_STATE(213)] = 8286,
  [SMALL_STATE(214)] = 8309,
  [SMALL_STATE(215)] = 8332,
  [SMALL_STATE(216)] = 8355,
  [SMALL_STATE(217)] = 8378,
  [SMALL_STATE(218)] = 8401,
  [SMALL_STATE(219)] = 8424,
  [SMALL_STATE(220)] = 8447,
  [SMALL_STATE(221)] = 8470,
  [SMALL_STATE(222)] = 8493,
  [SMALL_STATE(223)] = 8516,
  [SMALL_STATE(224)] = 8539,
  [SMALL_STATE(225)] = 8562,
  [SMALL_STATE(226)] = 8585,
  [SMALL_STATE(227)] = 8608,
  [SMALL_STATE(228)] = 8631,
  [SMALL_STATE(229)] = 8654,
  [SMALL_STATE(230)] = 8677,
  [SMALL_STATE(231)] = 8700,
  [SMALL_STATE(232)] = 8723,
  [SMALL_STATE(233)] = 8746,
  [SMALL_STATE(234)] = 8769,
  [SMALL_STATE(235)] = 8792,
  [SMALL_STATE(236)] = 8815,
  [SMALL_STATE(237)] = 8838,
  [SMALL_STATE(238)] = 8861,
  [SMALL_STATE(239)] = 8884,
  [SMALL_STATE(240)] = 8907,
  [SMALL_STATE(241)] = 8930,
  [SMALL_STATE(242)] = 8952,
  [SMALL_STATE(243)] = 8970,
  [SMALL_STATE(244)] = 8990,
  [SMALL_STATE(245)] = 9008,
  [SMALL_STATE(246)] = 9026,
  [SMALL_STATE(247)] = 9044,
  [SMALL_STATE(248)] = 9062,
  [SMALL_STATE(249)] = 9075,
  [SMALL_STATE(250)] = 9088,
  [SMALL_STATE(251)] = 9101,
  [SMALL_STATE(252)] = 9114,
  [SMALL_STATE(253)] = 9127,
  [SMALL_STATE(254)] = 9140,
  [SMALL_STATE(255)] = 9150,
  [SMALL_STATE(256)] = 9160,
  [SMALL_STATE(257)] = 9170,
  [SMALL_STATE(258)] = 9180,
  [SMALL_STATE(259)] = 9190,
  [SMALL_STATE(260)] = 9200,
  [SMALL_STATE(261)] = 9210,
  [SMALL_STATE(262)] = 9220,
  [SMALL_STATE(263)] = 9230,
  [SMALL_STATE(264)] = 9240,
  [SMALL_STATE(265)] = 9248,
  [SMALL_STATE(266)] = 9258,
  [SMALL_STATE(267)] = 9268,
  [SMALL_STATE(268)] = 9278,
  [SMALL_STATE(269)] = 9288,
  [SMALL_STATE(270)] = 9298,
  [SMALL_STATE(271)] = 9308,
  [SMALL_STATE(272)] = 9318,
  [SMALL_STATE(273)] = 9328,
  [SMALL_STATE(274)] = 9338,
  [SMALL_STATE(275)] = 9348,
  [SMALL_STATE(276)] = 9358,
  [SMALL_STATE(277)] = 9368,
  [SMALL_STATE(278)] = 9378,
  [SMALL_STATE(279)] = 9388,
  [SMALL_STATE(280)] = 9398,
  [SMALL_STATE(281)] = 9408,
  [SMALL_STATE(282)] = 9418,
  [SMALL_STATE(283)] = 9428,
  [SMALL_STATE(284)] = 9438,
  [SMALL_STATE(285)] = 9448,
  [SMALL_STATE(286)] = 9458,
  [SMALL_STATE(287)] = 9468,
  [SMALL_STATE(288)] = 9475,
  [SMALL_STATE(289)] = 9482,
  [SMALL_STATE(290)] = 9489,
  [SMALL_STATE(291)] = 9496,
  [SMALL_STATE(292)] = 9503,
  [SMALL_STATE(293)] = 9510,
  [SMALL_STATE(294)] = 9517,
  [SMALL_STATE(295)] = 9524,
  [SMALL_STATE(296)] = 9531,
  [SMALL_STATE(297)] = 9538,
  [SMALL_STATE(298)] = 9543,
  [SMALL_STATE(299)] = 9548,
  [SMALL_STATE(300)] = 9555,
  [SMALL_STATE(301)] = 9560,
  [SMALL_STATE(302)] = 9567,
  [SMALL_STATE(303)] = 9574,
  [SMALL_STATE(304)] = 9581,
  [SMALL_STATE(305)] = 9586,
  [SMALL_STATE(306)] = 9593,
  [SMALL_STATE(307)] = 9600,
  [SMALL_STATE(308)] = 9605,
  [SMALL_STATE(309)] = 9612,
  [SMALL_STATE(310)] = 9619,
  [SMALL_STATE(311)] = 9626,
  [SMALL_STATE(312)] = 9631,
  [SMALL_STATE(313)] = 9638,
  [SMALL_STATE(314)] = 9643,
  [SMALL_STATE(315)] = 9650,
  [SMALL_STATE(316)] = 9657,
  [SMALL_STATE(317)] = 9664,
  [SMALL_STATE(318)] = 9671,
  [SMALL_STATE(319)] = 9678,
  [SMALL_STATE(320)] = 9685,
  [SMALL_STATE(321)] = 9692,
  [SMALL_STATE(322)] = 9697,
  [SMALL_STATE(323)] = 9704,
  [SMALL_STATE(324)] = 9709,
  [SMALL_STATE(325)] = 9713,
  [SMALL_STATE(326)] = 9717,
  [SMALL_STATE(327)] = 9721,
  [SMALL_STATE(328)] = 9725,
  [SMALL_STATE(329)] = 9729,
  [SMALL_STATE(330)] = 9733,
  [SMALL_STATE(331)] = 9737,
  [SMALL_STATE(332)] = 9741,
  [SMALL_STATE(333)] = 9745,
  [SMALL_STATE(334)] = 9749,
  [SMALL_STATE(335)] = 9753,
  [SMALL_STATE(336)] = 9757,
  [SMALL_STATE(337)] = 9761,
  [SMALL_STATE(338)] = 9765,
  [SMALL_STATE(339)] = 9769,
  [SMALL_STATE(340)] = 9773,
  [SMALL_STATE(341)] = 9777,
  [SMALL_STATE(342)] = 9781,
  [SMALL_STATE(343)] = 9785,
  [SMALL_STATE(344)] = 9789,
  [SMALL_STATE(345)] = 9793,
  [SMALL_STATE(346)] = 9797,
  [SMALL_STATE(347)] = 9801,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(335),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(342),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(243),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(332),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(328),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(340),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(334),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(329),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(88),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(88),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(87),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_fn_repeat2, 2, .production_id = 37), SHIFT_REPEAT(335),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_decl_fn_repeat2, 2, .production_id = 37), SHIFT_REPEAT(342),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_fn_repeat2, 2, .production_id = 37),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_decl_fn_repeat2, 2, .production_id = 37), SHIFT_REPEAT(243),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_decl_fn_repeat2, 2, .production_id = 37), SHIFT_REPEAT(332),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_decl_fn_repeat2, 2, .production_id = 37), SHIFT_REPEAT(328),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_decl_fn_repeat2, 2, .production_id = 37), SHIFT_REPEAT(340),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_decl_fn_repeat2, 2, .production_id = 37), SHIFT_REPEAT(334),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_decl_fn_repeat2, 2, .production_id = 37), SHIFT_REPEAT(329),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_fn_repeat2, 2, .production_id = 37), SHIFT_REPEAT(88),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_decl_fn_repeat2, 2, .production_id = 37), SHIFT_REPEAT(88),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_decl_fn_repeat2, 2, .production_id = 37), SHIFT_REPEAT(87),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3, .production_id = 5),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3, .production_id = 5),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_statement, 4, .production_id = 9),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_statement, 4, .production_id = 9),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_statement, 6, .production_id = 16),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_statement, 6, .production_id = 16),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3, .production_id = 12),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3, .production_id = 12),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_unit_type, 2, .production_id = 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_unit_type, 2, .production_id = 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 7, .production_id = 27),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 7, .production_id = 27),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 7, .production_id = 34),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 7, .production_id = 34),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 5, .production_id = 15),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 5, .production_id = 15),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 6, .production_id = 15),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 6, .production_id = 15),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 4, .production_id = 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 4, .production_id = 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 5, .production_id = 14),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 5, .production_id = 14),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 8, .production_id = 34),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 8, .production_id = 34),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 7, .production_id = 23),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 7, .production_id = 23),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 6, .production_id = 23),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 6, .production_id = 23),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 6, .production_id = 27),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 6, .production_id = 27),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 7, .production_id = 38),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 7, .production_id = 38),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 10, .production_id = 55),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 10, .production_id = 55),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 9, .production_id = 51),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 9, .production_id = 51),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 7, .production_id = 33),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 7, .production_id = 33),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 9, .production_id = 48),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 9, .production_id = 48),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 8, .production_id = 42),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 8, .production_id = 42),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 8, .production_id = 40),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 8, .production_id = 40),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_statement, 2, .production_id = 2),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_statement, 2, .production_id = 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 9, .production_id = 46),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 9, .production_id = 46),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 6, .production_id = 25),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 6, .production_id = 25),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 8, .production_id = 44),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 8, .production_id = 44),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 9, .production_id = 44),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 9, .production_id = 44),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 7, .production_id = 25),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 7, .production_id = 25),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 11, .production_id = 55),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 11, .production_id = 55),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 8, .production_id = 23),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 8, .production_id = 23),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 8, .production_id = 27),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 8, .production_id = 27),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 5, .production_id = 3),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 5, .production_id = 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 6, .production_id = 14),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 6, .production_id = 14),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 7, .production_id = 15),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 7, .production_id = 15),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 8, .production_id = 38),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 8, .production_id = 38),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 9, .production_id = 40),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 9, .production_id = 40),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 9, .production_id = 34),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 9, .production_id = 34),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 9, .production_id = 42),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 9, .production_id = 42),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_statement, 4, .production_id = 8),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_statement, 4, .production_id = 8),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 10, .production_id = 46),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 10, .production_id = 46),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 8, .production_id = 33),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 8, .production_id = 33),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 10, .production_id = 48),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 10, .production_id = 48),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 10, .production_id = 51),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 10, .production_id = 51),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 10, .production_id = 44),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 10, .production_id = 44),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 11, .production_id = 40),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 11, .production_id = 40),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 6, .production_id = 22),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 6, .production_id = 22),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 14, .production_id = 80),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 14, .production_id = 80),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 13, .production_id = 79),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 13, .production_id = 79),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 13, .production_id = 78),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 13, .production_id = 78),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 13, .production_id = 55),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 13, .production_id = 55),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 13, .production_id = 77),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 13, .production_id = 77),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 6, .production_id = 3),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 6, .production_id = 3),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 13, .production_id = 76),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 13, .production_id = 76),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 12, .production_id = 75),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 12, .production_id = 75),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 12, .production_id = 51),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 12, .production_id = 51),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 12, .production_id = 74),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 12, .production_id = 74),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 12, .production_id = 73),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 12, .production_id = 73),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 12, .production_id = 48),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 12, .production_id = 48),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 12, .production_id = 72),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 12, .production_id = 72),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_part_list, 4, .production_id = 12),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_part_list, 4, .production_id = 12),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 12, .production_id = 71),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 12, .production_id = 71),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 12, .production_id = 55),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 12, .production_id = 55),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_part_list, 4, .production_id = 30),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_part_list, 4, .production_id = 30),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 12, .production_id = 70),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 12, .production_id = 70),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 7, .production_id = 19),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 7, .production_id = 19),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 12, .production_id = 46),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 12, .production_id = 46),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 7, .production_id = 19),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 7, .production_id = 19),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 12, .production_id = 69),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 12, .production_id = 69),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 7, .production_id = 22),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 7, .production_id = 22),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 11, .production_id = 44),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 11, .production_id = 44),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 7, .production_id = 32),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 7, .production_id = 32),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 7, .production_id = 22),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 7, .production_id = 22),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 11, .production_id = 68),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 11, .production_id = 68),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 7, .production_id = 32),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 7, .production_id = 32),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 7, .production_id = 14),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 7, .production_id = 14),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 11, .production_id = 67),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 11, .production_id = 67),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 11, .production_id = 51),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 11, .production_id = 51),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 11, .production_id = 66),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 11, .production_id = 66),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 2, .production_id = 1),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 2, .production_id = 1),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 11, .production_id = 42),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 11, .production_id = 42),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 11, .production_id = 65),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 11, .production_id = 65),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 7, .production_id = 36),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 7, .production_id = 36),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 11, .production_id = 64),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 11, .production_id = 64),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 7, .production_id = 3),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 7, .production_id = 3),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 6, .production_id = 11),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 6, .production_id = 11),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 11, .production_id = 48),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 11, .production_id = 48),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 11, .production_id = 34),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 11, .production_id = 34),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 11, .production_id = 63),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 11, .production_id = 63),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 11, .production_id = 62),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 11, .production_id = 62),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 11, .production_id = 46),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 11, .production_id = 46),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_part_list, 5, .production_id = 30),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_part_list, 5, .production_id = 30),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 11, .production_id = 61),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 11, .production_id = 61),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 8, .production_id = 32),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 8, .production_id = 32),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 8, .production_id = 32),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 8, .production_id = 32),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 8, .production_id = 39),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 8, .production_id = 39),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 8, .production_id = 14),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 8, .production_id = 14),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_effect, 5, .production_id = 13),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_effect, 5, .production_id = 13),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 10, .production_id = 60),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 10, .production_id = 60),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_hatch, 3, .production_id = 4),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_hatch, 3, .production_id = 4),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 10, .production_id = 27),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 10, .production_id = 27),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 10, .production_id = 38),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 10, .production_id = 38),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 8, .production_id = 25),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 8, .production_id = 25),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 10, .production_id = 59),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 10, .production_id = 59),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 5, .production_id = 11),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 5, .production_id = 11),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 8, .production_id = 41),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 8, .production_id = 41),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 8, .production_id = 15),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 8, .production_id = 15),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 10, .production_id = 58),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 10, .production_id = 58),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 10, .production_id = 42),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 10, .production_id = 42),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 8, .production_id = 43),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 8, .production_id = 43),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 5, .production_id = 11),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 5, .production_id = 11),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 10, .production_id = 57),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 10, .production_id = 57),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 10, .production_id = 34),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 10, .production_id = 34),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 6, .production_id = 19),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 6, .production_id = 19),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 10, .production_id = 56),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 10, .production_id = 56),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 9, .production_id = 33),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 9, .production_id = 33),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 10, .production_id = 40),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 10, .production_id = 40),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 9, .production_id = 45),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 9, .production_id = 45),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 9, .production_id = 23),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 9, .production_id = 23),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, .production_id = 6),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4, .production_id = 6),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_part_list, 3, .production_id = 12),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_part_list, 3, .production_id = 12),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 10, .production_id = 23),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 10, .production_id = 23),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 9, .production_id = 47),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 9, .production_id = 47),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 6, .production_id = 11),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 6, .production_id = 11),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 6, .production_id = 22),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 6, .production_id = 22),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 10, .production_id = 54),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 10, .production_id = 54),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, .production_id = 7),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4, .production_id = 7),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 10, .production_id = 33),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 10, .production_id = 33),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 10, .production_id = 53),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 10, .production_id = 53),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 9, .production_id = 27),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 9, .production_id = 27),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 9, .production_id = 52),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 9, .production_id = 52),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 9, .production_id = 49),
  [951] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 9, .production_id = 49),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 9, .production_id = 25),
  [955] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 9, .production_id = 25),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_effect, 4, .production_id = 3),
  [959] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_effect, 4, .production_id = 3),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 9, .production_id = 50),
  [963] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 9, .production_id = 50),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 6, .production_id = 19),
  [967] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 6, .production_id = 19),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 9, .production_id = 15),
  [971] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 9, .production_id = 15),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 9, .production_id = 38),
  [975] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 9, .production_id = 38),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_fn_repeat2, 1, .production_id = 24),
  [979] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_fn_repeat2, 1, .production_id = 24),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1025] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_struct_type_repeat1, 2, .production_id = 20), SHIFT_REPEAT(288),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_struct_type_repeat1, 2, .production_id = 20),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1048] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_tuple_type_repeat1, 2, .production_id = 20), SHIFT_REPEAT(318),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_tuple_type_repeat1, 2, .production_id = 20),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_part, 1, .production_id = 10),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1073] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_fn_repeat1, 2, .production_id = 28), SHIFT_REPEAT(285),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_fn_repeat1, 2, .production_id = 28),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1082] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_part_list_repeat1, 2, .production_id = 31), SHIFT_REPEAT(294),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_part_list_repeat1, 2, .production_id = 31),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3, .production_id = 17),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_struct_type_repeat1, 2, .production_id = 18),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_tuple_type_repeat1, 2, .production_id = 18),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_param, 4, .production_id = 35),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_param, 3, .production_id = 17),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_fn_repeat1, 2, .production_id = 26),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_part, 3, .production_id = 29),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_part_list_repeat1, 2, .production_id = 12),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1171] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constraint, 3, .production_id = 21),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
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
