# Beginner Coding Starter Pack

<p align="center">
  <img src="https://skillicons.dev/icons?i=vscode,git,github,python,js,nodejs,html,css,cpp" alt="Coding tools and languages" />
</p>

<p align="center">
  A friendly Windows setup guide for people starting with coding, GitHub, Python, C/C++, JavaScript, and web development.
</p>

<p align="center">
  <a href="https://code.visualstudio.com/"><img src="https://img.shields.io/badge/editor-VS%20Code-007ACC?logo=visualstudiocode&logoColor=white" alt="VS Code" /></a>
  <a href="https://git-scm.com/"><img src="https://img.shields.io/badge/version%20control-Git-F05032?logo=git&logoColor=white" alt="Git" /></a>
  <a href="https://github.com/"><img src="https://img.shields.io/badge/code-GitHub-181717?logo=github&logoColor=white" alt="GitHub" /></a>
  <a href="https://www.python.org/"><img src="https://img.shields.io/badge/language-Python-3776AB?logo=python&logoColor=white" alt="Python" /></a>
  <a href="https://nodejs.org/"><img src="https://img.shields.io/badge/runtime-Node.js-339933?logo=nodedotjs&logoColor=white" alt="Node.js" /></a>
  <a href="https://www.linkedin.com/in/revansh-sharma-836286347/"><img src="https://img.shields.io/badge/LinkedIn-Revansh%20Sharma-0A66C2?logo=linkedin&logoColor=white" alt="LinkedIn: Revansh Sharma" /></a>
</p>

## 🧭 Start here

New to coding? Follow this path:

- [ ] Install VS Code
- [ ] Install Git and create a GitHub account
- [ ] Choose Python, JavaScript, or C++ as your first language
- [ ] Install the matching tool and VS Code extensions
- [ ] Run an example from the [`examples/`](examples/) folder
- [ ] Create a small project of your own
- [ ] Push your project to GitHub

## 📑 Contents

- [What is in this pack?](#-what-is-in-this-pack)
- [Recommended setup order](#-recommended-setup-order)
- [VS Code extensions](#-vs-code-extensions)
- [Your first practice projects](#-your-first-practice-projects)
- [Learning roadmap](#-learning-roadmap)
- [Beginner glossary](#-beginner-glossary)
- [Common beginner mistakes](#-common-beginner-mistakes)
- [Put a project on GitHub](#️-put-a-project-on-github)
- [Useful learning sites](#-useful-learning-sites)

## 📦 What is in this pack?

This folder includes Windows installers and notes to help you begin:

| 📄 File | 🎯 What it is for |
| --- | --- |
| `VSCodeUserSetup-x64-1.105.1.exe` | 📝 Code editor |
| `Git-2.51.1-64-bit.exe` | 🌿 Git version control |
| `GitHubDesktopSetup-x64.exe` | 🖥️ A graphical way to use GitHub |
| `mingw-get-setup.exe` | ⚙️ C and C++ compiler setup |
| `node-v22.21.0-x64.msi` | 🟩 JavaScript runtime and npm |
| `python-manager-25.0 (1).msix` | 🐍 Python installation manager |
| `Instructions!.md` | 📘 Original Markdown notes |
| `Instructions!.txt` | 📃 Original plain-text notes |

> **Tip:** Installers are included for convenience, but check the official website for the newest version before installing. Never install software from a random mirror.

## 🔎 Before you start

- This guide is written for **64-bit Windows**.
- Keep the installers in this folder until setup is complete.
- Use an administrator account if Windows asks for permission.
- During installation, prefer the option that adds a tool to `PATH` when the installer provides one.
- Restart VS Code or Windows after installing tools if a command is not recognised.

## 🚀 Recommended setup order

### 1. 📝 Install VS Code

Install VS Code first. It is the editor where you will write and run most of your code.

- Included installer: `VSCodeUserSetup-x64-1.105.1.exe`
- Official download: [code.visualstudio.com](https://code.visualstudio.com/)

Open VS Code after installation and create a folder for your practice projects, such as `Documents\\Coding`.

### 2. 🌿 Install Git and choose how to use GitHub

Git saves the history of your code. GitHub stores projects online and makes it easier to share them.

- Included Git installer: `Git-2.51.1-64-bit.exe`
- Included optional desktop app: `GitHubDesktopSetup-x64.exe`
- Official Git download: [git-scm.com](https://git-scm.com/)
- GitHub: [github.com](https://github.com/)
- GitHub Desktop: [desktop.github.com](https://desktop.github.com/)

You can use Git from the VS Code terminal, GitHub Desktop, or both. Beginners often find GitHub Desktop easier at first, while the terminal is useful to learn gradually.

Check that Git works by opening a new VS Code terminal and running:

```powershell
git --version
```

### 3. 🐍 Install Python

Use the included Python Manager package or download Python from [python.org](https://www.python.org/downloads/).

After installing, check it in a new terminal:

```powershell
py --version
python --version
```

In VS Code, install the Python and Pylance extensions listed below. Then use **Python: Select Interpreter** from the Command Palette to choose the Python installation you want.

### 4. 🟩 Install Node.js for JavaScript

Node.js lets you run JavaScript outside a web browser and includes `npm`, the JavaScript package manager.

- Included installer: `node-v22.21.0-x64.msi`
- Official download: [nodejs.org](https://nodejs.org/)

Check the installation:

```powershell
node --version
npm --version
```

### 5. ⚙️ Install MinGW for C and C++

MinGW provides the compiler needed to build many C and C++ programs.

- Included installer: `mingw-get-setup.exe`
- Official MinGW-w64 information: [mingw-w64.org](https://www.mingw-w64.org/)

During setup, note the compiler's `bin` folder. It is usually a path similar to:

```text
C:\\mingw64\\bin
```

Add the real `bin` path on your computer to the Windows `Path` environment variable. Do not add only `C:\\` and do not copy the example path unless it matches your installation.

To check the compiler, open a new terminal and run:

```powershell
gcc --version
g++ --version
```

## 🧩 VS Code extensions

Open the Extensions view in VS Code with `Ctrl+Shift+X`, search for each extension, and install the publisher's verified result.

### 🛠️ Core tools

- [GitHub Copilot](https://marketplace.visualstudio.com/items?itemName=GitHub.copilot) - optional AI coding assistance; sign-in and plan access may be required
- [GitHub Copilot Chat](https://marketplace.visualstudio.com/items?itemName=GitHub.copilot-chat) - optional coding chat
- [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner) - run small programs quickly

### ⚙️ C and C++

- [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) - language support and debugging
- [C/C++ Extension Pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack) - a bundle of C/C++ tools
- [CMake Tools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools) - configure projects that use CMake
- [Makefile Tools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.makefile-tools) - optional support for Makefiles

### 🐍 Python

- [Python](https://marketplace.visualstudio.com/items?itemName=ms-python.python) - running, debugging, and environments
- [Pylance](https://marketplace.visualstudio.com/items?itemName=ms-python.vscode-pylance) - autocomplete and type checking
- [Python Debugger](https://marketplace.visualstudio.com/items?itemName=ms-python.debugpy) - Python debugging
- [Python Environments](https://marketplace.visualstudio.com/items?itemName=ms-python.vscode-python-envs) - manage Python environments

### 🌐 Web development

- [HTML CSS Support](https://marketplace.visualstudio.com/items?itemName=ecmel.vscode-html-css) - CSS class and id completion
- [HTML Snippets](https://marketplace.visualstudio.com/items?itemName=abusaidm.html-snippets) - common HTML snippets
- [JavaScript (ES6) code snippets](https://marketplace.visualstudio.com/items?itemName=xabikos.JavaScriptSnippets) - JavaScript shortcuts

### 🔧 Compiler support

- Search the VS Code Marketplace for `MSYS2`, `Cygwin`, or `MinGW` integrations and check the publisher before installing.

> Extensions can change publishers or availability. If a marketplace link does not open, search the exact extension name in VS Code and check its publisher before installing.

## 🧪 Your first practice projects

Start with one small file in a folder you can find easily:

```text
Coding/
  hello-python/
    hello.py
  hello-web/
    index.html
    style.css
    script.js
  hello-cpp/
    main.cpp
```

Try these commands from the project folder:

```powershell
# Python
py hello.py

# JavaScript
node script.js

# C++
g++ main.cpp -o main.exe
.\\main.exe
```

For HTML, open `index.html` in a browser or use a local preview extension in VS Code.

Working examples are available in [`examples/`](examples/):

- [`hello.py`](examples/hello.py) - Python
- [`hello.js`](examples/hello.js) - JavaScript
- [`index.html`](examples/index.html) - HTML and CSS
- [`hello.cpp`](examples/hello.cpp) - C++

## 🗺️ Learning roadmap

```text
Computer and terminal basics
      ↓
  Python or JavaScript
      ↓
    Git and GitHub
      ↓
    HTML and CSS
      ↓
    Small projects
      ↓
 Data structures and algorithms
```

Learn one language at a time. Build small things such as a calculator, quiz, to-do list, personal webpage, or file organiser before moving to a larger framework.

## 📖 Beginner glossary

| Term | Simple meaning |
| --- | --- |
| **Editor** | An app for writing code, such as VS Code. |
| **Terminal** | A text-based window where you run commands. |
| **Compiler** | A tool that turns C or C++ source code into a program. |
| **Runtime** | Software that runs a program, such as Node.js for JavaScript. |
| **Extension** | An add-on that gives VS Code more features. |
| **Repository** | A project folder tracked by Git. |
| **Commit** | A saved checkpoint in Git history. |
| **Push** | Upload local commits to a remote repository such as GitHub. |
| **PATH** | Windows locations where it searches for commands. |

## 🩹 Common beginner mistakes

- **The command is not recognised:** close and reopen the terminal after installation, then check `PATH`.
- **The wrong Python runs:** use **Python: Select Interpreter** in VS Code.
- **The file will not run:** check that its extension is correct, such as `.py`, `.js`, or `.cpp`.
- **The terminal is in the wrong folder:** use `cd` or open the project folder directly in VS Code.
- **A program does nothing:** add a small `print`, `console.log`, or output statement to check what runs.
- **Secrets are exposed:** never commit passwords, API keys, or private tokens. Add them to `.gitignore` or use environment variables.

## ☁️ Put a project on GitHub

1. Create an empty repository on [GitHub](https://github.com/new). Give it a name such as `hello-python`.
2. In VS Code, open the folder containing your project.
3. Open **Terminal > New Terminal**.
4. Run these commands, replacing the URL with your repository URL:

```powershell
git init
git add .
git commit -m "Initial project upload"
git branch -M main
git remote add origin https://github.com/USERNAME/REPOSITORY.git
git push -u origin main
```

You may be asked to sign in or authenticate. Do not paste passwords or access tokens into a repository, source file, or screenshot.

For a visual workflow, open GitHub Desktop, choose **Add an Existing Repository**, select the project folder, commit your changes, and publish the repository.

## 📚 Useful learning sites

- [GeeksforGeeks](https://www.geeksforgeeks.org/) - programming explanations and examples
- [W3Schools](https://www.w3schools.com/) - beginner-friendly web tutorials
- [Microsoft Learn](https://learn.microsoft.com/) - official courses, certifications, and badges
- [LeetCode](https://leetcode.com/) - coding practice problems
- [Google Skills](https://www.skills.google/) - Google courses and badges
- [Replit](https://replit.com/) - build and share projects in a browser

Use one main course at a time, then build a small project with what you learned. Searching is useful, but reading error messages and testing small changes is how the skill sticks.

## ⌨️ Handy Windows shortcuts

| Shortcut | Action |
| --- | --- |
| `Ctrl+C` | Copy |
| `Ctrl+V` | Paste |
| `Ctrl+X` | Cut |
| `Ctrl+Z` | Undo |
| `Ctrl+Y` | Redo |
| `Win+Shift+S` | Take a screen snip |
| `Win+,` | Temporarily peek at the desktop |
| `Ctrl+Shift+Esc` | Open Task Manager |
| `Win+D` | Show or hide the desktop |
| `Win+G` | Open Xbox Game Bar |
| `Win+.` | Open the emoji panel |
| `Win+V` | Open clipboard history |
| `Ctrl+Shift+P` | Open the VS Code Command Palette |
| `Ctrl+P` | Find and open a file in VS Code |
| ``Ctrl+` `` | Open or close the VS Code terminal |
| `F5` | Start debugging |
| `Shift+Alt+F` | Format the current document |
| `Ctrl+/` | Comment or uncomment a line |

## 🩹 Troubleshooting checklist

- **`command is not recognized`:** close and reopen the terminal after installing the tool. If it still fails, check the Windows `Path` variable.
- **VS Code runs the wrong Python:** use **Python: Select Interpreter** and choose the intended environment.
- **C or C++ will not compile:** confirm that the compiler's `bin` directory is in `Path`, then check `gcc --version`.
- **Git push asks for credentials:** sign in through GitHub Desktop or configure a supported GitHub authentication method. Do not commit secrets.
- **An extension behaves unexpectedly:** check its publisher, documentation, and recent reviews before changing project settings.

## 💬 A note from the original guide

This starter pack was prepared by **[Revansh Sharma](https://www.linkedin.com/in/revansh-sharma-836286347/), Founder @ ZeroTheory**.

The goal is simple: remove unnecessary gatekeeping, set up the tools, and start building.
