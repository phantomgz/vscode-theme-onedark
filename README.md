# Atom One Dark C/C++ Theme

[![Preview in vscode.dev](https://img.shields.io/badge/preview%20in-vscode.dev-brightgreen)](https://vscode.dev/theme/phantomgz.vscode-theme-onedark-c) 
![Visual Studio Marketplace Version (including pre-releases)](https://img.shields.io/visual-studio-marketplace/v/phantomgz.vscode-theme-onedark-c)
![Visual Studio Marketplace Downloads](https://img.shields.io/visual-studio-marketplace/d/phantomgz.vscode-theme-onedark-c)
![Visual Studio Marketplace Rating](https://img.shields.io/visual-studio-marketplace/r/phantomgz.vscode-theme-onedark-c)

VSCode Theme based on Atom's [One Dark](https://github.com/atom/one-dark-syntax) theme. Optimized for C/C++ development with full Workbench theming. Supports both **TextMate** (ms-vscode.cpptools) and **clangd** semantic highlighting.

![](https://raw.githubusercontent.com/phantomgz/vscode-theme-onedark/master/screenshots/preview.png)

## Sponsors

[Sponsor](https://github.com/sponsors/phantomgz) this project on GitHub.

## Installing

This extension is available for free in the [Visual Studio Code Marketplace](https://marketplace.visualstudio.com/items/phantomgz.vscode-theme-onedark-c)  

## What's new?

See the [Changelog](CHANGELOG.md) for details on the latest updates.

## clangd Semantic Highlighting

This theme has built-in support for **clangd semantic tokens**. When using the [clangd extension](https://marketplace.visualstudio.com/items?itemName=llvm-vs-code-extensions.vscode-clangd), the following C++ elements are semantically highlighted:

| Element | Color | Style |
|---------|-------|-------|
| Namespace / Class / Struct / Enum | `#32cd32` (green) | — |
| Function / Method | `#db7312` (orange) | — |
| Local Variable | `#F0F727` (yellow) | — |
| Parameter | `#F0F727` (yellow) | underline |
| Member Variable (property) | `#fffb00` | — |
| Global Variable | `#df27f7` (purple) | — |
| Static Variable | `#9CDCFE` | — |
| Static Function / Method | `#db7312` (orange) | underline |
| Virtual / Abstract Method | `#db7312` (orange) | italic |
| Enum Member | `#00dddd` (cyan) | — |
| Macro | `#0088ff` (blue) | — |
| Readonly / const | `#00dddd` (cyan) | — |
| Deprecated symbol | — | strikethrough |

> **Note:** TextMate rules are fully preserved as a fallback. If you use ms-vscode.cpptools instead of clangd, the theme still works correctly.

## Feedback & Issues

If you find any color inconsistencies or have suggestions for C/C++ semantic highlighting, please [open an issue](https://github.com/phantomgz/vscode-theme-onedark/issues).

## Customization

If you are using VSCode 1.12+ versions you can customize the colors to your liking, overriding the ones provided by this theme. More info [here](https://code.visualstudio.com/docs/getstarted/theme-color-reference).

### Semantic Token Overrides

To override the semantic token colors in your personal `settings.json`:

```json
"editor.semanticTokenColorCustomizations": {
    "[Atom One Dark C/C++]": {
        "rules": {
            "class": "#4EC9B0",
            "variable.static": "#D7BA7D",
            "method.virtual": { "fontStyle": "italic" }
        }
    }
}
```

Use **"Developer: Inspect Editor Tokens and Scopes"** (Ctrl+Shift+P) to see the semantic token type and modifiers for any symbol in your code.

### Custom Font

The original One Dark theme does not use a custom font, for that reason I don't supply a custom font either, but  you might be used to see screenshots of the One Dark theme using the [Fira Mono](https://github.com/mozilla/Fira) font. You can easily [customize your settings](https://code.visualstudio.com/docs/getstarted/settings) to use it.  
If you download and install the font in your system, you can add this option to have a custom font:

```json
{
    "editor.fontFamily": "YOUR FONT, Menlo, Monaco, 'Courier New', monospace"
}
```

## Credits

[Atom](https://github.com/atom)