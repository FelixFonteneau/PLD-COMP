
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

    virtual antlrcpp::Any visitProg(ifccParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitStatements(ifccParser::StatementsContext *context) = 0;

    virtual antlrcpp::Any visitStatementDeclaration(ifccParser::StatementDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStatementAffectation(ifccParser::StatementAffectationContext *context) = 0;

    virtual antlrcpp::Any visitStatementReturn(ifccParser::StatementReturnContext *context) = 0;

    virtual antlrcpp::Any visitDec(ifccParser::DecContext *context) = 0;

    virtual antlrcpp::Any visitAffDecConst(ifccParser::AffDecConstContext *context) = 0;

    virtual antlrcpp::Any visitAffDecVar(ifccParser::AffDecVarContext *context) = 0;

    virtual antlrcpp::Any visitAffVar(ifccParser::AffVarContext *context) = 0;

    virtual antlrcpp::Any visitAffConst(ifccParser::AffConstContext *context) = 0;

    virtual antlrcpp::Any visitRetVar(ifccParser::RetVarContext *context) = 0;

    virtual antlrcpp::Any visitRetConst(ifccParser::RetConstContext *context) = 0;


};

