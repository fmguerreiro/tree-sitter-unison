#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 71
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
  sym_integer_literal = 27,
  sym_float_literal = 28,
  anon_sym_LBRACK = 29,
  anon_sym_COMMA = 30,
  anon_sym_RBRACK = 31,
  anon_sym_BSLASH = 32,
  anon_sym_DASH_GT = 33,
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
  anon_sym_Tuple = 45,
  anon_sym_List = 46,
  anon_sym_abilities_DOTRequest = 47,
  aux_sym__terminator_token1 = 48,
  sym_line_comment = 49,
  sym_source_file = 50,
  sym__top_level_declaration = 51,
  sym_type_signature = 52,
  sym_term_declaration = 53,
  sym_term_definition = 54,
  sym_param = 55,
  sym__expression = 56,
  sym__literal = 57,
  sym_boolean_literal = 58,
  sym_char_literal = 59,
  sym_text_literal = 60,
  sym_hash_literal = 61,
  sym_list_literal = 62,
  sym__type = 63,
  sym_type_builtin = 64,
  sym_type_builtin_constructor = 65,
  aux_sym_source_file_repeat1 = 66,
  aux_sym_term_definition_repeat1 = 67,
  aux_sym_text_literal_repeat1 = 68,
  aux_sym_text_literal_repeat2 = 69,
  aux_sym_list_literal_repeat1 = 70,
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
  [anon_sym_BSLASH] = "\\",
  [anon_sym_DASH_GT] = "->",
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
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
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
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(77);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == '+') ADVANCE(71);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '0') ADVANCE(108);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == ';') ADVANCE(152);
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
      if (lookahead == '\\') ADVANCE(115);
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
      if (lookahead == '-') ADVANCE(153);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '>') ADVANCE(116);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '>') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(153);
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
      if (lookahead == 'e') ADVANCE(149);
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
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(151);
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
      if (lookahead == '-') ADVANCE(153);
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
      if (lookahead == '-') ADVANCE(153);
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
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
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
      ACCEPT_TOKEN(anon_sym_Tuple);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_List);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_abilities_DOTRequest);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__terminator_token1);
      if (lookahead == ';') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(153);
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
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 14},
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
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_natural_literal] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
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
    [sym_source_file] = STATE(41),
    [sym__top_level_declaration] = STATE(3),
    [sym_type_signature] = STATE(36),
    [sym_term_declaration] = STATE(3),
    [sym_term_definition] = STATE(16),
    [sym__expression] = STATE(3),
    [sym__literal] = STATE(3),
    [sym_boolean_literal] = STATE(3),
    [sym_char_literal] = STATE(3),
    [sym_text_literal] = STATE(3),
    [sym_hash_literal] = STATE(3),
    [sym_list_literal] = STATE(3),
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
    [sym_name] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__top_level_declaration] = STATE(2),
    [sym_type_signature] = STATE(36),
    [sym_term_declaration] = STATE(2),
    [sym_term_definition] = STATE(16),
    [sym__expression] = STATE(2),
    [sym__literal] = STATE(2),
    [sym_boolean_literal] = STATE(2),
    [sym_char_literal] = STATE(2),
    [sym_text_literal] = STATE(2),
    [sym_hash_literal] = STATE(2),
    [sym_list_literal] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_byte_literal] = ACTIONS(32),
    [aux_sym_char_literal_token1] = ACTIONS(35),
    [anon_sym_QMARK_TAB] = ACTIONS(38),
    [anon_sym_QMARK] = ACTIONS(38),
    [anon_sym_QMARKa] = ACTIONS(38),
    [anon_sym_QMARK2] = ACTIONS(38),
    [anon_sym_QMARK3] = ACTIONS(38),
    [anon_sym_QMARK_LF] = ACTIONS(38),
    [anon_sym_QMARK_CR] = ACTIONS(38),
    [anon_sym_QMARK4] = ACTIONS(38),
    [anon_sym_QMARKs] = ACTIONS(38),
    [anon_sym_QMARK_BSLASH] = ACTIONS(38),
    [anon_sym_QMARK_SQUOTE] = ACTIONS(38),
    [anon_sym_QMARK_DQUOTE] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(44),
    [anon_sym_POUND] = ACTIONS(47),
    [sym_natural_literal] = ACTIONS(50),
    [sym_float_literal] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(53),
    [sym_name] = ACTIONS(56),
    [sym_line_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__top_level_declaration] = STATE(2),
    [sym_type_signature] = STATE(36),
    [sym_term_declaration] = STATE(2),
    [sym_term_definition] = STATE(16),
    [sym__expression] = STATE(2),
    [sym__literal] = STATE(2),
    [sym_boolean_literal] = STATE(2),
    [sym_char_literal] = STATE(2),
    [sym_text_literal] = STATE(2),
    [sym_hash_literal] = STATE(2),
    [sym_list_literal] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_byte_literal] = ACTIONS(61),
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
    [sym_natural_literal] = ACTIONS(63),
    [sym_float_literal] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_name] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
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
    ACTIONS(67), 1,
      sym_natural_literal,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      aux_sym_list_literal_repeat1,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(65), 2,
      sym_byte_literal,
      sym_float_literal,
    STATE(35), 6,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_text_literal,
      sym_hash_literal,
      sym_list_literal,
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
  [61] = 12,
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
    ACTIONS(75), 1,
      sym_natural_literal,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(73), 2,
      sym_byte_literal,
      sym_float_literal,
    ACTIONS(77), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(37), 6,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_text_literal,
      sym_hash_literal,
      sym_list_literal,
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
  [117] = 11,
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
    ACTIONS(81), 1,
      sym_natural_literal,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 2,
      sym_byte_literal,
      sym_float_literal,
    STATE(17), 7,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_text_literal,
      sym_hash_literal,
      sym_list_literal,
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
  [170] = 11,
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
    ACTIONS(85), 1,
      sym_natural_literal,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(83), 2,
      sym_byte_literal,
      sym_float_literal,
    STATE(18), 7,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_char_literal,
      sym_text_literal,
      sym_hash_literal,
      sym_list_literal,
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
  [223] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(89), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(87), 23,
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
      sym_name,
  [257] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(93), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(91), 23,
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
      sym_name,
  [291] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(95), 23,
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
      sym_name,
  [325] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(101), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(99), 23,
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
      sym_name,
  [359] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(105), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(103), 23,
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
      sym_name,
  [393] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(109), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(107), 23,
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
      sym_name,
  [427] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(111), 23,
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
      sym_name,
  [461] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(117), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(115), 23,
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
      sym_name,
  [495] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(121), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(119), 21,
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
      sym_name,
  [527] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(125), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(123), 21,
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
      sym_name,
  [559] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(129), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(127), 21,
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
      sym_name,
  [591] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(133), 3,
      aux_sym_char_literal_token1,
      anon_sym_DQUOTE,
      sym_natural_literal,
    ACTIONS(131), 21,
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
      sym_name,
  [623] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(135), 2,
      anon_sym_EQ,
      sym_name,
    ACTIONS(139), 2,
      sym_type_variable,
      sym_type_polymorphic,
    STATE(40), 3,
      sym__type,
      sym_type_builtin,
      sym_type_builtin_constructor,
    ACTIONS(137), 4,
      anon_sym_DASH_GT,
      anon_sym_Tuple,
      anon_sym_List,
      anon_sym_abilities_DOTRequest,
    ACTIONS(141), 8,
      anon_sym_Nat,
      anon_sym_Int,
      anon_sym_Float,
      anon_sym_Boolean,
      anon_sym_Bytes,
      anon_sym_Text,
      anon_sym_Char,
      anon_sym_LPAREN_RPAREN,
  [656] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(143), 2,
      sym_type_variable,
      sym_type_polymorphic,
    STATE(42), 3,
      sym__type,
      sym_type_builtin,
      sym_type_builtin_constructor,
    ACTIONS(137), 4,
      anon_sym_DASH_GT,
      anon_sym_Tuple,
      anon_sym_List,
      anon_sym_abilities_DOTRequest,
    ACTIONS(141), 8,
      anon_sym_Nat,
      anon_sym_Int,
      anon_sym_Float,
      anon_sym_Boolean,
      anon_sym_Bytes,
      anon_sym_Text,
      anon_sym_Char,
      anon_sym_LPAREN_RPAREN,
  [685] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_COLON,
    ACTIONS(147), 1,
      anon_sym_EQ,
    ACTIONS(149), 1,
      sym_name,
    STATE(24), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [702] = 4,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym_line_comment,
    STATE(23), 1,
      aux_sym_text_literal_repeat1,
    ACTIONS(153), 2,
      aux_sym_text_literal_token1,
      aux_sym_text_literal_token2,
  [716] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(149), 1,
      sym_name,
    ACTIONS(158), 1,
      anon_sym_EQ,
    STATE(29), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [730] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(147), 1,
      anon_sym_EQ,
    ACTIONS(149), 1,
      sym_name,
    STATE(24), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [744] = 4,
    ACTIONS(156), 1,
      sym_line_comment,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_text_literal_repeat1,
    ACTIONS(162), 2,
      aux_sym_text_literal_token1,
      aux_sym_text_literal_token2,
  [758] = 4,
    ACTIONS(156), 1,
      sym_line_comment,
    ACTIONS(167), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(27), 1,
      aux_sym_text_literal_repeat2,
    ACTIONS(164), 2,
      aux_sym_text_literal_token2,
      aux_sym_text_literal_token3,
  [772] = 4,
    ACTIONS(156), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_text_literal_repeat1,
    ACTIONS(171), 2,
      aux_sym_text_literal_token1,
      aux_sym_text_literal_token2,
  [786] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_EQ,
    ACTIONS(175), 1,
      sym_name,
    STATE(29), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [800] = 4,
    ACTIONS(156), 1,
      sym_line_comment,
    ACTIONS(160), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(31), 1,
      aux_sym_text_literal_repeat2,
    ACTIONS(178), 2,
      aux_sym_text_literal_token2,
      aux_sym_text_literal_token3,
  [814] = 4,
    ACTIONS(156), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(27), 1,
      aux_sym_text_literal_repeat2,
    ACTIONS(180), 2,
      aux_sym_text_literal_token2,
      aux_sym_text_literal_token3,
  [828] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym_list_literal_repeat1,
  [841] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym_list_literal_repeat1,
  [854] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym_list_literal_repeat1,
  [867] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      aux_sym_list_literal_repeat1,
  [880] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(191), 1,
      sym_name,
    STATE(19), 1,
      sym_term_definition,
  [890] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(189), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [898] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 2,
      anon_sym_EQ,
      sym_name,
  [906] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(195), 2,
      anon_sym_EQ,
      sym_name,
  [914] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(197), 2,
      anon_sym_EQ,
      sym_name,
  [922] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
  [929] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(201), 1,
      sym_name,
  [936] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(203), 1,
      aux_sym_hash_literal_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 61,
  [SMALL_STATE(6)] = 117,
  [SMALL_STATE(7)] = 170,
  [SMALL_STATE(8)] = 223,
  [SMALL_STATE(9)] = 257,
  [SMALL_STATE(10)] = 291,
  [SMALL_STATE(11)] = 325,
  [SMALL_STATE(12)] = 359,
  [SMALL_STATE(13)] = 393,
  [SMALL_STATE(14)] = 427,
  [SMALL_STATE(15)] = 461,
  [SMALL_STATE(16)] = 495,
  [SMALL_STATE(17)] = 527,
  [SMALL_STATE(18)] = 559,
  [SMALL_STATE(19)] = 591,
  [SMALL_STATE(20)] = 623,
  [SMALL_STATE(21)] = 656,
  [SMALL_STATE(22)] = 685,
  [SMALL_STATE(23)] = 702,
  [SMALL_STATE(24)] = 716,
  [SMALL_STATE(25)] = 730,
  [SMALL_STATE(26)] = 744,
  [SMALL_STATE(27)] = 758,
  [SMALL_STATE(28)] = 772,
  [SMALL_STATE(29)] = 786,
  [SMALL_STATE(30)] = 800,
  [SMALL_STATE(31)] = 814,
  [SMALL_STATE(32)] = 828,
  [SMALL_STATE(33)] = 841,
  [SMALL_STATE(34)] = 854,
  [SMALL_STATE(35)] = 867,
  [SMALL_STATE(36)] = 880,
  [SMALL_STATE(37)] = 890,
  [SMALL_STATE(38)] = 898,
  [SMALL_STATE(39)] = 906,
  [SMALL_STATE(40)] = 914,
  [SMALL_STATE(41)] = 922,
  [SMALL_STATE(42)] = 929,
  [SMALL_STATE(43)] = 936,
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
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_literal_repeat1, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_literal, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_literal, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 4),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_declaration, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_declaration, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_definition, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_definition, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_definition, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_definition, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_declaration, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_declaration, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat1, 2), SHIFT_REPEAT(23),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat2, 2), SHIFT_REPEAT(27),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat2, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_definition_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_definition_repeat1, 2), SHIFT_REPEAT(20),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_literal_repeat1, 2), SHIFT_REPEAT(5),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_literal_repeat1, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_builtin_constructor, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_builtin, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2),
  [199] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_signature, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
