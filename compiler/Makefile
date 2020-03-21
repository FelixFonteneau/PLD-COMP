OUTPUT=output
GENERATED=antlr4-generated
GRAMMAR=ifcc.g4
MODEL=model

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
	$(CC) $(CCARGS) $(MODEL)/variable.cpp -o $(OUTPUT)/variable.o
	$(CC) $(CCARGS) $(MODEL)/bloc.cpp -o $(OUTPUT)/bloc.o
	$(CC) $(CCARGS) $(MODEL)/expr.cpp -o $(OUTPUT)/expr.o
	$(CC) $(CCARGS) visitor.cpp -o $(OUTPUT)/visitor.o
	$(CC) $(LDARGS) $(OUTPUT)/main.o $(OUTPUT)/ifccBaseVisitor.o $(OUTPUT)/ifccLexer.o $(OUTPUT)/ifccVisitor.o $(OUTPUT)/ifccParser.o $(OUTPUT)/variable.o $(OUTPUT)/bloc.o $(OUTPUT)/expr.o $(OUTPUT)/visitor.o $(ANTLR4_LIBDIR)/libantlr4-runtime.a -o ifcc

antlr: $(GRAMMAR)
	$(ANTLR4_BINDIR)/antlr4 -visitor -no-listener -Dlanguage=Cpp -o $(GENERATED) $(GRAMMAR)

dirs:
	mkdir -p $(OUTPUT)
	mkdir -p $(GENERATED)

clean:
	rm -rf $(OUTPUT)
	rm -rf $(GENERATED)
