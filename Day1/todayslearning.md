### Notes on Software, Hardware, and System Programming

---

#### **Types of Software**
1. **Software:**
   - Software is a collection of programs, data, or instructions that tell the hardware how to function. 
   - It can be classified into:
     - **Application Software**: Programs designed for end-users (e.g., browsers, word processors).
     - **System Software**: Programs that manage and control hardware (e.g., operating systems, device drivers, firmware).

2. **Hardware:**
   - The physical components of a computer system (e.g., CPU, memory, storage devices).

3. **Firmware:**
   - Specialized software embedded in hardware that controls its specific functions. It is stored in non-volatile memory like ROM or flash.

---

#### **System Software: Operating System**
- **Operating System (OS):** System software that manages hardware and software resources and provides services to application software.
  - **Examples of Operating Systems:**
    - **Unix**: A multiuser, multitasking OS.
    - **Windows**: Popular commercial OS for personal and enterprise computing.
    - **Linux**: Open-source Unix-like OS.
    - **Mac OS**: OS developed by Apple for Mac computers.
    - **Android**: Mobile OS based on Linux.

---

#### **Unix Commands & Linux Shell**
- **Unix Commands:**
  - Unix commands are primarily written in the **C programming language**.
  - Example commands in Linux/Unix:
    - `ls`: Lists directory contents.
    - `mkdir`: Creates directories.
    - `cd`: Changes directory.
    - `sudo`: Executes commands with superuser privileges.
    - `getch`: Reads a character from input.
    - `whoami`: Displays the current user name.
    - `pwd`: Prints working directory.

- **Linux Shell:**
  - The command-line interface used for interacting with the Linux OS. It allows users to execute commands, run scripts, and manage the system.

---

#### **C Programming in Systems Programming**
- **C Programming Language:**
  - Widely used for system-level programming.
  - Essential for building embedded systems, firmware, device drivers, operating systems, application software, and development tools.
  - C is a powerful language for low-level memory management and direct hardware manipulation.

- **Use Cases for C Programming:**
  - **Embedded Systems**: Programs that run on microcontrollers and embedded hardware.
  - **Firmware**: Software that operates low-level hardware functions.
  - **Device Drivers**: Software that allows OS to communicate with hardware peripherals.
  - **Operating Systems**: C is used to build system-level code for managing resources and controlling hardware.
  - **Application Software**: Includes both desktop (e.g., applications like Microsoft Word) and distributed software (e.g., web apps).
  - **Development Tools**: C is also used to develop essential tools like compilers, debuggers, linkers, and loaders.
  - **Integrated Development Environments (IDEs)**: For example, **Visual Studio** and **Eclipse** use C or similar languages for system-level operations.

---

#### **C Programming Culture**
- **Text Editors:**
  - C programs can be written in any text editor (e.g., **VS Code**, **Sublime Text**, **Vim**).
  
- **File Extensions:**
  - C source code files are saved with the `.c` extension.
  - Header files used for declarations (functions, macros, etc.) are saved with the `.h` extension.
  
- **Main Function:**
  - Every C program must have an entry point function `main()`. The program starts execution from this function.

- **Inbuilt Functions:**
  - C provides various inbuilt functions (e.g., `printf()`, `scanf()`) for input/output operations.
  - These functions are defined in standard header files like **stdio.h**.

- **Header Files:**
  - Header files (e.g., **stdio.h**) contain declarations for standard functions and constants.
  - They are included in the program using the preprocessor directive `#include`.

- **Constants and Macros:**
  - Constants are often defined using `#define`. For example: `#define PI 3.14`.
  
- **Variables:**
  - Variables hold data in memory. For example: `int count = 56;`.
  - Variables can be **local** (inside functions) or **global** (accessible throughout the program).
  - Variables must be initialized before use to avoid undefined behavior.

---

#### **Development Process of a C Program**
1. **Write the Code:**
   - Use a text editor or IDE (e.g., **VS Code**) to write the C source code and header files.
   
2. **File Organization:**
   - C source code is generally kept in `.c` files, and related declarations (such as function prototypes) are placed in `.h` files.

---

#### **Build Process of a C Program**
1. **Compilation:**
   - The **compiler** translates the `.c` file (source code) into an object file (`.obj` or `.o`).
   
2. **Linking:**
   - The **linker** combines the object file with other required files (e.g., libraries) to produce the executable (`.exe`) file.

---

#### **Running the Executable**
1. **Executable File:**
   - The `.exe` file is run by the **OS**, which creates a **process**.
   
2. **Process and Threads:**
   - The process consists of one or more **threads** that execute instructions on the **CPU** (Central Processing Unit).

---

#### **C Programming Workflow Overview**
1. **Write Code**: Use a text editor or IDE.
2. **Compile**: Convert C source code into an object file.
3. **Link**: Combine object files to create an executable.
4. **Execute**: Run the program on the OS, which manages the execution via processes and threads.

