
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

    virtual antlrcpp::Any visitGlobalVariables(ifccParser::GlobalVariablesContext *context) = 0;

    virtual antlrcpp::Any visitBloc(ifccParser::BlocContext *context) = 0;

    virtual antlrcpp::Any visitBlocRet(ifccParser::BlocRetContext *context) = 0;

    virtual antlrcpp::Any visitProg(ifccParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitFunctions(ifccParser::FunctionsContext *context) = 0;

    virtual antlrcpp::Any visitFuncDecDef(ifccParser::FuncDecDefContext *context) = 0;

    virtual antlrcpp::Any visitFuncDecStrict(ifccParser::FuncDecStrictContext *context) = 0;

    virtual antlrcpp::Any visitFuncCall(ifccParser::FuncCallContext *context) = 0;

    virtual antlrcpp::Any visitArgsDecVar(ifccParser::ArgsDecVarContext *context) = 0;

    virtual antlrcpp::Any visitLastArgDec(ifccParser::LastArgDecContext *context) = 0;

    virtual antlrcpp::Any visitNoArgDec(ifccParser::NoArgDecContext *context) = 0;

    virtual antlrcpp::Any visitArgsVar(ifccParser::ArgsVarContext *context) = 0;

    virtual antlrcpp::Any visitArgsConst(ifccParser::ArgsConstContext *context) = 0;

    virtual antlrcpp::Any visitLastArgVar(ifccParser::LastArgVarContext *context) = 0;

    virtual antlrcpp::Any visitLastArgConst(ifccParser::LastArgConstContext *context) = 0;

    virtual antlrcpp::Any visitNoArg(ifccParser::NoArgContext *context) = 0;

    virtual antlrcpp::Any visitStatements(ifccParser::StatementsContext *context) = 0;

    virtual antlrcpp::Any visitStatementDeclaration(ifccParser::StatementDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStatementAffectation(ifccParser::StatementAffectationContext *context) = 0;

    virtual antlrcpp::Any visitStatementReturn(ifccParser::StatementReturnContext *context) = 0;

    virtual antlrcpp::Any visitBoucleIf(ifccParser::BoucleIfContext *context) = 0;

    virtual antlrcpp::Any visitBoucleWhile(ifccParser::BoucleWhileContext *context) = 0;

    virtual antlrcpp::Any visitCallAFunction(ifccParser::CallAFunctionContext *context) = 0;

    virtual antlrcpp::Any visitParExpr(ifccParser::ParExprContext *context) = 0;

    virtual antlrcpp::Any visitVarExpr(ifccParser::VarExprContext *context) = 0;

    virtual antlrcpp::Any visitCharExpr(ifccParser::CharExprContext *context) = 0;

    virtual antlrcpp::Any visitBitsExpr(ifccParser::BitsExprContext *context) = 0;

    virtual antlrcpp::Any visitNotExpr(ifccParser::NotExprContext *context) = 0;

    virtual antlrcpp::Any visitArrayExpr(ifccParser::ArrayExprContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicationExpr(ifccParser::MultiplicationExprContext *context) = 0;

    virtual antlrcpp::Any visitFuncCallExpr(ifccParser::FuncCallExprContext *context) = 0;

    virtual antlrcpp::Any visitAdditiveExpr(ifccParser::AdditiveExprContext *context) = 0;

    virtual antlrcpp::Any visitMinusExpr(ifccParser::MinusExprContext *context) = 0;

    virtual antlrcpp::Any visitConstExpr(ifccParser::ConstExprContext *context) = 0;

    virtual antlrcpp::Any visitRelationalTestExpr(ifccParser::RelationalTestExprContext *context) = 0;

    virtual antlrcpp::Any visitEqualityTestExpr(ifccParser::EqualityTestExprContext *context) = 0;

    virtual antlrcpp::Any visitParTestExpr(ifccParser::ParTestExprContext *context) = 0;

    virtual antlrcpp::Any visitDeclMult(ifccParser::DeclMultContext *context) = 0;

    virtual antlrcpp::Any visitLastDecl(ifccParser::LastDeclContext *context) = 0;

    virtual antlrcpp::Any visitDec(ifccParser::DecContext *context) = 0;

    virtual antlrcpp::Any visitAffDecConst(ifccParser::AffDecConstContext *context) = 0;

    virtual antlrcpp::Any visitAffDecVar(ifccParser::AffDecVarContext *context) = 0;

    virtual antlrcpp::Any visitAffDecChar(ifccParser::AffDecCharContext *context) = 0;

    virtual antlrcpp::Any visitAffDecArray(ifccParser::AffDecArrayContext *context) = 0;

    virtual antlrcpp::Any visitAffDecExpr(ifccParser::AffDecExprContext *context) = 0;

    virtual antlrcpp::Any visitAffVar(ifccParser::AffVarContext *context) = 0;

    virtual antlrcpp::Any visitAffConst(ifccParser::AffConstContext *context) = 0;

    virtual antlrcpp::Any visitAffChar(ifccParser::AffCharContext *context) = 0;

    virtual antlrcpp::Any visitAffExpr(ifccParser::AffExprContext *context) = 0;

    virtual antlrcpp::Any visitAffEltVar(ifccParser::AffEltVarContext *context) = 0;

    virtual antlrcpp::Any visitAffEltConst(ifccParser::AffEltConstContext *context) = 0;

    virtual antlrcpp::Any visitAffEltExpr(ifccParser::AffEltExprContext *context) = 0;

    virtual antlrcpp::Any visitDecGMult(ifccParser::DecGMultContext *context) = 0;

    virtual antlrcpp::Any visitLastDecG(ifccParser::LastDecGContext *context) = 0;

    virtual antlrcpp::Any visitDecG(ifccParser::DecGContext *context) = 0;

    virtual antlrcpp::Any visitDecGAffConst(ifccParser::DecGAffConstContext *context) = 0;

    virtual antlrcpp::Any visitDecGAffChar(ifccParser::DecGAffCharContext *context) = 0;

    virtual antlrcpp::Any visitIfNoElse(ifccParser::IfNoElseContext *context) = 0;

    virtual antlrcpp::Any visitIfWithElse(ifccParser::IfWithElseContext *context) = 0;

    virtual antlrcpp::Any visitIfElseIf(ifccParser::IfElseIfContext *context) = 0;

    virtual antlrcpp::Any visitWhileLoop(ifccParser::WhileLoopContext *context) = 0;

    virtual antlrcpp::Any visitRetVar(ifccParser::RetVarContext *context) = 0;

    virtual antlrcpp::Any visitRetConst(ifccParser::RetConstContext *context) = 0;

    virtual antlrcpp::Any visitRetExpr(ifccParser::RetExprContext *context) = 0;

    virtual antlrcpp::Any visitType(ifccParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitFuncType(ifccParser::FuncTypeContext *context) = 0;

    virtual antlrcpp::Any visitArray_elt(ifccParser::Array_eltContext *context) = 0;


};

