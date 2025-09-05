# 🖥️ C/C++ Setup Guide (Windows + VS Code)

This guide will help you set up and run C/C++ programs in VS Code on Windows.

---

## 🔹 Step 1: Install MinGW-w64 (Compiler)

1. Download: [MinGW-w64](https://sourceforge.net/projects/mingw-w64/)
2. During installation, make sure to select **gcc** and **g++**.
3. Example install path: `C:\mingw64\bin`

### ➡️ Add to PATH

- Open **Environment Variables** → Edit `Path` → Add `C:\mingw64\bin`
- Test in terminal:
  ```bash
  gcc --version
  ```

## 🔹 Step 2: Install VS Code Extensions

### 1. C/C++ (by Microsoft)

1. Open VS Code
2. Go to **Extensions** (or press `Ctrl+Shift+X`)
3. Search for **C/C++** (Publisher: Microsoft)
4. Click **Install** ✅

**Features:**

- IntelliSense (auto-complete, suggestions, function info)
- Syntax highlighting
- Debugging support

---

### 2. Code Runner (by Jun Han)

1. Open VS Code
2. Go to **Extensions** → search **Code Runner**
3. Click **Install** ✅

**Features:**

- Run C/C++ code quickly without setting up `tasks.json` or `launch.json`
- Shortcut to run code: `Ctrl+Alt+N`
- Shortcut to stop code: `Ctrl+Alt+M`
