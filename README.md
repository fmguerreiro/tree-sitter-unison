# Tree sitter for Unison

This tree sitter grammar uses some logic borrowed from the Haskell tree sitter grammar, particularly the way it handles indentation tracking for code blocks.

Every feature of the Unison language is implemented here.

## Attribution

This repository is based on [kylegoetz/tree-sitter-unison](https://github.com/kylegoetz/tree-sitter-unison) with the following enhancements:

- Support for bare type declarations
- Fix for doc blocks before use clauses at top level
- Destructuring bind disambiguation using GLR grammar
- Multi-parameter lambda support
- Character escape sequences with `=` prefix
- Tuple expressions in cases branch returns
- Use clauses as statements inside let blocks
- Comment handling before type signatures

## Contributing

If you have recommendations for improvements, create an issue, please. Thank you!