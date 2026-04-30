# Data-Structures-Project-01

This project implements core linear data structures in C++ using separate header and source files. It covers singly linked lists, stacks, and queues with both array-based and linked-list-based implementations where required.

## Implemented Structures

- Singly Linked List
- Array-Based Stack
- Linked-List Stack
- Circular Array Queue
- Linked-List Queue

## Project Files

- `Node.h`  
  Shared node structure used by linked-list-based structures.

- `LinkedList.h` / `LinkedList.cpp`  
  Singly linked list interface and implementation.

- `Stack.h` / `Stack.cpp`  
  Array stack and linked-list stack interfaces and implementations.

- `Queue.h` / `Queue.cpp`  
  Circular array queue and linked-list queue interfaces and implementations.

- `main.cpp`  
  Driver program used to test all data structures.

## Required Compile Command

The assignment requires the project to compile with:

```bash
g++ main.cpp LinkedList.cpp Stack.cpp Queue.cpp -o dsa_test
```

Run the program with:

```bash
./dsa_test
```

On Windows, the executable may be named `dsa_test.exe`:

```bat
dsa_test.exe
```

## Linux

Install `g++` if it is not already available:

```bash
sudo apt update
sudo apt install g++
```

Compile:

```bash
g++ main.cpp LinkedList.cpp Stack.cpp Queue.cpp -o dsa_test
```

Run:

```bash
./dsa_test
```

## Windows

### Option 1: MinGW or MSYS2

Install a Windows `g++` toolchain such as MinGW-w64 or MSYS2, then make sure `g++` is available from the terminal:

```bat
g++ --version
```

Compile:

```bat
g++ main.cpp LinkedList.cpp Stack.cpp Queue.cpp -o dsa_test.exe
```

Run:

```bat
dsa_test.exe
```

### Option 2: Visual Studio 2022 Developer Command Prompt

Open "Developer Command Prompt for VS 2022" from the Start menu.

Compile with Microsoft C++:

```bat
cl /EHsc main.cpp LinkedList.cpp Stack.cpp Queue.cpp /Fe:dsa_test.exe
```

Run:

```bat
dsa_test.exe
```

## IDE Notes

### VS Code

Open the project folder in VS Code. If using the terminal inside VS Code, compile with the same `g++` command shown above.

If `g++` is not recognized on Windows, install MinGW-w64 or MSYS2 and add the compiler's `bin` directory to the system `PATH`.

### Visual Studio 2022

The project can be opened as a folder, or the source files can be added to an empty C++ console project. Make sure these files are included:

- `main.cpp`
- `LinkedList.cpp`
- `Stack.cpp`
- `Queue.cpp`
- `Node.h`
- `LinkedList.h`
- `Stack.h`
- `Queue.h`

### CLion

Open the project folder and configure the compiler toolchain if prompted. If CLion asks for a build configuration, create one that compiles:

```bash
main.cpp LinkedList.cpp Stack.cpp Queue.cpp
```

## Common Issues

If the compiler says a header file cannot be found, make sure all source and header files are in the same project folder.

If Windows says `g++` is not recognized, the compiler is either not installed or not added to `PATH`.

If the program compiles but does not run from PowerShell, run it with:

```powershell
.\dsa_test.exe
```

If Visual Studio reports errors related to unsafe functions or precompiled headers, create a plain empty C++ console project and disable precompiled headers for this assignment.
