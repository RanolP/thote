#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 217
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 24
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 41

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
  sym_fn_signature = 54,
  sym_fn_param = 55,
  sym_expression_statement = 56,
  sym_binary_operation = 57,
  sym_name = 58,
  sym_type = 59,
  sym_type_parameters = 60,
  sym_type_constraint = 61,
  aux_sym_program_repeat1 = 62,
  aux_sym_import_part_list_repeat1 = 63,
  aux_sym_decl_tuple_type_repeat1 = 64,
  aux_sym_decl_struct_type_repeat1 = 65,
  aux_sym_decl_effect_repeat1 = 66,
  aux_sym_decl_fn_repeat1 = 67,
  aux_sym_fn_signature_repeat1 = 68,
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
  [sym_fn_signature] = "fn_signature",
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
  [aux_sym_decl_effect_repeat1] = "decl_effect_repeat1",
  [aux_sym_decl_fn_repeat1] = "decl_fn_repeat1",
  [aux_sym_fn_signature_repeat1] = "fn_signature_repeat1",
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
  [sym_fn_signature] = sym_fn_signature,
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
  [aux_sym_decl_effect_repeat1] = aux_sym_decl_effect_repeat1,
  [aux_sym_decl_fn_repeat1] = aux_sym_decl_fn_repeat1,
  [aux_sym_fn_signature_repeat1] = aux_sym_fn_signature_repeat1,
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
  [aux_sym_decl_effect_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decl_fn_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fn_signature_repeat1] = {
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
  field_signature = 19,
  field_source = 20,
  field_type = 21,
  field_type_params = 22,
  field_value = 23,
  field_whole = 24,
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
  [field_signature] = "signature",
  [field_source] = "source",
  [field_type] = "type",
  [field_type_params] = "type_params",
  [field_value] = "value",
  [field_whole] = "whole",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 3},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 3},
  [12] = {.index = 19, .length = 3},
  [13] = {.index = 22, .length = 2},
  [14] = {.index = 24, .length = 2},
  [15] = {.index = 26, .length = 1},
  [16] = {.index = 27, .length = 2},
  [17] = {.index = 29, .length = 1},
  [18] = {.index = 30, .length = 2},
  [19] = {.index = 32, .length = 3},
  [20] = {.index = 35, .length = 2},
  [21] = {.index = 37, .length = 4},
  [22] = {.index = 41, .length = 2},
  [23] = {.index = 43, .length = 1},
  [24] = {.index = 44, .length = 3},
  [25] = {.index = 47, .length = 2},
  [26] = {.index = 49, .length = 2},
  [27] = {.index = 51, .length = 3},
  [28] = {.index = 54, .length = 2},
  [29] = {.index = 56, .length = 1},
  [30] = {.index = 57, .length = 3},
  [31] = {.index = 60, .length = 2},
  [32] = {.index = 62, .length = 2},
  [33] = {.index = 64, .length = 2},
  [34] = {.index = 66, .length = 2},
  [35] = {.index = 68, .length = 4},
  [36] = {.index = 72, .length = 3},
  [37] = {.index = 75, .length = 3},
  [38] = {.index = 78, .length = 3},
  [39] = {.index = 81, .length = 4},
  [40] = {.index = 85, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_signature, 0},
  [1] =
    {field_declaration, 1},
  [2] =
    {field_kind, 0},
    {field_name, 1},
  [4] =
    {field_name, 1},
  [5] =
    {field_extern, 0},
    {field_signature, 1},
  [7] =
    {field_source, 1},
  [8] =
    {field_lhs, 0},
    {field_operator, 1},
    {field_rhs, 2},
  [11] =
    {field_body, 0},
  [12] =
    {field_path, 1},
    {field_whole, 3},
  [14] =
    {field_part, 3},
    {field_path, 1},
  [16] =
    {field_kind, 0},
    {field_name, 1},
    {field_type, 3},
  [19] =
    {field_kind, 0},
    {field_name, 1},
    {field_value, 3},
  [22] =
    {field_body, 2, .inherited = true},
    {field_signature, 0},
  [24] =
    {field_body, 0, .inherited = true},
    {field_body, 1, .inherited = true},
  [26] =
    {field_original, 0},
  [27] =
    {field_fields, 3},
    {field_name, 1},
  [29] =
    {field_list, 1},
  [30] =
    {field_name, 1},
    {field_type_params, 2},
  [32] =
    {field_body, 3, .inherited = true},
    {field_extern, 0},
    {field_signature, 1},
  [35] =
    {field_name, 1},
    {field_params, 3},
  [37] =
    {field_kind, 0},
    {field_name, 1},
    {field_type, 3},
    {field_value, 5},
  [41] =
    {field_name, 0},
    {field_type, 2},
  [43] =
    {field_fields, 1},
  [44] =
    {field_fields, 3},
    {field_fields, 4, .inherited = true},
    {field_name, 1},
  [47] =
    {field_fields, 0, .inherited = true},
    {field_fields, 1, .inherited = true},
  [49] =
    {field_constraint, 2},
    {field_name, 0},
  [51] =
    {field_fields, 4},
    {field_name, 1},
    {field_type_params, 2},
  [54] =
    {field_name, 1},
    {field_return, 5},
  [56] =
    {field_params, 1},
  [57] =
    {field_name, 1},
    {field_params, 3},
    {field_params, 4, .inherited = true},
  [60] =
    {field_params, 0, .inherited = true},
    {field_params, 1, .inherited = true},
  [62] =
    {field_alias, 2},
    {field_original, 0},
  [64] =
    {field_list, 1},
    {field_list, 2, .inherited = true},
  [66] =
    {field_list, 0, .inherited = true},
    {field_list, 1, .inherited = true},
  [68] =
    {field_fields, 4},
    {field_fields, 5, .inherited = true},
    {field_name, 1},
    {field_type_params, 2},
  [72] =
    {field_mut, 0},
    {field_name, 1},
    {field_type, 3},
  [75] =
    {field_name, 1},
    {field_params, 3},
    {field_return, 6},
  [78] =
    {field_name, 1},
    {field_params, 3},
    {field_return, 7},
  [81] =
    {field_name, 1},
    {field_params, 3},
    {field_params, 4, .inherited = true},
    {field_return, 7},
  [85] =
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
  [20] = 18,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 22,
  [30] = 30,
  [31] = 19,
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
  [88] = 18,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 24,
  [93] = 27,
  [94] = 26,
  [95] = 95,
  [96] = 25,
  [97] = 97,
  [98] = 23,
  [99] = 95,
  [100] = 100,
  [101] = 101,
  [102] = 101,
  [103] = 97,
  [104] = 104,
  [105] = 105,
  [106] = 33,
  [107] = 107,
  [108] = 108,
  [109] = 107,
  [110] = 110,
  [111] = 111,
  [112] = 108,
  [113] = 113,
  [114] = 19,
  [115] = 115,
  [116] = 116,
  [117] = 22,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 30,
  [126] = 32,
  [127] = 127,
  [128] = 28,
  [129] = 34,
  [130] = 113,
  [131] = 131,
  [132] = 132,
  [133] = 107,
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
  [146] = 43,
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
  [159] = 156,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 152,
  [164] = 164,
  [165] = 157,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 151,
  [171] = 171,
  [172] = 13,
  [173] = 155,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 36,
  [178] = 178,
  [179] = 166,
  [180] = 180,
  [181] = 155,
  [182] = 47,
  [183] = 48,
  [184] = 37,
  [185] = 185,
  [186] = 186,
  [187] = 45,
  [188] = 188,
  [189] = 39,
  [190] = 42,
  [191] = 191,
  [192] = 44,
  [193] = 193,
  [194] = 46,
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
  [207] = 196,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 196,
  [213] = 210,
  [214] = 214,
  [215] = 215,
  [216] = 206,
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
      if (eof) ADVANCE(64);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '_') ADVANCE(164);
      if (lookahead == '`') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == 'w') ADVANCE(176);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(65);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 't') ADVANCE(150);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != 133 &&
          lookahead != 8232 &&
          lookahead != 8233) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == 'm') ADVANCE(160);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '}') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 6:
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(163);
      if (lookahead == '}') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == 'w') ADVANCE(34);
      if (lookahead == '}') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(98);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'J') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'P') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'S') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'S') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == '`') ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == '`') ADVANCE(66);
      END_STATE();
    case 23:
      if (lookahead == '`') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == '`') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == '`') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(46);
      if (lookahead == 'x') ADVANCE(57);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(3);
      END_STATE();
    case 44:
      if (lookahead == 'x') ADVANCE(115);
      END_STATE();
    case 45:
      if (lookahead == 'y') ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == '{') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == '}') ADVANCE(3);
      END_STATE();
    case 48:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 49:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(119);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(120);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 61:
      if (eof) ADVANCE(64);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(160);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 62:
      if (eof) ADVANCE(64);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(160);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 63:
      if (eof) ADVANCE(64);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(160);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == 'w') ADVANCE(139);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(63)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_escape_hatch_source);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_escape_hatch_source);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_import);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_import);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_export);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_export);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_let);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_mut);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_mut);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_type);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_effect);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_effect);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_effect);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_extern);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_extern);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_fn);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_where);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_where);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(98);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_unit_absolute_length);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_unit_relative_length);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '%') ADVANCE(116);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'E') ADVANCE(48);
      if (lookahead == '_') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'p') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '%') ADVANCE(116);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(49);
      if (lookahead == 'E') ADVANCE(48);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(50);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(55);
      if (lookahead == '_') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'p') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '%') ADVANCE(116);
      if (lookahead == 'E') ADVANCE(48);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'p') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_boolean);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_boolean);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(97);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(162);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(140);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(162);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(157);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(155);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(129);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(125);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(86);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(101);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(148);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(153);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'x') ADVANCE(145);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(131);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(136);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(154);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(147);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(94);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(151);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(152);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(143);
      if (lookahead == 't') ADVANCE(135);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(133);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(144);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(142);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == 'y') ADVANCE(146);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(161);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(158);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(159);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(134);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(132);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(79);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(81);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(91);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(77);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(71);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(156);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(132);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__word);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '_') ADVANCE(13);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'x') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(180);
      if (lookahead == 't') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(197);
      if (lookahead == 'y') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
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
  [1] = {.lex_state = 61},
  [2] = {.lex_state = 61},
  [3] = {.lex_state = 61},
  [4] = {.lex_state = 61},
  [5] = {.lex_state = 61},
  [6] = {.lex_state = 61},
  [7] = {.lex_state = 61},
  [8] = {.lex_state = 61},
  [9] = {.lex_state = 61},
  [10] = {.lex_state = 61},
  [11] = {.lex_state = 61},
  [12] = {.lex_state = 61},
  [13] = {.lex_state = 61},
  [14] = {.lex_state = 61},
  [15] = {.lex_state = 61},
  [16] = {.lex_state = 61},
  [17] = {.lex_state = 61},
  [18] = {.lex_state = 62},
  [19] = {.lex_state = 62},
  [20] = {.lex_state = 63},
  [21] = {.lex_state = 61},
  [22] = {.lex_state = 62},
  [23] = {.lex_state = 63},
  [24] = {.lex_state = 63},
  [25] = {.lex_state = 63},
  [26] = {.lex_state = 63},
  [27] = {.lex_state = 63},
  [28] = {.lex_state = 63},
  [29] = {.lex_state = 63},
  [30] = {.lex_state = 63},
  [31] = {.lex_state = 63},
  [32] = {.lex_state = 63},
  [33] = {.lex_state = 63},
  [34] = {.lex_state = 63},
  [35] = {.lex_state = 62},
  [36] = {.lex_state = 61},
  [37] = {.lex_state = 61},
  [38] = {.lex_state = 61},
  [39] = {.lex_state = 61},
  [40] = {.lex_state = 62},
  [41] = {.lex_state = 61},
  [42] = {.lex_state = 61},
  [43] = {.lex_state = 61},
  [44] = {.lex_state = 61},
  [45] = {.lex_state = 61},
  [46] = {.lex_state = 61},
  [47] = {.lex_state = 61},
  [48] = {.lex_state = 61},
  [49] = {.lex_state = 61},
  [50] = {.lex_state = 61},
  [51] = {.lex_state = 61},
  [52] = {.lex_state = 61},
  [53] = {.lex_state = 61},
  [54] = {.lex_state = 61},
  [55] = {.lex_state = 61},
  [56] = {.lex_state = 61},
  [57] = {.lex_state = 61},
  [58] = {.lex_state = 61},
  [59] = {.lex_state = 61},
  [60] = {.lex_state = 61},
  [61] = {.lex_state = 61},
  [62] = {.lex_state = 61},
  [63] = {.lex_state = 61},
  [64] = {.lex_state = 61},
  [65] = {.lex_state = 61},
  [66] = {.lex_state = 61},
  [67] = {.lex_state = 61},
  [68] = {.lex_state = 61},
  [69] = {.lex_state = 61},
  [70] = {.lex_state = 61},
  [71] = {.lex_state = 61},
  [72] = {.lex_state = 61},
  [73] = {.lex_state = 61},
  [74] = {.lex_state = 61},
  [75] = {.lex_state = 61},
  [76] = {.lex_state = 61},
  [77] = {.lex_state = 61},
  [78] = {.lex_state = 61},
  [79] = {.lex_state = 61},
  [80] = {.lex_state = 61},
  [81] = {.lex_state = 61},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 62},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 62},
  [173] = {.lex_state = 62},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 5},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 62},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 7},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 62},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 62},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 62},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 68},
  [212] = {.lex_state = 62},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 5},
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
    [sym_program] = STATE(202),
    [sym_escape_hatch] = STATE(10),
    [sym_import_statement] = STATE(10),
    [sym_export_statement] = STATE(10),
    [sym_binding_statement] = STATE(10),
    [sym_decl_unit_type] = STATE(10),
    [sym_decl_tuple_type] = STATE(10),
    [sym_decl_struct_type] = STATE(10),
    [sym_decl_effect] = STATE(10),
    [sym_decl_fn] = STATE(10),
    [sym_fn_signature] = STATE(41),
    [sym_expression_statement] = STATE(10),
    [sym_binary_operation] = STATE(12),
    [sym_name] = STATE(12),
    [aux_sym_program_repeat1] = STATE(10),
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
  [0] = 16,
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
    STATE(5), 1,
      aux_sym_decl_fn_repeat1,
    STATE(41), 1,
      sym_fn_signature,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(12), 2,
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
    STATE(81), 10,
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
  [64] = 15,
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
      ts_builtin_sym_end,
    STATE(41), 1,
      sym_fn_signature,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(12), 2,
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
    STATE(9), 11,
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
  [126] = 16,
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
    STATE(8), 1,
      aux_sym_decl_fn_repeat1,
    STATE(41), 1,
      sym_fn_signature,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(12), 2,
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
    STATE(81), 10,
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
  [190] = 16,
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
    STATE(8), 1,
      aux_sym_decl_fn_repeat1,
    STATE(41), 1,
      sym_fn_signature,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(12), 2,
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
    STATE(81), 10,
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
  [254] = 16,
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
    STATE(4), 1,
      aux_sym_decl_fn_repeat1,
    STATE(41), 1,
      sym_fn_signature,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(12), 2,
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
    STATE(81), 10,
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
  [318] = 15,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(44), 1,
      anon_sym_import,
    ACTIONS(47), 1,
      anon_sym_export,
    ACTIONS(53), 1,
      anon_sym_type,
    ACTIONS(56), 1,
      anon_sym_effect,
    ACTIONS(59), 1,
      anon_sym_extern,
    ACTIONS(62), 1,
      anon_sym_fn,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(41), 1,
      sym_fn_signature,
    ACTIONS(50), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(12), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(65), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(68), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(7), 11,
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
  [380] = 16,
    ACTIONS(74), 1,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(77), 1,
      anon_sym_import,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 1,
      anon_sym_export,
    ACTIONS(88), 1,
      anon_sym_type,
    ACTIONS(91), 1,
      anon_sym_effect,
    ACTIONS(94), 1,
      anon_sym_extern,
    ACTIONS(97), 1,
      anon_sym_fn,
    ACTIONS(106), 1,
      sym_identifier,
    STATE(8), 1,
      aux_sym_decl_fn_repeat1,
    STATE(41), 1,
      sym_fn_signature,
    ACTIONS(85), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(12), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(100), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(103), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(81), 10,
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
  [444] = 15,
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
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    STATE(41), 1,
      sym_fn_signature,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(12), 2,
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
    STATE(7), 11,
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
  [506] = 15,
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
      ts_builtin_sym_end,
    STATE(41), 1,
      sym_fn_signature,
    ACTIONS(13), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(12), 2,
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
    STATE(7), 11,
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
  [568] = 6,
    ACTIONS(117), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(121), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(115), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(111), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(113), 12,
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
  [609] = 6,
    ACTIONS(117), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(121), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(115), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(125), 12,
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
  [650] = 2,
    ACTIONS(127), 14,
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
    ACTIONS(129), 14,
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
  [683] = 4,
    ACTIONS(119), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(121), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(131), 10,
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
    ACTIONS(133), 14,
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
  [720] = 6,
    ACTIONS(117), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(121), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(115), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(135), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(137), 12,
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
  [761] = 3,
    ACTIONS(121), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(131), 12,
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
    ACTIONS(133), 14,
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
  [796] = 2,
    ACTIONS(131), 14,
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
    ACTIONS(133), 14,
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
  [829] = 4,
    ACTIONS(143), 1,
      anon_sym_LT,
    STATE(22), 1,
      sym_type_parameters,
    ACTIONS(139), 10,
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
    ACTIONS(141), 12,
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
  [862] = 2,
    ACTIONS(145), 12,
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
    ACTIONS(147), 12,
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
  [891] = 4,
    ACTIONS(149), 1,
      anon_sym_LT,
    STATE(29), 1,
      sym_type_parameters,
    ACTIONS(139), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(141), 13,
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
  [922] = 6,
    ACTIONS(143), 1,
      anon_sym_LT,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    STATE(161), 1,
      sym_type_parameters,
    ACTIONS(151), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(153), 12,
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
  [957] = 2,
    ACTIONS(159), 10,
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
    ACTIONS(161), 12,
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
  [984] = 4,
    ACTIONS(167), 1,
      anon_sym_DASH_GT,
    ACTIONS(169), 1,
      anon_sym_where,
    ACTIONS(163), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(165), 12,
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
  [1014] = 4,
    ACTIONS(175), 1,
      anon_sym_DASH_GT,
    ACTIONS(177), 1,
      anon_sym_where,
    ACTIONS(171), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(173), 12,
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
  [1044] = 4,
    ACTIONS(183), 1,
      anon_sym_DASH_GT,
    ACTIONS(185), 1,
      anon_sym_where,
    ACTIONS(179), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(181), 12,
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
  [1074] = 4,
    ACTIONS(191), 1,
      anon_sym_DASH_GT,
    ACTIONS(193), 1,
      anon_sym_where,
    ACTIONS(187), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(189), 12,
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
  [1104] = 4,
    ACTIONS(199), 1,
      anon_sym_DASH_GT,
    ACTIONS(201), 1,
      anon_sym_where,
    ACTIONS(195), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(197), 12,
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
  [1134] = 3,
    ACTIONS(207), 1,
      anon_sym_where,
    ACTIONS(203), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(205), 12,
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
  [1161] = 2,
    ACTIONS(159), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(161), 13,
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
  [1186] = 3,
    ACTIONS(213), 1,
      anon_sym_where,
    ACTIONS(209), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(211), 12,
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
  [1213] = 2,
    ACTIONS(145), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(147), 13,
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
  [1238] = 3,
    ACTIONS(219), 1,
      anon_sym_where,
    ACTIONS(215), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(217), 12,
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
  [1265] = 3,
    ACTIONS(225), 1,
      anon_sym_where,
    ACTIONS(221), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(223), 12,
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
  [1292] = 3,
    ACTIONS(231), 1,
      anon_sym_where,
    ACTIONS(227), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(229), 12,
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
  [1319] = 4,
    ACTIONS(237), 1,
      anon_sym_COLON,
    ACTIONS(239), 1,
      anon_sym_EQ,
    ACTIONS(233), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(235), 12,
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
  [1348] = 2,
    ACTIONS(241), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(243), 12,
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
  [1372] = 2,
    ACTIONS(245), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(247), 12,
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
  [1396] = 3,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(249), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(251), 12,
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
  [1422] = 2,
    ACTIONS(255), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(257), 12,
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
  [1446] = 3,
    ACTIONS(263), 1,
      anon_sym_EQ,
    ACTIONS(259), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(261), 12,
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
  [1472] = 3,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(267), 12,
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
  [1498] = 2,
    ACTIONS(271), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(273), 12,
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
  [1522] = 2,
    ACTIONS(187), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(189), 12,
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
  [1546] = 2,
    ACTIONS(275), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
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
  [1570] = 2,
    ACTIONS(163), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(165), 12,
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
  [1594] = 2,
    ACTIONS(279), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
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
  [1618] = 2,
    ACTIONS(283), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [1642] = 2,
    ACTIONS(287), 7,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [1666] = 2,
    ACTIONS(291), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(293), 12,
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
  [1689] = 2,
    ACTIONS(295), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(297), 12,
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
  [1712] = 2,
    ACTIONS(299), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(301), 12,
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
  [1735] = 2,
    ACTIONS(303), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(305), 12,
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
  [1758] = 2,
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
  [1781] = 2,
    ACTIONS(311), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(313), 12,
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
  [1804] = 2,
    ACTIONS(315), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(317), 12,
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
  [1827] = 2,
    ACTIONS(319), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(321), 12,
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
  [1850] = 2,
    ACTIONS(323), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(325), 12,
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
  [1873] = 2,
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
  [1896] = 2,
    ACTIONS(331), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(333), 12,
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
  [1919] = 2,
    ACTIONS(335), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(337), 12,
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
  [1942] = 2,
    ACTIONS(339), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(341), 12,
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
  [1965] = 2,
    ACTIONS(343), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(345), 12,
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
  [1988] = 2,
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
  [2011] = 2,
    ACTIONS(351), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(353), 12,
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
  [2034] = 2,
    ACTIONS(355), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(357), 12,
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
  [2057] = 2,
    ACTIONS(359), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(361), 12,
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
  [2080] = 2,
    ACTIONS(363), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(365), 12,
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
  [2103] = 2,
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
  [2126] = 2,
    ACTIONS(371), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(373), 12,
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
  [2149] = 2,
    ACTIONS(375), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(377), 12,
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
  [2172] = 2,
    ACTIONS(379), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(381), 12,
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
  [2195] = 2,
    ACTIONS(383), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(385), 12,
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
  [2218] = 2,
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
  [2241] = 2,
    ACTIONS(391), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(393), 12,
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
  [2264] = 2,
    ACTIONS(395), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(397), 12,
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
  [2287] = 2,
    ACTIONS(399), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(401), 12,
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
  [2310] = 2,
    ACTIONS(403), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(405), 12,
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
  [2333] = 2,
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
  [2356] = 2,
    ACTIONS(411), 6,
      ts_builtin_sym_end,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(413), 12,
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
  [2379] = 2,
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
  [2402] = 2,
    ACTIONS(419), 5,
      anon_sym___ESCAPE_JS_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_RBRACE,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(421), 12,
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
  [2424] = 6,
    ACTIONS(423), 1,
      anon_sym_type,
    ACTIONS(425), 1,
      anon_sym_effect,
    ACTIONS(427), 1,
      anon_sym_extern,
    ACTIONS(429), 1,
      anon_sym_fn,
    STATE(41), 1,
      sym_fn_signature,
    STATE(71), 5,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_decl_fn,
  [2447] = 4,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(16), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(431), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(433), 3,
      sym_integer,
      sym_float,
      sym_boolean,
  [2465] = 4,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(17), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(435), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(437), 3,
      sym_integer,
      sym_float,
      sym_boolean,
  [2483] = 4,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(15), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(439), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(441), 3,
      sym_integer,
      sym_float,
      sym_boolean,
  [2501] = 4,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(14), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(443), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(445), 3,
      sym_integer,
      sym_float,
      sym_boolean,
  [2519] = 4,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(11), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(447), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(449), 3,
      sym_integer,
      sym_float,
      sym_boolean,
  [2537] = 3,
    ACTIONS(451), 1,
      anon_sym_LT,
    STATE(117), 1,
      sym_type_parameters,
    ACTIONS(139), 3,
      anon_sym_RBRACE,
      anon_sym_fn,
      anon_sym_where,
  [2549] = 3,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    ACTIONS(455), 1,
      anon_sym_fn,
    STATE(89), 2,
      sym_fn_signature,
      aux_sym_decl_effect_repeat1,
  [2560] = 3,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    ACTIONS(460), 1,
      anon_sym_fn,
    STATE(89), 2,
      sym_fn_signature,
      aux_sym_decl_effect_repeat1,
  [2571] = 3,
    ACTIONS(460), 1,
      anon_sym_fn,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
    STATE(89), 2,
      sym_fn_signature,
      aux_sym_decl_effect_repeat1,
  [2582] = 3,
    ACTIONS(464), 1,
      anon_sym_DASH_GT,
    ACTIONS(466), 1,
      anon_sym_where,
    ACTIONS(171), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [2593] = 3,
    ACTIONS(468), 1,
      anon_sym_DASH_GT,
    ACTIONS(470), 1,
      anon_sym_where,
    ACTIONS(195), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [2604] = 3,
    ACTIONS(472), 1,
      anon_sym_DASH_GT,
    ACTIONS(474), 1,
      anon_sym_where,
    ACTIONS(187), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [2615] = 4,
    ACTIONS(476), 1,
      anon_sym_mut,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    ACTIONS(480), 1,
      sym_identifier,
    STATE(185), 1,
      sym_fn_param,
  [2628] = 3,
    ACTIONS(482), 1,
      anon_sym_DASH_GT,
    ACTIONS(484), 1,
      anon_sym_where,
    ACTIONS(179), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [2639] = 4,
    ACTIONS(476), 1,
      anon_sym_mut,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      sym_fn_param,
  [2652] = 3,
    ACTIONS(488), 1,
      anon_sym_DASH_GT,
    ACTIONS(490), 1,
      anon_sym_where,
    ACTIONS(163), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [2663] = 4,
    ACTIONS(476), 1,
      anon_sym_mut,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      sym_fn_param,
  [2676] = 3,
    ACTIONS(460), 1,
      anon_sym_fn,
    ACTIONS(494), 1,
      anon_sym_RBRACE,
    STATE(91), 2,
      sym_fn_signature,
      aux_sym_decl_effect_repeat1,
  [2687] = 4,
    ACTIONS(476), 1,
      anon_sym_mut,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      sym_fn_param,
  [2700] = 4,
    ACTIONS(476), 1,
      anon_sym_mut,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym_fn_param,
  [2713] = 4,
    ACTIONS(476), 1,
      anon_sym_mut,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      sym_fn_param,
  [2726] = 3,
    ACTIONS(460), 1,
      anon_sym_fn,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
    STATE(90), 2,
      sym_fn_signature,
      aux_sym_decl_effect_repeat1,
  [2737] = 3,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_fn_signature_repeat1,
  [2747] = 2,
    ACTIONS(509), 1,
      anon_sym_where,
    ACTIONS(221), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [2755] = 3,
    ACTIONS(511), 1,
      sym_identifier,
    STATE(155), 1,
      sym_name,
    STATE(212), 1,
      sym_type_constraint,
  [2765] = 3,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_fn_signature_repeat1,
  [2775] = 3,
    ACTIONS(511), 1,
      sym_identifier,
    STATE(173), 1,
      sym_name,
    STATE(196), 1,
      sym_type_constraint,
  [2785] = 3,
    ACTIONS(517), 1,
      anon_sym_RBRACE,
    ACTIONS(519), 1,
      sym_identifier,
    STATE(153), 1,
      sym_import_part,
  [2795] = 3,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    ACTIONS(523), 1,
      anon_sym_RBRACE,
    STATE(139), 1,
      aux_sym_import_part_list_repeat1,
  [2805] = 3,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_fn_signature_repeat1,
  [2815] = 3,
    ACTIONS(529), 1,
      anon_sym_COMMA,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_fn_signature_repeat1,
  [2825] = 1,
    ACTIONS(145), 3,
      anon_sym_RBRACE,
      anon_sym_fn,
      anon_sym_where,
  [2831] = 3,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
    ACTIONS(535), 1,
      sym_identifier,
    STATE(174), 1,
      sym_struct_field,
  [2841] = 3,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      aux_sym_decl_struct_type_repeat1,
  [2851] = 1,
    ACTIONS(159), 3,
      anon_sym_RBRACE,
      anon_sym_fn,
      anon_sym_where,
  [2857] = 3,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(176), 1,
      sym_type,
  [2867] = 3,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_decl_tuple_type_repeat1,
  [2877] = 3,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_RBRACE,
    STATE(138), 1,
      aux_sym_decl_struct_type_repeat1,
  [2887] = 3,
    ACTIONS(535), 1,
      sym_identifier,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    STATE(174), 1,
      sym_struct_field,
  [2897] = 3,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      aux_sym_decl_struct_type_repeat1,
  [2907] = 3,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym_type,
  [2917] = 3,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_decl_tuple_type_repeat1,
  [2927] = 2,
    ACTIONS(567), 1,
      anon_sym_where,
    ACTIONS(209), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [2935] = 2,
    ACTIONS(569), 1,
      anon_sym_where,
    ACTIONS(215), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [2943] = 3,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      aux_sym_decl_tuple_type_repeat1,
  [2953] = 2,
    ACTIONS(575), 1,
      anon_sym_where,
    ACTIONS(203), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [2961] = 2,
    ACTIONS(577), 1,
      anon_sym_where,
    ACTIONS(227), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [2969] = 3,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      aux_sym_fn_signature_repeat1,
  [2979] = 3,
    ACTIONS(143), 1,
      anon_sym_LT,
    ACTIONS(583), 1,
      anon_sym_LBRACE,
    STATE(204), 1,
      sym_type_parameters,
  [2989] = 2,
    ACTIONS(585), 1,
      anon_sym_as,
    ACTIONS(587), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2997] = 3,
    ACTIONS(511), 1,
      sym_identifier,
    STATE(181), 1,
      sym_name,
    STATE(207), 1,
      sym_type_constraint,
  [3007] = 3,
    ACTIONS(476), 1,
      anon_sym_mut,
    ACTIONS(480), 1,
      sym_identifier,
    STATE(185), 1,
      sym_fn_param,
  [3017] = 3,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(591), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      aux_sym_import_part_list_repeat1,
  [3027] = 3,
    ACTIONS(535), 1,
      sym_identifier,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
    STATE(174), 1,
      sym_struct_field,
  [3037] = 3,
    ACTIONS(519), 1,
      sym_identifier,
    ACTIONS(595), 1,
      anon_sym_RBRACE,
    STATE(153), 1,
      sym_import_part,
  [3047] = 3,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(599), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      aux_sym_decl_struct_type_repeat1,
  [3057] = 3,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
    STATE(139), 1,
      aux_sym_import_part_list_repeat1,
  [3067] = 3,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym_type,
  [3077] = 3,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym_type,
  [3087] = 3,
    ACTIONS(610), 1,
      anon_sym_COMMA,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      aux_sym_decl_tuple_type_repeat1,
  [3097] = 3,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    ACTIONS(616), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_decl_tuple_type_repeat1,
  [3107] = 3,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    ACTIONS(620), 1,
      anon_sym_RBRACE,
    STATE(122), 1,
      aux_sym_decl_struct_type_repeat1,
  [3117] = 3,
    ACTIONS(535), 1,
      sym_identifier,
    ACTIONS(622), 1,
      anon_sym_RBRACE,
    STATE(174), 1,
      sym_struct_field,
  [3127] = 1,
    ACTIONS(187), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [3132] = 2,
    ACTIONS(535), 1,
      sym_identifier,
    STATE(144), 1,
      sym_struct_field,
  [3139] = 2,
    ACTIONS(535), 1,
      sym_identifier,
    STATE(174), 1,
      sym_struct_field,
  [3146] = 2,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(127), 1,
      sym_type,
  [3153] = 1,
    ACTIONS(624), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3158] = 2,
    ACTIONS(626), 1,
      sym_identifier,
    STATE(34), 1,
      sym_type,
  [3165] = 2,
    ACTIONS(626), 1,
      sym_identifier,
    STATE(33), 1,
      sym_type,
  [3172] = 1,
    ACTIONS(628), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3177] = 2,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(171), 1,
      sym_type,
  [3184] = 2,
    ACTIONS(630), 1,
      anon_sym_COLON,
    ACTIONS(632), 1,
      anon_sym_GT,
  [3191] = 2,
    ACTIONS(626), 1,
      sym_identifier,
    STATE(32), 1,
      sym_type,
  [3198] = 2,
    ACTIONS(634), 1,
      sym_identifier,
    STATE(125), 1,
      sym_type,
  [3205] = 1,
    ACTIONS(636), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3210] = 2,
    ACTIONS(634), 1,
      sym_identifier,
    STATE(126), 1,
      sym_type,
  [3217] = 2,
    ACTIONS(519), 1,
      sym_identifier,
    STATE(153), 1,
      sym_import_part,
  [3224] = 2,
    ACTIONS(638), 1,
      anon_sym_LBRACE,
    ACTIONS(640), 1,
      anon_sym_LPAREN,
  [3231] = 2,
    ACTIONS(642), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_import_part_list,
  [3238] = 2,
    ACTIONS(634), 1,
      sym_identifier,
    STATE(106), 1,
      sym_type,
  [3245] = 2,
    ACTIONS(644), 1,
      anon_sym_as,
    ACTIONS(646), 1,
      anon_sym_COLON,
  [3252] = 2,
    ACTIONS(626), 1,
      sym_identifier,
    STATE(30), 1,
      sym_type,
  [3259] = 2,
    ACTIONS(634), 1,
      sym_identifier,
    STATE(128), 1,
      sym_type,
  [3266] = 2,
    ACTIONS(535), 1,
      sym_identifier,
    STATE(120), 1,
      sym_struct_field,
  [3273] = 2,
    ACTIONS(519), 1,
      sym_identifier,
    STATE(135), 1,
      sym_import_part,
  [3280] = 2,
    ACTIONS(429), 1,
      anon_sym_fn,
    STATE(38), 1,
      sym_fn_signature,
  [3287] = 2,
    ACTIONS(634), 1,
      sym_identifier,
    STATE(129), 1,
      sym_type,
  [3294] = 1,
    ACTIONS(648), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3299] = 1,
    ACTIONS(127), 2,
      anon_sym_COLON,
      anon_sym_GT,
  [3304] = 2,
    ACTIONS(630), 1,
      anon_sym_COLON,
    ACTIONS(650), 1,
      anon_sym_GT,
  [3311] = 1,
    ACTIONS(652), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3316] = 2,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(142), 1,
      sym_type,
  [3323] = 1,
    ACTIONS(654), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3328] = 1,
    ACTIONS(241), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [3333] = 2,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(205), 1,
      sym_type,
  [3340] = 2,
    ACTIONS(626), 1,
      sym_identifier,
    STATE(28), 1,
      sym_type,
  [3347] = 2,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(176), 1,
      sym_type,
  [3354] = 2,
    ACTIONS(630), 1,
      anon_sym_COLON,
    ACTIONS(656), 1,
      anon_sym_GT,
  [3361] = 1,
    ACTIONS(283), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [3366] = 1,
    ACTIONS(287), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [3371] = 1,
    ACTIONS(245), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [3376] = 1,
    ACTIONS(658), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3381] = 2,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(40), 1,
      sym_type,
  [3388] = 1,
    ACTIONS(163), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [3393] = 2,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(191), 1,
      sym_type,
  [3400] = 1,
    ACTIONS(255), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [3405] = 1,
    ACTIONS(271), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [3410] = 1,
    ACTIONS(660), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3415] = 1,
    ACTIONS(275), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [3420] = 2,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(150), 1,
      sym_type,
  [3427] = 1,
    ACTIONS(279), 2,
      anon_sym_RBRACE,
      anon_sym_fn,
  [3432] = 1,
    ACTIONS(662), 1,
      sym_identifier,
  [3436] = 1,
    ACTIONS(650), 1,
      anon_sym_GT,
  [3440] = 1,
    ACTIONS(664), 1,
      sym_string,
  [3444] = 1,
    ACTIONS(666), 1,
      sym_identifier,
  [3448] = 1,
    ACTIONS(668), 1,
      anon_sym_COLON,
  [3452] = 1,
    ACTIONS(670), 1,
      sym_identifier,
  [3456] = 1,
    ACTIONS(672), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [3460] = 1,
    ACTIONS(674), 1,
      ts_builtin_sym_end,
  [3464] = 1,
    ACTIONS(676), 1,
      sym_identifier,
  [3468] = 1,
    ACTIONS(678), 1,
      anon_sym_LBRACE,
  [3472] = 1,
    ACTIONS(680), 1,
      anon_sym_GT,
  [3476] = 1,
    ACTIONS(682), 1,
      sym_identifier,
  [3480] = 1,
    ACTIONS(656), 1,
      anon_sym_GT,
  [3484] = 1,
    ACTIONS(684), 1,
      anon_sym_COLON,
  [3488] = 1,
    ACTIONS(686), 1,
      sym_identifier,
  [3492] = 1,
    ACTIONS(688), 1,
      anon_sym_LPAREN,
  [3496] = 1,
    ACTIONS(690), 1,
      sym_escape_hatch_source,
  [3500] = 1,
    ACTIONS(632), 1,
      anon_sym_GT,
  [3504] = 1,
    ACTIONS(692), 1,
      anon_sym_LPAREN,
  [3508] = 1,
    ACTIONS(694), 1,
      sym_identifier,
  [3512] = 1,
    ACTIONS(696), 1,
      anon_sym_COLON,
  [3516] = 1,
    ACTIONS(698), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 190,
  [SMALL_STATE(6)] = 254,
  [SMALL_STATE(7)] = 318,
  [SMALL_STATE(8)] = 380,
  [SMALL_STATE(9)] = 444,
  [SMALL_STATE(10)] = 506,
  [SMALL_STATE(11)] = 568,
  [SMALL_STATE(12)] = 609,
  [SMALL_STATE(13)] = 650,
  [SMALL_STATE(14)] = 683,
  [SMALL_STATE(15)] = 720,
  [SMALL_STATE(16)] = 761,
  [SMALL_STATE(17)] = 796,
  [SMALL_STATE(18)] = 829,
  [SMALL_STATE(19)] = 862,
  [SMALL_STATE(20)] = 891,
  [SMALL_STATE(21)] = 922,
  [SMALL_STATE(22)] = 957,
  [SMALL_STATE(23)] = 984,
  [SMALL_STATE(24)] = 1014,
  [SMALL_STATE(25)] = 1044,
  [SMALL_STATE(26)] = 1074,
  [SMALL_STATE(27)] = 1104,
  [SMALL_STATE(28)] = 1134,
  [SMALL_STATE(29)] = 1161,
  [SMALL_STATE(30)] = 1186,
  [SMALL_STATE(31)] = 1213,
  [SMALL_STATE(32)] = 1238,
  [SMALL_STATE(33)] = 1265,
  [SMALL_STATE(34)] = 1292,
  [SMALL_STATE(35)] = 1319,
  [SMALL_STATE(36)] = 1348,
  [SMALL_STATE(37)] = 1372,
  [SMALL_STATE(38)] = 1396,
  [SMALL_STATE(39)] = 1422,
  [SMALL_STATE(40)] = 1446,
  [SMALL_STATE(41)] = 1472,
  [SMALL_STATE(42)] = 1498,
  [SMALL_STATE(43)] = 1522,
  [SMALL_STATE(44)] = 1546,
  [SMALL_STATE(45)] = 1570,
  [SMALL_STATE(46)] = 1594,
  [SMALL_STATE(47)] = 1618,
  [SMALL_STATE(48)] = 1642,
  [SMALL_STATE(49)] = 1666,
  [SMALL_STATE(50)] = 1689,
  [SMALL_STATE(51)] = 1712,
  [SMALL_STATE(52)] = 1735,
  [SMALL_STATE(53)] = 1758,
  [SMALL_STATE(54)] = 1781,
  [SMALL_STATE(55)] = 1804,
  [SMALL_STATE(56)] = 1827,
  [SMALL_STATE(57)] = 1850,
  [SMALL_STATE(58)] = 1873,
  [SMALL_STATE(59)] = 1896,
  [SMALL_STATE(60)] = 1919,
  [SMALL_STATE(61)] = 1942,
  [SMALL_STATE(62)] = 1965,
  [SMALL_STATE(63)] = 1988,
  [SMALL_STATE(64)] = 2011,
  [SMALL_STATE(65)] = 2034,
  [SMALL_STATE(66)] = 2057,
  [SMALL_STATE(67)] = 2080,
  [SMALL_STATE(68)] = 2103,
  [SMALL_STATE(69)] = 2126,
  [SMALL_STATE(70)] = 2149,
  [SMALL_STATE(71)] = 2172,
  [SMALL_STATE(72)] = 2195,
  [SMALL_STATE(73)] = 2218,
  [SMALL_STATE(74)] = 2241,
  [SMALL_STATE(75)] = 2264,
  [SMALL_STATE(76)] = 2287,
  [SMALL_STATE(77)] = 2310,
  [SMALL_STATE(78)] = 2333,
  [SMALL_STATE(79)] = 2356,
  [SMALL_STATE(80)] = 2379,
  [SMALL_STATE(81)] = 2402,
  [SMALL_STATE(82)] = 2424,
  [SMALL_STATE(83)] = 2447,
  [SMALL_STATE(84)] = 2465,
  [SMALL_STATE(85)] = 2483,
  [SMALL_STATE(86)] = 2501,
  [SMALL_STATE(87)] = 2519,
  [SMALL_STATE(88)] = 2537,
  [SMALL_STATE(89)] = 2549,
  [SMALL_STATE(90)] = 2560,
  [SMALL_STATE(91)] = 2571,
  [SMALL_STATE(92)] = 2582,
  [SMALL_STATE(93)] = 2593,
  [SMALL_STATE(94)] = 2604,
  [SMALL_STATE(95)] = 2615,
  [SMALL_STATE(96)] = 2628,
  [SMALL_STATE(97)] = 2639,
  [SMALL_STATE(98)] = 2652,
  [SMALL_STATE(99)] = 2663,
  [SMALL_STATE(100)] = 2676,
  [SMALL_STATE(101)] = 2687,
  [SMALL_STATE(102)] = 2700,
  [SMALL_STATE(103)] = 2713,
  [SMALL_STATE(104)] = 2726,
  [SMALL_STATE(105)] = 2737,
  [SMALL_STATE(106)] = 2747,
  [SMALL_STATE(107)] = 2755,
  [SMALL_STATE(108)] = 2765,
  [SMALL_STATE(109)] = 2775,
  [SMALL_STATE(110)] = 2785,
  [SMALL_STATE(111)] = 2795,
  [SMALL_STATE(112)] = 2805,
  [SMALL_STATE(113)] = 2815,
  [SMALL_STATE(114)] = 2825,
  [SMALL_STATE(115)] = 2831,
  [SMALL_STATE(116)] = 2841,
  [SMALL_STATE(117)] = 2851,
  [SMALL_STATE(118)] = 2857,
  [SMALL_STATE(119)] = 2867,
  [SMALL_STATE(120)] = 2877,
  [SMALL_STATE(121)] = 2887,
  [SMALL_STATE(122)] = 2897,
  [SMALL_STATE(123)] = 2907,
  [SMALL_STATE(124)] = 2917,
  [SMALL_STATE(125)] = 2927,
  [SMALL_STATE(126)] = 2935,
  [SMALL_STATE(127)] = 2943,
  [SMALL_STATE(128)] = 2953,
  [SMALL_STATE(129)] = 2961,
  [SMALL_STATE(130)] = 2969,
  [SMALL_STATE(131)] = 2979,
  [SMALL_STATE(132)] = 2989,
  [SMALL_STATE(133)] = 2997,
  [SMALL_STATE(134)] = 3007,
  [SMALL_STATE(135)] = 3017,
  [SMALL_STATE(136)] = 3027,
  [SMALL_STATE(137)] = 3037,
  [SMALL_STATE(138)] = 3047,
  [SMALL_STATE(139)] = 3057,
  [SMALL_STATE(140)] = 3067,
  [SMALL_STATE(141)] = 3077,
  [SMALL_STATE(142)] = 3087,
  [SMALL_STATE(143)] = 3097,
  [SMALL_STATE(144)] = 3107,
  [SMALL_STATE(145)] = 3117,
  [SMALL_STATE(146)] = 3127,
  [SMALL_STATE(147)] = 3132,
  [SMALL_STATE(148)] = 3139,
  [SMALL_STATE(149)] = 3146,
  [SMALL_STATE(150)] = 3153,
  [SMALL_STATE(151)] = 3158,
  [SMALL_STATE(152)] = 3165,
  [SMALL_STATE(153)] = 3172,
  [SMALL_STATE(154)] = 3177,
  [SMALL_STATE(155)] = 3184,
  [SMALL_STATE(156)] = 3191,
  [SMALL_STATE(157)] = 3198,
  [SMALL_STATE(158)] = 3205,
  [SMALL_STATE(159)] = 3210,
  [SMALL_STATE(160)] = 3217,
  [SMALL_STATE(161)] = 3224,
  [SMALL_STATE(162)] = 3231,
  [SMALL_STATE(163)] = 3238,
  [SMALL_STATE(164)] = 3245,
  [SMALL_STATE(165)] = 3252,
  [SMALL_STATE(166)] = 3259,
  [SMALL_STATE(167)] = 3266,
  [SMALL_STATE(168)] = 3273,
  [SMALL_STATE(169)] = 3280,
  [SMALL_STATE(170)] = 3287,
  [SMALL_STATE(171)] = 3294,
  [SMALL_STATE(172)] = 3299,
  [SMALL_STATE(173)] = 3304,
  [SMALL_STATE(174)] = 3311,
  [SMALL_STATE(175)] = 3316,
  [SMALL_STATE(176)] = 3323,
  [SMALL_STATE(177)] = 3328,
  [SMALL_STATE(178)] = 3333,
  [SMALL_STATE(179)] = 3340,
  [SMALL_STATE(180)] = 3347,
  [SMALL_STATE(181)] = 3354,
  [SMALL_STATE(182)] = 3361,
  [SMALL_STATE(183)] = 3366,
  [SMALL_STATE(184)] = 3371,
  [SMALL_STATE(185)] = 3376,
  [SMALL_STATE(186)] = 3381,
  [SMALL_STATE(187)] = 3388,
  [SMALL_STATE(188)] = 3393,
  [SMALL_STATE(189)] = 3400,
  [SMALL_STATE(190)] = 3405,
  [SMALL_STATE(191)] = 3410,
  [SMALL_STATE(192)] = 3415,
  [SMALL_STATE(193)] = 3420,
  [SMALL_STATE(194)] = 3427,
  [SMALL_STATE(195)] = 3432,
  [SMALL_STATE(196)] = 3436,
  [SMALL_STATE(197)] = 3440,
  [SMALL_STATE(198)] = 3444,
  [SMALL_STATE(199)] = 3448,
  [SMALL_STATE(200)] = 3452,
  [SMALL_STATE(201)] = 3456,
  [SMALL_STATE(202)] = 3460,
  [SMALL_STATE(203)] = 3464,
  [SMALL_STATE(204)] = 3468,
  [SMALL_STATE(205)] = 3472,
  [SMALL_STATE(206)] = 3476,
  [SMALL_STATE(207)] = 3480,
  [SMALL_STATE(208)] = 3484,
  [SMALL_STATE(209)] = 3488,
  [SMALL_STATE(210)] = 3492,
  [SMALL_STATE(211)] = 3496,
  [SMALL_STATE(212)] = 3500,
  [SMALL_STATE(213)] = 3504,
  [SMALL_STATE(214)] = 3508,
  [SMALL_STATE(215)] = 3512,
  [SMALL_STATE(216)] = 3516,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(211),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(197),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(82),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(200),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(195),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(203),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(169),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(206),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_fn_repeat1, 2, .production_id = 14), SHIFT_REPEAT(211),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_decl_fn_repeat1, 2, .production_id = 14), SHIFT_REPEAT(197),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_fn_repeat1, 2, .production_id = 14),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_decl_fn_repeat1, 2, .production_id = 14), SHIFT_REPEAT(82),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_decl_fn_repeat1, 2, .production_id = 14), SHIFT_REPEAT(200),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_decl_fn_repeat1, 2, .production_id = 14), SHIFT_REPEAT(195),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_decl_fn_repeat1, 2, .production_id = 14), SHIFT_REPEAT(203),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_decl_fn_repeat1, 2, .production_id = 14), SHIFT_REPEAT(169),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_decl_fn_repeat1, 2, .production_id = 14), SHIFT_REPEAT(206),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_fn_repeat1, 2, .production_id = 14), SHIFT_REPEAT(12),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_decl_fn_repeat1, 2, .production_id = 14), SHIFT_REPEAT(12),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_decl_fn_repeat1, 2, .production_id = 14), SHIFT_REPEAT(13),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_statement, 4, .production_id = 12),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_statement, 4, .production_id = 12),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3, .production_id = 7),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3, .production_id = 7),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_statement, 6, .production_id = 21),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_statement, 6, .production_id = 21),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3, .production_id = 17),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3, .production_id = 17),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_unit_type, 2, .production_id = 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_unit_type, 2, .production_id = 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 7, .production_id = 30),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 7, .production_id = 30),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 4, .production_id = 4),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 4, .production_id = 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 6, .production_id = 30),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 6, .production_id = 30),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 6, .production_id = 20),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 6, .production_id = 20),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 5, .production_id = 20),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 5, .production_id = 20),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 7, .production_id = 37),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 7, .production_id = 37),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 9, .production_id = 40),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 9, .production_id = 40),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 8, .production_id = 39),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 8, .production_id = 39),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 8, .production_id = 38),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 8, .production_id = 38),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 6, .production_id = 28),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 6, .production_id = 28),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_statement, 2, .production_id = 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_statement, 2, .production_id = 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 5, .production_id = 4),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 5, .production_id = 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 7, .production_id = 20),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 7, .production_id = 20),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 2, .production_id = 5),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 2, .production_id = 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 8, .production_id = 37),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 8, .production_id = 37),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_statement, 4, .production_id = 11),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_statement, 4, .production_id = 11),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 1, .production_id = 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 1, .production_id = 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 8, .production_id = 30),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 8, .production_id = 30),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 9, .production_id = 38),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 9, .production_id = 38),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 9, .production_id = 39),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 9, .production_id = 39),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 10, .production_id = 40),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 10, .production_id = 40),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_signature, 7, .production_id = 28),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_signature, 7, .production_id = 28),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 8, .production_id = 35),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 8, .production_id = 35),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_effect, 5, .production_id = 18),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_effect, 5, .production_id = 18),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 6, .production_id = 27),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 6, .production_id = 27),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 6, .production_id = 16),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 6, .production_id = 16),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_part_list, 3, .production_id = 17),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_part_list, 3, .production_id = 17),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_effect, 6, .production_id = 18),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_effect, 6, .production_id = 18),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 3, .production_id = 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 3, .production_id = 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 5, .production_id = 16),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 5, .production_id = 16),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, .production_id = 9),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4, .production_id = 9),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 6, .production_id = 24),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 6, .production_id = 24),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, .production_id = 10),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4, .production_id = 10),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 6, .production_id = 24),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 6, .production_id = 24),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 6, .production_id = 16),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 6, .production_id = 16),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_part_list, 4, .production_id = 17),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_part_list, 4, .production_id = 17),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_part_list, 4, .production_id = 33),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_part_list, 4, .production_id = 33),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 5, .production_id = 19),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 5, .production_id = 19),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 7, .production_id = 27),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 7, .production_id = 27),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 7, .production_id = 35),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 7, .production_id = 35),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_effect, 4, .production_id = 4),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_effect, 4, .production_id = 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_effect, 5, .production_id = 4),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_effect, 5, .production_id = 4),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 7, .production_id = 24),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 7, .production_id = 24),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 4, .production_id = 5),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 4, .production_id = 5),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 2, .production_id = 2),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 2, .production_id = 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 8, .production_id = 35),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 8, .production_id = 35),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_part_list, 5, .production_id = 33),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_part_list, 5, .production_id = 33),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 4, .production_id = 13),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 4, .production_id = 13),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 7, .production_id = 24),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 7, .production_id = 24),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 6, .production_id = 27),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 6, .production_id = 27),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 7, .production_id = 27),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 7, .production_id = 27),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_hatch, 3, .production_id = 6),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_hatch, 3, .production_id = 6),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 5, .production_id = 16),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 5, .production_id = 16),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 7, .production_id = 35),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 7, .production_id = 35),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_fn_repeat1, 1, .production_id = 8),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_fn_repeat1, 1, .production_id = 8),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_effect_repeat1, 2),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_effect_repeat1, 2), SHIFT_REPEAT(216),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fn_signature_repeat1, 2, .production_id = 31), SHIFT_REPEAT(134),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fn_signature_repeat1, 2, .production_id = 31),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_struct_type_repeat1, 2, .production_id = 25), SHIFT_REPEAT(148),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_struct_type_repeat1, 2, .production_id = 25),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_tuple_type_repeat1, 2, .production_id = 25), SHIFT_REPEAT(180),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_tuple_type_repeat1, 2, .production_id = 25),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_part, 1, .production_id = 15),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_part_list_repeat1, 2, .production_id = 34), SHIFT_REPEAT(160),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_part_list_repeat1, 2, .production_id = 34),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_param, 4, .production_id = 36),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_part_list_repeat1, 2, .production_id = 17),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_part, 3, .production_id = 32),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3, .production_id = 22),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_struct_type_repeat1, 2, .production_id = 23),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_tuple_type_repeat1, 2, .production_id = 23),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fn_signature_repeat1, 2, .production_id = 29),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_param, 3, .production_id = 22),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [674] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constraint, 3, .production_id = 26),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
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
