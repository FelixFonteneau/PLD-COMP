// Generated from ifcc.g4 by ANTLR 4.7.2

#pragma once

#include <vector>

#include "antlr4-runtime.h"
#include "antlr4-generated/ifccBaseVisitor.h"
#include "symbol-table/symbolTable.h"
#include "intermediate-representation/IR.h"

using namespace std;

/**
 * This class provides an empty implementation of ifccVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  Visitor : public ifccBaseVisitor {
private:
  vector<*CFG> cfgs;
public:

  Visitor(vector<*CFG> cfgs);

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
};
