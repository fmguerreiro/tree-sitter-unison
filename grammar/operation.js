module.exports = {
  _operation: $ => choice(
    $.add_op,
    $.mul_op,
    // TODO: check what other operations are available
  ),

  add_op: $ => prec.left(2, seq($._expression, '+', $._expression)),
  mul_op: $ => prec.left(2, seq($._expression, '*', $._expression))
}
