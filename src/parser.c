#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
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
  sym_type_variable = 6,
  sym_type_polymorphic = 7,
  anon_sym_Nat = 8,
  anon_sym_Int = 9,
  anon_sym_Float = 10,
  anon_sym_Boolean = 11,
  anon_sym_Bytes = 12,
  anon_sym_Text = 13,
  anon_sym_Char = 14,
  anon_sym_LPAREN_RPAREN = 15,
  anon_sym_DASH_GT = 16,
  anon_sym_Tuple = 17,
  anon_sym_List = 18,
  anon_sym_abilities_DOTRequest = 19,
  sym_source_file = 20,
  sym__top_level_declaration = 21,
  sym_term_declaration = 22,
  sym_type_signature = 23,
  sym_term_definition = 24,
  sym_param = 25,
  sym__expression = 26,
  sym__literal = 27,
  sym_boolean_literal = 28,
  sym__type = 29,
  sym_type_builtin = 30,
  sym_type_builtin_constructor = 31,
  aux_sym_source_file_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [sym_name] = "name",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
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
  [sym_source_file] = "source_file",
  [sym__top_level_declaration] = "_top_level_declaration",
  [sym_term_declaration] = "term_declaration",
  [sym_type_signature] = "type_signature",
  [sym_term_definition] = "term_definition",
  [sym_param] = "param",
  [sym__expression] = "_expression",
  [sym__literal] = "_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym__type] = "_type",
  [sym_type_builtin] = "type_builtin",
  [sym_type_builtin_constructor] = "type_builtin_constructor",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_name] = sym_name,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
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
  [sym_source_file] = sym_source_file,
  [sym__top_level_declaration] = sym__top_level_declaration,
  [sym_term_declaration] = sym_term_declaration,
  [sym_type_signature] = sym_type_signature,
  [sym_term_definition] = sym_term_definition,
  [sym_param] = sym_param,
  [sym__expression] = sym__expression,
  [sym__literal] = sym__literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym__type] = sym__type,
  [sym_type_builtin] = sym_type_builtin,
  [sym_type_builtin_constructor] = sym_type_builtin_constructor,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_term_declaration] = {
    .visible = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      if (lookahead == '(') ADVANCE(2);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'B') ADVANCE(82);
      if (lookahead == 'C') ADVANCE(78);
      if (lookahead == 'F') ADVANCE(80);
      if (lookahead == 'I') ADVANCE(81);
      if (lookahead == 'L') ADVANCE(79);
      if (lookahead == 'N') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(2);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'B') ADVANCE(82);
      if (lookahead == 'C') ADVANCE(78);
      if (lookahead == 'F') ADVANCE(80);
      if (lookahead == 'I') ADVANCE(81);
      if (lookahead == 'L') ADVANCE(79);
      if (lookahead == 'N') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(91);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(92);
      END_STATE();
    case 6:
      if (lookahead == 'R') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'q') ADVANCE(48);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 49:
      if (lookahead == 'x') ADVANCE(43);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
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
      if (lookahead == 'a') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == '.') ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'b') ADVANCE(69);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'e') ADVANCE(73);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'i') ADVANCE(72);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'i') ADVANCE(74);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'i') ADVANCE(68);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 'l') ADVANCE(70);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 's') ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_type_variable);
      if (lookahead == 't') ADVANCE(71);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_type_variable);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'a') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'h') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'i') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'l') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'n') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_type_polymorphic);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_Nat);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_Bytes);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_Text);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_Char);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_Tuple);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_List);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_abilities_DOTRequest);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 50},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 50},
  [5] = {.lex_state = 50},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 50},
  [8] = {.lex_state = 50},
  [9] = {.lex_state = 50},
  [10] = {.lex_state = 50},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(16),
    [sym__top_level_declaration] = STATE(4),
    [sym_term_declaration] = STATE(4),
    [sym_type_signature] = STATE(12),
    [sym_term_definition] = STATE(8),
    [sym__expression] = STATE(4),
    [sym__literal] = STATE(4),
    [sym_boolean_literal] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_name] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
  },
  [2] = {
    [sym__type] = STATE(19),
    [sym_type_builtin] = STATE(19),
    [sym_type_builtin_constructor] = STATE(19),
    [anon_sym_EQ] = ACTIONS(9),
    [sym_type_variable] = ACTIONS(11),
    [sym_type_polymorphic] = ACTIONS(11),
    [anon_sym_Nat] = ACTIONS(13),
    [anon_sym_Int] = ACTIONS(13),
    [anon_sym_Float] = ACTIONS(13),
    [anon_sym_Boolean] = ACTIONS(13),
    [anon_sym_Bytes] = ACTIONS(13),
    [anon_sym_Text] = ACTIONS(13),
    [anon_sym_Char] = ACTIONS(13),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(13),
    [anon_sym_DASH_GT] = ACTIONS(15),
    [anon_sym_Tuple] = ACTIONS(15),
    [anon_sym_List] = ACTIONS(15),
    [anon_sym_abilities_DOTRequest] = ACTIONS(15),
  },
  [3] = {
    [sym__type] = STATE(18),
    [sym_type_builtin] = STATE(18),
    [sym_type_builtin_constructor] = STATE(18),
    [sym_type_variable] = ACTIONS(17),
    [sym_type_polymorphic] = ACTIONS(17),
    [anon_sym_Nat] = ACTIONS(13),
    [anon_sym_Int] = ACTIONS(13),
    [anon_sym_Float] = ACTIONS(13),
    [anon_sym_Boolean] = ACTIONS(13),
    [anon_sym_Bytes] = ACTIONS(13),
    [anon_sym_Text] = ACTIONS(13),
    [anon_sym_Char] = ACTIONS(13),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(13),
    [anon_sym_DASH_GT] = ACTIONS(15),
    [anon_sym_Tuple] = ACTIONS(15),
    [anon_sym_List] = ACTIONS(15),
    [anon_sym_abilities_DOTRequest] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_term_definition,
    STATE(12), 1,
      sym_type_signature,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 6,
      sym__top_level_declaration,
      sym_term_declaration,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      aux_sym_source_file_repeat1,
  [25] = 6,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_name,
    STATE(8), 1,
      sym_term_definition,
    STATE(12), 1,
      sym_type_signature,
    ACTIONS(26), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 6,
      sym__top_level_declaration,
      sym_term_declaration,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
      aux_sym_source_file_repeat1,
  [50] = 2,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(10), 3,
      sym__expression,
      sym__literal,
      sym_boolean_literal,
  [60] = 2,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 3,
      sym_name,
      anon_sym_true,
      anon_sym_false,
  [69] = 2,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 3,
      sym_name,
      anon_sym_true,
      anon_sym_false,
  [78] = 2,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 3,
      sym_name,
      anon_sym_true,
      anon_sym_false,
  [87] = 2,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 3,
      sym_name,
      anon_sym_true,
      anon_sym_false,
  [96] = 3,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      sym_name,
    STATE(17), 1,
      sym_param,
  [106] = 2,
    ACTIONS(51), 1,
      sym_name,
    STATE(9), 1,
      sym_term_definition,
  [113] = 2,
    ACTIONS(49), 1,
      sym_name,
    STATE(17), 1,
      sym_param,
  [120] = 1,
    ACTIONS(53), 2,
      anon_sym_EQ,
      sym_name,
  [125] = 1,
    ACTIONS(55), 2,
      anon_sym_EQ,
      sym_name,
  [130] = 1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
  [134] = 1,
    ACTIONS(59), 1,
      anon_sym_EQ,
  [138] = 1,
    ACTIONS(61), 1,
      sym_name,
  [142] = 1,
    ACTIONS(63), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 25,
  [SMALL_STATE(6)] = 50,
  [SMALL_STATE(7)] = 60,
  [SMALL_STATE(8)] = 69,
  [SMALL_STATE(9)] = 78,
  [SMALL_STATE(10)] = 87,
  [SMALL_STATE(11)] = 96,
  [SMALL_STATE(12)] = 106,
  [SMALL_STATE(13)] = 113,
  [SMALL_STATE(14)] = 120,
  [SMALL_STATE(15)] = 125,
  [SMALL_STATE(16)] = 130,
  [SMALL_STATE(17)] = 134,
  [SMALL_STATE(18)] = 138,
  [SMALL_STATE(19)] = 142,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_declaration, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_declaration, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_declaration, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_declaration, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term_definition, 4),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term_definition, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_builtin, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_builtin_constructor, 1),
  [57] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_signature, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2),
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
