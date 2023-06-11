module.exports = {
  _literal: $ => choice(
    $.boolean_literal,
    $.byte_literal,
    $.char_literal,
    $.text_literal,
    $.hash_literal,
    $.natural_literal,
    $.float_literal,
    $.list_literal,
    $.tuple_literal,
    // $.lambda,
    // TODO:
  ),

  boolean_literal: $ => choice('true', 'false'),
  byte_literal: $ => /0xs[0-9a-f]+/,
  char_literal: $ => choice(RegExp(`\\?[\u{0000}-\u{10FFFF}]`), '?\t', '?\0', '?\a', '?\b', '?\f', '?\n', '?\r',  '?\v', '?\s', '?\\', '?\'', '?\"'),
  text_literal: $ => choice(
    seq('"', repeat(choice(/[^"\\\n]/, /\\./)), '"'),
    seq('"""', repeat(choice(/[^"\\]/, /\\./)), '"""')
  ),
  hash_literal: $ => seq('#', /[0-9a-z]+/), // TODO: cyclical hashes
  natural_literal: $ => /[0-9]+/,
  integer_literal: $ => token(seq(choice('+', '-'), token.immediate(/\d+/))),  // /[+-]\d+/,
  float_literal: $ => /[+-]?[0-9]+\.[0-9]+/,
  list_literal: $ =>  seq('[', sep1(',', optional($._literal)), ']'),
  tuple_literal: $ => seq('(', sep1(',', optional($._literal)), ')'),
  // lambda: $ => seq('\\', repeat($.param), '->', $._expression),
}
