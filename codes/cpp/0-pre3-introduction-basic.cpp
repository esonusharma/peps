/*
Interpretter Compiler

Interpreted Languages

1. Java
- Compilation: Java code is first compiled into bytecode by the Java compiler (`javac`).
  - Source Code: `HelloWorld.java`
  - Compilation Command: `javac HelloWorld.java`
  - Output: `HelloWorld.class` (bytecode)
- Interpretation/Execution: The bytecode is executed by the Java Virtual Machine (JVM). The JVM interprets the bytecode or uses Just-In-Time (JIT) compilation to convert bytecode into native machine code.
  - Execution Command: `java HelloWorld`
  - Output: The program runs and displays the output.

2. JavaScript
- Interpretation: JavaScript code is interpreted directly by the JavaScript engine in a web browser or server environment.
  - Source Code: `script.js`
  - Execution: The JavaScript engine reads and executes the script line by line.
  - Execution Command: Embedded in HTML or executed in Node.js (`node script.js`)
  - Output: The script runs and produces output.

3. Python
- Compilation: Python code is compiled into bytecode by the Python interpreter.
  - Source Code: `hello.py`
  - Compilation Command: When run, Python compiles `hello.py` into bytecode (`.pyc` files in the `__pycache__` directory).
  - Output: Bytecode file `hello.pyc`
- Interpretation/Execution: The bytecode is interpreted by the Python Virtual Machine (PVM).
  - Execution Command: `python hello.py`
  - Output: The program runs and displays the output.

4. Julia
- Compilation: Julia code is compiled into LLVM intermediate representation (IR) and then into machine code.
  - Source Code: `hello.jl`
  - Compilation Command: Julia compiles the code just before execution, with no intermediate bytecode files.
  - Execution Command: `julia hello.jl`
  - Output: The program runs and displays the output.

5. MATLAB
- Compilation: MATLAB code is interpreted and compiled to an intermediate form when executed.
  - Source Code: `hello.m`
  - Execution Command: `matlab -batch "hello"`
  - Output: The script runs and produces the output in the MATLAB environment.

Compiled Languages

1. C
- Preprocessing: The preprocessor processes directives such as `#include` and `#define`.
  - Source Code: `hello.c`
  - Preprocessing Command: `gcc -E hello.c -o hello.i`
- Compilation: The preprocessed code is compiled into assembly code.
  - Compilation Command: `gcc -S hello.c -o hello.s`
- Assembling: The assembly code is converted into machine code (object code).
  - Assembling Command: `gcc -c hello.c -o hello.o`
- Linking: The object code is linked with libraries to create an executable file.
  - Linking Command: `gcc hello.o -o hello`
  - Output: Executable file `hello`
- Execution Command: `./hello`
- Output: The program runs and displays the output.

2. C++
- Preprocessing: Similar to C, the preprocessor handles directives.
  - Source Code: `hello.cpp`
  - Preprocessing Command: `g++ -E hello.cpp -o hello.i`
- Compilation: The preprocessed code is compiled into assembly code.
  - Compilation Command: `g++ -S hello.cpp -o hello.s`
- Assembling: The assembly code is converted into machine code.
  - Assembling Command: `g++ -c hello.cpp -o hello.o`
- Linking: The object code is linked with libraries to produce an executable.
  - Linking Command: `g++ hello.o -o hello`
  - Output: Executable file `hello`
- Execution Command: `./hello`
- Output: The program runs and displays the output.
*/
