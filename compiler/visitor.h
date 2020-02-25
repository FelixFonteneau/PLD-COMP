
// Generated from ifcc.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "antlr4-generated/ifccBaseVisitor.h"
#include <map>

using namespace std;
/**
 * This class provides an empty implementation of ifccVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  Visitor : public ifccBaseVisitor {
private:
  unordered_map<string, int> integerVariablesTable; // <nom de la variable, adresse mémoire>
public:

  virtual antlrcpp::Any visitAxiom(ifccParser::AxiomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProg(ifccParser::ProgContext *ctx) override {

     cout<<".text \n" //"# declaration of ’text’ section (which means ’program’)" // entry point to the ELF linker or loader.
		 		".global main \n"
		 		"main: \n"
 		    "  # prologue\n"
		 		"  pushq %rbp\n"  //save %rbp on the stack
		 		"  movq %rsp, %rbp\n"  //define %rbp for the current function

		 		"\n  # body \n";

	  visitChildren(ctx);

	  cout<<
 	      "\n  # epilogue\n"
		 		"  popq %rbp\n"  //restore %rbp from the stack
		 		"  ret\n";	 //return to the caller (here the shell)

     return 0;
  }

  virtual antlrcpp::Any visitAff(ifccParser::AffContext *ctx) override {
    int retval = stoi(ctx->CONST()->getText());
    string varialbeName = ctx->VAR()->getText();
    int memoryAdress = 4;
    cout<<" movl $"<<retval<<", -" << memoryAdress << "(%rbp)" << endl;
    integerVariablesTable[varialbeName] = memoryAdress;
	  return 0;
}

  virtual antlrcpp::Any visitRet(ifccParser::RetContext *ctx) override {
    string variable = ctx->VAR()->getText();
    unordered_map<string, int>:: iterator itr = integerVariablesTable.find(variable);
	  cout<<"  movl -" << itr->second <<"(%rbp), %eax" << endl;
    return 0;
  }

};
