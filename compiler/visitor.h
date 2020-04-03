// Generated from ifcc.g4 by ANTLR 4.7.2

#pragma once

#include <vector>

#include "antlr4-runtime.h"
#include "antlr4-generated/ifccBaseVisitor.h"
#include "symbol-table/symbolTable.h"
#include "symbol-table/type.h"
#include "intermediate-representation/IRInstr.h"
#include "intermediate-representation/BasicBlock.h"
#include "intermediate-representation/CFG.h"
#include "error/semanticErrorListener.h"

using namespace std;

/**
 * This class provides an empty implementation of ifccVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  Visitor : public ifccBaseVisitor {

  private:
    SemanticErrorListener* errorlistener;
    vector<CFG*>* cfgs;
    CFG* currentCFG;
    BasicBlock* currentBasicBlock;
    struct reg {
      string name;
      bool used;
    } eax, ebx, ecx, edx, edi, esi, ebp, esp, eip;
    reg registers[9];
    reg* currentRegister;

  public:

    Visitor(vector<CFG*>* cfgs, SemanticErrorListener* errorlistener);

    virtual antlrcpp::Any visitAxiom(ifccParser::AxiomContext *ctx) override;

    virtual antlrcpp::Any visitProg(ifccParser::ProgContext *ctx) override ;

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

    virtual antlrcpp::Any visitMultiplicationExpr(ifccParser::MultiplicationExprContext *ctx) override ;

    virtual antlrcpp::Any visitNotExpr(ifccParser::NotExprContext *ctx) override;

    virtual antlrcpp::Any visitMinusExpr(ifccParser::MinusExprContext *ctx) override;

    virtual antlrcpp::Any visitBitsExpr(ifccParser::BitsExprContext *ctx) override;

    virtual antlrcpp::Any visitDeclMult(ifccParser::DeclMultContext *ctx) override;

    virtual antlrcpp::Any visitLastDecl(ifccParser::LastDeclContext *ctx) override;

};
