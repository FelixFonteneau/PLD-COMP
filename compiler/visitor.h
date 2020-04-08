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
    bool thereIsFunc;
    int numberTempVar;
    bool thereIsTempVar;
    struct reg {
      string name;
      bool used;
    } eax, ebx, ecx, r10, r11, r12, r13, r14, r15, rdi, rsi, rdx, rcx, r8, r9; //edi, esi, ebp, esp;
    reg registers[9];
    reg* currentRegister;
    reg registersFunc[6];
    reg* currentRegFunc;

  public:

    Visitor(vector<CFG*>* cfgs, SemanticErrorListener* errorlistener);

    virtual antlrcpp::Any visitAxiom(ifccParser::AxiomContext *ctx) override;

    virtual antlrcpp::Any visitMain(ifccParser::MainContext *ctx) override;

    virtual antlrcpp::Any visitFunctions(ifccParser::FunctionsContext *ctx) override;

    virtual antlrcpp::Any visitFuncDecStrict(ifccParser::FuncDecStrictContext *ctx) override;

    virtual antlrcpp::Any visitFuncDecDef(ifccParser::FuncDecDefContext *ctx) override;

    virtual antlrcpp::Any visitFuncCall(ifccParser::FuncCallContext *ctx) override;
    
    virtual antlrcpp::Any visitAffDecArray(ifccParser::AffDecArrayContext *ctx) override;

    virtual antlrcpp::Any visitAffDecExpr(ifccParser::AffDecExprContext *ctx) override ;

    virtual antlrcpp::Any visitDec(ifccParser::DecContext *ctx) override;

    virtual antlrcpp::Any visitArgsDecVar(ifccParser::ArgsDecVarContext *ctx) override;

    virtual antlrcpp::Any visitLastArgDec(ifccParser::LastArgDecContext *ctx) override;

    virtual antlrcpp::Any visitArgsVar(ifccParser::ArgsVarContext *ctx) override;

    virtual antlrcpp::Any visitLastArgVar(ifccParser::LastArgVarContext *ctx) override;

    virtual antlrcpp::Any visitArgsConst(ifccParser::ArgsConstContext *ctx) override;

    virtual antlrcpp::Any visitLastArgConst(ifccParser::LastArgConstContext *ctx) override;

    virtual antlrcpp::Any visitAffDecConst(ifccParser::AffDecConstContext *ctx) override;

    virtual antlrcpp::Any visitAffDecVar(ifccParser::AffDecVarContext *ctx) override;

    virtual antlrcpp::Any visitAffDecExpr(ifccParser::AffDecExprContext *ctx) override;

    virtual antlrcpp::Any visitAffVar(ifccParser::AffVarContext *ctx) override;

    virtual antlrcpp::Any visitAffConst(ifccParser::AffConstContext *ctx) override;

    virtual antlrcpp::Any visitAffExpr(ifccParser::AffExprContext *ctx) override;

    virtual antlrcpp::Any visitDecGMult(ifccParser::DecGMultContext *ctx) override ;

    virtual antlrcpp::Any visitLastDecG(ifccParser::LastDecGContext *ctx) override ;

    virtual antlrcpp::Any visitDecGAffConst(ifccParser::DecGAffConstContext *ctx) override ;

    virtual antlrcpp::Any visitDecGAffChar(ifccParser::DecGAffCharContext *ctx) override ;

    virtual antlrcpp::Any visitAffEltVar(ifccParser::AffEltVarContext *ctx) override;

    virtual antlrcpp::Any visitAffEltConst(ifccParser::AffEltConstContext *ctx) override;

    virtual antlrcpp::Any visitAffEltExpr(ifccParser::AffEltExprContext *ctx) override;

    virtual antlrcpp::Any visitIfNoElse(ifccParser::IfNoElseContext *ctx) override;

    virtual antlrcpp::Any visitIfWithElse(ifccParser::IfWithElseContext *ctx) override;

    virtual antlrcpp::Any visitIfElseIf(ifccParser::IfElseIfContext *ctx) override;

    virtual antlrcpp::Any visitRelationalTestExpr(ifccParser::RelationalTestExprContext *ctx) override;

    virtual antlrcpp::Any visitEqualityTestExpr(ifccParser::EqualityTestExprContext *ctx) override;

    virtual antlrcpp::Any visitParTestExpr(ifccParser::ParTestExprContext *ctx) override;

    virtual antlrcpp::Any visitConstExpr(ifccParser::ConstExprContext *ctx) override;

    virtual antlrcpp::Any visitCharExpr(ifccParser::CharExprContext *ctx) override ;

    virtual antlrcpp::Any visitVarExpr(ifccParser::VarExprContext *ctx) override ;

    virtual antlrcpp::Any visitAdditiveExpr(ifccParser::AdditiveExprContext *ctx) override;

    virtual antlrcpp::Any visitParExpr(ifccParser::ParExprContext *ctx) override;

    virtual antlrcpp::Any visitArrayExpr(ifccParser::ArrayExprContext *ctx) override;

    virtual antlrcpp::Any visitRetVar(ifccParser::RetVarContext *ctx) override ;

    virtual antlrcpp::Any visitRetConst(ifccParser::RetConstContext *ctx) override;

    virtual antlrcpp::Any visitRetExpr(ifccParser::RetExprContext *ctx) override;

    virtual antlrcpp::Any visitMultiplicationExpr(ifccParser::MultiplicationExprContext *ctx) override ;

    virtual antlrcpp::Any visitNotExpr(ifccParser::NotExprContext *ctx) override;

    virtual antlrcpp::Any visitMinusExpr(ifccParser::MinusExprContext *ctx) override;

    virtual antlrcpp::Any visitBitsExpr(ifccParser::BitsExprContext *ctx) override;

    virtual antlrcpp::Any visitAffDecChar(ifccParser::AffDecCharContext *ctx) override;

    virtual antlrcpp::Any visitAffChar(ifccParser::AffCharContext *ctx) override;

    virtual antlrcpp::Any visitDeclMult(ifccParser::DeclMultContext *ctx) override;

    virtual antlrcpp::Any visitLastDecl(ifccParser::LastDeclContext *ctx) override;

    virtual antlrcpp::Any visitWhileLoop(ifccParser::WhileLoopContext *ctx) override;

    virtual antlrcpp::Any visitArray_elt(ifccParser::Array_eltContext *ctx) override;
};
