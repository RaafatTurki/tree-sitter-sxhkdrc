#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_super = 2,
  anon_sym_hyper = 3,
  anon_sym_meta = 4,
  anon_sym_alt = 5,
  anon_sym_control = 6,
  anon_sym_ctrl = 7,
  anon_sym_shift = 8,
  anon_sym_mode_switch = 9,
  anon_sym_lock = 10,
  anon_sym_mod1 = 11,
  anon_sym_mod2 = 12,
  anon_sym_mod3 = 13,
  anon_sym_mod4 = 14,
  anon_sym_mod5 = 15,
  anon_sym_any = 16,
  anon_sym_PLUS = 17,
  anon_sym_DASH = 18,
  anon_sym_COLON = 19,
  anon_sym_TILDE = 20,
  anon_sym_LBRACE = 21,
  anon_sym_COMMA = 22,
  anon_sym_RBRACE = 23,
  sym_keysym = 24,
  sym_comment = 25,
  sym_command = 26,
  sym_source_file = 27,
  sym__definition = 28,
  sym_binding = 29,
  sym_hotkey = 30,
  sym_modifier = 31,
  sym_operator = 32,
  sym_punctuation = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym_hotkey_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_super] = "super",
  [anon_sym_hyper] = "hyper",
  [anon_sym_meta] = "meta",
  [anon_sym_alt] = "alt",
  [anon_sym_control] = "control",
  [anon_sym_ctrl] = "ctrl",
  [anon_sym_shift] = "shift",
  [anon_sym_mode_switch] = "mode_switch",
  [anon_sym_lock] = "lock",
  [anon_sym_mod1] = "mod1",
  [anon_sym_mod2] = "mod2",
  [anon_sym_mod3] = "mod3",
  [anon_sym_mod4] = "mod4",
  [anon_sym_mod5] = "mod5",
  [anon_sym_any] = "any",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_COLON] = ":",
  [anon_sym_TILDE] = "~",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [sym_keysym] = "keysym",
  [sym_comment] = "comment",
  [sym_command] = "command",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_binding] = "binding",
  [sym_hotkey] = "hotkey",
  [sym_modifier] = "modifier",
  [sym_operator] = "operator",
  [sym_punctuation] = "punctuation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_hotkey_repeat1] = "hotkey_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_super] = anon_sym_super,
  [anon_sym_hyper] = anon_sym_hyper,
  [anon_sym_meta] = anon_sym_meta,
  [anon_sym_alt] = anon_sym_alt,
  [anon_sym_control] = anon_sym_control,
  [anon_sym_ctrl] = anon_sym_ctrl,
  [anon_sym_shift] = anon_sym_shift,
  [anon_sym_mode_switch] = anon_sym_mode_switch,
  [anon_sym_lock] = anon_sym_lock,
  [anon_sym_mod1] = anon_sym_mod1,
  [anon_sym_mod2] = anon_sym_mod2,
  [anon_sym_mod3] = anon_sym_mod3,
  [anon_sym_mod4] = anon_sym_mod4,
  [anon_sym_mod5] = anon_sym_mod5,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_keysym] = sym_keysym,
  [sym_comment] = sym_comment,
  [sym_command] = sym_command,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_binding] = sym_binding,
  [sym_hotkey] = sym_hotkey,
  [sym_modifier] = sym_modifier,
  [sym_operator] = sym_operator,
  [sym_punctuation] = sym_punctuation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_hotkey_repeat1] = aux_sym_hotkey_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_super] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hyper] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_control] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ctrl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mode_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
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
  [sym_keysym] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_hotkey] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_punctuation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hotkey_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(34);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead == '~') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(34);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead == '~') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_super);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_hyper);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_meta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_mode_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_lock);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_mod1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_mod2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_mod3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_mod4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_mod5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_any);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == '1') ADVANCE(15);
      if (lookahead == '2') ADVANCE(16);
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '4') ADVANCE(18);
      if (lookahead == '5') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'a') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'c') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'c') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'd') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'e') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'e') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'f') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'h') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'h') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'i') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'i') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'k') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'l') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'l') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'n') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 't') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'o') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'o') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'p') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'p') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'r') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'r') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'r') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'r') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 's') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 't') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 't') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 't') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 't') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 't') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'w') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'y') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'y') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_keysym);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_command);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_super] = ACTIONS(1),
    [anon_sym_hyper] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_alt] = ACTIONS(1),
    [anon_sym_control] = ACTIONS(1),
    [anon_sym_ctrl] = ACTIONS(1),
    [anon_sym_shift] = ACTIONS(1),
    [anon_sym_mode_switch] = ACTIONS(1),
    [anon_sym_lock] = ACTIONS(1),
    [anon_sym_mod1] = ACTIONS(1),
    [anon_sym_mod2] = ACTIONS(1),
    [anon_sym_mod3] = ACTIONS(1),
    [anon_sym_mod4] = ACTIONS(1),
    [anon_sym_mod5] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_keysym] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(10),
    [sym__definition] = STATE(2),
    [sym_binding] = STATE(2),
    [sym_hotkey] = STATE(11),
    [sym_modifier] = STATE(4),
    [sym_operator] = STATE(4),
    [sym_punctuation] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_hotkey_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_super] = ACTIONS(7),
    [anon_sym_hyper] = ACTIONS(7),
    [anon_sym_meta] = ACTIONS(7),
    [anon_sym_alt] = ACTIONS(7),
    [anon_sym_control] = ACTIONS(7),
    [anon_sym_ctrl] = ACTIONS(7),
    [anon_sym_shift] = ACTIONS(7),
    [anon_sym_mode_switch] = ACTIONS(7),
    [anon_sym_lock] = ACTIONS(7),
    [anon_sym_mod1] = ACTIONS(7),
    [anon_sym_mod2] = ACTIONS(7),
    [anon_sym_mod3] = ACTIONS(7),
    [anon_sym_mod4] = ACTIONS(7),
    [anon_sym_mod5] = ACTIONS(7),
    [anon_sym_any] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(11),
    [sym_keysym] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym_binding] = STATE(3),
    [sym_hotkey] = STATE(11),
    [sym_modifier] = STATE(4),
    [sym_operator] = STATE(4),
    [sym_punctuation] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_hotkey_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_super] = ACTIONS(7),
    [anon_sym_hyper] = ACTIONS(7),
    [anon_sym_meta] = ACTIONS(7),
    [anon_sym_alt] = ACTIONS(7),
    [anon_sym_control] = ACTIONS(7),
    [anon_sym_ctrl] = ACTIONS(7),
    [anon_sym_shift] = ACTIONS(7),
    [anon_sym_mode_switch] = ACTIONS(7),
    [anon_sym_lock] = ACTIONS(7),
    [anon_sym_mod1] = ACTIONS(7),
    [anon_sym_mod2] = ACTIONS(7),
    [anon_sym_mod3] = ACTIONS(7),
    [anon_sym_mod4] = ACTIONS(7),
    [anon_sym_mod5] = ACTIONS(7),
    [anon_sym_any] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(11),
    [sym_keysym] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym_binding] = STATE(3),
    [sym_hotkey] = STATE(11),
    [sym_modifier] = STATE(4),
    [sym_operator] = STATE(4),
    [sym_punctuation] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_hotkey_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_super] = ACTIONS(21),
    [anon_sym_hyper] = ACTIONS(21),
    [anon_sym_meta] = ACTIONS(21),
    [anon_sym_alt] = ACTIONS(21),
    [anon_sym_control] = ACTIONS(21),
    [anon_sym_ctrl] = ACTIONS(21),
    [anon_sym_shift] = ACTIONS(21),
    [anon_sym_mode_switch] = ACTIONS(21),
    [anon_sym_lock] = ACTIONS(21),
    [anon_sym_mod1] = ACTIONS(21),
    [anon_sym_mod2] = ACTIONS(21),
    [anon_sym_mod3] = ACTIONS(21),
    [anon_sym_mod4] = ACTIONS(21),
    [anon_sym_mod5] = ACTIONS(21),
    [anon_sym_any] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(24),
    [anon_sym_DASH] = ACTIONS(24),
    [anon_sym_COLON] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [sym_keysym] = ACTIONS(30),
    [sym_comment] = ACTIONS(15),
  },
  [4] = {
    [sym_modifier] = STATE(5),
    [sym_operator] = STATE(5),
    [sym_punctuation] = STATE(5),
    [aux_sym_hotkey_repeat1] = STATE(5),
    [anon_sym_LF] = ACTIONS(33),
    [anon_sym_super] = ACTIONS(7),
    [anon_sym_hyper] = ACTIONS(7),
    [anon_sym_meta] = ACTIONS(7),
    [anon_sym_alt] = ACTIONS(7),
    [anon_sym_control] = ACTIONS(7),
    [anon_sym_ctrl] = ACTIONS(7),
    [anon_sym_shift] = ACTIONS(7),
    [anon_sym_mode_switch] = ACTIONS(7),
    [anon_sym_lock] = ACTIONS(7),
    [anon_sym_mod1] = ACTIONS(7),
    [anon_sym_mod2] = ACTIONS(7),
    [anon_sym_mod3] = ACTIONS(7),
    [anon_sym_mod4] = ACTIONS(7),
    [anon_sym_mod5] = ACTIONS(7),
    [anon_sym_any] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(37),
    [sym_keysym] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_modifier] = STATE(5),
    [sym_operator] = STATE(5),
    [sym_punctuation] = STATE(5),
    [aux_sym_hotkey_repeat1] = STATE(5),
    [anon_sym_LF] = ACTIONS(41),
    [anon_sym_super] = ACTIONS(43),
    [anon_sym_hyper] = ACTIONS(43),
    [anon_sym_meta] = ACTIONS(43),
    [anon_sym_alt] = ACTIONS(43),
    [anon_sym_control] = ACTIONS(43),
    [anon_sym_ctrl] = ACTIONS(43),
    [anon_sym_shift] = ACTIONS(43),
    [anon_sym_mode_switch] = ACTIONS(43),
    [anon_sym_lock] = ACTIONS(43),
    [anon_sym_mod1] = ACTIONS(43),
    [anon_sym_mod2] = ACTIONS(43),
    [anon_sym_mod3] = ACTIONS(43),
    [anon_sym_mod4] = ACTIONS(43),
    [anon_sym_mod5] = ACTIONS(43),
    [anon_sym_any] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(46),
    [anon_sym_DASH] = ACTIONS(46),
    [anon_sym_COLON] = ACTIONS(46),
    [anon_sym_TILDE] = ACTIONS(46),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(49),
    [sym_keysym] = ACTIONS(52),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [anon_sym_LF] = ACTIONS(55),
    [anon_sym_super] = ACTIONS(57),
    [anon_sym_hyper] = ACTIONS(57),
    [anon_sym_meta] = ACTIONS(57),
    [anon_sym_alt] = ACTIONS(57),
    [anon_sym_control] = ACTIONS(57),
    [anon_sym_ctrl] = ACTIONS(57),
    [anon_sym_shift] = ACTIONS(57),
    [anon_sym_mode_switch] = ACTIONS(57),
    [anon_sym_lock] = ACTIONS(57),
    [anon_sym_mod1] = ACTIONS(57),
    [anon_sym_mod2] = ACTIONS(57),
    [anon_sym_mod3] = ACTIONS(57),
    [anon_sym_mod4] = ACTIONS(57),
    [anon_sym_mod5] = ACTIONS(57),
    [anon_sym_any] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(57),
    [anon_sym_TILDE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [sym_keysym] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [anon_sym_LF] = ACTIONS(59),
    [anon_sym_super] = ACTIONS(61),
    [anon_sym_hyper] = ACTIONS(61),
    [anon_sym_meta] = ACTIONS(61),
    [anon_sym_alt] = ACTIONS(61),
    [anon_sym_control] = ACTIONS(61),
    [anon_sym_ctrl] = ACTIONS(61),
    [anon_sym_shift] = ACTIONS(61),
    [anon_sym_mode_switch] = ACTIONS(61),
    [anon_sym_lock] = ACTIONS(61),
    [anon_sym_mod1] = ACTIONS(61),
    [anon_sym_mod2] = ACTIONS(61),
    [anon_sym_mod3] = ACTIONS(61),
    [anon_sym_mod4] = ACTIONS(61),
    [anon_sym_mod5] = ACTIONS(61),
    [anon_sym_any] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(61),
    [sym_keysym] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [anon_sym_LF] = ACTIONS(63),
    [anon_sym_super] = ACTIONS(65),
    [anon_sym_hyper] = ACTIONS(65),
    [anon_sym_meta] = ACTIONS(65),
    [anon_sym_alt] = ACTIONS(65),
    [anon_sym_control] = ACTIONS(65),
    [anon_sym_ctrl] = ACTIONS(65),
    [anon_sym_shift] = ACTIONS(65),
    [anon_sym_mode_switch] = ACTIONS(65),
    [anon_sym_lock] = ACTIONS(65),
    [anon_sym_mod1] = ACTIONS(65),
    [anon_sym_mod2] = ACTIONS(65),
    [anon_sym_mod3] = ACTIONS(65),
    [anon_sym_mod4] = ACTIONS(65),
    [anon_sym_mod5] = ACTIONS(65),
    [anon_sym_any] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_TILDE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(65),
    [sym_keysym] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_super] = ACTIONS(69),
    [anon_sym_hyper] = ACTIONS(69),
    [anon_sym_meta] = ACTIONS(69),
    [anon_sym_alt] = ACTIONS(69),
    [anon_sym_control] = ACTIONS(69),
    [anon_sym_ctrl] = ACTIONS(69),
    [anon_sym_shift] = ACTIONS(69),
    [anon_sym_mode_switch] = ACTIONS(69),
    [anon_sym_lock] = ACTIONS(69),
    [anon_sym_mod1] = ACTIONS(69),
    [anon_sym_mod2] = ACTIONS(69),
    [anon_sym_mod3] = ACTIONS(69),
    [anon_sym_mod4] = ACTIONS(69),
    [anon_sym_mod5] = ACTIONS(69),
    [anon_sym_any] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(67),
    [sym_keysym] = ACTIONS(69),
    [sym_comment] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
  [7] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LF,
  [14] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_command,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 7,
  [SMALL_STATE(12)] = 14,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hotkey, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hotkey_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hotkey_repeat1, 2), SHIFT_REPEAT(6),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hotkey_repeat1, 2), SHIFT_REPEAT(7),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hotkey_repeat1, 2), SHIFT_REPEAT(8),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hotkey_repeat1, 2), SHIFT_REPEAT(5),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_punctuation, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_punctuation, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding, 3),
  [71] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sxhkdrc(void) {
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
