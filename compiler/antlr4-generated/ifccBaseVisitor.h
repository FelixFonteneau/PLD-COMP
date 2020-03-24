
// Generated from ifcc.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ifccVisitor.h"


/**
 * This class provides an empty implementation of ifccVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ifccBaseVisitor : public ifccVisitor {
public:

  virtual antlrcpp::Any visitAxiom(ifccParser::AxiomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBloc(ifccParser::BlocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProg(ifccParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatements(ifccParser::StatementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementDeclaration(ifccParser::StatementDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementAffectation(ifccParser::StatementAffectationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementReturn(ifccParser::StatementReturnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParExpr(ifccParser::ParExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarExpr(ifccParser::VarExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNotExpr(ifccParser::NotExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiplicationExpr(ifccParser::MultiplicationExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdditiveExpr(ifccParser::AdditiveExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPowExpr(ifccParser::PowExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMinusExpr(ifccParser::MinusExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstExpr(ifccParser::ConstExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelationalTestExpr(ifccParser::RelationalTestExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqualityTestExpr(ifccParser::EqualityTestExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAndTestExpr(ifccParser::AndTestExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrTestExpr(ifccParser::OrTestExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParTestExpr(ifccParser::ParTestExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDec(ifccParser::DecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffDecConst(ifccParser::AffDecConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffDecVar(ifccParser::AffDecVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffDecExpr(ifccParser::AffDecExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffVar(ifccParser::AffVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffConst(ifccParser::AffConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffExpr(ifccParser::AffExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRetVar(ifccParser::RetVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRetConst(ifccParser::RetConstContext *ctx) override {
    return visitChildren(ctx);
  }


};

