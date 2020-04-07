OUTPUT=output
GENERATED=antlr4-generated
GRAMMAR=ifcc.g4
SBLTBL=symbol-table
ERROR=error
IR=intermediate-representation

#override with your local installation
ANTLR4_BINDIR=/shares/public/tp/ANTLR4-CPP/bin
ANTLR4_INCDIR=/shares/public/tp/ANTLR4-CPP/antlr4-runtime
ANTLR4_LIBDIR=/shares/public/tp/ANTLR4-CPP/lib

CC=clang++
CCARGS=-g -c -I $(ANTLR4_INCDIR) -I $(GENERATED) -std=c++11 -Wno-defaulted-function-deleted -Wno-unknown-warning-option
LDARGS=-g -fno-exceptions

all: ifcc

ifcc: dirs antlr  main.cpp visitor.cpp visitor.h
	$(CC) $(CCARGS) main.cpp  -o $(OUTPUT)/main.o
	$(CC) $(CCARGS) $(GENERATED)/ifccBaseVisitor.cpp -o $(OUTPUT)/ifccBaseVisitor.o
	$(CC) $(CCARGS) $(GENERATED)/ifccLexer.cpp -o $(OUTPUT)/ifccLexer.o
	$(CC) $(CCARGS) $(GENERATED)/ifccVisitor.cpp -o $(OUTPUT)/ifccVisitor.o
	$(CC) $(CCARGS) $(GENERATED)/ifccParser.cpp -o $(OUTPUT)/ifccParser.o
	$(CC) $(CCARGS) $(SBLTBL)/variable.cpp -o $(OUTPUT)/variable.o
	$(CC) $(CCARGS) $(SBLTBL)/symbolTable.cpp -o $(OUTPUT)/symbolTable.o
	$(CC) $(CCARGS) $(ERROR)/error.cpp -o $(OUTPUT)/error.o
	$(CC) $(CCARGS) $(ERROR)/syntaxErrorListener.cpp -o $(OUTPUT)/syntaxErrorListener.o
	$(CC) $(CCARGS) $(ERROR)/syntaxError.cpp -o $(OUTPUT)/syntaxError.o
	$(CC) $(CCARGS) $(ERROR)/semanticErrorListener.cpp -o $(OUTPUT)/semanticErrorListener.o

	$(CC) $(CCARGS) $(IR)/BasicBlock.cpp -o $(OUTPUT)/BasicBlock.o
	$(CC) $(CCARGS) $(IR)/CFG.cpp -o $(OUTPUT)/CFG.o
	$(CC) $(CCARGS) $(IR)/IRInstr.cpp -o $(OUTPUT)/IRInstr.o
	$(CC) $(CCARGS) visitor.cpp -o $(OUTPUT)/visitor.o
	$(CC) $(LDARGS) $(OUTPUT)/main.o $(OUTPUT)/ifccBaseVisitor.o $(OUTPUT)/ifccLexer.o $(OUTPUT)/ifccVisitor.o $(OUTPUT)/ifccParser.o $(OUTPUT)/variable.o $(OUTPUT)/symbolTable.o $(OUTPUT)/visitor.o $(OUTPUT)/IRInstr.o $(OUTPUT)/BasicBlock.o $(OUTPUT)/CFG.o $(OUTPUT)/error.o $(OUTPUT)/semanticErrorListener.o $(OUTPUT)/syntaxErrorListener.o $(OUTPUT)/syntaxError.o $(ANTLR4_LIBDIR)/libantlr4-runtime.a -o ifcc

antlr: $(GRAMMAR)
	$(ANTLR4_BINDIR)/antlr4 -visitor -no-listener -Dlanguage=Cpp -o $(GENERATED) $(GRAMMAR)

dirs:
	mkdir -p $(OUTPUT)
	mkdir -p $(GENERATED)

clean:
	rm -rf $(OUTPUT)
	rm -rf $(GENERATED)
	rm ifcc
