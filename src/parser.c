#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
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
  sym_integer_literal = 27,
  sym_float_literal = 28,
  anon_sym_LBRACK = 29,
  anon_sym_COMMA = 30,
  anon_sym_RBRACK = 31,
  anon_sym_LPAREN = 32,
  anon_sym_RPAREN = 33,
  sym_name = 34,
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
  anon_sym_DASH_GT = 45,
  anon_sym_Tuple = 46,
  anon_sym_List = 47,
  anon_sym_abilities_DOTRequest = 48,
  aux_sym__terminator_token1 = 49,
  sym_line_comment = 50,
  sym_source_file = 51,
  sym__top_level_declaration = 52,
  sym_type_signature = 53,
  sym_term_declaration = 54,
  sym_term_definition = 55,
  sym_param = 56,
  sym__expression = 57,
  sym__literal = 58,
  sym_boolean_literal = 59,
  sym_char_literal = 60,
  sym_text_literal = 61,
  sym_hash_literal = 62,
  sym_list_literal = 63,
  sym_tuple_literal = 64,
  sym__type = 65,
  sym_type_builtin = 66,
  sym_type_builtin_constructor = 67,
  aux_sym_source_file_repeat1 = 68,
  aux_sym_term_definition_repeat1 = 69,
  aux_sym_text_literal_repeat1 = 70,
  aux_sym_text_literal_repeat2 = 71,
  aux_sym_list_literal_repeat1 = 72,
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
  [sym_integer_literal] = "integer_literal",
  [sym_float_literal] = "float_literal",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_name] = "name",
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
  [anon_sym_DASH_GT] = "->",
  [anon_sym_Tuple] = "Tuple",
  [anon_sym_List] = "List",
  [anon_sym_abilities_DOTRequest] = "abilities.Request",
  [aux_sym__terminator_token1] = "_terminator_token1",
  [sym_line_comment] = "line_comment",
  [sym_source_file] = "source_file",
  [sym__top_level_declaration] = "_top_level_declaration",
  [sym_type_signature] = "type_signature",
  [sym_term_declaration] = "term_declaration",
  [sym_term_definition] = "term_definition",
  [sym_param] = "param",
  [sym__expression] = "_expression",
  [sym__literal] = "_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_char_literal] = "char_literal",
  [sym_text_literal] = "text_literal",
  [sym_hash_literal] = "hash_literal",
  [sym_list_literal] = "list_literal",
  [sym_tuple_literal] = "tuple_literal",
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
  [sym_integer_literal] = sym_integer_literal,
  [sym_float_literal] = sym_float_literal,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_name] = sym_name,
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
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_Tuple] = anon_sym_Tuple,
  [anon_sym_List] = anon_sym_List,
  [anon_sym_abilities_DOTRequest] = anon_sym_abilities_DOTRequest,
  [aux_sym__terminator_token1] = aux_sym__terminator_token1,
  [sym_line_comment] = sym_line_comment,
  [sym_source_file] = sym_source_file,
  [sym__top_level_declaration] = sym__top_level_declaration,
  [sym_type_signature] = sym_type_signature,
  [sym_term_declaration] = sym_term_declaration,
  [sym_term_definition] = sym_term_definition,
  [sym_param] = sym_param,
  [sym__expression] = sym__expression,
  [sym__literal] = sym__literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_char_literal] = sym_char_literal,
  [sym_text_literal] = sym_text_literal,
  [sym_hash_literal] = sym_hash_literal,
  [sym_list_literal] = sym_list_literal,
  [sym_tuple_literal] = sym_tuple_literal,
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
  [sym_integer_literal] = {
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
  [sym_name] = {
    .visible = true,
    .named = true,
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
  [anon_sym_DASH_GT] = {
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
  [sym_type_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_term_declaration] = {
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
  [sym__expression] = {
    .visible = false,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(77);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '+') ADVANCE(71);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '0') ADVANCE(108);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == ';') ADVANCE(153);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == 'B') ADVANCE(139);
      if (lookahead == 'C') ADVANCE(135);
      if (lookahead == 'F') ADVANCE(137);
      if (lookahead == 'I') ADVANCE(138);
      if (lookahead == 'L') ADVANCE(136);
      if (lookahead == 'N') ADVANCE(133);
      if (lookahead == 'T') ADVANCE(134);
      if (lookahead == '[') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == ']') ADVANCE(114);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'h') ADVANCE(28);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(85);
      if (lookahead == 8) ADVANCE(87);
      if (lookahead == '\t') ADVANCE(84);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 11) ADVANCE(91);
      if (lookahead == '\f') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(102);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == 'B') ADVANCE(139);
      if (lookahead == 'C') ADVANCE(135);
      if (lookahead == 'F') ADVANCE(137);
      if (lookahead == 'I') ADVANCE(138);
      if (lookahead == 'L') ADVANCE(136);
      if (lookahead == 'N') ADVANCE(133);
      if (lookahead == 'T') ADVANCE(134);
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'h') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'B') ADVANCE(139);
      if (lookahead == 'C') ADVANCE(135);
      if (lookahead == 'F') ADVANCE(137);
      if (lookahead == 'I') ADVANCE(138);
      if (lookahead == 'L') ADVANCE(136);
      if (lookahead == 'N') ADVANCE(133);
      if (lookahead == 'T') ADVANCE(134);
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(148);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(154);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '>') ADVANCE(149);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '>') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == 'R') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(3);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == 'q') ADVANCE(68);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 69:
      if (lookahead == 'w') ADVANCE(46);
      END_STATE();
    case 70:
      if (lookahead == 'x') ADVANCE(62);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 75:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '+') ADVANCE(73);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '0') ADVANCE(108);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == '[') ADVANCE(112);
      if (lookahead == ']') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'h') ADVANCE(28);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_byte_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_QMARK_TAB);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_QMARKa);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_QMARK3);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_QMARK_LF);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_QMARK_CR);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_QMARK4);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_QMARKs);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_QMARK_BSLASH);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_QMARK_SQUOTE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_QMARK_DQUOTE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(5);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_text_literal_token1);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_text_literal_token1);
      if (lookahead == '-') ADVANCE(154);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_text_literal_token1);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(98);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_text_literal_token2);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_text_literal_token3);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_text_literal_token3);
      if (lookahead == '-') ADVANCE(154);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_text_literal_token3);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(103);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_hash_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_natural_literal);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == 'x') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_natural_literal);
      if (lookahead == '.') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == ' ') ADVANCE(69);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == '.') ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'b') ADVANCE(125);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'e') ADVANCE(128);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'e') ADVANCE(130);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'i') ADVANCE(131);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'i') ADVANCE(122);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'i') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'l') ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'l') ADVANCE(123);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'l') ADVANCE(126);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'o') ADVANCE(118);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 's') ADVANCE(119);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 't') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_type_variable);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'a') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'h') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'i') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'l') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'n') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'o') ADVANCE(47);
      if (lookahead == 'y') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_Nat);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_Bytes);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_Text);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_Char);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_Tuple);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_List);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_abilities_DOTRequest);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__terminator_token1);
      if (lookahead == ';') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 76},
  [2] = {.lex_state = 76},
  [3] = {.lex_state = 76},
  [4] = {.lex_state = 76},
  [5] = {.lex_state = 76},
  [6] = {.lex_state = 76},
  [7] = {.lex_state = 76},
  [8] = {.lex_state = 76},
  [9] = {.lex_state = 76},
  [10] = {.lex_state = 76},
  [11] = {.lex_state = 76},
  [12] = {.lex_state = 76},
  [13] = {.lex_state = 76},
  [14] = {.lex_state = 76},
  [15] = {.lex_state = 76},
  [16] = {.lex_state = 76},
  [17] = {.lex_state = 76},
  [18] = {.lex_state = 76},
  [19] = {.lex_state = 76},
  [20] = {.lex_state = 76},
  [21] = {.lex_state = 76},
  [22] = {.lex_state = 76},
  [23] = {.lex_state = 76},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 0},
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
    [sym_integer_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_type_polymorphic] = ACTIONS(1),
    [anon_sym_Nat] = ACTIONS(1),
    [anon_sym_Int] = ACTIONS(1),
    [anon_sym_Float] = ACTIONS(1),
    [anon_sym_Boolean] = ACTIONS(1),
    [anon_sym_Bytes] = ACTIONS(1),
    [anon_sym_Text] = ACTIONS(1),
    [anon_sym_Char] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_Tuple] = ACTIONS(1),
    [anon_sym_List] = ACTIONS(1),
    [anon_sym_abilities_DOTRequest] = ACTIONS(1),
    [aux_sym__terminator_token1] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(50),
    [sym__top_level_declaration] = STATE(3),
    [sym_type_signature] = STATE(47),
    [sym_term_declaration] = STATE(3),
    [sym_term_definition] = STATE(21),
    [sym__expression] = STATE(3),
    [sym__literal] = STATE(3),
    [sym_boolean_literal] = STATE(3),
    [sym_char_literal] = STATE(3),
    [sym_text_literal] = STATE(3),
    [sym_hash_literal] = STATE(3),
    [sym_list_literal] = STATE(3),
    [sym_tuple_literal] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    [sym_name] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__top_level_declaration] = STATE(2),
    [sym_type_signature] = STATE(47),
    [sym_term_declaration] = STATE(2),
    [sym_term_definition] = STATE(21),
    [sym__expression] = STATE(2),
    [sym__literal] = STATE(2),
    [sym_boolean_literal] = STATE(2),
    [sym_char_literal] = STATE(2),
    [sym_text_literal] = STATE(2),
    [sym_hash_literal] = STATE(2),
    [sym_list_literal] = STATE(2),
    [sym_tuple_literal] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_byte_literal] = ACTIONS(34),
    [aux_sym_char_literal_token1] = ACTIONS(37),
    [anon_sym_QMARK_TAB] = ACTIONS(40),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_QMARKa] = ACTIONS(40),
    [anon_sym_QMARK2] = ACTIONS(40),
    [anon_sym_QMARK3] = ACTIONS(40),
    [anon_sym_QMARK_LF] = ACTIONS(40),
    [anon_sym_QMARK_CR] = ACTIONS(40),
    [anon_sym_QMARK4] = ACTIONS(40),
    [anon_sym_QMARKs] = ACTIONS(40),
    [anon_sym_QMARK_BSLASH] = ACTIONS(40),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(40),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(46),
    [anon_sym_POUND] = ACTIONS(49),
    [sym_natural_literal] = ACTIONS(52),
    [sym_float_literal] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(58),
    [sym_name] = ACTIONS(61),
    [sym_line_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__top_level_declaration] = STATE(2),
    [sym_type_signature] = STATE(47),
    [sym_term_declaration] = STATE(2),
    [sym_term_definition] = STATE(21),
    [sym__expression] = STATE(2),
    [sym__literal] = STATE(2),
    [sym_boolean_literal] = STATE(2),
    [sym_char_literal] = STATE(2),
    [sym_text_literal] = STATE(2),
    [sym_hash_literal] = STATE(2),
    [sym_list_literal] = STATE(2),
    [sym_tuple_literal] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_byte_literal] = ACTIONS(66),
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
    [sym_natural_literal] = ACTIONS(68),
    [sym_float_literal] = ACTIONS(66),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_name] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      aux_sym_char_literal_token1,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      sym_natural_literal,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    ACTIONS(76), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      aux_sym_list_literal_repeat1,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(70), 2,
      sym_byte_literal,
      sym_float_literal,
    STATE(43), 7,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_text_literal,
      sym_hash_literal,
      sym_list_literal,
      sym_tuple_literal,
    ACTIONS(13), 12,
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
  [65] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      aux_sym_char_literal_token1,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    ACTIONS(80), 1,
      sym_natural_literal,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      aux_sym_list_literal_repeat1,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(78), 2,
      sym_byte_literal,
      sym_float_literal,
    STATE(37), 7,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_text_literal,
      sym_hash_literal,
      sym_list_literal,
      sym_tuple_literal,
    ACTIONS(13), 12,
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
  [130] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      aux_sym_char_literal_token1,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      sym_natural_literal,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(84), 2,
      sym_byte_literal,
      sym_float_literal,
    ACTIONS(88), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(38), 7,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_text_literal,
      sym_hash_literal,
      sym_list_literal,
      sym_tuple_literal,
    ACTIONS(13), 12,
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
  [191] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      aux_sym_char_literal_token1,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(92), 1,
      sym_natural_literal,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(90), 2,
      sym_byte_literal,
      sym_float_literal,
    STATE(20), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_text_literal,
      sym_hash_literal,
      sym_list_literal,
      sym_tuple_literal,
    ACTIONS(13), 12,
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
  [248] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      aux_sym_char_literal_token1,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym_natural_literal,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(94), 2,
      sym_byte_literal,
      sym_float_literal,
    STATE(23), 8,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_text_literal,
      sym_hash_literal,
      sym_list_literal,
      sym_tuple_literal,
    ACTIONS(13), 12,
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
  [305] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(100), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(98), 25,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
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
      sym_name,
  [341] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(104), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(102), 25,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
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
      sym_name,
  [377] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(108), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(106), 25,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
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
      sym_name,
  [413] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(112), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(110), 25,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
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
      sym_name,
  [449] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(114), 25,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
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
      sym_name,
  [485] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(118), 25,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
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
      sym_name,
  [521] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(124), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(122), 25,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
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
      sym_name,
  [557] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(128), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(126), 25,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
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
      sym_name,
  [593] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(132), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(130), 25,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
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
      sym_name,
  [629] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(136), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(134), 25,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
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
      sym_name,
  [665] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(140), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(138), 25,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
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
      sym_name,
  [701] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(144), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(142), 22,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
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
      sym_name,
  [734] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(148), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(146), 22,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
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
      sym_name,
  [767] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(152), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(150), 22,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
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
      sym_name,
  [800] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(156), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(154), 22,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_false,
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
      sym_name,
  [833] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 2,
      anon_sym_EQ,
      sym_name,
    ACTIONS(160), 2,
      sym_type_variable,
      sym_type_polymorphic,
    STATE(46), 3,
      sym__type,
      sym_type_builtin,
      sym_type_builtin_constructor,
    ACTIONS(164), 4,
      anon_sym_DASH_GT,
      anon_sym_Tuple,
      anon_sym_List,
      anon_sym_abilities_DOTRequest,
    ACTIONS(162), 8,
      anon_sym_Nat,
      anon_sym_Int,
      anon_sym_Float,
      anon_sym_Boolean,
      anon_sym_Bytes,
      anon_sym_Text,
      anon_sym_Char,
      anon_sym_LPAREN_RPAREN,
  [866] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(166), 2,
      sym_type_variable,
      sym_type_polymorphic,
    STATE(48), 3,
      sym__type,
      sym_type_builtin,
      sym_type_builtin_constructor,
    ACTIONS(164), 4,
      anon_sym_DASH_GT,
      anon_sym_Tuple,
      anon_sym_List,
      anon_sym_abilities_DOTRequest,
    ACTIONS(162), 8,
      anon_sym_Nat,
      anon_sym_Int,
      anon_sym_Float,
      anon_sym_Boolean,
      anon_sym_Bytes,
      anon_sym_Text,
      anon_sym_Char,
      anon_sym_LPAREN_RPAREN,
  [895] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      anon_sym_COLON,
    ACTIONS(170), 1,
      anon_sym_EQ,
    ACTIONS(172), 1,
      sym_name,
    STATE(29), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [912] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(174), 1,
      anon_sym_EQ,
    ACTIONS(176), 1,
      sym_name,
    STATE(27), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [926] = 4,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_line_comment,
    STATE(32), 1,
      aux_sym_text_literal_repeat1,
    ACTIONS(181), 2,
      aux_sym_text_literal_token1,
      aux_sym_text_literal_token2,
  [940] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(172), 1,
      sym_name,
    ACTIONS(185), 1,
      anon_sym_EQ,
    STATE(27), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [954] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 1,
      anon_sym_EQ,
    ACTIONS(172), 1,
      sym_name,
    STATE(29), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [968] = 4,
    ACTIONS(183), 1,
      sym_line_comment,
    ACTIONS(189), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(34), 1,
      aux_sym_text_literal_repeat2,
    ACTIONS(187), 2,
      aux_sym_text_literal_token2,
      aux_sym_text_literal_token3,
  [982] = 4,
    ACTIONS(183), 1,
      sym_line_comment,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_text_literal_repeat1,
    ACTIONS(191), 2,
      aux_sym_text_literal_token1,
      aux_sym_text_literal_token2,
  [996] = 4,
    ACTIONS(183), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_text_literal_repeat1,
    ACTIONS(195), 2,
      aux_sym_text_literal_token1,
      aux_sym_text_literal_token2,
  [1010] = 4,
    ACTIONS(183), 1,
      sym_line_comment,
    ACTIONS(201), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(34), 1,
      aux_sym_text_literal_repeat2,
    ACTIONS(198), 2,
      aux_sym_text_literal_token2,
      aux_sym_text_literal_token3,
  [1024] = 4,
    ACTIONS(179), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(183), 1,
      sym_line_comment,
    STATE(31), 1,
      aux_sym_text_literal_repeat2,
    ACTIONS(203), 2,
      aux_sym_text_literal_token2,
      aux_sym_text_literal_token3,
  [1038] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym_list_literal_repeat1,
    ACTIONS(208), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1052] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      aux_sym_list_literal_repeat1,
  [1065] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(208), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1074] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      aux_sym_list_literal_repeat1,
  [1087] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_list_literal_repeat1,
  [1100] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_list_literal_repeat1,
  [1113] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      aux_sym_list_literal_repeat1,
  [1126] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      anon_sym_RBRACK,
    STATE(39), 1,
      aux_sym_list_literal_repeat1,
  [1139] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(218), 2,
      anon_sym_EQ,
      sym_name,
  [1147] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(220), 2,
      anon_sym_EQ,
      sym_name,
  [1155] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(222), 2,
      anon_sym_EQ,
      sym_name,
  [1163] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(224), 1,
      sym_name,
    STATE(22), 1,
      sym_term_definition,
  [1173] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(226), 1,
      sym_name,
  [1180] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(228), 1,
      aux_sym_hash_literal_token1,
  [1187] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 65,
  [SMALL_STATE(6)] = 130,
  [SMALL_STATE(7)] = 191,
  [SMALL_STATE(8)] = 248,
  [SMALL_STATE(9)] = 305,
  [SMALL_STATE(10)] = 341,
  [SMALL_STATE(11)] = 377,
  [SMALL_STATE(12)] = 413,
  [SMALL_STATE(13)] = 449,
  [SMALL_STATE(14)] = 485,
  [SMALL_STATE(15)] = 521,
  [SMALL_STATE(16)] = 557,
  [SMALL_STATE(17)] = 593,
  [SMALL_STATE(18)] = 629,
  [SMALL_STATE(19)] = 665,
  [SMALL_STATE(20)] = 701,
  [SMALL_STATE(21)] = 734,
  [SMALL_STATE(22)] = 767,
  [SMALL_STATE(23)] = 800,
  [SMALL_STATE(24)] = 833,
  [SMALL_STATE(25)] = 866,
  [SMALL_STATE(26)] = 895,
  [SMALL_STATE(27)] = 912,
  [SMALL_STATE(28)] = 926,
  [SMALL_STATE(29)] = 940,
  [SMALL_STATE(30)] = 954,
  [SMALL_STATE(31)] = 968,
  [SMALL_STATE(32)] = 982,
  [SMALL_STATE(33)] = 996,
  [SMALL_STATE(34)] = 1010,
  [SMALL_STATE(35)] = 1024,
  [SMALL_STATE(36)] = 1038,
  [SMALL_STATE(37)] = 1052,
  [SMALL_STATE(38)] = 1065,
  [SMALL_STATE(39)] = 1074,
  [SMALL_STATE(40)] = 1087,
  [SMALL_STATE(41)] = 1100,
  [SMALL_STATE(42)] = 1113,
  [SMALL_STATE(43)] = 1126,
  [SMALL_STATE(44)] = 1139,
  [SMALL_STATE(45)] = 1147,
  [SMALL_STATE(46)] = 1155,
  [SMALL_STATE(47)] = 1163,
  [SMALL_STATE(48)] = 1173,
  [SMALL_STATE(49)] = 1180,
  [SMALL_STATE(50)] = 1187,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_literal_repeat1, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 4),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_literal, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_literal, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_literal, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_literal, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_definition, 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_definition, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_declaration, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_declaration, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_declaration, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_declaration, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_definition, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_definition, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_definition_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_definition_repeat1, 2), SHIFT_REPEAT(24),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat1, 2), SHIFT_REPEAT(33),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat2, 2), SHIFT_REPEAT(34),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat2, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_literal_repeat1, 2), SHIFT_REPEAT(6),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_literal_repeat1, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_builtin, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_builtin_constructor, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_signature, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [230] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
