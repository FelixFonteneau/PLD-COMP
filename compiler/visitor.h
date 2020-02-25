
// Generated from ifcc.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "antlr4-generated/ifccBaseVisitor.h"


/**
 * This class provides an empty implementation of ifccVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  Visitor : public ifccBaseVisitor {
public:

  virtual antlrcpp::Any visitAxiom(ifccParser::AxiomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProg(ifccParser::ProgContext *ctx) override {

     std::cout<<".text \n" "# declaration of ’text’ section (which means ’program’) # entry point to the ELF linker or loader."
		 		".global main \n"
		 		"main: \n"
		 		"# prologue \n"
		 		"pushq %rbp"  "# save %rbp on the stack \n"
		 		"movq %rsp, %rbp"  "# define %rbp for the current function \n"
		 
		 		"# body \n";
	  
	  visitChildren(ctx);
	  
	  std::cout<<
		 
		 		"# epilogue \n"
		 		"popq %rbp"  "# restore %rbp from the stack \n"
		 		"ret"		"# return to the caller (here the shell) \n";

     return 0;
  }

  virtual antlrcpp::Any visitAff(ifccParser::AffContext *ctx) override {
     int retval = stoi(ctx->CONST()->getText());
     std::cout<<"movl $"<<retval<<", -4(%rbp)";
	  
	  return 0;
}
	
  virtual antlrcpp::Any visitRet(ifccParser::RetContext *ctx) override {
	  int retval = stoi(ctx->VAR()->getText());
	  std::cout<<"movl -4(%rbp), %eax";
    return 0;
  }

};

