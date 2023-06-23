#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_true = 1,
  anon_sym_false = 2,
  sym_byte_literal = 3,
  aux_sym_char_literal_token1 = 4,
  anon_sym_QMARK_TAB = 5,
  anon_sym_QMARK = 6,
  anon_sym_QMARKa = 7,
  anon_sym_QMARK2 = 8,
  anon_sym_QMARK3 = 9,
  anon_sym_QMARK_LF = 10,
  anon_sym_QMARK_CR = 11,
  anon_sym_QMARK4 = 12,
  anon_sym_QMARKs = 13,
  anon_sym_QMARK_BSLASH = 14,
  anon_sym_QMARK_SQUOTE = 15,
  anon_sym_QMARK_DQUOTE = 16,
  anon_sym_DQUOTE = 17,
  aux_sym_text_literal_token1 = 18,
  aux_sym_text_literal_token2 = 19,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 20,
  aux_sym_text_literal_token3 = 21,
  anon_sym_POUND = 22,
  aux_sym_hash_literal_token1 = 23,
  sym_natural_literal = 24,
  sym_float_literal = 25,
  anon_sym_LBRACK = 26,
  anon_sym_COMMA = 27,
  anon_sym_RBRACK = 28,
  anon_sym_LPAREN = 29,
  anon_sym_RPAREN = 30,
  anon_sym_DASH_GT = 31,
  anon_sym_PLUS = 32,
  sym_type_variable = 33,
  sym_type_polymorphic = 34,
  anon_sym_Tuple = 35,
  anon_sym_List = 36,
  anon_sym_abilities_DOTRequest = 37,
  aux_sym__terminator_token1 = 38,
  sym_line_comment = 39,
  sym_source_file = 40,
  sym__top_level_declaration = 41,
  sym_param = 42,
  sym__literal = 43,
  sym_boolean_literal = 44,
  sym_char_literal = 45,
  sym_text_literal = 46,
  sym_hash_literal = 47,
  sym_list_literal = 48,
  sym_tuple_literal = 49,
  sym_lambda = 50,
  sym__operation = 51,
  sym_addition_op = 52,
  sym__expression = 53,
  sym__type = 54,
  sym_type_builtin_constructor = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym_text_literal_repeat1 = 57,
  aux_sym_text_literal_repeat2 = 58,
  aux_sym_list_literal_repeat1 = 59,
  aux_sym_lambda_repeat1 = 60,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [anon_sym_Tuple] = "Tuple",
  [anon_sym_List] = "List",
  [anon_sym_abilities_DOTRequest] = "abilities.Request",
  [aux_sym__terminator_token1] = "_terminator_token1",
  [sym_line_comment] = "line_comment",
  [sym_source_file] = "source_file",
  [sym__top_level_declaration] = "_top_level_declaration",
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
  [sym_type_builtin_constructor] = "type_builtin_constructor",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_text_literal_repeat1] = "text_literal_repeat1",
  [aux_sym_text_literal_repeat2] = "text_literal_repeat2",
  [aux_sym_list_literal_repeat1] = "list_literal_repeat1",
  [aux_sym_lambda_repeat1] = "lambda_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [anon_sym_Tuple] = anon_sym_Tuple,
  [anon_sym_List] = anon_sym_List,
  [anon_sym_abilities_DOTRequest] = anon_sym_abilities_DOTRequest,
  [aux_sym__terminator_token1] = aux_sym__terminator_token1,
  [sym_line_comment] = sym_line_comment,
  [sym_source_file] = sym_source_file,
  [sym__top_level_declaration] = sym__top_level_declaration,
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
  [sym_type_builtin_constructor] = sym_type_builtin_constructor,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_text_literal_repeat1] = aux_sym_text_literal_repeat1,
  [aux_sym_text_literal_repeat2] = aux_sym_text_literal_repeat2,
  [aux_sym_list_literal_repeat1] = aux_sym_list_literal_repeat1,
  [aux_sym_lambda_repeat1] = aux_sym_lambda_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [sym_type_builtin_constructor] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
  [aux_sym_lambda_repeat1] = {
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
  [8] = 4,
  [9] = 9,
  [10] = 6,
  [11] = 5,
  [12] = 9,
  [13] = 13,
  [14] = 7,
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
  [31] = 15,
  [32] = 32,
  [33] = 29,
  [34] = 21,
  [35] = 35,
  [36] = 20,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 40,
  [44] = 41,
  [45] = 45,
  [46] = 30,
  [47] = 19,
  [48] = 17,
  [49] = 49,
  [50] = 35,
  [51] = 18,
  [52] = 16,
  [53] = 45,
  [54] = 23,
  [55] = 22,
  [56] = 27,
  [57] = 49,
  [58] = 24,
  [59] = 25,
  [60] = 26,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 61,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 62,
  [69] = 66,
  [70] = 70,
  [71] = 65,
  [72] = 63,
  [73] = 67,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 76,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == 'L') ADVANCE(85);
      if (lookahead == 'T') ADVANCE(86);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == ']') ADVANCE(62);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(34);
      if (lookahead == 8) ADVANCE(36);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == 11) ADVANCE(40);
      if (lookahead == '\f') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(39);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(51);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == 'L') ADVANCE(85);
      if (lookahead == 'T') ADVANCE(86);
      if (lookahead == ']') ADVANCE(62);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(92);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '>') ADVANCE(65);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '>') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == 'R') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'q') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_byte_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_QMARK_TAB);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_QMARKa);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_QMARK3);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_QMARK_LF);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_QMARK_CR);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_QMARK4);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_QMARKs);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_QMARK_BSLASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_QMARK_SQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_QMARK_DQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_text_literal_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_text_literal_token1);
      if (lookahead == '-') ADVANCE(92);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_text_literal_token1);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(47);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_text_literal_token2);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_text_literal_token3);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_text_literal_token3);
      if (lookahead == '-') ADVANCE(92);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_text_literal_token3);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(52);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_hash_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_natural_literal);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_natural_literal);
      if (lookahead == '.') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'a') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'b') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'e') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'e') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'i') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'i') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'i') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'l') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'l') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'r') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 's') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 's') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'u') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_type_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'i') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'u') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_Tuple);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_List);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_abilities_DOTRequest);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__terminator_token1);
      if (lookahead == ';') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 10},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [anon_sym_Tuple] = ACTIONS(1),
    [anon_sym_List] = ACTIONS(1),
    [anon_sym_abilities_DOTRequest] = ACTIONS(1),
    [aux_sym__terminator_token1] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(77),
    [sym__top_level_declaration] = STATE(3),
    [sym_param] = STATE(44),
    [sym__literal] = STATE(28),
    [sym_boolean_literal] = STATE(28),
    [sym_char_literal] = STATE(28),
    [sym_text_literal] = STATE(28),
    [sym_hash_literal] = STATE(28),
    [sym_list_literal] = STATE(28),
    [sym_tuple_literal] = STATE(28),
    [sym_lambda] = STATE(28),
    [sym__operation] = STATE(28),
    [sym_addition_op] = STATE(28),
    [sym__expression] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_lambda_repeat1] = STATE(44),
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
    [sym__top_level_declaration] = STATE(2),
    [sym_param] = STATE(44),
    [sym__literal] = STATE(28),
    [sym_boolean_literal] = STATE(28),
    [sym_char_literal] = STATE(28),
    [sym_text_literal] = STATE(28),
    [sym_hash_literal] = STATE(28),
    [sym_list_literal] = STATE(28),
    [sym_tuple_literal] = STATE(28),
    [sym_lambda] = STATE(28),
    [sym__operation] = STATE(28),
    [sym_addition_op] = STATE(28),
    [sym__expression] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_lambda_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_byte_literal] = ACTIONS(36),
    [aux_sym_char_literal_token1] = ACTIONS(39),
    [anon_sym_QMARK_TAB] = ACTIONS(42),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_QMARKa] = ACTIONS(42),
    [anon_sym_QMARK2] = ACTIONS(42),
    [anon_sym_QMARK3] = ACTIONS(42),
    [anon_sym_QMARK_LF] = ACTIONS(42),
    [anon_sym_QMARK_CR] = ACTIONS(42),
    [anon_sym_QMARK4] = ACTIONS(42),
    [anon_sym_QMARKs] = ACTIONS(42),
    [anon_sym_QMARK_BSLASH] = ACTIONS(42),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(42),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(48),
    [anon_sym_POUND] = ACTIONS(51),
    [sym_natural_literal] = ACTIONS(54),
    [sym_float_literal] = ACTIONS(36),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_DASH_GT] = ACTIONS(63),
    [sym_type_variable] = ACTIONS(66),
    [sym_line_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__top_level_declaration] = STATE(2),
    [sym_param] = STATE(44),
    [sym__literal] = STATE(28),
    [sym_boolean_literal] = STATE(28),
    [sym_char_literal] = STATE(28),
    [sym_text_literal] = STATE(28),
    [sym_hash_literal] = STATE(28),
    [sym_list_literal] = STATE(28),
    [sym_tuple_literal] = STATE(28),
    [sym_lambda] = STATE(28),
    [sym__operation] = STATE(28),
    [sym_addition_op] = STATE(28),
    [sym__expression] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_lambda_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(69),
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
  [4] = {
    [sym_param] = STATE(44),
    [sym__literal] = STATE(27),
    [sym_boolean_literal] = STATE(27),
    [sym_char_literal] = STATE(27),
    [sym_text_literal] = STATE(27),
    [sym_hash_literal] = STATE(27),
    [sym_list_literal] = STATE(27),
    [sym_tuple_literal] = STATE(27),
    [sym_lambda] = STATE(27),
    [sym__operation] = STATE(27),
    [sym_addition_op] = STATE(27),
    [sym__expression] = STATE(27),
    [aux_sym_lambda_repeat1] = STATE(44),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_byte_literal] = ACTIONS(71),
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
    [sym_natural_literal] = ACTIONS(73),
    [sym_float_literal] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(27),
    [sym_type_variable] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_param] = STATE(41),
    [sym__literal] = STATE(73),
    [sym_boolean_literal] = STATE(73),
    [sym_char_literal] = STATE(73),
    [sym_text_literal] = STATE(73),
    [sym_hash_literal] = STATE(73),
    [sym_list_literal] = STATE(73),
    [sym_tuple_literal] = STATE(73),
    [sym_lambda] = STATE(73),
    [aux_sym_list_literal_repeat1] = STATE(64),
    [aux_sym_lambda_repeat1] = STATE(41),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_byte_literal] = ACTIONS(75),
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
    [sym_natural_literal] = ACTIONS(77),
    [sym_float_literal] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_DASH_GT] = ACTIONS(83),
    [sym_type_variable] = ACTIONS(85),
    [sym_line_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_param] = STATE(41),
    [sym__literal] = STATE(71),
    [sym_boolean_literal] = STATE(71),
    [sym_char_literal] = STATE(71),
    [sym_text_literal] = STATE(71),
    [sym_hash_literal] = STATE(71),
    [sym_list_literal] = STATE(71),
    [sym_tuple_literal] = STATE(71),
    [sym_lambda] = STATE(71),
    [aux_sym_list_literal_repeat1] = STATE(72),
    [aux_sym_lambda_repeat1] = STATE(41),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_byte_literal] = ACTIONS(87),
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
    [sym_natural_literal] = ACTIONS(89),
    [sym_float_literal] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(83),
    [sym_type_variable] = ACTIONS(85),
    [sym_line_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_param] = STATE(41),
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
    [aux_sym_lambda_repeat1] = STATE(41),
    [anon_sym_true] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(93),
    [sym_byte_literal] = ACTIONS(95),
    [aux_sym_char_literal_token1] = ACTIONS(97),
    [anon_sym_QMARK_TAB] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_QMARKa] = ACTIONS(99),
    [anon_sym_QMARK2] = ACTIONS(99),
    [anon_sym_QMARK3] = ACTIONS(99),
    [anon_sym_QMARK_LF] = ACTIONS(99),
    [anon_sym_QMARK_CR] = ACTIONS(99),
    [anon_sym_QMARK4] = ACTIONS(99),
    [anon_sym_QMARKs] = ACTIONS(99),
    [anon_sym_QMARK_BSLASH] = ACTIONS(99),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(99),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(105),
    [sym_natural_literal] = ACTIONS(107),
    [sym_float_literal] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_DASH_GT] = ACTIONS(83),
    [sym_type_variable] = ACTIONS(113),
    [sym_line_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_param] = STATE(41),
    [sym__literal] = STATE(56),
    [sym_boolean_literal] = STATE(56),
    [sym_char_literal] = STATE(56),
    [sym_text_literal] = STATE(56),
    [sym_hash_literal] = STATE(56),
    [sym_list_literal] = STATE(56),
    [sym_tuple_literal] = STATE(56),
    [sym_lambda] = STATE(56),
    [sym__operation] = STATE(56),
    [sym_addition_op] = STATE(56),
    [sym__expression] = STATE(56),
    [aux_sym_lambda_repeat1] = STATE(41),
    [anon_sym_true] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(93),
    [sym_byte_literal] = ACTIONS(115),
    [aux_sym_char_literal_token1] = ACTIONS(97),
    [anon_sym_QMARK_TAB] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_QMARKa] = ACTIONS(99),
    [anon_sym_QMARK2] = ACTIONS(99),
    [anon_sym_QMARK3] = ACTIONS(99),
    [anon_sym_QMARK_LF] = ACTIONS(99),
    [anon_sym_QMARK_CR] = ACTIONS(99),
    [anon_sym_QMARK4] = ACTIONS(99),
    [anon_sym_QMARKs] = ACTIONS(99),
    [anon_sym_QMARK_BSLASH] = ACTIONS(99),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(99),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(105),
    [sym_natural_literal] = ACTIONS(117),
    [sym_float_literal] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_DASH_GT] = ACTIONS(83),
    [sym_type_variable] = ACTIONS(113),
    [sym_line_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_param] = STATE(41),
    [sym__literal] = STATE(46),
    [sym_boolean_literal] = STATE(46),
    [sym_char_literal] = STATE(46),
    [sym_text_literal] = STATE(46),
    [sym_hash_literal] = STATE(46),
    [sym_list_literal] = STATE(46),
    [sym_tuple_literal] = STATE(46),
    [sym_lambda] = STATE(46),
    [sym__operation] = STATE(46),
    [sym_addition_op] = STATE(46),
    [sym__expression] = STATE(46),
    [aux_sym_lambda_repeat1] = STATE(41),
    [anon_sym_true] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(93),
    [sym_byte_literal] = ACTIONS(119),
    [aux_sym_char_literal_token1] = ACTIONS(97),
    [anon_sym_QMARK_TAB] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_QMARKa] = ACTIONS(99),
    [anon_sym_QMARK2] = ACTIONS(99),
    [anon_sym_QMARK3] = ACTIONS(99),
    [anon_sym_QMARK_LF] = ACTIONS(99),
    [anon_sym_QMARK_CR] = ACTIONS(99),
    [anon_sym_QMARK4] = ACTIONS(99),
    [anon_sym_QMARKs] = ACTIONS(99),
    [anon_sym_QMARK_BSLASH] = ACTIONS(99),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(99),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(105),
    [sym_natural_literal] = ACTIONS(121),
    [sym_float_literal] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_DASH_GT] = ACTIONS(83),
    [sym_type_variable] = ACTIONS(113),
    [sym_line_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_param] = STATE(41),
    [sym__literal] = STATE(65),
    [sym_boolean_literal] = STATE(65),
    [sym_char_literal] = STATE(65),
    [sym_text_literal] = STATE(65),
    [sym_hash_literal] = STATE(65),
    [sym_list_literal] = STATE(65),
    [sym_tuple_literal] = STATE(65),
    [sym_lambda] = STATE(65),
    [aux_sym_list_literal_repeat1] = STATE(63),
    [aux_sym_lambda_repeat1] = STATE(41),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_byte_literal] = ACTIONS(123),
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
    [sym_natural_literal] = ACTIONS(125),
    [sym_float_literal] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(83),
    [sym_type_variable] = ACTIONS(85),
    [sym_line_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_param] = STATE(41),
    [sym__literal] = STATE(67),
    [sym_boolean_literal] = STATE(67),
    [sym_char_literal] = STATE(67),
    [sym_text_literal] = STATE(67),
    [sym_hash_literal] = STATE(67),
    [sym_list_literal] = STATE(67),
    [sym_tuple_literal] = STATE(67),
    [sym_lambda] = STATE(67),
    [aux_sym_list_literal_repeat1] = STATE(61),
    [aux_sym_lambda_repeat1] = STATE(41),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_byte_literal] = ACTIONS(129),
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
    [sym_natural_literal] = ACTIONS(131),
    [sym_float_literal] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_DASH_GT] = ACTIONS(83),
    [sym_type_variable] = ACTIONS(85),
    [sym_line_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_param] = STATE(44),
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
    [aux_sym_lambda_repeat1] = STATE(44),
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
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(27),
    [sym_type_variable] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_param] = STATE(41),
    [sym__literal] = STATE(70),
    [sym_boolean_literal] = STATE(70),
    [sym_char_literal] = STATE(70),
    [sym_text_literal] = STATE(70),
    [sym_hash_literal] = STATE(70),
    [sym_list_literal] = STATE(70),
    [sym_tuple_literal] = STATE(70),
    [sym_lambda] = STATE(70),
    [aux_sym_lambda_repeat1] = STATE(41),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_byte_literal] = ACTIONS(139),
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
    [sym_natural_literal] = ACTIONS(141),
    [sym_float_literal] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_DASH_GT] = ACTIONS(83),
    [sym_type_variable] = ACTIONS(85),
    [sym_line_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_param] = STATE(44),
    [sym__literal] = STATE(29),
    [sym_boolean_literal] = STATE(29),
    [sym_char_literal] = STATE(29),
    [sym_text_literal] = STATE(29),
    [sym_hash_literal] = STATE(29),
    [sym_list_literal] = STATE(29),
    [sym_tuple_literal] = STATE(29),
    [sym_lambda] = STATE(29),
    [sym__operation] = STATE(29),
    [sym_addition_op] = STATE(29),
    [sym__expression] = STATE(29),
    [aux_sym_lambda_repeat1] = STATE(44),
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
    [sym_type_variable] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__type] = STATE(74),
    [sym_type_builtin_constructor] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [sym_byte_literal] = ACTIONS(149),
    [aux_sym_char_literal_token1] = ACTIONS(151),
    [anon_sym_QMARK_TAB] = ACTIONS(149),
    [anon_sym_QMARK] = ACTIONS(149),
    [anon_sym_QMARKa] = ACTIONS(149),
    [anon_sym_QMARK2] = ACTIONS(149),
    [anon_sym_QMARK3] = ACTIONS(149),
    [anon_sym_QMARK_LF] = ACTIONS(149),
    [anon_sym_QMARK_CR] = ACTIONS(149),
    [anon_sym_QMARK4] = ACTIONS(149),
    [anon_sym_QMARKs] = ACTIONS(149),
    [anon_sym_QMARK_BSLASH] = ACTIONS(149),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(149),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(149),
    [anon_sym_DQUOTE] = ACTIONS(151),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(149),
    [anon_sym_POUND] = ACTIONS(149),
    [sym_natural_literal] = ACTIONS(151),
    [sym_float_literal] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_DASH_GT] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(151),
    [sym_type_variable] = ACTIONS(155),
    [sym_type_polymorphic] = ACTIONS(157),
    [anon_sym_Tuple] = ACTIONS(159),
    [anon_sym_List] = ACTIONS(159),
    [anon_sym_abilities_DOTRequest] = ACTIONS(159),
    [sym_line_comment] = ACTIONS(3),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_true] = ACTIONS(163),
    [anon_sym_false] = ACTIONS(163),
    [sym_byte_literal] = ACTIONS(161),
    [aux_sym_char_literal_token1] = ACTIONS(163),
    [anon_sym_QMARK_TAB] = ACTIONS(161),
    [anon_sym_QMARK] = ACTIONS(161),
    [anon_sym_QMARKa] = ACTIONS(161),
    [anon_sym_QMARK2] = ACTIONS(161),
    [anon_sym_QMARK3] = ACTIONS(161),
    [anon_sym_QMARK_LF] = ACTIONS(161),
    [anon_sym_QMARK_CR] = ACTIONS(161),
    [anon_sym_QMARK4] = ACTIONS(161),
    [anon_sym_QMARKs] = ACTIONS(161),
    [anon_sym_QMARK_BSLASH] = ACTIONS(161),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(161),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(161),
    [anon_sym_POUND] = ACTIONS(161),
    [sym_natural_literal] = ACTIONS(163),
    [sym_float_literal] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_RBRACK] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_DASH_GT] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(163),
    [sym_type_variable] = ACTIONS(163),
    [sym_line_comment] = ACTIONS(3),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(167),
    [sym_byte_literal] = ACTIONS(165),
    [aux_sym_char_literal_token1] = ACTIONS(167),
    [anon_sym_QMARK_TAB] = ACTIONS(165),
    [anon_sym_QMARK] = ACTIONS(165),
    [anon_sym_QMARKa] = ACTIONS(165),
    [anon_sym_QMARK2] = ACTIONS(165),
    [anon_sym_QMARK3] = ACTIONS(165),
    [anon_sym_QMARK_LF] = ACTIONS(165),
    [anon_sym_QMARK_CR] = ACTIONS(165),
    [anon_sym_QMARK4] = ACTIONS(165),
    [anon_sym_QMARKs] = ACTIONS(165),
    [anon_sym_QMARK_BSLASH] = ACTIONS(165),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(165),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(165),
    [anon_sym_POUND] = ACTIONS(165),
    [sym_natural_literal] = ACTIONS(167),
    [sym_float_literal] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_DASH_GT] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(167),
    [sym_type_variable] = ACTIONS(167),
    [sym_line_comment] = ACTIONS(3),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_true] = ACTIONS(171),
    [anon_sym_false] = ACTIONS(171),
    [sym_byte_literal] = ACTIONS(169),
    [aux_sym_char_literal_token1] = ACTIONS(171),
    [anon_sym_QMARK_TAB] = ACTIONS(169),
    [anon_sym_QMARK] = ACTIONS(169),
    [anon_sym_QMARKa] = ACTIONS(169),
    [anon_sym_QMARK2] = ACTIONS(169),
    [anon_sym_QMARK3] = ACTIONS(169),
    [anon_sym_QMARK_LF] = ACTIONS(169),
    [anon_sym_QMARK_CR] = ACTIONS(169),
    [anon_sym_QMARK4] = ACTIONS(169),
    [anon_sym_QMARKs] = ACTIONS(169),
    [anon_sym_QMARK_BSLASH] = ACTIONS(169),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(169),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(169),
    [anon_sym_POUND] = ACTIONS(169),
    [sym_natural_literal] = ACTIONS(171),
    [sym_float_literal] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_DASH_GT] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(171),
    [sym_type_variable] = ACTIONS(171),
    [sym_line_comment] = ACTIONS(3),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_true] = ACTIONS(175),
    [anon_sym_false] = ACTIONS(175),
    [sym_byte_literal] = ACTIONS(173),
    [aux_sym_char_literal_token1] = ACTIONS(175),
    [anon_sym_QMARK_TAB] = ACTIONS(173),
    [anon_sym_QMARK] = ACTIONS(173),
    [anon_sym_QMARKa] = ACTIONS(173),
    [anon_sym_QMARK2] = ACTIONS(173),
    [anon_sym_QMARK3] = ACTIONS(173),
    [anon_sym_QMARK_LF] = ACTIONS(173),
    [anon_sym_QMARK_CR] = ACTIONS(173),
    [anon_sym_QMARK4] = ACTIONS(173),
    [anon_sym_QMARKs] = ACTIONS(173),
    [anon_sym_QMARK_BSLASH] = ACTIONS(173),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(173),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(173),
    [anon_sym_POUND] = ACTIONS(173),
    [sym_natural_literal] = ACTIONS(175),
    [sym_float_literal] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_DASH_GT] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(175),
    [sym_type_variable] = ACTIONS(175),
    [sym_line_comment] = ACTIONS(3),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_true] = ACTIONS(179),
    [anon_sym_false] = ACTIONS(179),
    [sym_byte_literal] = ACTIONS(177),
    [aux_sym_char_literal_token1] = ACTIONS(179),
    [anon_sym_QMARK_TAB] = ACTIONS(177),
    [anon_sym_QMARK] = ACTIONS(177),
    [anon_sym_QMARKa] = ACTIONS(177),
    [anon_sym_QMARK2] = ACTIONS(177),
    [anon_sym_QMARK3] = ACTIONS(177),
    [anon_sym_QMARK_LF] = ACTIONS(177),
    [anon_sym_QMARK_CR] = ACTIONS(177),
    [anon_sym_QMARK4] = ACTIONS(177),
    [anon_sym_QMARKs] = ACTIONS(177),
    [anon_sym_QMARK_BSLASH] = ACTIONS(177),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(177),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(177),
    [anon_sym_POUND] = ACTIONS(177),
    [sym_natural_literal] = ACTIONS(179),
    [sym_float_literal] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_DASH_GT] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(179),
    [sym_type_variable] = ACTIONS(179),
    [sym_line_comment] = ACTIONS(3),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(183),
    [anon_sym_false] = ACTIONS(183),
    [sym_byte_literal] = ACTIONS(181),
    [aux_sym_char_literal_token1] = ACTIONS(183),
    [anon_sym_QMARK_TAB] = ACTIONS(181),
    [anon_sym_QMARK] = ACTIONS(181),
    [anon_sym_QMARKa] = ACTIONS(181),
    [anon_sym_QMARK2] = ACTIONS(181),
    [anon_sym_QMARK3] = ACTIONS(181),
    [anon_sym_QMARK_LF] = ACTIONS(181),
    [anon_sym_QMARK_CR] = ACTIONS(181),
    [anon_sym_QMARK4] = ACTIONS(181),
    [anon_sym_QMARKs] = ACTIONS(181),
    [anon_sym_QMARK_BSLASH] = ACTIONS(181),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(181),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(181),
    [sym_natural_literal] = ACTIONS(183),
    [sym_float_literal] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_DASH_GT] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(183),
    [sym_type_variable] = ACTIONS(183),
    [sym_line_comment] = ACTIONS(3),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_true] = ACTIONS(187),
    [anon_sym_false] = ACTIONS(187),
    [sym_byte_literal] = ACTIONS(185),
    [aux_sym_char_literal_token1] = ACTIONS(187),
    [anon_sym_QMARK_TAB] = ACTIONS(185),
    [anon_sym_QMARK] = ACTIONS(185),
    [anon_sym_QMARKa] = ACTIONS(185),
    [anon_sym_QMARK2] = ACTIONS(185),
    [anon_sym_QMARK3] = ACTIONS(185),
    [anon_sym_QMARK_LF] = ACTIONS(185),
    [anon_sym_QMARK_CR] = ACTIONS(185),
    [anon_sym_QMARK4] = ACTIONS(185),
    [anon_sym_QMARKs] = ACTIONS(185),
    [anon_sym_QMARK_BSLASH] = ACTIONS(185),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(185),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(185),
    [anon_sym_POUND] = ACTIONS(185),
    [sym_natural_literal] = ACTIONS(187),
    [sym_float_literal] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_DASH_GT] = ACTIONS(185),
    [anon_sym_PLUS] = ACTIONS(187),
    [sym_type_variable] = ACTIONS(187),
    [sym_line_comment] = ACTIONS(3),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(191),
    [anon_sym_false] = ACTIONS(191),
    [sym_byte_literal] = ACTIONS(189),
    [aux_sym_char_literal_token1] = ACTIONS(191),
    [anon_sym_QMARK_TAB] = ACTIONS(189),
    [anon_sym_QMARK] = ACTIONS(189),
    [anon_sym_QMARKa] = ACTIONS(189),
    [anon_sym_QMARK2] = ACTIONS(189),
    [anon_sym_QMARK3] = ACTIONS(189),
    [anon_sym_QMARK_LF] = ACTIONS(189),
    [anon_sym_QMARK_CR] = ACTIONS(189),
    [anon_sym_QMARK4] = ACTIONS(189),
    [anon_sym_QMARKs] = ACTIONS(189),
    [anon_sym_QMARK_BSLASH] = ACTIONS(189),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(189),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(189),
    [anon_sym_POUND] = ACTIONS(189),
    [sym_natural_literal] = ACTIONS(191),
    [sym_float_literal] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_RBRACK] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_DASH_GT] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(191),
    [sym_type_variable] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(3),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [sym_byte_literal] = ACTIONS(193),
    [aux_sym_char_literal_token1] = ACTIONS(195),
    [anon_sym_QMARK_TAB] = ACTIONS(193),
    [anon_sym_QMARK] = ACTIONS(193),
    [anon_sym_QMARKa] = ACTIONS(193),
    [anon_sym_QMARK2] = ACTIONS(193),
    [anon_sym_QMARK3] = ACTIONS(193),
    [anon_sym_QMARK_LF] = ACTIONS(193),
    [anon_sym_QMARK_CR] = ACTIONS(193),
    [anon_sym_QMARK4] = ACTIONS(193),
    [anon_sym_QMARKs] = ACTIONS(193),
    [anon_sym_QMARK_BSLASH] = ACTIONS(193),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(193),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(193),
    [anon_sym_POUND] = ACTIONS(193),
    [sym_natural_literal] = ACTIONS(195),
    [sym_float_literal] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(193),
    [anon_sym_RBRACK] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_DASH_GT] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(195),
    [sym_type_variable] = ACTIONS(195),
    [sym_line_comment] = ACTIONS(3),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_true] = ACTIONS(199),
    [anon_sym_false] = ACTIONS(199),
    [sym_byte_literal] = ACTIONS(197),
    [aux_sym_char_literal_token1] = ACTIONS(199),
    [anon_sym_QMARK_TAB] = ACTIONS(197),
    [anon_sym_QMARK] = ACTIONS(197),
    [anon_sym_QMARKa] = ACTIONS(197),
    [anon_sym_QMARK2] = ACTIONS(197),
    [anon_sym_QMARK3] = ACTIONS(197),
    [anon_sym_QMARK_LF] = ACTIONS(197),
    [anon_sym_QMARK_CR] = ACTIONS(197),
    [anon_sym_QMARK4] = ACTIONS(197),
    [anon_sym_QMARKs] = ACTIONS(197),
    [anon_sym_QMARK_BSLASH] = ACTIONS(197),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(197),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(197),
    [anon_sym_POUND] = ACTIONS(197),
    [sym_natural_literal] = ACTIONS(199),
    [sym_float_literal] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_RBRACK] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_DASH_GT] = ACTIONS(197),
    [anon_sym_PLUS] = ACTIONS(199),
    [sym_type_variable] = ACTIONS(199),
    [sym_line_comment] = ACTIONS(3),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(203),
    [anon_sym_false] = ACTIONS(203),
    [sym_byte_literal] = ACTIONS(201),
    [aux_sym_char_literal_token1] = ACTIONS(203),
    [anon_sym_QMARK_TAB] = ACTIONS(201),
    [anon_sym_QMARK] = ACTIONS(201),
    [anon_sym_QMARKa] = ACTIONS(201),
    [anon_sym_QMARK2] = ACTIONS(201),
    [anon_sym_QMARK3] = ACTIONS(201),
    [anon_sym_QMARK_LF] = ACTIONS(201),
    [anon_sym_QMARK_CR] = ACTIONS(201),
    [anon_sym_QMARK4] = ACTIONS(201),
    [anon_sym_QMARKs] = ACTIONS(201),
    [anon_sym_QMARK_BSLASH] = ACTIONS(201),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(201),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(201),
    [anon_sym_POUND] = ACTIONS(201),
    [sym_natural_literal] = ACTIONS(203),
    [sym_float_literal] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(201),
    [anon_sym_RBRACK] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(201),
    [anon_sym_DASH_GT] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(203),
    [sym_type_variable] = ACTIONS(203),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
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
    ACTIONS(205), 20,
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
  [35] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(213), 1,
      anon_sym_PLUS,
    ACTIONS(211), 6,
      anon_sym_true,
      anon_sym_false,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
      sym_type_variable,
    ACTIONS(209), 20,
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
  [72] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(213), 1,
      anon_sym_PLUS,
    ACTIONS(217), 6,
      anon_sym_true,
      anon_sym_false,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
      sym_type_variable,
    ACTIONS(215), 20,
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
  [109] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(213), 1,
      anon_sym_PLUS,
    ACTIONS(221), 6,
      anon_sym_true,
      anon_sym_false,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
      sym_type_variable,
    ACTIONS(219), 20,
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
  [146] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(153), 1,
      anon_sym_DASH_GT,
    ACTIONS(155), 1,
      sym_type_variable,
    ACTIONS(157), 1,
      sym_type_polymorphic,
    STATE(74), 2,
      sym__type,
      sym_type_builtin_constructor,
    ACTIONS(159), 3,
      anon_sym_Tuple,
      anon_sym_List,
      anon_sym_abilities_DOTRequest,
    ACTIONS(149), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [174] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(153), 1,
      anon_sym_DASH_GT,
    ACTIONS(155), 1,
      sym_type_variable,
    ACTIONS(157), 1,
      sym_type_polymorphic,
    STATE(74), 2,
      sym__type,
      sym_type_builtin_constructor,
    ACTIONS(159), 3,
      anon_sym_Tuple,
      anon_sym_List,
      anon_sym_abilities_DOTRequest,
  [196] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(223), 1,
      anon_sym_PLUS,
    ACTIONS(215), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [208] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(181), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [218] = 4,
    ACTIONS(227), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(229), 1,
      sym_line_comment,
    STATE(39), 1,
      aux_sym_text_literal_repeat2,
    ACTIONS(225), 2,
      aux_sym_text_literal_token2,
      aux_sym_text_literal_token3,
  [232] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(177), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [242] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(231), 1,
      anon_sym_DASH_GT,
    ACTIONS(233), 1,
      sym_type_variable,
    STATE(37), 2,
      sym_param,
      aux_sym_lambda_repeat1,
  [256] = 4,
    ACTIONS(229), 1,
      sym_line_comment,
    ACTIONS(236), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      aux_sym_text_literal_repeat1,
    ACTIONS(238), 2,
      aux_sym_text_literal_token1,
      aux_sym_text_literal_token2,
  [270] = 4,
    ACTIONS(229), 1,
      sym_line_comment,
    ACTIONS(244), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(39), 1,
      aux_sym_text_literal_repeat2,
    ACTIONS(241), 2,
      aux_sym_text_literal_token2,
      aux_sym_text_literal_token3,
  [284] = 4,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      sym_line_comment,
    STATE(38), 1,
      aux_sym_text_literal_repeat1,
    ACTIONS(246), 2,
      aux_sym_text_literal_token1,
      aux_sym_text_literal_token2,
  [298] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(248), 1,
      anon_sym_DASH_GT,
    ACTIONS(250), 1,
      sym_type_variable,
    STATE(37), 2,
      sym_param,
      aux_sym_lambda_repeat1,
  [312] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_list_literal_repeat1,
    ACTIONS(255), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [326] = 4,
    ACTIONS(229), 1,
      sym_line_comment,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      aux_sym_text_literal_repeat1,
    ACTIONS(246), 2,
      aux_sym_text_literal_token1,
      aux_sym_text_literal_token2,
  [340] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(250), 1,
      sym_type_variable,
    ACTIONS(259), 1,
      anon_sym_DASH_GT,
    STATE(37), 2,
      sym_param,
      aux_sym_lambda_repeat1,
  [354] = 4,
    ACTIONS(229), 1,
      sym_line_comment,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_text_literal_repeat1,
    ACTIONS(263), 2,
      aux_sym_text_literal_token1,
      aux_sym_text_literal_token2,
  [368] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(223), 1,
      anon_sym_PLUS,
    ACTIONS(219), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [380] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [390] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(165), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [400] = 4,
    ACTIONS(229), 1,
      sym_line_comment,
    ACTIONS(267), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(35), 1,
      aux_sym_text_literal_repeat2,
    ACTIONS(265), 2,
      aux_sym_text_literal_token2,
      aux_sym_text_literal_token3,
  [414] = 4,
    ACTIONS(229), 1,
      sym_line_comment,
    ACTIONS(257), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(39), 1,
      aux_sym_text_literal_repeat2,
    ACTIONS(225), 2,
      aux_sym_text_literal_token2,
      aux_sym_text_literal_token3,
  [428] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [438] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(161), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [448] = 4,
    ACTIONS(229), 1,
      sym_line_comment,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      aux_sym_text_literal_repeat1,
    ACTIONS(269), 2,
      aux_sym_text_literal_token1,
      aux_sym_text_literal_token2,
  [462] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(189), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [472] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [482] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(205), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [492] = 4,
    ACTIONS(229), 1,
      sym_line_comment,
    ACTIONS(261), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(50), 1,
      aux_sym_text_literal_repeat2,
    ACTIONS(271), 2,
      aux_sym_text_literal_token2,
      aux_sym_text_literal_token3,
  [506] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [516] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(197), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [526] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(201), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [536] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_list_literal_repeat1,
  [549] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_list_literal_repeat1,
  [562] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      aux_sym_list_literal_repeat1,
  [575] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_list_literal_repeat1,
  [588] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      aux_sym_list_literal_repeat1,
  [601] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      aux_sym_list_literal_repeat1,
  [614] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_list_literal_repeat1,
  [627] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_list_literal_repeat1,
  [640] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      aux_sym_list_literal_repeat1,
  [653] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(255), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [662] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      aux_sym_list_literal_repeat1,
  [675] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      aux_sym_list_literal_repeat1,
  [688] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_list_literal_repeat1,
  [701] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(289), 2,
      anon_sym_DASH_GT,
      sym_type_variable,
  [709] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(291), 2,
      anon_sym_DASH_GT,
      sym_type_variable,
  [717] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(293), 1,
      aux_sym_hash_literal_token1,
  [724] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
  [731] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(297), 1,
      aux_sym_hash_literal_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(27)] = 0,
  [SMALL_STATE(28)] = 35,
  [SMALL_STATE(29)] = 72,
  [SMALL_STATE(30)] = 109,
  [SMALL_STATE(31)] = 146,
  [SMALL_STATE(32)] = 174,
  [SMALL_STATE(33)] = 196,
  [SMALL_STATE(34)] = 208,
  [SMALL_STATE(35)] = 218,
  [SMALL_STATE(36)] = 232,
  [SMALL_STATE(37)] = 242,
  [SMALL_STATE(38)] = 256,
  [SMALL_STATE(39)] = 270,
  [SMALL_STATE(40)] = 284,
  [SMALL_STATE(41)] = 298,
  [SMALL_STATE(42)] = 312,
  [SMALL_STATE(43)] = 326,
  [SMALL_STATE(44)] = 340,
  [SMALL_STATE(45)] = 354,
  [SMALL_STATE(46)] = 368,
  [SMALL_STATE(47)] = 380,
  [SMALL_STATE(48)] = 390,
  [SMALL_STATE(49)] = 400,
  [SMALL_STATE(50)] = 414,
  [SMALL_STATE(51)] = 428,
  [SMALL_STATE(52)] = 438,
  [SMALL_STATE(53)] = 448,
  [SMALL_STATE(54)] = 462,
  [SMALL_STATE(55)] = 472,
  [SMALL_STATE(56)] = 482,
  [SMALL_STATE(57)] = 492,
  [SMALL_STATE(58)] = 506,
  [SMALL_STATE(59)] = 516,
  [SMALL_STATE(60)] = 526,
  [SMALL_STATE(61)] = 536,
  [SMALL_STATE(62)] = 549,
  [SMALL_STATE(63)] = 562,
  [SMALL_STATE(64)] = 575,
  [SMALL_STATE(65)] = 588,
  [SMALL_STATE(66)] = 601,
  [SMALL_STATE(67)] = 614,
  [SMALL_STATE(68)] = 627,
  [SMALL_STATE(69)] = 640,
  [SMALL_STATE(70)] = 653,
  [SMALL_STATE(71)] = 662,
  [SMALL_STATE(72)] = 675,
  [SMALL_STATE(73)] = 688,
  [SMALL_STATE(74)] = 701,
  [SMALL_STATE(75)] = 709,
  [SMALL_STATE(76)] = 717,
  [SMALL_STATE(77)] = 724,
  [SMALL_STATE(78)] = 731,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_literal_repeat1, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_literal, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_literal, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 4),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition_op, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addition_op, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_declaration, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__top_level_declaration, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2), SHIFT_REPEAT(32),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat1, 2), SHIFT_REPEAT(38),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat2, 2), SHIFT_REPEAT(39),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat2, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_literal_repeat1, 2), SHIFT_REPEAT(13),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_literal_repeat1, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_builtin_constructor, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [295] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
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
