
// Generated from ifcc.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ifccParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ifccParser.
 */
class  ifccVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ifccParser.
   */
    virtual antlrcpp::Any visitAxiom(ifccParser::AxiomContext *context) = 0;

    virtual antlrcpp::Any visitBloc(ifccParser::BlocContext *context) = 0;

    virtual antlrcpp::Any visitProg(ifccParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitStatements(ifccParser::StatementsContext *context) = 0;

    virtual antlrcpp::Any visitStatementDeclaration(ifccParser::StatementDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStatementAffectation(ifccParser::StatementAffectationContext *context) = 0;

    virtual antlrcpp::Any visitStatementReturn(ifccParser::StatementReturnContext *context) = 0;

    virtual antlrcpp::Any visitBoucleIf(ifccParser::BoucleIfContext *context) = 0;

    virtual antlrcpp::Any visitParExpr(ifccParser::ParExprContext *context) = 0;

    virtual antlrcpp::Any visitVarExpr(ifccParser::VarExprContext *context) = 0;

    virtual antlrcpp::Any visitNotExpr(ifccParser::NotExprContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicationExpr(ifccParser::MultiplicationExprContext *context) = 0;

    virtual antlrcpp::Any visitAdditiveExpr(ifccParser::AdditiveExprContext *context) = 0;

    virtual antlrcpp::Any visitPowExpr(ifccParser::PowExprContext *context) = 0;

    virtual antlrcpp::Any visitMinusExpr(ifccParser::MinusExprContext *context) = 0;

    virtual antlrcpp::Any visitConstExpr(ifccParser::ConstExprContext *context) = 0;

    virtual antlrcpp::Any visitRelationalTestExpr(ifccParser::RelationalTestExprContext *context) = 0;

    virtual antlrcpp::Any visitEqualityTestExpr(ifccParser::EqualityTestExprContext *context) = 0;

    virtual antlrcpp::Any visitAndTestExpr(ifccParser::AndTestExprContext *context) = 0;

    virtual antlrcpp::Any visitOrTestExpr(ifccParser::OrTestExprContext *context) = 0;

    virtual antlrcpp::Any visitParTestExpr(ifccParser::ParTestExprContext *context) = 0;

    virtual antlrcpp::Any visitDec(ifccParser::DecContext *context) = 0;

    virtual antlrcpp::Any visitAffDecConst(ifccParser::AffDecConstContext *context) = 0;

    virtual antlrcpp::Any visitAffDecVar(ifccParser::AffDecVarContext *context) = 0;

    virtual antlrcpp::Any visitAffDecExpr(ifccParser::AffDecExprContext *context) = 0;

    virtual antlrcpp::Any visitAffVar(ifccParser::AffVarContext *context) = 0;

    virtual antlrcpp::Any visitAffConst(ifccParser::AffConstContext *context) = 0;

    virtual antlrcpp::Any visitAffExpr(ifccParser::AffExprContext *context) = 0;

    virtual antlrcpp::Any visitIfNoElse(ifccParser::IfNoElseContext *context) = 0;

    virtual antlrcpp::Any visitIfWithElse(ifccParser::IfWithElseContext *context) = 0;

    virtual antlrcpp::Any visitIfElseIf(ifccParser::IfElseIfContext *context) = 0;

    virtual antlrcpp::Any visitRetVar(ifccParser::RetVarContext *context) = 0;

    virtual antlrcpp::Any visitRetConst(ifccParser::RetConstContext *context) = 0;


};

