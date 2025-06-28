# C Projects Roadmap

All projects are categorized by difficulty and application area. Each entry includes a brief description and key technologies used. A table below tracks progress with **Status** and **Date** columns.

---

## 📦 Beginner Level  
_Focus: language basics, data types, input/output_

| Project | Description | Key Technologies | Status | Statrt Date |
|--------|-------------|------------------|--------|------|
| CLI Calculator | Perform arithmetic operations | `stdio.h`, `switch-case` | ☐ | 28.06.2025 |
| Mini Text Editor | Input and edit strings | Buffers, strings, `fgets()` | ☐ | |
| Student Manager | Store and search student records | `struct`, arrays, sorting | ☐ | |
| File Logger | Write logs to a file | `FILE*`, `fprintf()`, `fopen()` | ☐ | |
| Unit Converter | Convert temperatures, length, etc. | `float`, `scanf()` | ☐ | |

---

## ⚙️ Intermediate Level  
_Focus: data structures, file system, basic logic_

| Project | Description | Key Technologies | Status | Date |
|--------|-------------|------------------|--------|------|
| Text File Database | CRUD operations on entities | `fopen`, `fread`, `fwrite`, `struct` | ☐ | |
| Queue Simulator | Priority queue simulation | `struct`, dynamic memory | ☐ | |
| Command Interpreter | CLI command parser | `strtok`, loops, logic | ☐ | |
| Snake Game (Terminal) | Terminal-based Snake game | Timers, pseudographics | ☐ | |
| Text Search (Grep-lite) | Text pattern matching | `regex.h`, `strcmp` | ☐ | |

---

## 🧠 Advanced Level  
_Focus: algorithms, memory, system-level logic_

| Project | Description | Key Technologies | Status | Date |
|--------|-------------|------------------|--------|------|
| Custom malloc() | Manual memory allocator | `sbrk()`, blocks, fragmentation | ☐ | |
| Unix Tools Clone (ls/cp/cat) | Implement basic Unix commands | `dirent.h`, `stat()`, `read()` | ☐ | |
| Process Manager | Create and terminate processes | `fork()`, `exec()`, `wait()` | ☐ | |
| Mini HTTP Server | Handle HTTP 1.0 requests | `socket()`, `bind()`, `recv()`/`send()` | ☐ | |
| CLI Git Repo (mini-git) | File and version management | SHA1, tree structures | ☐ | |

---

## 📡 System / Embedded Projects  
_Focus: low-level hardware, system interaction_

| Project | Description | Key Technologies | Status | Date |
|--------|-------------|------------------|--------|------|
| TCP Stack Simulator | Packet handling, TCP states | FSM, buffers | ☐ | |
| Process/Memory Monitor | Read from `/proc` | `open()`, parsing | ☐ | |
| UART Communication | Microcontroller serial I/O | POSIX, byte buffers | ☐ | |
| RTOS Task Scheduler | Priority-based scheduling | `setjmp()`, `longjmp()` | ☐ | |
| I2C Sensor Interface | I2C protocol communication | I2C protocol, registers | ☐ | |

---

## Project Selection by Goal

| Goal | Recommended Projects |
|------|----------------------|
| Learn C syntax | CLI Calculator, Student Manager |
| Understand memory & pointers | Custom malloc(), Queue Simulator |
| Work with files & system | cp/cat, Text File Database, File Logger |
| Train system thinking | HTTP Server, Task Scheduler, TCP Stack |
| Interview prep | Command Interpreter, Snake Game, Grep-lite |