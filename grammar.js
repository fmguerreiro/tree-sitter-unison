const { sep1 } = require('./grammar/util')
const literal = require('./grammar/literal')
const operation = require('./grammar/operation')

module.exports = grammar({
  name: 'unison',

  extras: $ => [
    /\s/,
    // /\n/,
    // $._terminator,
    $.line_comment,
    // $.block_comment,
  ],

  rules: {
    source_file: $ => repeat($._top_level_declaration),

    _top_level_declaration: $ => choice(
      $._expression,
      // $.term_declaration,
      // $.type_declaration,
      // $.use_clause
    ),

    // type_signature: $ => seq($.name, ':', $._type), // TODO separate type signature from type declaration?
    // term_declaration: $ => seq(optional($.type_signature), $.term_definition),
    // term_definition: $ => seq($.name, repeat($.param), '=', $._expression),

    param: $ => seq($.name, optional($._type)),

    ...literal,
    ...operation,

    _expression: $ => choice(
      $._literal,
      $._operation,
      // TODO:
    ),


    // type_declaration: $ => seq($.name, ':', $._type),
    // use_clause: $ => seq('use', $.name, optional($.name)), // TODO

    name: $ => 'hello world',  // /[a-zA-Z][a-zA-Z0-9_]*/, // TODO:
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
    line_comment: $ => token(seq('--', /.*/)), // TODO: support multiline comments
  }
});
