#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
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
  sym_natural_literal = 12,
  sym_integer_literal = 13,
  sym_float_literal = 14,
  sym_name = 15,
  sym_type_variable = 16,
  sym_type_polymorphic = 17,
  anon_sym_Nat = 18,
  anon_sym_Int = 19,
  anon_sym_Float = 20,
  anon_sym_Boolean = 21,
  anon_sym_Bytes = 22,
  anon_sym_Text = 23,
  anon_sym_Char = 24,
  anon_sym_LPAREN_RPAREN = 25,
  anon_sym_DASH_GT = 26,
  anon_sym_Tuple = 27,
  anon_sym_List = 28,
  anon_sym_abilities_DOTRequest = 29,
  aux_sym__terminator_token1 = 30,
  sym_line_comment = 31,
  sym_source_file = 32,
  sym__top_level_declaration = 33,
  sym_type_signature = 34,
  sym_term_declaration = 35,
  sym_term_definition = 36,
  sym_param = 37,
  sym__expression = 38,
  sym__literal = 39,
  sym_boolean_literal = 40,
  sym_text_literal = 41,
  sym__type = 42,
  sym_type_builtin = 43,
  sym_type_builtin_constructor = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_term_definition_repeat1 = 46,
  aux_sym_text_literal_repeat1 = 47,
  aux_sym_text_literal_repeat2 = 48,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(57);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ';') ADVANCE(176);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == 'B') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(97);
      if (lookahead == 'F') ADVANCE(105);
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'L') ADVANCE(98);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == 'T') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 't') ADVANCE(34);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(72);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == 'B') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(97);
      if (lookahead == 'F') ADVANCE(105);
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'L') ADVANCE(98);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == 'T') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'B') ADVANCE(153);
      if (lookahead == 'C') ADVANCE(149);
      if (lookahead == 'F') ADVANCE(151);
      if (lookahead == 'I') ADVANCE(152);
      if (lookahead == 'L') ADVANCE(150);
      if (lookahead == 'N') ADVANCE(147);
      if (lookahead == 'T') ADVANCE(148);
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(169);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(170);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 13:
      if (lookahead == 'R') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'q') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 49:
      if (lookahead == 'x') ADVANCE(44);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 55:
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 56:
      if (eof) ADVANCE(57);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_byte_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_char_literal);
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
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_text_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
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
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_text_literal_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_natural_literal);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == 'x') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_natural_literal);
      if (lookahead == '.') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b') ADVANCE(99);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'u') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(121);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(108);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(131);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(100);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == 'y') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(101);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'x') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == '.') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'b') ADVANCE(140);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'e') ADVANCE(144);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'i') ADVANCE(143);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'i') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'i') ADVANCE(139);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'l') ADVANCE(141);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 's') ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 't') ADVANCE(142);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_type_variable);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'a') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'h') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'i') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'l') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'n') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == 'y') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_Nat);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_Nat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_Int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_Float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_Bytes);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_Bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_Text);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_Char);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_Char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_Tuple);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_Tuple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_List);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_List);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_abilities_DOTRequest);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__terminator_token1);
      if (lookahead == ';') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 56},
  [2] = {.lex_state = 56},
  [3] = {.lex_state = 56},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 56},
  [9] = {.lex_state = 56},
  [10] = {.lex_state = 56},
  [11] = {.lex_state = 56},
  [12] = {.lex_state = 56},
  [13] = {.lex_state = 56},
  [14] = {.lex_state = 56},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 0},
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
    [sym_source_file] = STATE(30),
    [sym__top_level_declaration] = STATE(2),
    [sym_type_signature] = STATE(27),
    [sym_term_declaration] = STATE(2),
    [sym_term_definition] = STATE(12),
    [sym__expression] = STATE(2),
    [sym__literal] = STATE(2),
    [sym_boolean_literal] = STATE(2),
    [sym_text_literal] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_byte_literal] = ACTIONS(9),
    [sym_char_literal] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [sym_natural_literal] = ACTIONS(15),
    [sym_float_literal] = ACTIONS(9),
    [sym_name] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(17), 1,
      sym_name,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_natural_literal,
    STATE(12), 1,
      sym_term_definition,
    STATE(27), 1,
      sym_type_signature,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 3,
      sym_byte_literal,
      sym_char_literal,
      sym_float_literal,
    STATE(3), 7,
      sym__top_level_declaration,
      sym_term_declaration,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_text_literal,
      aux_sym_source_file_repeat1,
  [43] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(36), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      sym_natural_literal,
    ACTIONS(42), 1,
      sym_name,
    STATE(12), 1,
      sym_term_definition,
    STATE(27), 1,
      sym_type_signature,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(30), 3,
      sym_byte_literal,
      sym_char_literal,
      sym_float_literal,
    STATE(3), 7,
      sym__top_level_declaration,
      sym_term_declaration,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_text_literal,
      aux_sym_source_file_repeat1,
  [86] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_EQ,
    ACTIONS(47), 1,
      sym_name,
    ACTIONS(53), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(49), 2,
      sym_type_variable,
      sym_type_polymorphic,
    ACTIONS(55), 2,
      anon_sym_DASH_GT,
      anon_sym_abilities_DOTRequest,
    ACTIONS(57), 2,
      anon_sym_Tuple,
      anon_sym_List,
    STATE(28), 3,
      sym__type,
      sym_type_builtin,
      sym_type_builtin_constructor,
    ACTIONS(51), 7,
      anon_sym_Nat,
      anon_sym_Int,
      anon_sym_Float,
      anon_sym_Boolean,
      anon_sym_Bytes,
      anon_sym_Text,
      anon_sym_Char,
  [125] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(59), 2,
      sym_type_variable,
      sym_type_polymorphic,
    STATE(29), 3,
      sym__type,
      sym_type_builtin,
      sym_type_builtin_constructor,
    ACTIONS(55), 4,
      anon_sym_DASH_GT,
      anon_sym_Tuple,
      anon_sym_List,
      anon_sym_abilities_DOTRequest,
    ACTIONS(53), 8,
      anon_sym_Nat,
      anon_sym_Int,
      anon_sym_Float,
      anon_sym_Boolean,
      anon_sym_Bytes,
      anon_sym_Text,
      anon_sym_Char,
      anon_sym_LPAREN_RPAREN,
  [154] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(65), 1,
      sym_natural_literal,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(63), 3,
      sym_byte_literal,
      sym_char_literal,
      sym_float_literal,
    STATE(10), 4,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_text_literal,
  [182] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(69), 1,
      sym_natural_literal,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(67), 3,
      sym_byte_literal,
      sym_char_literal,
      sym_float_literal,
    STATE(11), 4,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_text_literal,
  [210] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      sym_byte_literal,
      sym_char_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_float_literal,
    ACTIONS(73), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_natural_literal,
      sym_name,
  [228] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      sym_byte_literal,
      sym_char_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_float_literal,
    ACTIONS(77), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_natural_literal,
      sym_name,
  [246] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      sym_byte_literal,
      sym_char_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_float_literal,
    ACTIONS(81), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_natural_literal,
      sym_name,
  [264] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      sym_byte_literal,
      sym_char_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_float_literal,
    ACTIONS(85), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_natural_literal,
      sym_name,
  [282] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      sym_byte_literal,
      sym_char_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_float_literal,
    ACTIONS(89), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_natural_literal,
      sym_name,
  [300] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      sym_byte_literal,
      sym_char_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_float_literal,
    ACTIONS(93), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_natural_literal,
      sym_name,
  [318] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      sym_byte_literal,
      sym_char_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_float_literal,
    ACTIONS(97), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_natural_literal,
      sym_name,
  [336] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(99), 1,
      anon_sym_COLON,
    ACTIONS(101), 1,
      anon_sym_EQ,
    ACTIONS(103), 1,
      sym_name,
    STATE(19), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [353] = 4,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym_line_comment,
    STATE(16), 1,
      aux_sym_text_literal_repeat1,
    ACTIONS(107), 2,
      aux_sym_text_literal_token1,
      aux_sym_text_literal_token2,
  [367] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(101), 1,
      anon_sym_EQ,
    ACTIONS(103), 1,
      sym_name,
    STATE(19), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [381] = 4,
    ACTIONS(110), 1,
      sym_line_comment,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      aux_sym_text_literal_repeat1,
    ACTIONS(114), 2,
      aux_sym_text_literal_token1,
      aux_sym_text_literal_token2,
  [395] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      sym_name,
    ACTIONS(116), 1,
      anon_sym_EQ,
    STATE(23), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [409] = 4,
    ACTIONS(110), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(22), 1,
      aux_sym_text_literal_repeat2,
    ACTIONS(118), 2,
      aux_sym_text_literal_token2,
      aux_sym_text_literal_token3,
  [423] = 4,
    ACTIONS(110), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      aux_sym_text_literal_repeat1,
    ACTIONS(122), 2,
      aux_sym_text_literal_token1,
      aux_sym_text_literal_token2,
  [437] = 4,
    ACTIONS(110), 1,
      sym_line_comment,
    ACTIONS(127), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(22), 1,
      aux_sym_text_literal_repeat2,
    ACTIONS(124), 2,
      aux_sym_text_literal_token2,
      aux_sym_text_literal_token3,
  [451] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(129), 1,
      anon_sym_EQ,
    ACTIONS(131), 1,
      sym_name,
    STATE(23), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [465] = 4,
    ACTIONS(110), 1,
      sym_line_comment,
    ACTIONS(112), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(20), 1,
      aux_sym_text_literal_repeat2,
    ACTIONS(134), 2,
      aux_sym_text_literal_token2,
      aux_sym_text_literal_token3,
  [479] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(136), 2,
      anon_sym_EQ,
      sym_name,
  [487] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 2,
      anon_sym_EQ,
      sym_name,
  [495] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(140), 1,
      sym_name,
    STATE(8), 1,
      sym_term_definition,
  [505] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(142), 2,
      anon_sym_EQ,
      sym_name,
  [513] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(144), 1,
      sym_name,
  [520] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 125,
  [SMALL_STATE(6)] = 154,
  [SMALL_STATE(7)] = 182,
  [SMALL_STATE(8)] = 210,
  [SMALL_STATE(9)] = 228,
  [SMALL_STATE(10)] = 246,
  [SMALL_STATE(11)] = 264,
  [SMALL_STATE(12)] = 282,
  [SMALL_STATE(13)] = 300,
  [SMALL_STATE(14)] = 318,
  [SMALL_STATE(15)] = 336,
  [SMALL_STATE(16)] = 353,
  [SMALL_STATE(17)] = 367,
  [SMALL_STATE(18)] = 381,
  [SMALL_STATE(19)] = 395,
  [SMALL_STATE(20)] = 409,
  [SMALL_STATE(21)] = 423,
  [SMALL_STATE(22)] = 437,
  [SMALL_STATE(23)] = 451,
  [SMALL_STATE(24)] = 465,
  [SMALL_STATE(25)] = 479,
  [SMALL_STATE(26)] = 487,
  [SMALL_STATE(27)] = 495,
  [SMALL_STATE(28)] = 505,
  [SMALL_STATE(29)] = 513,
  [SMALL_STATE(30)] = 520,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_declaration, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_declaration, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_definition, 4),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_definition, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_definition, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_definition, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_declaration, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_declaration, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat1, 2), SHIFT_REPEAT(16),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat2, 2), SHIFT_REPEAT(22),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat2, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_definition_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_definition_repeat1, 2), SHIFT_REPEAT(4),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_builtin, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_builtin_constructor, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_signature, 3),
  [146] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
