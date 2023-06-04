#include "tree_sitter/parser.h"

/**
 * This enum is mapped to the `externals` list in the grammar according to how they are ordered (the names are
 * abitrary).
 *
 * When the `scan` function is called, the parameter `syms` contains a bool for each enum attribute indicating whether
 * the parse tree at the current position can accept the corresponding symbol.
 *
 * The attribute `fail` is not part of the parse tree, it is used to indicate that no matching symbol was found.
 *
 */
typedef enum {
  SEMICOLON,
} Sym;

// http://tree-sitter.github.io/tree-sitter/creating-parsers#external-scanners

void * tree_sitter_my_language_external_scanner_create() {
  // ...
}

void tree_sitter_my_language_external_scanner_destroy(void *payload) {
  // ...
}

unsigned tree_sitter_my_language_external_scanner_serialize(
  void *payload,
  char *buffer
) {
  // ...
}

void tree_sitter_my_language_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
) {
  // ...
}

bool tree_sitter_my_language_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  // ...
}
