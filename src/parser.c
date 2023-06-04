#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_COLON = 1,
  anon_sym_EQ = 2,
  sym_name = 3,
  anon_sym_true = 4,
  anon_sym_false = 5,
  anon_sym_DQUOTE = 6,
  aux_sym_text_literal_token1 = 7,
  aux_sym_text_literal_token2 = 8,
  sym_natural_literal = 9,
  sym_integer_literal = 10,
  sym_float_literal = 11,
  sym_type_variable = 12,
  sym_type_polymorphic = 13,
  anon_sym_Nat = 14,
  anon_sym_Int = 15,
  anon_sym_Float = 16,
  anon_sym_Boolean = 17,
  anon_sym_Bytes = 18,
  anon_sym_Text = 19,
  anon_sym_Char = 20,
  anon_sym_LPAREN_RPAREN = 21,
  anon_sym_DASH_GT = 22,
  anon_sym_Tuple = 23,
  anon_sym_List = 24,
  anon_sym_abilities_DOTRequest = 25,
  aux_sym__terminator_token1 = 26,
  sym_line_comment = 27,
  sym_source_file = 28,
  sym__top_level_declaration = 29,
  sym_type_signature = 30,
  sym_term_declaration = 31,
  sym_term_definition = 32,
  sym_param = 33,
  sym__expression = 34,
  sym__literal = 35,
  sym_boolean_literal = 36,
  sym_text_literal = 37,
  sym__type = 38,
  sym_type_builtin = 39,
  sym_type_builtin_constructor = 40,
  aux_sym_source_file_repeat1 = 41,
  aux_sym_term_definition_repeat1 = 42,
  aux_sym_text_literal_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [sym_name] = "name",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_text_literal_token1] = "text_literal_token1",
  [aux_sym_text_literal_token2] = "text_literal_token2",
  [sym_natural_literal] = "natural_literal",
  [sym_integer_literal] = "integer_literal",
  [sym_float_literal] = "float_literal",
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
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_name] = sym_name,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_text_literal_token1] = aux_sym_text_literal_token1,
  [aux_sym_text_literal_token2] = aux_sym_text_literal_token2,
  [sym_natural_literal] = sym_natural_literal,
  [sym_integer_literal] = sym_integer_literal,
  [sym_float_literal] = sym_float_literal,
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
  [sym_name] = {
    .visible = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == ';') ADVANCE(162);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'B') ADVANCE(87);
      if (lookahead == 'C') ADVANCE(71);
      if (lookahead == 'F') ADVANCE(79);
      if (lookahead == 'I') ADVANCE(86);
      if (lookahead == 'L') ADVANCE(72);
      if (lookahead == 'N') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(108);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'B') ADVANCE(87);
      if (lookahead == 'C') ADVANCE(71);
      if (lookahead == 'F') ADVANCE(79);
      if (lookahead == 'I') ADVANCE(86);
      if (lookahead == 'L') ADVANCE(72);
      if (lookahead == 'N') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(108);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == 'B') ADVANCE(139);
      if (lookahead == 'C') ADVANCE(135);
      if (lookahead == 'F') ADVANCE(137);
      if (lookahead == 'I') ADVANCE(138);
      if (lookahead == 'L') ADVANCE(136);
      if (lookahead == 'N') ADVANCE(133);
      if (lookahead == 'T') ADVANCE(134);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(155);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(156);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 10:
      if (lookahead == 'R') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'q') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 45:
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 49:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(110);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b') ADVANCE(73);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(110);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(110);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(110);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(110);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(67);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(110);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(74);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(110);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead == 'y') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(110);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(75);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(110);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'x') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_text_literal_token1);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_text_literal_token1);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(116);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_text_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_text_literal_token2);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_natural_literal);
      if (lookahead == '.') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == '.') ADVANCE(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'b') ADVANCE(126);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'e') ADVANCE(130);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'i') ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'i') ADVANCE(131);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'i') ADVANCE(125);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'l') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 's') ADVANCE(123);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 't') ADVANCE(128);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_type_variable);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'a') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'h') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'i') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'l') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'n') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == 'y') ADVANCE(42);
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
      ACCEPT_TOKEN(anon_sym_Nat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_Int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_Float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_Bytes);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_Bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_Text);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_Char);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_Char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_Tuple);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_Tuple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_List);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_List);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_abilities_DOTRequest);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__terminator_token1);
      if (lookahead == ';') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 50},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 50},
  [5] = {.lex_state = 50},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 50},
  [9] = {.lex_state = 50},
  [10] = {.lex_state = 50},
  [11] = {.lex_state = 50},
  [12] = {.lex_state = 50},
  [13] = {.lex_state = 50},
  [14] = {.lex_state = 50},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_text_literal_token2] = ACTIONS(1),
    [sym_natural_literal] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
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
    [sym_source_file] = STATE(26),
    [sym__top_level_declaration] = STATE(4),
    [sym_type_signature] = STATE(22),
    [sym_term_declaration] = STATE(4),
    [sym_term_definition] = STATE(9),
    [sym__expression] = STATE(4),
    [sym__literal] = STATE(4),
    [sym_boolean_literal] = STATE(4),
    [sym_text_literal] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_natural_literal] = ACTIONS(13),
    [sym_float_literal] = ACTIONS(15),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      anon_sym_EQ,
    ACTIONS(19), 1,
      sym_name,
    ACTIONS(25), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(21), 2,
      sym_type_variable,
      sym_type_polymorphic,
    ACTIONS(27), 2,
      anon_sym_DASH_GT,
      anon_sym_abilities_DOTRequest,
    ACTIONS(29), 2,
      anon_sym_Tuple,
      anon_sym_List,
    STATE(25), 3,
      sym__type,
      sym_type_builtin,
      sym_type_builtin_constructor,
    ACTIONS(23), 7,
      anon_sym_Nat,
      anon_sym_Int,
      anon_sym_Float,
      anon_sym_Boolean,
      anon_sym_Bytes,
      anon_sym_Text,
      anon_sym_Char,
  [39] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 2,
      sym_type_variable,
      sym_type_polymorphic,
    STATE(27), 3,
      sym__type,
      sym_type_builtin,
      sym_type_builtin_constructor,
    ACTIONS(27), 4,
      anon_sym_DASH_GT,
      anon_sym_Tuple,
      anon_sym_List,
      anon_sym_abilities_DOTRequest,
    ACTIONS(25), 8,
      anon_sym_Nat,
      anon_sym_Int,
      anon_sym_Float,
      anon_sym_Boolean,
      anon_sym_Bytes,
      anon_sym_Text,
      anon_sym_Char,
      anon_sym_LPAREN_RPAREN,
  [68] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_natural_literal,
    ACTIONS(37), 1,
      sym_float_literal,
    STATE(9), 1,
      sym_term_definition,
    STATE(22), 1,
      sym_type_signature,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 7,
      sym__top_level_declaration,
      sym_term_declaration,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_text_literal,
      aux_sym_source_file_repeat1,
  [106] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      sym_name,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      sym_natural_literal,
    ACTIONS(53), 1,
      sym_float_literal,
    STATE(9), 1,
      sym_term_definition,
    STATE(22), 1,
      sym_type_signature,
    ACTIONS(44), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 7,
      sym__top_level_declaration,
      sym_term_declaration,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_text_literal,
      aux_sym_source_file_repeat1,
  [144] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      sym_natural_literal,
    ACTIONS(60), 1,
      sym_float_literal,
    ACTIONS(56), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 4,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_text_literal,
  [167] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_natural_literal,
    ACTIONS(64), 1,
      sym_float_literal,
    ACTIONS(56), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 4,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      sym_text_literal,
  [190] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(66), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_float_literal,
    ACTIONS(68), 4,
      sym_name,
      anon_sym_true,
      anon_sym_false,
      sym_natural_literal,
  [205] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_float_literal,
    ACTIONS(72), 4,
      sym_name,
      anon_sym_true,
      anon_sym_false,
      sym_natural_literal,
  [220] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_float_literal,
    ACTIONS(76), 4,
      sym_name,
      anon_sym_true,
      anon_sym_false,
      sym_natural_literal,
  [235] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_float_literal,
    ACTIONS(80), 4,
      sym_name,
      anon_sym_true,
      anon_sym_false,
      sym_natural_literal,
  [250] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_float_literal,
    ACTIONS(84), 4,
      sym_name,
      anon_sym_true,
      anon_sym_false,
      sym_natural_literal,
  [265] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_float_literal,
    ACTIONS(88), 4,
      sym_name,
      anon_sym_true,
      anon_sym_false,
      sym_natural_literal,
  [280] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_float_literal,
    ACTIONS(92), 4,
      sym_name,
      anon_sym_true,
      anon_sym_false,
      sym_natural_literal,
  [295] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(94), 1,
      anon_sym_COLON,
    ACTIONS(96), 1,
      anon_sym_EQ,
    ACTIONS(98), 1,
      sym_name,
    STATE(16), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [312] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(98), 1,
      sym_name,
    ACTIONS(100), 1,
      anon_sym_EQ,
    STATE(20), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [326] = 4,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      sym_line_comment,
    STATE(21), 1,
      aux_sym_text_literal_repeat1,
    ACTIONS(104), 2,
      aux_sym_text_literal_token1,
      aux_sym_text_literal_token2,
  [340] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(96), 1,
      anon_sym_EQ,
    ACTIONS(98), 1,
      sym_name,
    STATE(16), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [354] = 4,
    ACTIONS(106), 1,
      sym_line_comment,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      aux_sym_text_literal_repeat1,
    ACTIONS(110), 2,
      aux_sym_text_literal_token1,
      aux_sym_text_literal_token2,
  [368] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(112), 1,
      anon_sym_EQ,
    ACTIONS(114), 1,
      sym_name,
    STATE(20), 2,
      sym_param,
      aux_sym_term_definition_repeat1,
  [382] = 4,
    ACTIONS(106), 1,
      sym_line_comment,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      aux_sym_text_literal_repeat1,
    ACTIONS(119), 2,
      aux_sym_text_literal_token1,
      aux_sym_text_literal_token2,
  [396] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(122), 1,
      sym_name,
    STATE(11), 1,
      sym_term_definition,
  [406] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(124), 2,
      anon_sym_EQ,
      sym_name,
  [414] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 2,
      anon_sym_EQ,
      sym_name,
  [422] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(128), 2,
      anon_sym_EQ,
      sym_name,
  [430] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
  [437] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(132), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 106,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 167,
  [SMALL_STATE(8)] = 190,
  [SMALL_STATE(9)] = 205,
  [SMALL_STATE(10)] = 220,
  [SMALL_STATE(11)] = 235,
  [SMALL_STATE(12)] = 250,
  [SMALL_STATE(13)] = 265,
  [SMALL_STATE(14)] = 280,
  [SMALL_STATE(15)] = 295,
  [SMALL_STATE(16)] = 312,
  [SMALL_STATE(17)] = 326,
  [SMALL_STATE(18)] = 340,
  [SMALL_STATE(19)] = 354,
  [SMALL_STATE(20)] = 368,
  [SMALL_STATE(21)] = 382,
  [SMALL_STATE(22)] = 396,
  [SMALL_STATE(23)] = 406,
  [SMALL_STATE(24)] = 414,
  [SMALL_STATE(25)] = 422,
  [SMALL_STATE(26)] = 430,
  [SMALL_STATE(27)] = 437,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_definition, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_definition, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_declaration, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_declaration, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_declaration, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_declaration, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_definition, 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_definition, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_definition_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_definition_repeat1, 2), SHIFT_REPEAT(2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_literal_repeat1, 2), SHIFT_REPEAT(21),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_builtin, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_builtin_constructor, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2),
  [130] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_signature, 3),
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
