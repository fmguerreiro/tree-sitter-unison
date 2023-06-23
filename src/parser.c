#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_COLON = 1,
  anon_sym_EQ = 2,
  anon_sym_true = 3,
  anon_sym_false = 4,
  sym_byte_literal = 5,
  aux_sym_char_literal_token1 = 6,
  anon_sym_QMARK_TAB = 7,
  anon_sym_QMARK = 8,
  anon_sym_QMARKa = 9,
  anon_sym_QMARK2 = 10,
  anon_sym_QMARK3 = 11,
  anon_sym_QMARK_LF = 12,
  anon_sym_QMARK_CR = 13,
  anon_sym_QMARK4 = 14,
  anon_sym_QMARKs = 15,
  anon_sym_QMARK_BSLASH = 16,
  anon_sym_QMARK_SQUOTE = 17,
  anon_sym_QMARK_DQUOTE = 18,
  anon_sym_DQUOTE = 19,
  aux_sym_text_literal_token1 = 20,
  aux_sym_text_literal_token2 = 21,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 22,
  aux_sym_text_literal_token3 = 23,
  anon_sym_POUND = 24,
  aux_sym_hash_literal_token1 = 25,
  sym_natural_literal = 26,
  sym_float_literal = 27,
  anon_sym_LBRACK = 28,
  anon_sym_COMMA = 29,
  anon_sym_RBRACK = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  anon_sym_DASH_GT = 33,
  anon_sym_PLUS = 34,
  sym_type_variable = 35,
  sym_type_polymorphic = 36,
  anon_sym_Nat = 37,
  anon_sym_Int = 38,
  anon_sym_Float = 39,
  anon_sym_Boolean = 40,
  anon_sym_Bytes = 41,
  anon_sym_Text = 42,
  anon_sym_Char = 43,
  anon_sym_LPAREN_RPAREN = 44,
  anon_sym_Tuple = 45,
  anon_sym_List = 46,
  anon_sym_abilities_DOTRequest = 47,
  aux_sym__terminator_token1 = 48,
  sym_line_comment = 49,
  sym_source_file = 50,
  sym__top_level_declaration = 51,
  sym__term_declaration = 52,
  sym_type_signature = 53,
  sym_term_definition = 54,
  sym_param = 55,
  sym__literal = 56,
  sym_boolean_literal = 57,
  sym_char_literal = 58,
  sym_text_literal = 59,
  sym_hash_literal = 60,
  sym_list_literal = 61,
  sym_tuple_literal = 62,
  sym_lambda = 63,
  sym__operation = 64,
  sym_addition_op = 65,
  sym__expression = 66,
  sym__type = 67,
  sym_type_builtin = 68,
  sym_type_builtin_constructor = 69,
  aux_sym_source_file_repeat1 = 70,
  aux_sym_term_definition_repeat1 = 71,
  aux_sym_text_literal_repeat1 = 72,
  aux_sym_text_literal_repeat2 = 73,
  aux_sym_list_literal_repeat1 = 74,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_byte_literal] = "byte_literal",
  [aux_sym_char_literal_token1] = "char_literal_token1",
  [anon_sym_QMARK_TAB] = "\?\t",
  [anon_sym_QMARK] = "\? ",
  [anon_sym_QMARKa] = "\?a",
  [anon_sym_QMARK2] = "\?",
  [anon_sym_QMARK3] = "\?\f",
  [anon_sym_QMARK_LF] = "\?\n",
  [anon_sym_QMARK_CR] = "\?\r",
  [anon_sym_QMARK4] = "\?",
  [anon_sym_QMARKs] = "\?s",
  [anon_sym_QMARK_BSLASH] = "\?\\",
  [anon_sym_QMARK_SQUOTE] = "\?'",
  [anon_sym_QMARK_DQUOTE] = "\?\"",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_text_literal_token1] = "text_literal_token1",
  [aux_sym_text_literal_token2] = "text_literal_token2",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym_text_literal_token3] = "text_literal_token3",
  [anon_sym_POUND] = "#",
  [aux_sym_hash_literal_token1] = "hash_literal_token1",
  [sym_natural_literal] = "natural_literal",
  [sym_float_literal] = "float_literal",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_PLUS] = "+",
  [sym_type_variable] = "type_variable",
  [sym_type_polymorphic] = "type_polymorphic",
  [anon_sym_Nat] = "Nat",
  [anon_sym_Int] = "Int",
  [anon_sym_Float] = "Float",
  [anon_sym_Boolean] = "Boolean",
  [anon_sym_Bytes] = "Bytes",
  [anon_sym_Text] = "Text",
  [anon_sym_Char] = "Char",
  [anon_sym_LPAREN_RPAREN] = "()",
  [anon_sym_Tuple] = "Tuple",
  [anon_sym_List] = "List",
  [anon_sym_abilities_DOTRequest] = "abilities.Request",
  [aux_sym__terminator_token1] = "_terminator_token1",
  [sym_line_comment] = "line_comment",
  [sym_source_file] = "source_file",
  [sym__top_level_declaration] = "_top_level_declaration",
  [sym__term_declaration] = "_term_declaration",
  [sym_type_signature] = "type_signature",
  [sym_term_definition] = "term_definition",
  [sym_param] = "param",
  [sym__literal] = "_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_char_literal] = "char_literal",
  [sym_text_literal] = "text_literal",
  [sym_hash_literal] = "hash_literal",
  [sym_list_literal] = "list_literal",
  [sym_tuple_literal] = "tuple_literal",
  [sym_lambda] = "lambda",
  [sym__operation] = "_operation",
  [sym_addition_op] = "addition_op",
  [sym__expression] = "_expression",
  [sym__type] = "_type",
  [sym_type_builtin] = "type_builtin",
  [sym_type_builtin_constructor] = "type_builtin_constructor",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_term_definition_repeat1] = "term_definition_repeat1",
  [aux_sym_text_literal_repeat1] = "text_literal_repeat1",
  [aux_sym_text_literal_repeat2] = "text_literal_repeat2",
  [aux_sym_list_literal_repeat1] = "list_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_byte_literal] = sym_byte_literal,
  [aux_sym_char_literal_token1] = aux_sym_char_literal_token1,
  [anon_sym_QMARK_TAB] = anon_sym_QMARK_TAB,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_QMARKa] = anon_sym_QMARKa,
  [anon_sym_QMARK2] = anon_sym_QMARK2,
  [anon_sym_QMARK3] = anon_sym_QMARK3,
  [anon_sym_QMARK_LF] = anon_sym_QMARK_LF,
  [anon_sym_QMARK_CR] = anon_sym_QMARK_CR,
  [anon_sym_QMARK4] = anon_sym_QMARK4,
  [anon_sym_QMARKs] = anon_sym_QMARKs,
  [anon_sym_QMARK_BSLASH] = anon_sym_QMARK_BSLASH,
  [anon_sym_QMARK_SQUOTE] = anon_sym_QMARK_SQUOTE,
  [anon_sym_QMARK_DQUOTE] = anon_sym_QMARK_DQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_text_literal_token1] = aux_sym_text_literal_token1,
  [aux_sym_text_literal_token2] = aux_sym_text_literal_token2,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym_text_literal_token3] = aux_sym_text_literal_token3,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_hash_literal_token1] = aux_sym_hash_literal_token1,
  [sym_natural_literal] = sym_natural_literal,
  [sym_float_literal] = sym_float_literal,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_type_variable] = sym_type_variable,
  [sym_type_polymorphic] = sym_type_polymorphic,
  [anon_sym_Nat] = anon_sym_Nat,
  [anon_sym_Int] = anon_sym_Int,
  [anon_sym_Float] = anon_sym_Float,
  [anon_sym_Boolean] = anon_sym_Boolean,
  [anon_sym_Bytes] = anon_sym_Bytes,
  [anon_sym_Text] = anon_sym_Text,
  [anon_sym_Char] = anon_sym_Char,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_Tuple] = anon_sym_Tuple,
  [anon_sym_List] = anon_sym_List,
  [anon_sym_abilities_DOTRequest] = anon_sym_abilities_DOTRequest,
  [aux_sym__terminator_token1] = aux_sym__terminator_token1,
  [sym_line_comment] = sym_line_comment,
  [sym_source_file] = sym_source_file,
  [sym__top_level_declaration] = sym__top_level_declaration,
  [sym__term_declaration] = sym__term_declaration,
  [sym_type_signature] = sym_type_signature,
  [sym_term_definition] = sym_term_definition,
  [sym_param] = sym_param,
  [sym__literal] = sym__literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_char_literal] = sym_char_literal,
  [sym_text_literal] = sym_text_literal,
  [sym_hash_literal] = sym_hash_literal,
  [sym_list_literal] = sym_list_literal,
  [sym_tuple_literal] = sym_tuple_literal,
  [sym_lambda] = sym_lambda,
  [sym__operation] = sym__operation,
  [sym_addition_op] = sym_addition_op,
  [sym__expression] = sym__expression,
  [sym__type] = sym__type,
  [sym_type_builtin] = sym_type_builtin,
  [sym_type_builtin_constructor] = sym_type_builtin_constructor,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_term_definition_repeat1] = aux_sym_term_definition_repeat1,
  [aux_sym_text_literal_repeat1] = aux_sym_text_literal_repeat1,
  [aux_sym_text_literal_repeat2] = aux_sym_text_literal_repeat2,
  [aux_sym_list_literal_repeat1] = aux_sym_list_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_byte_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_char_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_QMARK_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARKa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARKs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_hash_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_natural_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_type_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_type_polymorphic] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Nat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Tuple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_List] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abilities_DOTRequest] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__terminator_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__term_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_type_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_term_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_text_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_list_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_lambda] = {
    .visible = true,
    .named = true,
  },
  [sym__operation] = {
    .visible = false,
    .named = true,
  },
  [sym_addition_op] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_type_builtin] = {
    .visible = true,
    .named = true,
  },
  [sym_type_builtin_constructor] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_term_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_literal_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [12] = 7,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 8,
  [17] = 9,
  [18] = 10,
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
  [37] = 5,
  [38] = 38,
  [39] = 39,
  [40] = 38,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 34,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 26,
  [51] = 28,
  [52] = 48,
  [53] = 53,
  [54] = 54,
  [55] = 31,
  [56] = 19,
  [57] = 24,
  [58] = 58,
  [59] = 29,
  [60] = 27,
  [61] = 22,
  [62] = 58,
  [63] = 25,
  [64] = 41,
  [65] = 30,
  [66] = 54,
  [67] = 53,
  [68] = 46,
  [69] = 23,
  [70] = 21,
  [71] = 20,
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
  [82] = 72,
  [83] = 81,
  [84] = 80,
  [85] = 79,
  [86] = 73,
  [87] = 74,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 90,
  [92] = 92,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(47);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '+') ADVANCE(89);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '0') ADVANCE(78);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == ';') ADVANCE(126);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == 'B') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(109);
      if (lookahead == 'F') ADVANCE(111);
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'N') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(108);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(114);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(55);
      if (lookahead == 8) ADVANCE(57);
      if (lookahead == '\t') ADVANCE(54);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == 11) ADVANCE(61);
      if (lookahead == '\f') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(60);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '\'') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(72);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == 'B') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(109);
      if (lookahead == 'F') ADVANCE(111);
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'N') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(108);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(114);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(122);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(127);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '>') ADVANCE(87);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '>') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'R') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == 'q') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 42:
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 45:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '+') ADVANCE(89);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '0') ADVANCE(78);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_byte_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_QMARK_TAB);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_QMARKa);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_QMARK3);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_QMARK_LF);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_QMARK_CR);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_QMARK4);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_QMARKs);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_QMARK_BSLASH);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_QMARK_SQUOTE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_QMARK_DQUOTE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_text_literal_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_text_literal_token1);
      if (lookahead == '-') ADVANCE(127);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_text_literal_token1);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(68);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_text_literal_token2);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_text_literal_token3);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_text_literal_token3);
      if (lookahead == '-') ADVANCE(127);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_text_literal_token3);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_hash_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_natural_literal);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == 'x') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_natural_literal);
      if (lookahead == '.') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(122);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'a') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'b') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'e') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'e') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'i') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'i') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'i') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'l') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'l') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'r') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 's') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 's') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 't') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'u') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_type_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'a') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(114);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(114);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'h') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(114);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'i') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(114);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'l') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(114);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'n') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 'y') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_Nat);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_Bytes);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_Text);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_Char);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_Tuple);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_List);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_abilities_DOTRequest);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__terminator_token1);
      if (lookahead == ';') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(127);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 46},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 46},
  [4] = {.lex_state = 46},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 46},
  [7] = {.lex_state = 46},
  [8] = {.lex_state = 46},
  [9] = {.lex_state = 46},
  [10] = {.lex_state = 46},
  [11] = {.lex_state = 46},
  [12] = {.lex_state = 46},
  [13] = {.lex_state = 46},
  [14] = {.lex_state = 46},
  [15] = {.lex_state = 46},
  [16] = {.lex_state = 46},
  [17] = {.lex_state = 46},
  [18] = {.lex_state = 46},
  [19] = {.lex_state = 46},
  [20] = {.lex_state = 46},
  [21] = {.lex_state = 46},
  [22] = {.lex_state = 46},
  [23] = {.lex_state = 46},
  [24] = {.lex_state = 46},
  [25] = {.lex_state = 46},
  [26] = {.lex_state = 46},
  [27] = {.lex_state = 46},
  [28] = {.lex_state = 46},
  [29] = {.lex_state = 46},
  [30] = {.lex_state = 46},
  [31] = {.lex_state = 46},
  [32] = {.lex_state = 46},
  [33] = {.lex_state = 46},
  [34] = {.lex_state = 46},
  [35] = {.lex_state = 46},
  [36] = {.lex_state = 46},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_byte_literal] = ACTIONS(1),
    [aux_sym_char_literal_token1] = ACTIONS(1),
    [anon_sym_QMARK_TAB] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_QMARKa] = ACTIONS(1),
    [anon_sym_QMARK2] = ACTIONS(1),
    [anon_sym_QMARK3] = ACTIONS(1),
    [anon_sym_QMARK_LF] = ACTIONS(1),
    [anon_sym_QMARK_CR] = ACTIONS(1),
    [anon_sym_QMARK4] = ACTIONS(1),
    [anon_sym_QMARKs] = ACTIONS(1),
    [anon_sym_QMARK_BSLASH] = ACTIONS(1),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(1),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_text_literal_token2] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_natural_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_type_variable] = ACTIONS(1),
    [sym_type_polymorphic] = ACTIONS(1),
    [anon_sym_Nat] = ACTIONS(1),
    [anon_sym_Int] = ACTIONS(1),
    [anon_sym_Float] = ACTIONS(1),
    [anon_sym_Boolean] = ACTIONS(1),
    [anon_sym_Bytes] = ACTIONS(1),
    [anon_sym_Text] = ACTIONS(1),
    [anon_sym_Char] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_Tuple] = ACTIONS(1),
    [anon_sym_List] = ACTIONS(1),
    [anon_sym_abilities_DOTRequest] = ACTIONS(1),
    [aux_sym__terminator_token1] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(92),
    [sym__top_level_declaration] = STATE(4),
    [sym__term_declaration] = STATE(4),
    [sym_type_signature] = STATE(88),
    [sym_term_definition] = STATE(4),
    [sym_param] = STATE(58),
    [sym__literal] = STATE(35),
    [sym_boolean_literal] = STATE(35),
    [sym_char_literal] = STATE(35),
    [sym_text_literal] = STATE(35),
    [sym_hash_literal] = STATE(35),
    [sym_list_literal] = STATE(35),
    [sym_tuple_literal] = STATE(35),
    [sym_lambda] = STATE(35),
    [sym__operation] = STATE(35),
    [sym_addition_op] = STATE(35),
    [sym__expression] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym_term_definition_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_byte_literal] = ACTIONS(9),
    [aux_sym_char_literal_token1] = ACTIONS(11),
    [anon_sym_QMARK_TAB] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(13),
    [anon_sym_QMARKa] = ACTIONS(13),
    [anon_sym_QMARK2] = ACTIONS(13),
    [anon_sym_QMARK3] = ACTIONS(13),
    [anon_sym_QMARK_LF] = ACTIONS(13),
    [anon_sym_QMARK_CR] = ACTIONS(13),
    [anon_sym_QMARK4] = ACTIONS(13),
    [anon_sym_QMARKs] = ACTIONS(13),
    [anon_sym_QMARK_BSLASH] = ACTIONS(13),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(13),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_natural_literal] = ACTIONS(21),
    [sym_float_literal] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(27),
    [sym_type_variable] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_param] = STATE(49),
    [sym__type] = STATE(76),
    [sym_type_builtin] = STATE(76),
    [sym_type_builtin_constructor] = STATE(76),
    [aux_sym_term_definition_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(33),
    [anon_sym_EQ] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_byte_literal] = ACTIONS(31),
    [aux_sym_char_literal_token1] = ACTIONS(37),
    [anon_sym_QMARK_TAB] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_QMARKa] = ACTIONS(31),
    [anon_sym_QMARK2] = ACTIONS(31),
    [anon_sym_QMARK3] = ACTIONS(31),
    [anon_sym_QMARK_LF] = ACTIONS(31),
    [anon_sym_QMARK_CR] = ACTIONS(31),
    [anon_sym_QMARK4] = ACTIONS(31),
    [anon_sym_QMARKs] = ACTIONS(31),
    [anon_sym_QMARK_BSLASH] = ACTIONS(31),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(31),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(31),
    [sym_natural_literal] = ACTIONS(37),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_DASH_GT] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(37),
    [sym_type_variable] = ACTIONS(41),
    [sym_type_polymorphic] = ACTIONS(43),
    [anon_sym_Nat] = ACTIONS(45),
    [anon_sym_Int] = ACTIONS(45),
    [anon_sym_Float] = ACTIONS(45),
    [anon_sym_Boolean] = ACTIONS(45),
    [anon_sym_Bytes] = ACTIONS(45),
    [anon_sym_Text] = ACTIONS(45),
    [anon_sym_Char] = ACTIONS(45),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(45),
    [anon_sym_Tuple] = ACTIONS(47),
    [anon_sym_List] = ACTIONS(47),
    [anon_sym_abilities_DOTRequest] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__top_level_declaration] = STATE(3),
    [sym__term_declaration] = STATE(3),
    [sym_type_signature] = STATE(88),
    [sym_term_definition] = STATE(3),
    [sym_param] = STATE(58),
    [sym__literal] = STATE(35),
    [sym_boolean_literal] = STATE(35),
    [sym_char_literal] = STATE(35),
    [sym_text_literal] = STATE(35),
    [sym_hash_literal] = STATE(35),
    [sym_list_literal] = STATE(35),
    [sym_tuple_literal] = STATE(35),
    [sym_lambda] = STATE(35),
    [sym__operation] = STATE(35),
    [sym_addition_op] = STATE(35),
    [sym__expression] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_term_definition_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_byte_literal] = ACTIONS(54),
    [aux_sym_char_literal_token1] = ACTIONS(57),
    [anon_sym_QMARK_TAB] = ACTIONS(60),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_QMARKa] = ACTIONS(60),
    [anon_sym_QMARK2] = ACTIONS(60),
    [anon_sym_QMARK3] = ACTIONS(60),
    [anon_sym_QMARK_LF] = ACTIONS(60),
    [anon_sym_QMARK_CR] = ACTIONS(60),
    [anon_sym_QMARK4] = ACTIONS(60),
    [anon_sym_QMARKs] = ACTIONS(60),
    [anon_sym_QMARK_BSLASH] = ACTIONS(60),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(60),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(60),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(66),
    [anon_sym_POUND] = ACTIONS(69),
    [sym_natural_literal] = ACTIONS(72),
    [sym_float_literal] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_DASH_GT] = ACTIONS(81),
    [sym_type_variable] = ACTIONS(84),
    [sym_line_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__top_level_declaration] = STATE(3),
    [sym__term_declaration] = STATE(3),
    [sym_type_signature] = STATE(88),
    [sym_term_definition] = STATE(3),
    [sym_param] = STATE(58),
    [sym__literal] = STATE(35),
    [sym_boolean_literal] = STATE(35),
    [sym_char_literal] = STATE(35),
    [sym_text_literal] = STATE(35),
    [sym_hash_literal] = STATE(35),
    [sym_list_literal] = STATE(35),
    [sym_tuple_literal] = STATE(35),
    [sym_lambda] = STATE(35),
    [sym__operation] = STATE(35),
    [sym_addition_op] = STATE(35),
    [sym__expression] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_term_definition_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_byte_literal] = ACTIONS(9),
    [aux_sym_char_literal_token1] = ACTIONS(11),
    [anon_sym_QMARK_TAB] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(13),
    [anon_sym_QMARKa] = ACTIONS(13),
    [anon_sym_QMARK2] = ACTIONS(13),
    [anon_sym_QMARK3] = ACTIONS(13),
    [anon_sym_QMARK_LF] = ACTIONS(13),
    [anon_sym_QMARK_CR] = ACTIONS(13),
    [anon_sym_QMARK4] = ACTIONS(13),
    [anon_sym_QMARKs] = ACTIONS(13),
    [anon_sym_QMARK_BSLASH] = ACTIONS(13),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(13),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_natural_literal] = ACTIONS(21),
    [sym_float_literal] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(27),
    [sym_type_variable] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__type] = STATE(76),
    [sym_type_builtin] = STATE(76),
    [sym_type_builtin_constructor] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_byte_literal] = ACTIONS(31),
    [aux_sym_char_literal_token1] = ACTIONS(37),
    [anon_sym_QMARK_TAB] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_QMARKa] = ACTIONS(31),
    [anon_sym_QMARK2] = ACTIONS(31),
    [anon_sym_QMARK3] = ACTIONS(31),
    [anon_sym_QMARK_LF] = ACTIONS(31),
    [anon_sym_QMARK_CR] = ACTIONS(31),
    [anon_sym_QMARK4] = ACTIONS(31),
    [anon_sym_QMARKs] = ACTIONS(31),
    [anon_sym_QMARK_BSLASH] = ACTIONS(31),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(31),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(31),
    [sym_natural_literal] = ACTIONS(37),
    [sym_float_literal] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_DASH_GT] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(37),
    [sym_type_variable] = ACTIONS(41),
    [sym_type_polymorphic] = ACTIONS(43),
    [anon_sym_Nat] = ACTIONS(45),
    [anon_sym_Int] = ACTIONS(45),
    [anon_sym_Float] = ACTIONS(45),
    [anon_sym_Boolean] = ACTIONS(45),
    [anon_sym_Bytes] = ACTIONS(45),
    [anon_sym_Text] = ACTIONS(45),
    [anon_sym_Char] = ACTIONS(45),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(45),
    [anon_sym_Tuple] = ACTIONS(47),
    [anon_sym_List] = ACTIONS(47),
    [anon_sym_abilities_DOTRequest] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_param] = STATE(62),
    [sym__literal] = STATE(75),
    [sym_boolean_literal] = STATE(75),
    [sym_char_literal] = STATE(75),
    [sym_text_literal] = STATE(75),
    [sym_hash_literal] = STATE(75),
    [sym_list_literal] = STATE(75),
    [sym_tuple_literal] = STATE(75),
    [sym_lambda] = STATE(75),
    [aux_sym_term_definition_repeat1] = STATE(62),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_byte_literal] = ACTIONS(89),
    [aux_sym_char_literal_token1] = ACTIONS(11),
    [anon_sym_QMARK_TAB] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(13),
    [anon_sym_QMARKa] = ACTIONS(13),
    [anon_sym_QMARK2] = ACTIONS(13),
    [anon_sym_QMARK3] = ACTIONS(13),
    [anon_sym_QMARK_LF] = ACTIONS(13),
    [anon_sym_QMARK_CR] = ACTIONS(13),
    [anon_sym_QMARK4] = ACTIONS(13),
    [anon_sym_QMARKs] = ACTIONS(13),
    [anon_sym_QMARK_BSLASH] = ACTIONS(13),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(13),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_natural_literal] = ACTIONS(91),
    [sym_float_literal] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [sym_type_variable] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_param] = STATE(62),
    [sym__literal] = STATE(55),
    [sym_boolean_literal] = STATE(55),
    [sym_char_literal] = STATE(55),
    [sym_text_literal] = STATE(55),
    [sym_hash_literal] = STATE(55),
    [sym_list_literal] = STATE(55),
    [sym_tuple_literal] = STATE(55),
    [sym_lambda] = STATE(55),
    [sym__operation] = STATE(55),
    [sym_addition_op] = STATE(55),
    [sym__expression] = STATE(55),
    [aux_sym_term_definition_repeat1] = STATE(62),
    [anon_sym_true] = ACTIONS(99),
    [anon_sym_false] = ACTIONS(99),
    [sym_byte_literal] = ACTIONS(101),
    [aux_sym_char_literal_token1] = ACTIONS(103),
    [anon_sym_QMARK_TAB] = ACTIONS(105),
    [anon_sym_QMARK] = ACTIONS(105),
    [anon_sym_QMARKa] = ACTIONS(105),
    [anon_sym_QMARK2] = ACTIONS(105),
    [anon_sym_QMARK3] = ACTIONS(105),
    [anon_sym_QMARK_LF] = ACTIONS(105),
    [anon_sym_QMARK_CR] = ACTIONS(105),
    [anon_sym_QMARK4] = ACTIONS(105),
    [anon_sym_QMARKs] = ACTIONS(105),
    [anon_sym_QMARK_BSLASH] = ACTIONS(105),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(105),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(109),
    [anon_sym_POUND] = ACTIONS(111),
    [sym_natural_literal] = ACTIONS(113),
    [sym_float_literal] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [sym_type_variable] = ACTIONS(119),
    [sym_line_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_param] = STATE(58),
    [sym__literal] = STATE(34),
    [sym_boolean_literal] = STATE(34),
    [sym_char_literal] = STATE(34),
    [sym_text_literal] = STATE(34),
    [sym_hash_literal] = STATE(34),
    [sym_list_literal] = STATE(34),
    [sym_tuple_literal] = STATE(34),
    [sym_lambda] = STATE(34),
    [sym__operation] = STATE(34),
    [sym_addition_op] = STATE(34),
    [sym__expression] = STATE(34),
    [aux_sym_term_definition_repeat1] = STATE(58),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_byte_literal] = ACTIONS(121),
    [aux_sym_char_literal_token1] = ACTIONS(11),
    [anon_sym_QMARK_TAB] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(13),
    [anon_sym_QMARKa] = ACTIONS(13),
    [anon_sym_QMARK2] = ACTIONS(13),
    [anon_sym_QMARK3] = ACTIONS(13),
    [anon_sym_QMARK_LF] = ACTIONS(13),
    [anon_sym_QMARK_CR] = ACTIONS(13),
    [anon_sym_QMARK4] = ACTIONS(13),
    [anon_sym_QMARKs] = ACTIONS(13),
    [anon_sym_QMARK_BSLASH] = ACTIONS(13),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(13),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_natural_literal] = ACTIONS(123),
    [sym_float_literal] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(27),
    [sym_type_variable] = ACTIONS(125),
    [sym_line_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_param] = STATE(62),
    [sym__literal] = STATE(72),
    [sym_boolean_literal] = STATE(72),
    [sym_char_literal] = STATE(72),
    [sym_text_literal] = STATE(72),
    [sym_hash_literal] = STATE(72),
    [sym_list_literal] = STATE(72),
    [sym_tuple_literal] = STATE(72),
    [sym_lambda] = STATE(72),
    [aux_sym_term_definition_repeat1] = STATE(62),
    [aux_sym_list_literal_repeat1] = STATE(81),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_byte_literal] = ACTIONS(127),
    [aux_sym_char_literal_token1] = ACTIONS(11),
    [anon_sym_QMARK_TAB] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(13),
    [anon_sym_QMARKa] = ACTIONS(13),
    [anon_sym_QMARK2] = ACTIONS(13),
    [anon_sym_QMARK3] = ACTIONS(13),
    [anon_sym_QMARK_LF] = ACTIONS(13),
    [anon_sym_QMARK_CR] = ACTIONS(13),
    [anon_sym_QMARK4] = ACTIONS(13),
    [anon_sym_QMARKs] = ACTIONS(13),
    [anon_sym_QMARK_BSLASH] = ACTIONS(13),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(13),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_natural_literal] = ACTIONS(129),
    [sym_float_literal] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [sym_type_variable] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_param] = STATE(62),
    [sym__literal] = STATE(80),
    [sym_boolean_literal] = STATE(80),
    [sym_char_literal] = STATE(80),
    [sym_text_literal] = STATE(80),
    [sym_hash_literal] = STATE(80),
    [sym_list_literal] = STATE(80),
    [sym_tuple_literal] = STATE(80),
    [sym_lambda] = STATE(80),
    [aux_sym_term_definition_repeat1] = STATE(62),
    [aux_sym_list_literal_repeat1] = STATE(79),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_byte_literal] = ACTIONS(135),
    [aux_sym_char_literal_token1] = ACTIONS(11),
    [anon_sym_QMARK_TAB] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(13),
    [anon_sym_QMARKa] = ACTIONS(13),
    [anon_sym_QMARK2] = ACTIONS(13),
    [anon_sym_QMARK3] = ACTIONS(13),
    [anon_sym_QMARK_LF] = ACTIONS(13),
    [anon_sym_QMARK_CR] = ACTIONS(13),
    [anon_sym_QMARK4] = ACTIONS(13),
    [anon_sym_QMARKs] = ACTIONS(13),
    [anon_sym_QMARK_BSLASH] = ACTIONS(13),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(13),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_natural_literal] = ACTIONS(137),
    [sym_float_literal] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [sym_type_variable] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_param] = STATE(58),
    [sym__literal] = STATE(30),
    [sym_boolean_literal] = STATE(30),
    [sym_char_literal] = STATE(30),
    [sym_text_literal] = STATE(30),
    [sym_hash_literal] = STATE(30),
    [sym_list_literal] = STATE(30),
    [sym_tuple_literal] = STATE(30),
    [sym_lambda] = STATE(30),
    [sym__operation] = STATE(30),
    [sym_addition_op] = STATE(30),
    [sym__expression] = STATE(30),
    [aux_sym_term_definition_repeat1] = STATE(58),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_byte_literal] = ACTIONS(141),
    [aux_sym_char_literal_token1] = ACTIONS(11),
    [anon_sym_QMARK_TAB] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(13),
    [anon_sym_QMARKa] = ACTIONS(13),
    [anon_sym_QMARK2] = ACTIONS(13),
    [anon_sym_QMARK3] = ACTIONS(13),
    [anon_sym_QMARK_LF] = ACTIONS(13),
    [anon_sym_QMARK_CR] = ACTIONS(13),
    [anon_sym_QMARK4] = ACTIONS(13),
    [anon_sym_QMARKs] = ACTIONS(13),
    [anon_sym_QMARK_BSLASH] = ACTIONS(13),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(13),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_natural_literal] = ACTIONS(143),
    [sym_float_literal] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(27),
    [sym_type_variable] = ACTIONS(125),
    [sym_line_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_param] = STATE(58),
    [sym__literal] = STATE(31),
    [sym_boolean_literal] = STATE(31),
    [sym_char_literal] = STATE(31),
    [sym_text_literal] = STATE(31),
    [sym_hash_literal] = STATE(31),
    [sym_list_literal] = STATE(31),
    [sym_tuple_literal] = STATE(31),
    [sym_lambda] = STATE(31),
    [sym__operation] = STATE(31),
    [sym_addition_op] = STATE(31),
    [sym__expression] = STATE(31),
    [aux_sym_term_definition_repeat1] = STATE(58),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_byte_literal] = ACTIONS(145),
    [aux_sym_char_literal_token1] = ACTIONS(11),
    [anon_sym_QMARK_TAB] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(13),
    [anon_sym_QMARKa] = ACTIONS(13),
    [anon_sym_QMARK2] = ACTIONS(13),
    [anon_sym_QMARK3] = ACTIONS(13),
    [anon_sym_QMARK_LF] = ACTIONS(13),
    [anon_sym_QMARK_CR] = ACTIONS(13),
    [anon_sym_QMARK4] = ACTIONS(13),
    [anon_sym_QMARKs] = ACTIONS(13),
    [anon_sym_QMARK_BSLASH] = ACTIONS(13),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(13),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_natural_literal] = ACTIONS(147),
    [sym_float_literal] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(27),
    [sym_type_variable] = ACTIONS(125),
    [sym_line_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_param] = STATE(62),
    [sym__literal] = STATE(65),
    [sym_boolean_literal] = STATE(65),
    [sym_char_literal] = STATE(65),
    [sym_text_literal] = STATE(65),
    [sym_hash_literal] = STATE(65),
    [sym_list_literal] = STATE(65),
    [sym_tuple_literal] = STATE(65),
    [sym_lambda] = STATE(65),
    [sym__operation] = STATE(65),
    [sym_addition_op] = STATE(65),
    [sym__expression] = STATE(65),
    [aux_sym_term_definition_repeat1] = STATE(62),
    [anon_sym_true] = ACTIONS(99),
    [anon_sym_false] = ACTIONS(99),
    [sym_byte_literal] = ACTIONS(149),
    [aux_sym_char_literal_token1] = ACTIONS(103),
    [anon_sym_QMARK_TAB] = ACTIONS(105),
    [anon_sym_QMARK] = ACTIONS(105),
    [anon_sym_QMARKa] = ACTIONS(105),
    [anon_sym_QMARK2] = ACTIONS(105),
    [anon_sym_QMARK3] = ACTIONS(105),
    [anon_sym_QMARK_LF] = ACTIONS(105),
    [anon_sym_QMARK_CR] = ACTIONS(105),
    [anon_sym_QMARK4] = ACTIONS(105),
    [anon_sym_QMARKs] = ACTIONS(105),
    [anon_sym_QMARK_BSLASH] = ACTIONS(105),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(105),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(109),
    [anon_sym_POUND] = ACTIONS(111),
    [sym_natural_literal] = ACTIONS(151),
    [sym_float_literal] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [sym_type_variable] = ACTIONS(119),
    [sym_line_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_param] = STATE(58),
    [sym__literal] = STATE(32),
    [sym_boolean_literal] = STATE(32),
    [sym_char_literal] = STATE(32),
    [sym_text_literal] = STATE(32),
    [sym_hash_literal] = STATE(32),
    [sym_list_literal] = STATE(32),
    [sym_tuple_literal] = STATE(32),
    [sym_lambda] = STATE(32),
    [sym__operation] = STATE(32),
    [sym_addition_op] = STATE(32),
    [sym__expression] = STATE(32),
    [aux_sym_term_definition_repeat1] = STATE(58),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_byte_literal] = ACTIONS(153),
    [aux_sym_char_literal_token1] = ACTIONS(11),
    [anon_sym_QMARK_TAB] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(13),
    [anon_sym_QMARKa] = ACTIONS(13),
    [anon_sym_QMARK2] = ACTIONS(13),
    [anon_sym_QMARK3] = ACTIONS(13),
    [anon_sym_QMARK_LF] = ACTIONS(13),
    [anon_sym_QMARK_CR] = ACTIONS(13),
    [anon_sym_QMARK4] = ACTIONS(13),
    [anon_sym_QMARKs] = ACTIONS(13),
    [anon_sym_QMARK_BSLASH] = ACTIONS(13),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(13),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_natural_literal] = ACTIONS(155),
    [sym_float_literal] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(27),
    [sym_type_variable] = ACTIONS(125),
    [sym_line_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_param] = STATE(58),
    [sym__literal] = STATE(33),
    [sym_boolean_literal] = STATE(33),
    [sym_char_literal] = STATE(33),
    [sym_text_literal] = STATE(33),
    [sym_hash_literal] = STATE(33),
    [sym_list_literal] = STATE(33),
    [sym_tuple_literal] = STATE(33),
    [sym_lambda] = STATE(33),
    [sym__operation] = STATE(33),
    [sym_addition_op] = STATE(33),
    [sym__expression] = STATE(33),
    [aux_sym_term_definition_repeat1] = STATE(58),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_byte_literal] = ACTIONS(157),
    [aux_sym_char_literal_token1] = ACTIONS(11),
    [anon_sym_QMARK_TAB] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(13),
    [anon_sym_QMARKa] = ACTIONS(13),
    [anon_sym_QMARK2] = ACTIONS(13),
    [anon_sym_QMARK3] = ACTIONS(13),
    [anon_sym_QMARK_LF] = ACTIONS(13),
    [anon_sym_QMARK_CR] = ACTIONS(13),
    [anon_sym_QMARK4] = ACTIONS(13),
    [anon_sym_QMARKs] = ACTIONS(13),
    [anon_sym_QMARK_BSLASH] = ACTIONS(13),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(13),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_natural_literal] = ACTIONS(159),
    [sym_float_literal] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(27),
    [sym_type_variable] = ACTIONS(125),
    [sym_line_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_param] = STATE(62),
    [sym__literal] = STATE(45),
    [sym_boolean_literal] = STATE(45),
    [sym_char_literal] = STATE(45),
    [sym_text_literal] = STATE(45),
    [sym_hash_literal] = STATE(45),
    [sym_list_literal] = STATE(45),
    [sym_tuple_literal] = STATE(45),
    [sym_lambda] = STATE(45),
    [sym__operation] = STATE(45),
    [sym_addition_op] = STATE(45),
    [sym__expression] = STATE(45),
    [aux_sym_term_definition_repeat1] = STATE(62),
    [anon_sym_true] = ACTIONS(99),
    [anon_sym_false] = ACTIONS(99),
    [sym_byte_literal] = ACTIONS(161),
    [aux_sym_char_literal_token1] = ACTIONS(103),
    [anon_sym_QMARK_TAB] = ACTIONS(105),
    [anon_sym_QMARK] = ACTIONS(105),
    [anon_sym_QMARKa] = ACTIONS(105),
    [anon_sym_QMARK2] = ACTIONS(105),
    [anon_sym_QMARK3] = ACTIONS(105),
    [anon_sym_QMARK_LF] = ACTIONS(105),
    [anon_sym_QMARK_CR] = ACTIONS(105),
    [anon_sym_QMARK4] = ACTIONS(105),
    [anon_sym_QMARKs] = ACTIONS(105),
    [anon_sym_QMARK_BSLASH] = ACTIONS(105),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(105),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(109),
    [anon_sym_POUND] = ACTIONS(111),
    [sym_natural_literal] = ACTIONS(163),
    [sym_float_literal] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [sym_type_variable] = ACTIONS(119),
    [sym_line_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_param] = STATE(62),
    [sym__literal] = STATE(82),
    [sym_boolean_literal] = STATE(82),
    [sym_char_literal] = STATE(82),
    [sym_text_literal] = STATE(82),
    [sym_hash_literal] = STATE(82),
    [sym_list_literal] = STATE(82),
    [sym_tuple_literal] = STATE(82),
    [sym_lambda] = STATE(82),
    [aux_sym_term_definition_repeat1] = STATE(62),
    [aux_sym_list_literal_repeat1] = STATE(83),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_byte_literal] = ACTIONS(165),
    [aux_sym_char_literal_token1] = ACTIONS(11),
    [anon_sym_QMARK_TAB] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(13),
    [anon_sym_QMARKa] = ACTIONS(13),
    [anon_sym_QMARK2] = ACTIONS(13),
    [anon_sym_QMARK3] = ACTIONS(13),
    [anon_sym_QMARK_LF] = ACTIONS(13),
    [anon_sym_QMARK_CR] = ACTIONS(13),
    [anon_sym_QMARK4] = ACTIONS(13),
    [anon_sym_QMARKs] = ACTIONS(13),
    [anon_sym_QMARK_BSLASH] = ACTIONS(13),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(13),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_natural_literal] = ACTIONS(167),
    [sym_float_literal] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [sym_type_variable] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_param] = STATE(62),
    [sym__literal] = STATE(84),
    [sym_boolean_literal] = STATE(84),
    [sym_char_literal] = STATE(84),
    [sym_text_literal] = STATE(84),
    [sym_hash_literal] = STATE(84),
    [sym_list_literal] = STATE(84),
    [sym_tuple_literal] = STATE(84),
    [sym_lambda] = STATE(84),
    [aux_sym_term_definition_repeat1] = STATE(62),
    [aux_sym_list_literal_repeat1] = STATE(85),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_byte_literal] = ACTIONS(171),
    [aux_sym_char_literal_token1] = ACTIONS(11),
    [anon_sym_QMARK_TAB] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(13),
    [anon_sym_QMARKa] = ACTIONS(13),
    [anon_sym_QMARK2] = ACTIONS(13),
    [anon_sym_QMARK3] = ACTIONS(13),
    [anon_sym_QMARK_LF] = ACTIONS(13),
    [anon_sym_QMARK_CR] = ACTIONS(13),
    [anon_sym_QMARK4] = ACTIONS(13),
    [anon_sym_QMARKs] = ACTIONS(13),
    [anon_sym_QMARK_BSLASH] = ACTIONS(13),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(13),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_natural_literal] = ACTIONS(173),
    [sym_float_literal] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [sym_type_variable] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(179), 7,
      anon_sym_true,
      anon_sym_false,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
      anon_sym_PLUS,
      sym_type_variable,
    ACTIONS(177), 23,
      ts_builtin_sym_end,
      sym_byte_literal,
      anon_sym_QMARK_TAB,
      anon_sym_QMARK,
      anon_sym_QMARKa,
      anon_sym_QMARK2,
      anon_sym_QMARK3,
      anon_sym_QMARK_LF,
      anon_sym_QMARK_CR,
      anon_sym_QMARK4,
      anon_sym_QMARKs,
      anon_sym_QMARK_BSLASH,
      anon_sym_QMARK_SQUOTE,
      anon_sym_QMARK_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [38] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(183), 7,
      anon_sym_true,
      anon_sym_false,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
      anon_sym_PLUS,
      sym_type_variable,
    ACTIONS(181), 23,
      ts_builtin_sym_end,
      sym_byte_literal,
      anon_sym_QMARK_TAB,
      anon_sym_QMARK,
      anon_sym_QMARKa,
      anon_sym_QMARK2,
      anon_sym_QMARK3,
      anon_sym_QMARK_LF,
      anon_sym_QMARK_CR,
      anon_sym_QMARK4,
      anon_sym_QMARKs,
      anon_sym_QMARK_BSLASH,
      anon_sym_QMARK_SQUOTE,
      anon_sym_QMARK_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [76] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 7,
      anon_sym_true,
      anon_sym_false,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
      anon_sym_PLUS,
      sym_type_variable,
    ACTIONS(185), 23,
      ts_builtin_sym_end,
      sym_byte_literal,
      anon_sym_QMARK_TAB,
      anon_sym_QMARK,
      anon_sym_QMARKa,
      anon_sym_QMARK2,
      anon_sym_QMARK3,
      anon_sym_QMARK_LF,
      anon_sym_QMARK_CR,
      anon_sym_QMARK4,
      anon_sym_QMARKs,
      anon_sym_QMARK_BSLASH,
      anon_sym_QMARK_SQUOTE,
      anon_sym_QMARK_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [114] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(191), 7,
      anon_sym_true,
      anon_sym_false,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
      anon_sym_PLUS,
      sym_type_variable,
    ACTIONS(189), 23,
      ts_builtin_sym_end,
      sym_byte_literal,
      anon_sym_QMARK_TAB,
      anon_sym_QMARK,
      anon_sym_QMARKa,
      anon_sym_QMARK2,
      anon_sym_QMARK3,
      anon_sym_QMARK_LF,
      anon_sym_QMARK_CR,
      anon_sym_QMARK4,
      anon_sym_QMARKs,
      anon_sym_QMARK_BSLASH,
      anon_sym_QMARK_SQUOTE,
      anon_sym_QMARK_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [152] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(195), 7,
      anon_sym_true,
      anon_sym_false,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
      anon_sym_PLUS,
      sym_type_variable,
    ACTIONS(193), 23,
      ts_builtin_sym_end,
      sym_byte_literal,
      anon_sym_QMARK_TAB,
      anon_sym_QMARK,
      anon_sym_QMARKa,
      anon_sym_QMARK2,
      anon_sym_QMARK3,
      anon_sym_QMARK_LF,
      anon_sym_QMARK_CR,
      anon_sym_QMARK4,
      anon_sym_QMARKs,
      anon_sym_QMARK_BSLASH,
      anon_sym_QMARK_SQUOTE,
      anon_sym_QMARK_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [190] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 7,
      anon_sym_true,
      anon_sym_false,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
      anon_sym_PLUS,
      sym_type_variable,
    ACTIONS(197), 23,
      ts_builtin_sym_end,
      sym_byte_literal,
      anon_sym_QMARK_TAB,
      anon_sym_QMARK,
      anon_sym_QMARKa,
      anon_sym_QMARK2,
      anon_sym_QMARK3,
      anon_sym_QMARK_LF,
      anon_sym_QMARK_CR,
      anon_sym_QMARK4,
      anon_sym_QMARKs,
      anon_sym_QMARK_BSLASH,
      anon_sym_QMARK_SQUOTE,
      anon_sym_QMARK_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [228] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(203), 7,
      anon_sym_true,
      anon_sym_false,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
      anon_sym_PLUS,
      sym_type_variable,
    ACTIONS(201), 23,
      ts_builtin_sym_end,
      sym_byte_literal,
      anon_sym_QMARK_TAB,
      anon_sym_QMARK,
      anon_sym_QMARKa,
      anon_sym_QMARK2,
      anon_sym_QMARK3,
      anon_sym_QMARK_LF,
      anon_sym_QMARK_CR,
      anon_sym_QMARK4,
      anon_sym_QMARKs,
      anon_sym_QMARK_BSLASH,
      anon_sym_QMARK_SQUOTE,
      anon_sym_QMARK_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [266] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(207), 7,
      anon_sym_true,
      anon_sym_false,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
      anon_sym_PLUS,
      sym_type_variable,
    ACTIONS(205), 23,
      ts_builtin_sym_end,
      sym_byte_literal,
      anon_sym_QMARK_TAB,
      anon_sym_QMARK,
      anon_sym_QMARKa,
      anon_sym_QMARK2,
      anon_sym_QMARK3,
      anon_sym_QMARK_LF,
      anon_sym_QMARK_CR,
      anon_sym_QMARK4,
      anon_sym_QMARKs,
      anon_sym_QMARK_BSLASH,
      anon_sym_QMARK_SQUOTE,
      anon_sym_QMARK_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [304] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(211), 7,
      anon_sym_true,
      anon_sym_false,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
      anon_sym_PLUS,
      sym_type_variable,
    ACTIONS(209), 23,
      ts_builtin_sym_end,
      sym_byte_literal,
      anon_sym_QMARK_TAB,
      anon_sym_QMARK,
      anon_sym_QMARKa,
      anon_sym_QMARK2,
      anon_sym_QMARK3,
      anon_sym_QMARK_LF,
      anon_sym_QMARK_CR,
      anon_sym_QMARK4,
      anon_sym_QMARKs,
      anon_sym_QMARK_BSLASH,
      anon_sym_QMARK_SQUOTE,
      anon_sym_QMARK_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [342] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(215), 7,
      anon_sym_true,
      anon_sym_false,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
      anon_sym_PLUS,
      sym_type_variable,
    ACTIONS(213), 23,
      ts_builtin_sym_end,
      sym_byte_literal,
      anon_sym_QMARK_TAB,
      anon_sym_QMARK,
      anon_sym_QMARKa,
      anon_sym_QMARK2,
      anon_sym_QMARK3,
      anon_sym_QMARK_LF,
      anon_sym_QMARK_CR,
      anon_sym_QMARK4,
      anon_sym_QMARKs,
      anon_sym_QMARK_BSLASH,
      anon_sym_QMARK_SQUOTE,
      anon_sym_QMARK_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [380] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(219), 7,
      anon_sym_true,
      anon_sym_false,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
      anon_sym_PLUS,
      sym_type_variable,
    ACTIONS(217), 23,
      ts_builtin_sym_end,
      sym_byte_literal,
      anon_sym_QMARK_TAB,
      anon_sym_QMARK,
      anon_sym_QMARKa,
      anon_sym_QMARK2,
      anon_sym_QMARK3,
      anon_sym_QMARK_LF,
      anon_sym_QMARK_CR,
      anon_sym_QMARK4,
      anon_sym_QMARKs,
      anon_sym_QMARK_BSLASH,
      anon_sym_QMARK_SQUOTE,
      anon_sym_QMARK_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
  [418] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 1,
      anon_sym_PLUS,
    ACTIONS(223), 6,
      anon_sym_true,
      anon_sym_false,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
      sym_type_variable,
    ACTIONS(221), 20,
      ts_builtin_sym_end,
      sym_byte_literal,
      anon_sym_QMARK_TAB,
      anon_sym_QMARK,
      anon_sym_QMARKa,
      anon_sym_QMARK2,
      anon_sym_QMARK3,
      anon_sym_QMARK_LF,
      anon_sym_QMARK_CR,
      anon_sym_QMARK4,
      anon_sym_QMARKs,
      anon_sym_QMARK_BSLASH,
      anon_sym_QMARK_SQUOTE,
      anon_sym_QMARK_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
  [455] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(229), 7,
      anon_sym_true,
      anon_sym_false,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
      anon_sym_PLUS,
      sym_type_variable,
    ACTIONS(227), 20,
      ts_builtin_sym_end,
      sym_byte_literal,
      anon_sym_QMARK_TAB,
      anon_sym_QMARK,
      anon_sym_QMARKa,
      anon_sym_QMARK2,
      anon_sym_QMARK3,
      anon_sym_QMARK_LF,
      anon_sym_QMARK_CR,
      anon_sym_QMARK4,
      anon_sym_QMARKs,
      anon_sym_QMARK_BSLASH,
      anon_sym_QMARK_SQUOTE,
      anon_sym_QMARK_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
  [490] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 1,
      anon_sym_PLUS,
    ACTIONS(233), 6,
      anon_sym_true,
      anon_sym_false,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
      sym_type_variable,
    ACTIONS(231), 20,
      ts_builtin_sym_end,
      sym_byte_literal,
      anon_sym_QMARK_TAB,
      anon_sym_QMARK,
      anon_sym_QMARKa,
      anon_sym_QMARK2,
      anon_sym_QMARK3,
      anon_sym_QMARK_LF,
      anon_sym_QMARK_CR,
      anon_sym_QMARK4,
      anon_sym_QMARKs,
      anon_sym_QMARK_BSLASH,
      anon_sym_QMARK_SQUOTE,
      anon_sym_QMARK_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
  [527] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 1,
      anon_sym_PLUS,
    ACTIONS(237), 6,
      anon_sym_true,
      anon_sym_false,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
      sym_type_variable,
    ACTIONS(235), 20,
      ts_builtin_sym_end,
      sym_byte_literal,
      anon_sym_QMARK_TAB,
      anon_sym_QMARK,
      anon_sym_QMARKa,
      anon_sym_QMARK2,
      anon_sym_QMARK3,
      anon_sym_QMARK_LF,
      anon_sym_QMARK_CR,
      anon_sym_QMARK4,
      anon_sym_QMARKs,
      anon_sym_QMARK_BSLASH,
      anon_sym_QMARK_SQUOTE,
      anon_sym_QMARK_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
  [564] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 1,
      anon_sym_PLUS,
    ACTIONS(241), 6,
      anon_sym_true,
      anon_sym_false,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
      sym_type_variable,
    ACTIONS(239), 20,
      ts_builtin_sym_end,
      sym_byte_literal,
      anon_sym_QMARK_TAB,
      anon_sym_QMARK,
      anon_sym_QMARKa,
      anon_sym_QMARK2,
      anon_sym_QMARK3,
      anon_sym_QMARK_LF,
      anon_sym_QMARK_CR,
      anon_sym_QMARK4,
      anon_sym_QMARKs,
      anon_sym_QMARK_BSLASH,
      anon_sym_QMARK_SQUOTE,
      anon_sym_QMARK_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
  [601] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 1,
      anon_sym_PLUS,
    ACTIONS(245), 6,
      anon_sym_true,
      anon_sym_false,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
      sym_type_variable,
    ACTIONS(243), 20,
      ts_builtin_sym_end,
      sym_byte_literal,
      anon_sym_QMARK_TAB,
      anon_sym_QMARK,
      anon_sym_QMARKa,
      anon_sym_QMARK2,
      anon_sym_QMARK3,
      anon_sym_QMARK_LF,
      anon_sym_QMARK_CR,
      anon_sym_QMARK4,
      anon_sym_QMARKs,
      anon_sym_QMARK_BSLASH,
      anon_sym_QMARK_SQUOTE,
      anon_sym_QMARK_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
  [638] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(249), 6,
      anon_sym_true,
      anon_sym_false,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
      sym_type_variable,
    ACTIONS(247), 20,
      ts_builtin_sym_end,
      sym_byte_literal,
      anon_sym_QMARK_TAB,
      anon_sym_QMARK,
      anon_sym_QMARKa,
      anon_sym_QMARK2,
      anon_sym_QMARK3,
      anon_sym_QMARK_LF,
      anon_sym_QMARK_CR,
      anon_sym_QMARK4,
      anon_sym_QMARKs,
      anon_sym_QMARK_BSLASH,
      anon_sym_QMARK_SQUOTE,
      anon_sym_QMARK_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
  [672] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_DASH_GT,
    ACTIONS(41), 1,
      sym_type_variable,
    ACTIONS(43), 1,
      sym_type_polymorphic,
    ACTIONS(47), 3,
      anon_sym_Tuple,
      anon_sym_List,
      anon_sym_abilities_DOTRequest,
    STATE(76), 3,
      sym__type,
      sym_type_builtin,
      sym_type_builtin_constructor,
    ACTIONS(31), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
    ACTIONS(45), 8,
      anon_sym_Nat,
      anon_sym_Int,
      anon_sym_Float,
      anon_sym_Boolean,
      anon_sym_Bytes,
      anon_sym_Text,
      anon_sym_Char,
      anon_sym_LPAREN_RPAREN,
  [711] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_EQ,
    ACTIONS(41), 1,
      sym_type_variable,
    ACTIONS(43), 1,
      sym_type_polymorphic,
    STATE(76), 3,
      sym__type,
      sym_type_builtin,
      sym_type_builtin_constructor,
    ACTIONS(47), 4,
      anon_sym_DASH_GT,
      anon_sym_Tuple,
      anon_sym_List,
      anon_sym_abilities_DOTRequest,
    ACTIONS(45), 8,
      anon_sym_Nat,
      anon_sym_Int,
      anon_sym_Float,
      anon_sym_Boolean,
      anon_sym_Bytes,
      anon_sym_Text,
      anon_sym_Char,
      anon_sym_LPAREN_RPAREN,
  [745] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(251), 1,
      sym_type_variable,
    ACTIONS(253), 1,
      sym_type_polymorphic,
    STATE(89), 3,
      sym__type,
      sym_type_builtin,
      sym_type_builtin_constructor,
    ACTIONS(47), 4,
      anon_sym_DASH_GT,
      anon_sym_Tuple,
      anon_sym_List,
      anon_sym_abilities_DOTRequest,
    ACTIONS(45), 8,
      anon_sym_Nat,
      anon_sym_Int,
      anon_sym_Float,
      anon_sym_Boolean,
      anon_sym_Bytes,
      anon_sym_Text,
      anon_sym_Char,
      anon_sym_LPAREN_RPAREN,
  [776] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_DASH_GT,
    ACTIONS(41), 1,
      sym_type_variable,
    ACTIONS(43), 1,
      sym_type_polymorphic,
    ACTIONS(47), 3,
      anon_sym_Tuple,
      anon_sym_List,
      anon_sym_abilities_DOTRequest,
    STATE(76), 3,
      sym__type,
      sym_type_builtin,
      sym_type_builtin_constructor,
    ACTIONS(45), 8,
      anon_sym_Nat,
      anon_sym_Int,
      anon_sym_Float,
      anon_sym_Boolean,
      anon_sym_Bytes,
      anon_sym_Text,
      anon_sym_Char,
      anon_sym_LPAREN_RPAREN,
  [809] = 4,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      sym_line_comment,
    STATE(43), 1,
      aux_sym_text_literal_repeat1,
    ACTIONS(257), 2,
      aux_sym_text_literal_token1,
      aux_sym_text_literal_token2,
  [823] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_EQ,
    ACTIONS(261), 1,
      sym_type_variable,
    STATE(49), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [837] = 4,
    ACTIONS(259), 1,
      sym_line_comment,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_text_literal_repeat1,
    ACTIONS(265), 2,
      aux_sym_text_literal_token1,
      aux_sym_text_literal_token2,
  [851] = 4,
    ACTIONS(259), 1,
      sym_line_comment,
    ACTIONS(271), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(44), 1,
      aux_sym_text_literal_repeat2,
    ACTIONS(268), 2,
      aux_sym_text_literal_token2,
      aux_sym_text_literal_token3,
  [865] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(273), 1,
      anon_sym_PLUS,
    ACTIONS(239), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [877] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(275), 1,
      anon_sym_DASH_GT,
    ACTIONS(277), 1,
      sym_type_variable,
    STATE(46), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [891] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_list_literal_repeat1,
    ACTIONS(283), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [905] = 4,
    ACTIONS(259), 1,
      sym_line_comment,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      aux_sym_text_literal_repeat1,
    ACTIONS(287), 2,
      aux_sym_text_literal_token1,
      aux_sym_text_literal_token2,
  [919] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(261), 1,
      sym_type_variable,
    ACTIONS(289), 1,
      anon_sym_EQ,
    STATE(68), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [933] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(205), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [943] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(213), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [953] = 4,
    ACTIONS(259), 1,
      sym_line_comment,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      aux_sym_text_literal_repeat1,
    ACTIONS(293), 2,
      aux_sym_text_literal_token1,
      aux_sym_text_literal_token2,
  [967] = 4,
    ACTIONS(259), 1,
      sym_line_comment,
    ACTIONS(291), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(66), 1,
      aux_sym_text_literal_repeat2,
    ACTIONS(295), 2,
      aux_sym_text_literal_token2,
      aux_sym_text_literal_token3,
  [981] = 4,
    ACTIONS(255), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(259), 1,
      sym_line_comment,
    STATE(44), 1,
      aux_sym_text_literal_repeat2,
    ACTIONS(297), 2,
      aux_sym_text_literal_token2,
      aux_sym_text_literal_token3,
  [995] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(227), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [1005] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(177), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [1015] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(197), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [1025] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(299), 1,
      anon_sym_DASH_GT,
    ACTIONS(301), 1,
      sym_type_variable,
    STATE(46), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [1039] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(217), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [1049] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(209), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [1059] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(189), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [1069] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(301), 1,
      sym_type_variable,
    ACTIONS(303), 1,
      anon_sym_DASH_GT,
    STATE(46), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [1083] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(201), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [1093] = 4,
    ACTIONS(259), 1,
      sym_line_comment,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_text_literal_repeat1,
    ACTIONS(257), 2,
      aux_sym_text_literal_token1,
      aux_sym_text_literal_token2,
  [1107] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(273), 1,
      anon_sym_PLUS,
    ACTIONS(221), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1119] = 4,
    ACTIONS(259), 1,
      sym_line_comment,
    ACTIONS(305), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(44), 1,
      aux_sym_text_literal_repeat2,
    ACTIONS(297), 2,
      aux_sym_text_literal_token2,
      aux_sym_text_literal_token3,
  [1133] = 4,
    ACTIONS(259), 1,
      sym_line_comment,
    ACTIONS(285), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(54), 1,
      aux_sym_text_literal_repeat2,
    ACTIONS(307), 2,
      aux_sym_text_literal_token2,
      aux_sym_text_literal_token3,
  [1147] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(275), 1,
      anon_sym_EQ,
    ACTIONS(309), 1,
      sym_type_variable,
    STATE(68), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [1161] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [1171] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [1181] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(181), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [1191] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym_list_literal_repeat1,
  [1204] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      aux_sym_list_literal_repeat1,
  [1217] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_list_literal_repeat1,
  [1230] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1239] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(318), 3,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      sym_type_variable,
  [1248] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(320), 3,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      sym_type_variable,
  [1257] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(322), 3,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      sym_type_variable,
  [1266] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_list_literal_repeat1,
  [1279] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_list_literal_repeat1,
  [1292] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      aux_sym_list_literal_repeat1,
  [1305] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(326), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      aux_sym_list_literal_repeat1,
  [1318] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(326), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      aux_sym_list_literal_repeat1,
  [1331] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_list_literal_repeat1,
  [1344] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_list_literal_repeat1,
  [1357] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      aux_sym_list_literal_repeat1,
  [1370] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_list_literal_repeat1,
  [1383] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(334), 1,
      sym_type_variable,
    STATE(36), 1,
      sym_term_definition,
  [1393] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(336), 1,
      sym_type_variable,
  [1400] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      aux_sym_hash_literal_token1,
  [1407] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(340), 1,
      aux_sym_hash_literal_token1,
  [1414] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 38,
  [SMALL_STATE(21)] = 76,
  [SMALL_STATE(22)] = 114,
  [SMALL_STATE(23)] = 152,
  [SMALL_STATE(24)] = 190,
  [SMALL_STATE(25)] = 228,
  [SMALL_STATE(26)] = 266,
  [SMALL_STATE(27)] = 304,
  [SMALL_STATE(28)] = 342,
  [SMALL_STATE(29)] = 380,
  [SMALL_STATE(30)] = 418,
  [SMALL_STATE(31)] = 455,
  [SMALL_STATE(32)] = 490,
  [SMALL_STATE(33)] = 527,
  [SMALL_STATE(34)] = 564,
  [SMALL_STATE(35)] = 601,
  [SMALL_STATE(36)] = 638,
  [SMALL_STATE(37)] = 672,
  [SMALL_STATE(38)] = 711,
  [SMALL_STATE(39)] = 745,
  [SMALL_STATE(40)] = 776,
  [SMALL_STATE(41)] = 809,
  [SMALL_STATE(42)] = 823,
  [SMALL_STATE(43)] = 837,
  [SMALL_STATE(44)] = 851,
  [SMALL_STATE(45)] = 865,
  [SMALL_STATE(46)] = 877,
  [SMALL_STATE(47)] = 891,
  [SMALL_STATE(48)] = 905,
  [SMALL_STATE(49)] = 919,
  [SMALL_STATE(50)] = 933,
  [SMALL_STATE(51)] = 943,
  [SMALL_STATE(52)] = 953,
  [SMALL_STATE(53)] = 967,
  [SMALL_STATE(54)] = 981,
  [SMALL_STATE(55)] = 995,
  [SMALL_STATE(56)] = 1005,
  [SMALL_STATE(57)] = 1015,
  [SMALL_STATE(58)] = 1025,
  [SMALL_STATE(59)] = 1039,
  [SMALL_STATE(60)] = 1049,
  [SMALL_STATE(61)] = 1059,
  [SMALL_STATE(62)] = 1069,
  [SMALL_STATE(63)] = 1083,
  [SMALL_STATE(64)] = 1093,
  [SMALL_STATE(65)] = 1107,
  [SMALL_STATE(66)] = 1119,
  [SMALL_STATE(67)] = 1133,
  [SMALL_STATE(68)] = 1147,
  [SMALL_STATE(69)] = 1161,
  [SMALL_STATE(70)] = 1171,
  [SMALL_STATE(71)] = 1181,
  [SMALL_STATE(72)] = 1191,
  [SMALL_STATE(73)] = 1204,
  [SMALL_STATE(74)] = 1217,
  [SMALL_STATE(75)] = 1230,
  [SMALL_STATE(76)] = 1239,
  [SMALL_STATE(77)] = 1248,
  [SMALL_STATE(78)] = 1257,
  [SMALL_STATE(79)] = 1266,
  [SMALL_STATE(80)] = 1279,
  [SMALL_STATE(81)] = 1292,
  [SMALL_STATE(82)] = 1305,
  [SMALL_STATE(83)] = 1318,
  [SMALL_STATE(84)] = 1331,
  [SMALL_STATE(85)] = 1344,
  [SMALL_STATE(86)] = 1357,
  [SMALL_STATE(87)] = 1370,
  [SMALL_STATE(88)] = 1383,
  [SMALL_STATE(89)] = 1393,
  [SMALL_STATE(90)] = 1400,
  [SMALL_STATE(91)] = 1407,
  [SMALL_STATE(92)] = 1414,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_literal_repeat1, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 4),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_literal, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_literal, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 4),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition_op, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addition_op, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_definition, 4),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_definition, 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_definition, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_definition, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_declaration, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__top_level_declaration, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term_declaration, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__term_declaration, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_signature, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat1, 2),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat1, 2), SHIFT_REPEAT(43),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat2, 2), SHIFT_REPEAT(44),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat2, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_definition_repeat1, 2),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_definition_repeat1, 2), SHIFT_REPEAT(40),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_literal_repeat1, 2), SHIFT_REPEAT(6),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_literal_repeat1, 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_definition_repeat1, 2), SHIFT_REPEAT(38),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_builtin, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_builtin_constructor, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_signature, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [342] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_unison(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
