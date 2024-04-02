#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 110
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 21

enum ts_symbol_identifiers {
  sym__word = 1,
  sym_shebang = 2,
  anon_sym_import = 3,
  anon_sym_as = 4,
  anon_sym_COLON = 5,
  anon_sym_LBRACE = 6,
  anon_sym_COMMA = 7,
  anon_sym_RBRACE = 8,
  anon_sym_export = 9,
  anon_sym_let = 10,
  anon_sym_mut = 11,
  anon_sym_EQ = 12,
  anon_sym_type = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_effect = 16,
  anon_sym_EQ_EQ = 17,
  anon_sym_BANG_EQ = 18,
  anon_sym_LT = 19,
  anon_sym_LT_EQ = 20,
  anon_sym_GT = 21,
  anon_sym_GT_EQ = 22,
  anon_sym_PLUS = 23,
  anon_sym_DASH = 24,
  anon_sym_STAR = 25,
  anon_sym_SLASH = 26,
  sym_unit_absolute_length = 27,
  sym_unit_relative_length = 28,
  sym_integer = 29,
  sym_float = 30,
  sym_boolean = 31,
  sym_string = 32,
  sym_identifier = 33,
  sym_program = 34,
  sym_import_statement = 35,
  sym_import_part_list = 36,
  sym_import_part = 37,
  sym_export_statement = 38,
  sym_binding_statement = 39,
  sym_decl_unit_type = 40,
  sym_decl_tuple_type = 41,
  sym_decl_struct_type = 42,
  sym_struct_field = 43,
  sym_decl_effect = 44,
  sym_expression_statement = 45,
  sym_binary_operation = 46,
  sym_name = 47,
  sym_type = 48,
  sym_type_parameters = 49,
  sym_type_constraint = 50,
  aux_sym_program_repeat1 = 51,
  aux_sym_import_part_list_repeat1 = 52,
  aux_sym_decl_tuple_type_repeat1 = 53,
  aux_sym_decl_struct_type_repeat1 = 54,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__word] = "_word",
  [sym_shebang] = "shebang",
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
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__word] = sym__word,
  [sym_shebang] = sym_shebang,
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
};

enum ts_field_identifiers {
  field_alias = 1,
  field_constraint = 2,
  field_declaration = 3,
  field_fields = 4,
  field_kind = 5,
  field_lhs = 6,
  field_list = 7,
  field_name = 8,
  field_operator = 9,
  field_original = 10,
  field_part = 11,
  field_path = 12,
  field_rhs = 13,
  field_type = 14,
  field_type_params = 15,
  field_whole = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_constraint] = "constraint",
  [field_declaration] = "declaration",
  [field_fields] = "fields",
  [field_kind] = "kind",
  [field_lhs] = "lhs",
  [field_list] = "list",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_original] = "original",
  [field_part] = "part",
  [field_path] = "path",
  [field_rhs] = "rhs",
  [field_type] = "type",
  [field_type_params] = "type_params",
  [field_whole] = "whole",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 3},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 1},
  [13] = {.index = 19, .length = 3},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 2},
  [16] = {.index = 26, .length = 3},
  [17] = {.index = 29, .length = 2},
  [18] = {.index = 31, .length = 2},
  [19] = {.index = 33, .length = 2},
  [20] = {.index = 35, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_declaration, 1},
  [1] =
    {field_kind, 0},
  [2] =
    {field_name, 1},
  [3] =
    {field_lhs, 0},
    {field_operator, 1},
    {field_rhs, 2},
  [6] =
    {field_path, 1},
    {field_whole, 3},
  [8] =
    {field_part, 3},
    {field_path, 1},
  [10] =
    {field_original, 0},
  [11] =
    {field_fields, 3},
    {field_name, 1},
  [13] =
    {field_list, 1},
  [14] =
    {field_name, 1},
    {field_type_params, 2},
  [16] =
    {field_name, 0},
    {field_type, 2},
  [18] =
    {field_fields, 1},
  [19] =
    {field_fields, 3},
    {field_fields, 4, .inherited = true},
    {field_name, 1},
  [22] =
    {field_fields, 0, .inherited = true},
    {field_fields, 1, .inherited = true},
  [24] =
    {field_constraint, 2},
    {field_name, 0},
  [26] =
    {field_fields, 4},
    {field_name, 1},
    {field_type_params, 2},
  [29] =
    {field_alias, 2},
    {field_original, 0},
  [31] =
    {field_list, 1},
    {field_list, 2, .inherited = true},
  [33] =
    {field_list, 0, .inherited = true},
    {field_list, 1, .inherited = true},
  [35] =
    {field_fields, 4},
    {field_fields, 5, .inherited = true},
    {field_name, 1},
    {field_type_params, 2},
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
  [78] = 9,
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
  [94] = 94,
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
      if (eof) ADVANCE(37);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '>') ADVANCE(67);
      if (lookahead == '_') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '}') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(38);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 't') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != 133 &&
          lookahead != 8232 &&
          lookahead != 8233) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '}') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '_') ADVANCE(113);
      if (lookahead == '}') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead == 't') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(31);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(3);
      END_STATE();
    case 18:
      if (lookahead == 'x') ADVANCE(73);
      END_STATE();
    case 19:
      if (lookahead == 'y') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == '{') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == '}') ADVANCE(3);
      END_STATE();
    case 22:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 23:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(77);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(78);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 35:
      if (eof) ADVANCE(37);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == '{') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '}') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_import);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_import);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_export);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_export);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_let);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_mut);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_mut);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_type);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_effect);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_effect);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_effect);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_unit_absolute_length);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_unit_relative_length);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead == '_') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'p') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(23);
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(24);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(29);
      if (lookahead == '_') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'p') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'p') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_boolean);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_boolean);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(93);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(107);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(105);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(86);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(83);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(55);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'x') ADVANCE(97);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(88);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(104);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(99);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(102);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(103);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(95);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(90);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(96);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == 'y') ADVANCE(98);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(111);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(108);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(109);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(89);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(48);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(50);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(60);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(46);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(40);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(106);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(89);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__word);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'x') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == 'y') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
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
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 35},
  [3] = {.lex_state = 35},
  [4] = {.lex_state = 35},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 35},
  [7] = {.lex_state = 35},
  [8] = {.lex_state = 35},
  [9] = {.lex_state = 35},
  [10] = {.lex_state = 35},
  [11] = {.lex_state = 35},
  [12] = {.lex_state = 35},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 36},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 35},
  [17] = {.lex_state = 36},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 35},
  [20] = {.lex_state = 35},
  [21] = {.lex_state = 35},
  [22] = {.lex_state = 35},
  [23] = {.lex_state = 35},
  [24] = {.lex_state = 35},
  [25] = {.lex_state = 35},
  [26] = {.lex_state = 35},
  [27] = {.lex_state = 35},
  [28] = {.lex_state = 35},
  [29] = {.lex_state = 35},
  [30] = {.lex_state = 35},
  [31] = {.lex_state = 35},
  [32] = {.lex_state = 35},
  [33] = {.lex_state = 35},
  [34] = {.lex_state = 35},
  [35] = {.lex_state = 35},
  [36] = {.lex_state = 35},
  [37] = {.lex_state = 35},
  [38] = {.lex_state = 35},
  [39] = {.lex_state = 35},
  [40] = {.lex_state = 35},
  [41] = {.lex_state = 35},
  [42] = {.lex_state = 35},
  [43] = {.lex_state = 35},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 36},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 36},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 36},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 36},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [sym_shebang] = ACTIONS(1),
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
    [sym_program] = STATE(104),
    [sym_import_statement] = STATE(4),
    [sym_export_statement] = STATE(4),
    [sym_binding_statement] = STATE(4),
    [sym_decl_unit_type] = STATE(4),
    [sym_decl_tuple_type] = STATE(4),
    [sym_decl_struct_type] = STATE(4),
    [sym_decl_effect] = STATE(4),
    [sym_expression_statement] = STATE(4),
    [sym_binary_operation] = STATE(8),
    [sym_name] = STATE(8),
    [aux_sym_program_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_shebang] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_export] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_mut] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(13),
    [anon_sym_effect] = ACTIONS(15),
    [sym_unit_absolute_length] = ACTIONS(17),
    [sym_unit_relative_length] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [sym_boolean] = ACTIONS(19),
    [sym_string] = ACTIONS(17),
    [sym_identifier] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_import,
    ACTIONS(28), 1,
      anon_sym_export,
    ACTIONS(34), 1,
      anon_sym_type,
    ACTIONS(37), 1,
      anon_sym_effect,
    ACTIONS(46), 1,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(8), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(40), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(43), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(2), 9,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_expression_statement,
      aux_sym_program_repeat1,
  [48] = 11,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_effect,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(8), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(17), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(19), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(5), 9,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_expression_statement,
      aux_sym_program_repeat1,
  [96] = 11,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_effect,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(8), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(17), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(19), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(2), 9,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_expression_statement,
      aux_sym_program_repeat1,
  [144] = 11,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_effect,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      anon_sym_let,
      anon_sym_mut,
    STATE(8), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(17), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(19), 3,
      sym_integer,
      sym_float,
      sym_boolean,
    STATE(2), 9,
      sym_import_statement,
      sym_export_statement,
      sym_binding_statement,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
      sym_expression_statement,
      aux_sym_program_repeat1,
  [192] = 6,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(63), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(57), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(55), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [229] = 6,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(63), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(57), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(67), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [266] = 6,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(63), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(57), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(69), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(71), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [303] = 2,
    ACTIONS(73), 12,
      ts_builtin_sym_end,
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
    ACTIONS(75), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [332] = 2,
    ACTIONS(77), 12,
      ts_builtin_sym_end,
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
    ACTIONS(79), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [361] = 3,
    ACTIONS(63), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(77), 10,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(79), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [392] = 4,
    ACTIONS(61), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(63), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(77), 8,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(79), 12,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [425] = 2,
    ACTIONS(83), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
    ACTIONS(81), 11,
      ts_builtin_sym_end,
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
  [451] = 4,
    ACTIONS(89), 1,
      anon_sym_LT,
    STATE(15), 1,
      sym_type_parameters,
    ACTIONS(85), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(87), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [481] = 2,
    ACTIONS(91), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(93), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [505] = 6,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_type_parameters,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(97), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [536] = 4,
    ACTIONS(107), 1,
      anon_sym_COLON,
    ACTIONS(109), 1,
      anon_sym_EQ,
    ACTIONS(103), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(105), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [561] = 3,
    ACTIONS(111), 1,
      anon_sym_EQ,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(67), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [583] = 2,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(115), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [602] = 2,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(119), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [621] = 2,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(123), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [640] = 2,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(127), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [659] = 2,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(131), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [678] = 2,
    ACTIONS(133), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(135), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [697] = 2,
    ACTIONS(137), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(139), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [716] = 2,
    ACTIONS(141), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(143), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [735] = 2,
    ACTIONS(145), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(147), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [754] = 2,
    ACTIONS(149), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(151), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [773] = 2,
    ACTIONS(153), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(155), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [792] = 2,
    ACTIONS(157), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(159), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [811] = 2,
    ACTIONS(161), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(163), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [830] = 2,
    ACTIONS(165), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(167), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [849] = 2,
    ACTIONS(169), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(171), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [868] = 2,
    ACTIONS(173), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(175), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [887] = 2,
    ACTIONS(177), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(179), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [906] = 2,
    ACTIONS(181), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(183), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [925] = 2,
    ACTIONS(185), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(187), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [944] = 2,
    ACTIONS(189), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(191), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [963] = 2,
    ACTIONS(193), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(195), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [982] = 2,
    ACTIONS(197), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(199), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [1001] = 2,
    ACTIONS(201), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(203), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [1020] = 2,
    ACTIONS(205), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(207), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [1039] = 2,
    ACTIONS(209), 4,
      ts_builtin_sym_end,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(211), 10,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_type,
      anon_sym_effect,
      sym_integer,
      sym_float,
      sym_boolean,
      sym_identifier,
  [1058] = 4,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(11), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(213), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(215), 3,
      sym_integer,
      sym_float,
      sym_boolean,
  [1076] = 4,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(12), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(217), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(219), 3,
      sym_integer,
      sym_float,
      sym_boolean,
  [1094] = 4,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(7), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(221), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(223), 3,
      sym_integer,
      sym_float,
      sym_boolean,
  [1112] = 4,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(10), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(225), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(227), 3,
      sym_integer,
      sym_float,
      sym_boolean,
  [1130] = 4,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(6), 2,
      sym_binary_operation,
      sym_name,
    ACTIONS(229), 3,
      sym_unit_absolute_length,
      sym_unit_relative_length,
      sym_string,
    ACTIONS(231), 3,
      sym_integer,
      sym_float,
      sym_boolean,
  [1148] = 3,
    ACTIONS(233), 1,
      anon_sym_type,
    ACTIONS(235), 1,
      anon_sym_effect,
    STATE(33), 4,
      sym_decl_unit_type,
      sym_decl_tuple_type,
      sym_decl_struct_type,
      sym_decl_effect,
  [1161] = 3,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_decl_tuple_type_repeat1,
  [1171] = 3,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_decl_struct_type_repeat1,
  [1181] = 2,
    ACTIONS(247), 1,
      anon_sym_as,
    ACTIONS(249), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1189] = 3,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_import_part_list_repeat1,
  [1199] = 3,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    ACTIONS(257), 1,
      sym_identifier,
    STATE(76), 1,
      sym_type,
  [1209] = 3,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(85), 1,
      sym_struct_field,
  [1219] = 3,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    STATE(106), 1,
      sym_type_parameters,
  [1229] = 3,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_decl_struct_type_repeat1,
  [1239] = 3,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym_type,
  [1249] = 3,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      sym_struct_field,
  [1259] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_decl_tuple_type_repeat1,
  [1269] = 3,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_import_part_list_repeat1,
  [1279] = 3,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    ACTIONS(284), 1,
      sym_identifier,
    STATE(91), 1,
      sym_import_part,
  [1289] = 3,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_decl_struct_type_repeat1,
  [1299] = 3,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_decl_tuple_type_repeat1,
  [1309] = 3,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_decl_tuple_type_repeat1,
  [1319] = 3,
    ACTIONS(298), 1,
      sym_identifier,
    STATE(87), 1,
      sym_name,
    STATE(97), 1,
      sym_type_constraint,
  [1329] = 3,
    ACTIONS(284), 1,
      sym_identifier,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym_import_part,
  [1339] = 3,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym_type,
  [1349] = 3,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_import_part_list_repeat1,
  [1359] = 3,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_decl_tuple_type_repeat1,
  [1369] = 3,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_decl_struct_type_repeat1,
  [1379] = 3,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_decl_struct_type_repeat1,
  [1389] = 3,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      sym_struct_field,
  [1399] = 3,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      sym_struct_field,
  [1409] = 3,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym_type,
  [1419] = 1,
    ACTIONS(326), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1424] = 2,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(72), 1,
      sym_struct_field,
  [1431] = 1,
    ACTIONS(73), 2,
      anon_sym_COLON,
      anon_sym_GT,
  [1436] = 2,
    ACTIONS(257), 1,
      sym_identifier,
    STATE(86), 1,
      sym_type,
  [1443] = 2,
    ACTIONS(284), 1,
      sym_identifier,
    STATE(91), 1,
      sym_import_part,
  [1450] = 2,
    ACTIONS(328), 1,
      anon_sym_as,
    ACTIONS(330), 1,
      anon_sym_COLON,
  [1457] = 2,
    ACTIONS(257), 1,
      sym_identifier,
    STATE(64), 1,
      sym_type,
  [1464] = 2,
    ACTIONS(257), 1,
      sym_identifier,
    STATE(101), 1,
      sym_type,
  [1471] = 2,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
  [1478] = 1,
    ACTIONS(336), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1483] = 1,
    ACTIONS(338), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1488] = 2,
    ACTIONS(340), 1,
      anon_sym_COLON,
    ACTIONS(342), 1,
      anon_sym_GT,
  [1495] = 2,
    ACTIONS(257), 1,
      sym_identifier,
    STATE(76), 1,
      sym_type,
  [1502] = 1,
    ACTIONS(344), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1507] = 2,
    ACTIONS(257), 1,
      sym_identifier,
    STATE(70), 1,
      sym_type,
  [1514] = 1,
    ACTIONS(346), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1519] = 2,
    ACTIONS(348), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_import_part_list,
  [1526] = 2,
    ACTIONS(284), 1,
      sym_identifier,
    STATE(53), 1,
      sym_import_part,
  [1533] = 2,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(63), 1,
      sym_struct_field,
  [1540] = 2,
    ACTIONS(257), 1,
      sym_identifier,
    STATE(18), 1,
      sym_type,
  [1547] = 2,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(85), 1,
      sym_struct_field,
  [1554] = 1,
    ACTIONS(342), 1,
      anon_sym_GT,
  [1558] = 1,
    ACTIONS(350), 1,
      sym_identifier,
  [1562] = 1,
    ACTIONS(352), 1,
      sym_identifier,
  [1566] = 1,
    ACTIONS(354), 1,
      anon_sym_COLON,
  [1570] = 1,
    ACTIONS(356), 1,
      anon_sym_GT,
  [1574] = 1,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
  [1578] = 1,
    ACTIONS(360), 1,
      sym_string,
  [1582] = 1,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
  [1586] = 1,
    ACTIONS(364), 1,
      sym_identifier,
  [1590] = 1,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
  [1594] = 1,
    ACTIONS(368), 1,
      sym_identifier,
  [1598] = 1,
    ACTIONS(370), 1,
      sym_identifier,
  [1602] = 1,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 144,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 229,
  [SMALL_STATE(8)] = 266,
  [SMALL_STATE(9)] = 303,
  [SMALL_STATE(10)] = 332,
  [SMALL_STATE(11)] = 361,
  [SMALL_STATE(12)] = 392,
  [SMALL_STATE(13)] = 425,
  [SMALL_STATE(14)] = 451,
  [SMALL_STATE(15)] = 481,
  [SMALL_STATE(16)] = 505,
  [SMALL_STATE(17)] = 536,
  [SMALL_STATE(18)] = 561,
  [SMALL_STATE(19)] = 583,
  [SMALL_STATE(20)] = 602,
  [SMALL_STATE(21)] = 621,
  [SMALL_STATE(22)] = 640,
  [SMALL_STATE(23)] = 659,
  [SMALL_STATE(24)] = 678,
  [SMALL_STATE(25)] = 697,
  [SMALL_STATE(26)] = 716,
  [SMALL_STATE(27)] = 735,
  [SMALL_STATE(28)] = 754,
  [SMALL_STATE(29)] = 773,
  [SMALL_STATE(30)] = 792,
  [SMALL_STATE(31)] = 811,
  [SMALL_STATE(32)] = 830,
  [SMALL_STATE(33)] = 849,
  [SMALL_STATE(34)] = 868,
  [SMALL_STATE(35)] = 887,
  [SMALL_STATE(36)] = 906,
  [SMALL_STATE(37)] = 925,
  [SMALL_STATE(38)] = 944,
  [SMALL_STATE(39)] = 963,
  [SMALL_STATE(40)] = 982,
  [SMALL_STATE(41)] = 1001,
  [SMALL_STATE(42)] = 1020,
  [SMALL_STATE(43)] = 1039,
  [SMALL_STATE(44)] = 1058,
  [SMALL_STATE(45)] = 1076,
  [SMALL_STATE(46)] = 1094,
  [SMALL_STATE(47)] = 1112,
  [SMALL_STATE(48)] = 1130,
  [SMALL_STATE(49)] = 1148,
  [SMALL_STATE(50)] = 1161,
  [SMALL_STATE(51)] = 1171,
  [SMALL_STATE(52)] = 1181,
  [SMALL_STATE(53)] = 1189,
  [SMALL_STATE(54)] = 1199,
  [SMALL_STATE(55)] = 1209,
  [SMALL_STATE(56)] = 1219,
  [SMALL_STATE(57)] = 1229,
  [SMALL_STATE(58)] = 1239,
  [SMALL_STATE(59)] = 1249,
  [SMALL_STATE(60)] = 1259,
  [SMALL_STATE(61)] = 1269,
  [SMALL_STATE(62)] = 1279,
  [SMALL_STATE(63)] = 1289,
  [SMALL_STATE(64)] = 1299,
  [SMALL_STATE(65)] = 1309,
  [SMALL_STATE(66)] = 1319,
  [SMALL_STATE(67)] = 1329,
  [SMALL_STATE(68)] = 1339,
  [SMALL_STATE(69)] = 1349,
  [SMALL_STATE(70)] = 1359,
  [SMALL_STATE(71)] = 1369,
  [SMALL_STATE(72)] = 1379,
  [SMALL_STATE(73)] = 1389,
  [SMALL_STATE(74)] = 1399,
  [SMALL_STATE(75)] = 1409,
  [SMALL_STATE(76)] = 1419,
  [SMALL_STATE(77)] = 1424,
  [SMALL_STATE(78)] = 1431,
  [SMALL_STATE(79)] = 1436,
  [SMALL_STATE(80)] = 1443,
  [SMALL_STATE(81)] = 1450,
  [SMALL_STATE(82)] = 1457,
  [SMALL_STATE(83)] = 1464,
  [SMALL_STATE(84)] = 1471,
  [SMALL_STATE(85)] = 1478,
  [SMALL_STATE(86)] = 1483,
  [SMALL_STATE(87)] = 1488,
  [SMALL_STATE(88)] = 1495,
  [SMALL_STATE(89)] = 1502,
  [SMALL_STATE(90)] = 1507,
  [SMALL_STATE(91)] = 1514,
  [SMALL_STATE(92)] = 1519,
  [SMALL_STATE(93)] = 1526,
  [SMALL_STATE(94)] = 1533,
  [SMALL_STATE(95)] = 1540,
  [SMALL_STATE(96)] = 1547,
  [SMALL_STATE(97)] = 1554,
  [SMALL_STATE(98)] = 1558,
  [SMALL_STATE(99)] = 1562,
  [SMALL_STATE(100)] = 1566,
  [SMALL_STATE(101)] = 1570,
  [SMALL_STATE(102)] = 1574,
  [SMALL_STATE(103)] = 1578,
  [SMALL_STATE(104)] = 1582,
  [SMALL_STATE(105)] = 1586,
  [SMALL_STATE(106)] = 1590,
  [SMALL_STATE(107)] = 1594,
  [SMALL_STATE(108)] = 1598,
  [SMALL_STATE(109)] = 1602,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(103),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(49),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(108),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(107),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(105),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_statement, 6, .production_id = 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_statement, 6, .production_id = 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_statement, 4, .production_id = 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_statement, 4, .production_id = 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3, .production_id = 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3, .production_id = 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3, .production_id = 9),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3, .production_id = 9),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_unit_type, 2, .production_id = 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_unit_type, 2, .production_id = 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_statement, 2, .production_id = 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_statement, 2, .production_id = 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_part_list, 4, .production_id = 18),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_part_list, 4, .production_id = 18),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 7, .production_id = 20),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 7, .production_id = 20),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_effect, 4, .production_id = 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_effect, 4, .production_id = 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 7, .production_id = 13),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 7, .production_id = 13),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 7, .production_id = 13),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 7, .production_id = 13),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 8, .production_id = 20),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 8, .production_id = 20),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 5, .production_id = 8),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 5, .production_id = 8),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_part_list, 4, .production_id = 9),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_part_list, 4, .production_id = 9),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 6, .production_id = 16),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 6, .production_id = 16),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 6, .production_id = 16),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 6, .production_id = 16),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 5, .production_id = 8),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 5, .production_id = 8),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 6, .production_id = 13),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 6, .production_id = 13),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 6, .production_id = 8),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 6, .production_id = 8),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 7, .production_id = 16),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 7, .production_id = 16),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 2, .production_id = 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_statement, 2, .production_id = 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 8, .production_id = 20),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 8, .production_id = 20),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, .production_id = 5),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4, .production_id = 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 6, .production_id = 13),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 6, .production_id = 13),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, .production_id = 6),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4, .production_id = 6),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 7, .production_id = 16),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 7, .production_id = 16),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_effect, 5, .production_id = 10),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_effect, 5, .production_id = 10),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_tuple_type, 7, .production_id = 20),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_tuple_type, 7, .production_id = 20),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct_type, 6, .production_id = 8),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_struct_type, 6, .production_id = 8),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_part_list, 5, .production_id = 18),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_part_list, 5, .production_id = 18),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_part_list, 3, .production_id = 9),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_part_list, 3, .production_id = 9),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_tuple_type_repeat1, 2, .production_id = 14), SHIFT_REPEAT(88),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_tuple_type_repeat1, 2, .production_id = 14),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_struct_type_repeat1, 2, .production_id = 14), SHIFT_REPEAT(96),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_struct_type_repeat1, 2, .production_id = 14),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_part, 1, .production_id = 7),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_part_list_repeat1, 2, .production_id = 19), SHIFT_REPEAT(80),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_part_list_repeat1, 2, .production_id = 19),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_tuple_type_repeat1, 2, .production_id = 12),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_struct_type_repeat1, 2, .production_id = 12),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3, .production_id = 11),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_part, 3, .production_id = 17),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_part_list_repeat1, 2, .production_id = 9),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constraint, 3, .production_id = 15),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [362] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
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
