const { sep1, sep2 } = require('./grammar/util')
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
      $._term_declaration,
      $.type_declaration,
      // $.ability_declaration
      // $.use_clause
    ),

    _term_declaration: $ => prec(1, seq(optional($._type_signature), $.term_definition)),
    _type_signature: $ => seq($.type_variable, ':', optional($._type)),
    term_definition: $ => prec(1, seq($.type_variable, repeat($.param), '=', $._expression)),

    declaration_modifier: $ => choice('structural', 'unique'),
    type_declaration: $ => seq($.declaration_modifier, 'type', $._type_constructor, '=', $.data_constructor),
    // ability_declaration: $ => seq($.declaration_modifier, $.type_variable, '=', $.ability),

    data_constructor: $ => sep1('|', $.type_polymorphic),
    _type_constructor: $ => choice(
      $.generic_type_constructor,
      $.function_type_constructor,
      $.tuple_type_constructor,
      $.list_type_constructor
    ),
    generic_type_constructor: $ => seq($.type_polymorphic),
    function_type_constructor: $ => sep2('->', $.type_polymorphic),
    tuple_type_constructor: $ => seq('(', sep1(',', $.type_polymorphic), ')'),
    list_type_constructor: $ => seq('[', sep1(',', $.type_polymorphic), ']'),

    ...literal,
    ...operation,

    type_variable: $ => /[a-z][a-zA-Z0-9]*/,
    type_polymorphic: $ => prec.right(1, seq(/[A-Z]+/, repeat($.type_variable))),
    param: $ => $._type_signature,


    _expression: $ => choice(
      $._literal,
      $._operation,
      $.type_variable,
      // TODO:
    ),


    // use_clause: $ => seq('use', $.name, optional($.name)), // TODO

    _type: $ => choice(
      $.type_builtin,
      $.type_polymorphic,
      // $.type_constructor,
      // $.type_application,
      // $.type_parenthesized,
      $.type_function,
      // $.builtin_type,
      // $.type_user_defined,
    ),

    type_function: $ => prec.right(1, seq($._type, '->', $._type)),
    type_builtin: $ => choice(
      'Nat',
      'Int',
      'Float',
      'Boolean',
      'Bytes',
      'Text',
      'Char',
      '()'),
    // type_user_defined: $ => seq($.name, $.type_arguments),

    _terminator: _ => choice('\n', /;+/), // TODO:
    line_comment: $ => token(seq('--', /.*/)), // TODO: support multiline comments
  }
});
