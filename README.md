# tree-sitter-unison

A [Tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for the [Unison programming language](https://www.unison-lang.org/).

Tree-sitter is a parser generator tool and incremental parsing library used by editors like Neovim, Emacs, and Helix for syntax highlighting, code navigation, and structural editing.

## Features

- Complete coverage of Unison language syntax
- GLR grammar for accurate destructuring bind disambiguation
- Indentation-sensitive parsing borrowed from the Haskell tree-sitter grammar
- Syntax highlighting queries
- Multi-language bindings (Node.js, Python, Rust, Go, Swift, C)

## Installation

### Node.js

```bash
npm install tree-sitter-unison
```

### Python

```bash
pip install tree-sitter-unison
```

### Rust

Add to `Cargo.toml`:
```toml
[dependencies]
tree-sitter-unison = "0.0.1"
```

### Editor Integration

#### Neovim

Using [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter):

```lua
-- Add to your Tree-sitter parser configuration
local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
parser_config.unison = {
  install_info = {
    url = "https://github.com/fmguerreiro/tree-sitter-unison",
    files = {"src/parser.c", "src/scanner.c"},
    branch = "master",
  },
  filetype = "u",
}
```

#### Emacs

Requires Emacs 29+ with native tree-sitter support. Use [unison-ts-mode](https://github.com/fmguerreiro/unison-ts-mode):

```elisp
;; use-package + straight
(use-package unison-ts-mode
  :straight (:host github :repo "fmguerreiro/unison-ts-mode")
  :mode ("\\.u\\'" "\\.unison\\'"))

;; straight.el
(straight-use-package
  '(unison-ts-mode :type git :host github :repo "fmguerreiro/unison-ts-mode"))

;; Doom Emacs (packages.el)
(package! unison-ts-mode :recipe (:host github :repo "fmguerreiro/unison-ts-mode"))
```

The tree-sitter grammar will be installed automatically when you first open a `.u` file.

#### Helix

Add to your `languages.toml`:
```toml
[[language]]
name = "unison"
scope = "source.unison"
file-types = ["u"]
grammar = "unison"

[[grammar]]
name = "unison"
source = { git = "https://github.com/fmguerreiro/tree-sitter-unison", rev = "master" }
```

## Usage

### CLI

```bash
# Parse a Unison file
tree-sitter parse example.u

# Run tests
tree-sitter test

# Generate the parser
tree-sitter generate
```

### Node.js

```javascript
const Parser = require('tree-sitter');
const Unison = require('tree-sitter-unison');

const parser = new Parser();
parser.setLanguage(Unison);

const sourceCode = `
factorial : Nat -> Nat
factorial n = match n with
  0 -> 1
  n -> n * factorial (n - 1)
`;

const tree = parser.parse(sourceCode);
console.log(tree.rootNode.toString());
```

### Python

```python
from tree_sitter import Language, Parser

Language.build_library('build/unison.so', ['tree-sitter-unison'])
UNISON = Language('build/unison.so', 'unison')

parser = Parser()
parser.set_language(UNISON)

code = b"""
factorial : Nat -> Nat
factorial n = match n with
  0 -> 1
  n -> n * factorial (n - 1)
"""

tree = parser.parse(code)
print(tree.root_node.sexp())
```

## Development

### Prerequisites

- Node.js and npm
- A C compiler (for building the native parser)

### Setup

```bash
# Clone the repository
git clone https://github.com/fmguerreiro/tree-sitter-unison.git
cd tree-sitter-unison

# Install dependencies
npm install

# Generate the parser
npm start
```

### Testing

```bash
# Run all tests
npm test

# Parse examples from the Unison base library
npm run examples

# Parse a specific file with debug output
npm run scratch
```

### Development Workflow

```bash
# Watch for grammar changes and regenerate
npm run watch

# Run full CI pipeline locally
npm run ci
```

## Enhancements

This repository is based on [kylegoetz/tree-sitter-unison](https://github.com/kylegoetz/tree-sitter-unison) with the following enhancements:

- Support for bare type declarations
- Fix for doc blocks before use clauses at top level
- Destructuring bind disambiguation using GLR grammar
- Multi-parameter lambda support
- Character escape sequences with `=` prefix
- Tuple expressions in cases branch returns
- Use clauses as statements inside let blocks
- Comment handling before type signatures

## Project Structure

```
.
├── bindings/          # Language bindings
│   ├── c/
│   ├── go/
│   ├── node/
│   ├── python/
│   ├── rust/
│   └── swift/
├── grammar/           # Grammar modules
├── queries/           # Syntax highlighting queries
│   └── highlights.scm
├── src/               # Generated parser (C code)
├── test/              # Test suite
│   ├── corpus/        # Parser tests
│   └── highlight/     # Highlighting tests
└── grammar.js         # Main grammar definition
```

## Contributing

Contributions are welcome. Create an issue for bugs, feature requests, or improvements.

## License

MIT