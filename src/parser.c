#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
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
  sym_char_literal = 6,
  anon_sym_DQUOTE = 7,
  aux_sym_text_literal_token1 = 8,
  aux_sym_text_literal_token2 = 9,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 10,
  aux_sym_text_literal_token3 = 11,
  anon_sym_POUND = 12,
  aux_sym_hash_literal_token1 = 13,
  sym_natural_literal = 14,
  sym_integer_literal = 15,
  sym_float_literal = 16,
  sym_name = 17,
  sym_type_variable = 18,
  sym_type_polymorphic = 19,
  anon_sym_Nat = 20,
  anon_sym_Int = 21,
  anon_sym_Float = 22,
  anon_sym_Boolean = 23,
  anon_sym_Bytes = 24,
  anon_sym_Text = 25,
  anon_sym_Char = 26,
  anon_sym_LPAREN_RPAREN = 27,
  anon_sym_DASH_GT = 28,
  anon_sym_Tuple = 29,
  anon_sym_List = 30,
  anon_sym_abilities_DOTRequest = 31,
  aux_sym__terminator_token1 = 32,
  sym_line_comment = 33,
  sym_source_file = 34,
  sym__top_level_declaration = 35,
  sym_type_signature = 36,
  sym_term_declaration = 37,
  sym_term_definition = 38,
  sym_param = 39,
  sym__expression = 40,
  sym__literal = 41,
  sym_boolean_literal = 42,
  sym_text_literal = 43,
  sym_hash_literal = 44,
  sym__type = 45,
  sym_type_builtin = 46,
  sym_type_builtin_constructor = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_term_definition_repeat1 = 49,
  aux_sym_text_literal_repeat1 = 50,
  aux_sym_text_literal_repeat2 = 51,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_byte_literal] = "byte_literal",
  [sym_char_literal] = "char_literal",
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
  [sym_text_literal] = "text_literal",
  [sym_hash_literal] = "hash_literal",
  [sym__type] = "_type",
  [sym_type_builtin] = "type_builtin",
  [sym_type_builtin_constructor] = "type_builtin_constructor",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_term_definition_repeat1] = "term_definition_repeat1",
  [aux_sym_text_literal_repeat1] = "text_literal_repeat1",
  [aux_sym_text_literal_repeat2] = "text_literal_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_byte_literal] = sym_byte_literal,
  [sym_char_literal] = sym_char_literal,
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
  [sym_text_literal] = sym_text_literal,
  [sym_hash_literal] = sym_hash_literal,
  [sym__type] = sym__type,
  [sym_type_builtin] = sym_type_builtin,
  [sym_type_builtin_constructor] = sym_type_builtin_constructor,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_term_definition_repeat1] = aux_sym_term_definition_repeat1,
  [aux_sym_text_literal_repeat1] = aux_sym_text_literal_repeat1,
  [aux_sym_text_literal_repeat2] = aux_sym_text_literal_repeat2,
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
  [sym_char_literal] = {
    .visible = true,
    .named = true,
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
  [sym_text_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_literal] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(60);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == ';') ADVANCE(181);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '?') ADVANCE(58);
      if (lookahead == 'B') ADVANCE(118);
      if (lookahead == 'C') ADVANCE(102);
      if (lookahead == 'F') ADVANCE(110);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'L') ADVANCE(103);
      if (lookahead == 'N') ADVANCE(90);
      if (lookahead == 'T') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == '?') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(75);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == 'B') ADVANCE(118);
      if (lookahead == 'C') ADVANCE(102);
      if (lookahead == 'F') ADVANCE(110);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'L') ADVANCE(103);
      if (lookahead == 'N') ADVANCE(90);
      if (lookahead == 'T') ADVANCE(94);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == 'B') ADVANCE(158);
      if (lookahead == 'C') ADVANCE(154);
      if (lookahead == 'F') ADVANCE(156);
      if (lookahead == 'I') ADVANCE(157);
      if (lookahead == 'L') ADVANCE(155);
      if (lookahead == 'N') ADVANCE(152);
      if (lookahead == 'T') ADVANCE(153);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(174);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(182);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '>') ADVANCE(175);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '>') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == 'R') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'q') ADVANCE(50);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 52:
      if (lookahead == 'x') ADVANCE(47);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 57:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 58:
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 59:
      if (eof) ADVANCE(60);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == '?') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_byte_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_char_literal);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_text_literal_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_text_literal_token1);
      if (lookahead == '-') ADVANCE(182);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_text_literal_token1);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(71);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_text_literal_token2);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_text_literal_token3);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_text_literal_token3);
      if (lookahead == '-') ADVANCE(182);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_text_literal_token3);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(76);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_hash_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_natural_literal);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'x') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_natural_literal);
      if (lookahead == '.') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(141);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b') ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(141);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(126);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(141);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(141);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(136);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(141);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(98);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(141);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(141);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead == 'y') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(141);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(141);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'x') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == '.') ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'b') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'e') ADVANCE(149);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'i') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'i') ADVANCE(150);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'i') ADVANCE(144);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'l') ADVANCE(146);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 's') ADVANCE(142);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 't') ADVANCE(147);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_type_variable);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'a') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'h') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'i') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'l') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'n') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 'y') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_Nat);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_Nat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_Int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_Float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_Bytes);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_Bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_Text);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_Char);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_Char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_Tuple);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_Tuple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_List);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_List);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_abilities_DOTRequest);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__terminator_token1);
      if (lookahead == ';') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 59},
  [2] = {.lex_state = 59},
  [3] = {.lex_state = 59},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 59},
  [9] = {.lex_state = 59},
  [10] = {.lex_state = 59},
  [11] = {.lex_state = 59},
  [12] = {.lex_state = 59},
  [13] = {.lex_state = 59},
  [14] = {.lex_state = 59},
  [15] = {.lex_state = 59},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 14},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_byte_literal] = ACTIONS(1),
    [sym_char_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_text_literal_token2] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_natural_literal] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
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
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_Tuple] = ACTIONS(1),
    [anon_sym_List] = ACTIONS(1),
    [anon_sym_abilities_DOTRequest] = ACTIONS(1),
    [aux_sym__terminator_token1] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(31),
    [sym__top_level_declaration] = STATE(2),
    [sym_type_signature] = STATE(26),
    [sym_term_declaration] = STATE(2),
    [sym_term_definition] = STATE(12),
    [sym__expression] = STATE(2),
    [sym__literal] = STATE(2),
    [sym_boolean_literal] = STATE(2),
    [sym_text_literal] = STATE(2),
    [sym_hash_literal] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_byte_literal] = ACTIONS(9),
    [sym_char_literal] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [sym_natural_literal] = ACTIONS(17),
    [sym_float_literal] = ACTIONS(9),
    [sym_name] = ACTIONS(19),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_name,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_natural_literal,
    STATE(12), 1,
      sym_term_definition,
    STATE(26), 1,
      sym_type_signature,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 3,
      sym_byte_literal,
      sym_char_literal,
      sym_float_literal,
    STATE(3), 8,
      sym__top_level_declaration,
      sym_term_declaration,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_text_literal,
      sym_hash_literal,
      aux_sym_source_file_repeat1,
  [47] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(38), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(44), 1,
      sym_natural_literal,
    ACTIONS(47), 1,
      sym_name,
    STATE(12), 1,
      sym_term_definition,
    STATE(26), 1,
      sym_type_signature,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(32), 3,
      sym_byte_literal,
      sym_char_literal,
      sym_float_literal,
    STATE(3), 8,
      sym__top_level_declaration,
      sym_term_declaration,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_text_literal,
      sym_hash_literal,
      aux_sym_source_file_repeat1,
  [94] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(50), 1,
      anon_sym_EQ,
    ACTIONS(52), 1,
      sym_name,
    ACTIONS(58), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(54), 2,
      sym_type_variable,
      sym_type_polymorphic,
    ACTIONS(60), 2,
      anon_sym_DASH_GT,
      anon_sym_abilities_DOTRequest,
    ACTIONS(62), 2,
      anon_sym_Tuple,
      anon_sym_List,
    STATE(29), 3,
      sym__type,
      sym_type_builtin,
      sym_type_builtin_constructor,
    ACTIONS(56), 7,
      anon_sym_Nat,
      anon_sym_Int,
      anon_sym_Float,
      anon_sym_Boolean,
      anon_sym_Bytes,
      anon_sym_Text,
      anon_sym_Char,
  [133] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(64), 2,
      sym_type_variable,
      sym_type_polymorphic,
    STATE(30), 3,
      sym__type,
      sym_type_builtin,
      sym_type_builtin_constructor,
    ACTIONS(60), 4,
      anon_sym_DASH_GT,
      anon_sym_Tuple,
      anon_sym_List,
      anon_sym_abilities_DOTRequest,
    ACTIONS(58), 8,
      anon_sym_Nat,
      anon_sym_Int,
      anon_sym_Float,
      anon_sym_Boolean,
      anon_sym_Bytes,
      anon_sym_Text,
      anon_sym_Char,
      anon_sym_LPAREN_RPAREN,
  [162] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(70), 1,
      sym_natural_literal,
    ACTIONS(66), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(68), 3,
      sym_byte_literal,
      sym_char_literal,
      sym_float_literal,
    STATE(9), 5,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_text_literal,
      sym_hash_literal,
  [194] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(74), 1,
      sym_natural_literal,
    ACTIONS(66), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(72), 3,
      sym_byte_literal,
      sym_char_literal,
      sym_float_literal,
    STATE(10), 5,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_text_literal,
      sym_hash_literal,
  [226] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(78), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_natural_literal,
      sym_name,
    ACTIONS(76), 6,
      ts_builtin_sym_end,
      sym_byte_literal,
      sym_char_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
  [245] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(82), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_natural_literal,
      sym_name,
    ACTIONS(80), 6,
      ts_builtin_sym_end,
      sym_byte_literal,
      sym_char_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
  [264] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_natural_literal,
      sym_name,
    ACTIONS(84), 6,
      ts_builtin_sym_end,
      sym_byte_literal,
      sym_char_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
  [283] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(90), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_natural_literal,
      sym_name,
    ACTIONS(88), 6,
      ts_builtin_sym_end,
      sym_byte_literal,
      sym_char_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
  [302] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(94), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_natural_literal,
      sym_name,
    ACTIONS(92), 6,
      ts_builtin_sym_end,
      sym_byte_literal,
      sym_char_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
  [321] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(98), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_natural_literal,
      sym_name,
    ACTIONS(96), 6,
      ts_builtin_sym_end,
      sym_byte_literal,
      sym_char_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
  [340] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(102), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_natural_literal,
      sym_name,
    ACTIONS(100), 6,
      ts_builtin_sym_end,
      sym_byte_literal,
      sym_char_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
  [359] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(106), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_natural_literal,
      sym_name,
    ACTIONS(104), 6,
      ts_builtin_sym_end,
      sym_byte_literal,
      sym_char_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_POUND,
      sym_float_literal,
  [378] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(108), 1,
      anon_sym_COLON,
    ACTIONS(110), 1,
      anon_sym_EQ,
    ACTIONS(112), 1,
      sym_name,
    STATE(18), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [395] = 4,
    ACTIONS(117), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(119), 1,
      sym_line_comment,
    STATE(17), 1,
      aux_sym_text_literal_repeat2,
    ACTIONS(114), 2,
      aux_sym_text_literal_token2,
      aux_sym_text_literal_token3,
  [409] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(112), 1,
      sym_name,
    ACTIONS(121), 1,
      anon_sym_EQ,
    STATE(24), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [423] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(110), 1,
      anon_sym_EQ,
    ACTIONS(112), 1,
      sym_name,
    STATE(18), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [437] = 4,
    ACTIONS(119), 1,
      sym_line_comment,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      aux_sym_text_literal_repeat1,
    ACTIONS(125), 2,
      aux_sym_text_literal_token1,
      aux_sym_text_literal_token2,
  [451] = 4,
    ACTIONS(119), 1,
      sym_line_comment,
    ACTIONS(129), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(17), 1,
      aux_sym_text_literal_repeat2,
    ACTIONS(127), 2,
      aux_sym_text_literal_token2,
      aux_sym_text_literal_token3,
  [465] = 4,
    ACTIONS(119), 1,
      sym_line_comment,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_text_literal_repeat1,
    ACTIONS(131), 2,
      aux_sym_text_literal_token1,
      aux_sym_text_literal_token2,
  [479] = 4,
    ACTIONS(119), 1,
      sym_line_comment,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_text_literal_repeat1,
    ACTIONS(135), 2,
      aux_sym_text_literal_token1,
      aux_sym_text_literal_token2,
  [493] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_EQ,
    ACTIONS(140), 1,
      sym_name,
    STATE(24), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [507] = 4,
    ACTIONS(119), 1,
      sym_line_comment,
    ACTIONS(123), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(21), 1,
      aux_sym_text_literal_repeat2,
    ACTIONS(143), 2,
      aux_sym_text_literal_token2,
      aux_sym_text_literal_token3,
  [521] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      sym_name,
    STATE(14), 1,
      sym_term_definition,
  [531] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(147), 2,
      anon_sym_EQ,
      sym_name,
  [539] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(149), 2,
      anon_sym_EQ,
      sym_name,
  [547] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(151), 2,
      anon_sym_EQ,
      sym_name,
  [555] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(153), 1,
      sym_name,
  [562] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
  [569] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(157), 1,
      aux_sym_hash_literal_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 133,
  [SMALL_STATE(6)] = 162,
  [SMALL_STATE(7)] = 194,
  [SMALL_STATE(8)] = 226,
  [SMALL_STATE(9)] = 245,
  [SMALL_STATE(10)] = 264,
  [SMALL_STATE(11)] = 283,
  [SMALL_STATE(12)] = 302,
  [SMALL_STATE(13)] = 321,
  [SMALL_STATE(14)] = 340,
  [SMALL_STATE(15)] = 359,
  [SMALL_STATE(16)] = 378,
  [SMALL_STATE(17)] = 395,
  [SMALL_STATE(18)] = 409,
  [SMALL_STATE(19)] = 423,
  [SMALL_STATE(20)] = 437,
  [SMALL_STATE(21)] = 451,
  [SMALL_STATE(22)] = 465,
  [SMALL_STATE(23)] = 479,
  [SMALL_STATE(24)] = 493,
  [SMALL_STATE(25)] = 507,
  [SMALL_STATE(26)] = 521,
  [SMALL_STATE(27)] = 531,
  [SMALL_STATE(28)] = 539,
  [SMALL_STATE(29)] = 547,
  [SMALL_STATE(30)] = 555,
  [SMALL_STATE(31)] = 562,
  [SMALL_STATE(32)] = 569,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_definition, 4),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_definition, 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_definition, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_definition, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_declaration, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_declaration, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_declaration, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_declaration, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_literal, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_literal, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat2, 2), SHIFT_REPEAT(17),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat2, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat1, 2), SHIFT_REPEAT(23),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_definition_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_definition_repeat1, 2), SHIFT_REPEAT(4),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_builtin, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_builtin_constructor, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_signature, 3),
  [155] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
