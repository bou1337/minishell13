# 🐚 Minishell

## 📌 Project Overview

**Minishell** is a **42 School** project that involves creating a simple shell, similar to Bash. The objective is to gain an in-depth understanding of command execution, process management, and Unix system calls while adhering to strict project constraints.

This project enhances your skills in **parsing**, **file descriptors**, **signals**, and **process control**.

---

## 🚀 Features

✅ Handles basic shell commands and built-ins  
✅ Supports command execution with absolute and relative paths  
✅ Implements pipes (`|`) and redirections (`>`, `>>`, `<`)  
✅ Handles environment variables (`$VAR`)  
✅ Signal handling (`Ctrl+C`, `Ctrl+D`, `Ctrl+\`)  
✅ Error handling for invalid commands and syntax  

---

## 🔧 Installation & Usage

### 1️⃣ Clone the Repository
```sh
git clone https://github.com/bou1337/minishell13.git
cd minishell
```

### 2️⃣ Compile the Program
```sh
make
```

### 3️⃣ Run Minishell
```sh
./minishell
```

---

## 🔍 How Minishell Works

### 1️⃣ Command Execution
Minishell executes commands by:
1. Parsing the user input.
2. Searching for executables in `$PATH`.
3. Creating child processes to execute external commands.
4. Handling built-in commands internally.

### 2️⃣ Built-in Commands
Minishell implements several built-in shell commands:
- `echo` – Print arguments to the terminal.
- `cd` – Change directory.
- `pwd` – Print the current directory.
- `export` – Set environment variables.
- `unset` – Remove environment variables.
- `env` – Display environment variables.
- `exit` – Exit the shell.

### 3️⃣ Redirections & Pipes
- `>`  – Redirect output to a file.
- `>>` – Append output to a file.
- `<`  – Read input from a file.
- `|`  – Pipe output of one command as input to another.

### 4️⃣ Signal Handling
- `Ctrl+C` – Interrupt current command.
- `Ctrl+D` – Exit shell.
- `Ctrl+\` – Quit signal handling.

---

## 🔗 Resources & References
- **[Unix Shell Introduction](https://www.gnu.org/software/bash/manual/bash.html)**
- **[Process Management in Unix](https://man7.org/linux/man-pages/man2/execve.2.html)**
- **[42 Project Subject](https://github.com/bou1337/minishell)**

