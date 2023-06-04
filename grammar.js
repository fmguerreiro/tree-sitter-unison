const { sep1 } = require('./grammar/util')

const naturalRegex = '0|[1-9][0-9]*';
const integerRegex = `[+-]\d+`;
const floatRegex = `${integerRegex}\\.${naturalRegex}`;

module.exports = grammar({
  name: 'unison',

  extras: $ => [
    /\s/,
    $.line_comment,
    // $.block_comment,
  ],

  rules: {
    source_file: $ => repeat($._top_level_declaration),

    _top_level_declaration: $ => choice(
      $._expression,
      $.term_declaration,
      // $.type_declaration,
      // $.use_clause
    ),

    type_signature: $ => seq($.name, ':', $._type), // TODO separate type signature from type declaration?
    term_declaration: $ => seq(optional($.type_signature), $.term_definition),
    term_definition: $ => seq($.name, repeat($.param), '=', $._expression),

    name: $ => /[a-zA-Z][a-zA-Z0-9_]*/, // TODO:
    param: $ => seq($.name, optional($._type)),

    _expression: $ => choice(
      $._literal,
      // TODO:
    ),

    _literal: $ => choice(
      $.boolean_literal,
      $.text_literal,
      $.natural_literal,
      $.float_literal,
      // TODO:
    ),
    boolean_literal: $ => choice('true', 'false'),
    text_literal: $ => seq('"', repeat(choice(/[^"\\\n]/, /\\./)), '"'), // TODO: support multiline strings
    natural_literal: $ => /[0-9]+/,
    integer_literal: $ => /[+-][0-9]+/,
    float_literal: $ => /[+-]?[0-9]+\.[0-9]+/,

    // type_declaration: $ => seq($.name, ':', $._type),
    // use_clause: $ => seq('use', $.name, optional($.name)), // TODO

    _type: $ => choice(
      $.type_variable,
      $.type_polymorphic,
      // $.type_constructor,
      // $.type_application,
      // $.type_parenthesized,
      // $.type_function,
      $.type_builtin,
      $.type_builtin_constructor,
      // $.type_user_defined,
    ),

    type_variable: $ => /[a-z]+/,
    type_polymorphic: $ => /[A-Z]+/, // TODO:
    // type_function: $ => seq($._type, '->', $._type),
    type_builtin: $ => choice(
      'Nat',
      'Int',
      'Float',
      'Boolean',
      'Bytes',
      'Text',
      'Char',
      '()'),
    type_builtin_constructor: $ => choice(
      '->',
      'Tuple',
      'List', // TODO: also has an alias of [T] for type T
      'abilities.Request' // TODO ?
    ),
    // type_user_defined: $ => seq($.name, $.type_arguments),

    _terminator: _ => choice('\n', /;+/), // TODO:
    line_comment: $ => token(seq('#', /.*/)), // TODO: support multiline comments
  }
});
