// Generated from ifcc.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "antlr4-generated/ifccBaseVisitor.h"
#include "model/bloc.h"

using namespace std;

/**
 * This class provides an empty implementation of ifccVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class Visitor : public ifccBaseVisitor {

  Visitor();

  virtual antlrcpp::Any visitAxiom(ifccParser::AxiomContext *ctx) override;

  virtual antlrcpp::Any visitProg(ifccParser::ProgContext *ctx) override ;

  virtual antlrcpp::Any visitDec(ifccParser::DecContext *ctx) override ;

  virtual antlrcpp::Any visitAffDecConst(ifccParser::AffDecConstContext *ctx) override ;

  virtual antlrcpp::Any visitAffDecVar(ifccParser::AffDecVarContext *ctx) override ;

  virtual antlrcpp::Any visitAffDecExpr(ifccParser::AffDecExprContext *ctx) override ;

  virtual antlrcpp::Any visitAffVar(ifccParser::AffVarContext *ctx) override ;

  virtual antlrcpp::Any visitAffConst(ifccParser::AffConstContext *ctx) override ;

  virtual antlrcpp::Any visitAffExpr(ifccParser::AffExprContext *ctx) override ;

  virtual antlrcpp::Any visitIfNoElse(ifccParser::IfNoElseContext *ctx) override;

  virtual antlrcpp::Any visitIfWithElse(ifccParser::IfWithElseContext *ctx) override;

  virtual antlrcpp::Any visitIfElseIf(ifccParser::IfElseIfContext *ctx) override;

  virtual antlrcpp::Any visitRelationalTestExpr(ifccParser::RelationalTestExprContext *ctx) override;

  virtual antlrcpp::Any visitEqualityTestExpr(ifccParser::EqualityTestExprContext *ctx) override;

  virtual antlrcpp::Any visitParTestExpr(ifccParser::ParTestExprContext *ctx) override;

  virtual antlrcpp::Any visitConstExpr(ifccParser::ConstExprContext *ctx) override ;

  virtual antlrcpp::Any visitVarExpr(ifccParser::VarExprContext *ctx) override ;

  virtual antlrcpp::Any visitAdditiveExpr(ifccParser::AdditiveExprContext *ctx) override ;

  virtual antlrcpp::Any visitParExpr(ifccParser::ParExprContext *ctx) override ;

  virtual antlrcpp::Any visitRetVar(ifccParser::RetVarContext *ctx) override ;

  virtual antlrcpp::Any visitRetConst(ifccParser::RetConstContext *ctx) override ;

/*
  virtual antlrcpp::Any visitAff(ifccParser::AffContext *ctx) override {
    int retval = stoi(ctx->CONST()->getText());
    string varialbeName = ctx->VAR()->getText();
    if( integerVariablesTable.find(varialbeName) != integerVariablesTable.end()){
      // if the variable name already exist, we throw an error.
    }

    int memoryAdress = 4;
    cout<<" movl $"<<retval<<", -" << memoryAdress << "(%rbp)" << endl;
    integerVariablesTable[varialbeName] = memoryAdress;
	  return 0;
}

  virtual antlrcpp::Any visitRet(ifccParser::RetContext *ctx) override {
    string variable = ctx->VAR()->getText();
    auto itr = integerVariablesTable.find(variable);
	  cout<<"  movl -" << itr->second <<"(%rbp), %eax" << endl;
    return 0;
  }
*/

private:
  int addressIterator;
  Bloc blocPrincipal;
  int labelcounter;

  struct reg {
    string name;
    bool used;
  } eax, ebx, ecx, edx, edi, esi, ebp, esp, eip;

  reg registers[9];
  reg* currentRegister;

};
