module.exports = {
  _operation: $ => choice(
    $.addition_op,
    // TODO: check what other operations are available
  ),

  addition_op: $ => prec.left(2, seq($._expression, '+', $._expression)),
}
