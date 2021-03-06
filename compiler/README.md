# C compiler with antlr4/c++

## Source Files
- `ifcc.g4` contains the grammar in antlr4 format
- `main.cpp` contains the C++ code to call the antlr4-generated parser on the  file name provided in the command line.
- `visitor.h` is a visitor of the parse tree that produces an assembly-language output
- `error` Contains the class that handle the errors found during the compilation.
- `intermediate-representation` Contains the class that form the data structure of the IR between the AST generated by Antlr4 and the final assembly code. The IR is composed of  CFG, BasicBlock and IRInstr (see, theory for more explanation).
- `symbol-table` Contains the class that represent the symbol table. The symbol-table is a data structure that contains the variables declared in the C program.

## Compilation scripts
- `Makefile` can be used to compile the parser. Libraries and include directories default to the values that work in the IF machines of rooms 208 and 219.
- `compile_ubuntu.sh` is a script that compiles the project in a different environment (a ubuntu where the antlr runtime had to be compiled manually).
- `compile_docker.sh` is a script to use if you are desperate. It compiles the project in a docker environment where antlr4 and its dependencies are properly installed.

## Docker access
If you are on the docker environment, you can access the container's shell using `wrapper.sh`.
