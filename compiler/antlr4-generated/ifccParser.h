
// Generated from ifcc.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  ifccParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    INT = 27, CHAR = 28, RET = 29, CHAREXP = 30, VAR = 31, CONST = 32, COMMENT = 33, 
    DIRECTIVE = 34, WS = 35
  };

  enum {
    RuleAxiom = 0, RuleGlobalVariables = 1, RuleBloc = 2, RuleBlocRet = 3, 
    RuleProg = 4, RuleFunctions = 5, RuleFuncDec = 6, RuleFuncCall = 7, 
    RuleArgsDec = 8, RuleArgs = 9, RuleStatements = 10, RuleStatement = 11, 
    RuleExpr = 12, RuleTestExpr = 13, RuleVars = 14, RuleDec = 15, RuleAff = 16, 
    RuleVarsG = 17, RuleDecGlobal = 18, RuleIfLoop = 19, RuleWhileLoop = 20, 
    RuleRet = 21, RuleType = 22, RuleArray_elt = 23
  };

  ifccParser(antlr4::TokenStream *input);
  ~ifccParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class AxiomContext;
  class GlobalVariablesContext;
  class BlocContext;
  class BlocRetContext;
  class ProgContext;
  class FunctionsContext;
  class FuncDecContext;
  class FuncCallContext;
  class ArgsDecContext;
  class ArgsContext;
  class StatementsContext;
  class StatementContext;
  class ExprContext;
  class TestExprContext;
  class VarsContext;
  class DecContext;
  class AffContext;
  class VarsGContext;
  class DecGlobalContext;
  class IfLoopContext;
  class WhileLoopContext;
  class RetContext;
  class TypeContext;
  class Array_eltContext; 

  class  AxiomContext : public antlr4::ParserRuleContext {
  public:
    AxiomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GlobalVariablesContext *globalVariables();
    std::vector<FunctionsContext *> functions();
    FunctionsContext* functions(size_t i);
    ProgContext *prog();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AxiomContext* axiom();

  class  GlobalVariablesContext : public antlr4::ParserRuleContext {
  public:
    GlobalVariablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecGlobalContext *decGlobal();
    GlobalVariablesContext *globalVariables();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GlobalVariablesContext* globalVariables();

  class  BlocContext : public antlr4::ParserRuleContext {
  public:
    BlocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementsContext *statements();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlocContext* bloc();

  class  BlocRetContext : public antlr4::ParserRuleContext {
  public:
    BlocRetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementsContext *statements();
    RetContext *ret();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlocRetContext* blocRet();

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    BlocContext *bloc();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  FunctionsContext : public antlr4::ParserRuleContext {
  public:
    FunctionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FuncDecContext *funcDec();
    FunctionsContext *functions();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionsContext* functions();

  class  FuncDecContext : public antlr4::ParserRuleContext {
  public:
    FuncDecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FuncDecContext() = default;
    void copyFrom(FuncDecContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FuncDecDefContext : public FuncDecContext {
  public:
    FuncDecDefContext(FuncDecContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *VAR();
    ArgsDecContext *argsDec();
    BlocContext *bloc();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FuncDecStrictContext : public FuncDecContext {
  public:
    FuncDecStrictContext(FuncDecContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *VAR();
    ArgsDecContext *argsDec();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FuncDecContext* funcDec();

  class  FuncCallContext : public antlr4::ParserRuleContext {
  public:
    FuncCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    ArgsContext *args();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncCallContext* funcCall();

  class  ArgsDecContext : public antlr4::ParserRuleContext {
  public:
    ArgsDecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ArgsDecContext() = default;
    void copyFrom(ArgsDecContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LastArgDecContext : public ArgsDecContext {
  public:
    LastArgDecContext(ArgsDecContext *ctx);

    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *VAR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArgsDecVarContext : public ArgsDecContext {
  public:
    ArgsDecVarContext(ArgsDecContext *ctx);

    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *VAR();
    ArgsDecContext *argsDec();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NoArgDecContext : public ArgsDecContext {
  public:
    NoArgDecContext(ArgsDecContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ArgsDecContext* argsDec();

  class  ArgsContext : public antlr4::ParserRuleContext {
  public:
    ArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ArgsContext() = default;
    void copyFrom(ArgsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LastArgConstContext : public ArgsContext {
  public:
    LastArgConstContext(ArgsContext *ctx);

    antlr4::tree::TerminalNode *CONST();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArgsConstContext : public ArgsContext {
  public:
    ArgsConstContext(ArgsContext *ctx);

    antlr4::tree::TerminalNode *CONST();
    ArgsContext *args();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LastArgVarContext : public ArgsContext {
  public:
    LastArgVarContext(ArgsContext *ctx);

    antlr4::tree::TerminalNode *VAR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NoArgContext : public ArgsContext {
  public:
    NoArgContext(ArgsContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArgsVarContext : public ArgsContext {
  public:
    ArgsVarContext(ArgsContext *ctx);

    antlr4::tree::TerminalNode *VAR();
    ArgsContext *args();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ArgsContext* args();

  class  StatementsContext : public antlr4::ParserRuleContext {
  public:
    StatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    StatementsContext *statements();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementsContext* statements();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatementContext() = default;
    void copyFrom(StatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StatementAffectationContext : public StatementContext {
  public:
    StatementAffectationContext(StatementContext *ctx);

    AffContext *aff();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BoucleIfContext : public StatementContext {
  public:
    BoucleIfContext(StatementContext *ctx);

    IfLoopContext *ifLoop();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StatementReturnContext : public StatementContext {
  public:
    StatementReturnContext(StatementContext *ctx);

    RetContext *ret();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StatementDeclarationContext : public StatementContext {
  public:
    StatementDeclarationContext(StatementContext *ctx);

    DecContext *dec();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CallAFunctionContext : public StatementContext {
  public:
    CallAFunctionContext(StatementContext *ctx);

    FuncCallContext *funcCall();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BoucleWhileContext : public StatementContext {
  public:
    BoucleWhileContext(StatementContext *ctx);

    WhileLoopContext *whileLoop();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatementContext* statement();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ParExprContext : public ExprContext {
  public:
    ParExprContext(ExprContext *ctx);

    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VarExprContext : public ExprContext {
  public:
    VarExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *VAR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CharExprContext : public ExprContext {
  public:
    CharExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *CHAREXP();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitsExprContext : public ExprContext {
  public:
    BitsExprContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NotExprContext : public ExprContext {
  public:
    NotExprContext(ExprContext *ctx);

    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArrayExprContext : public ExprContext {
  public:
    ArrayExprContext(ExprContext *ctx);

    Array_eltContext *array_elt();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultiplicationExprContext : public ExprContext {
  public:
    MultiplicationExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FuncCallExprContext : public ExprContext {
  public:
    FuncCallExprContext(ExprContext *ctx);

    FuncCallContext *funcCall();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AdditiveExprContext : public ExprContext {
  public:
    AdditiveExprContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MinusExprContext : public ExprContext {
  public:
    MinusExprContext(ExprContext *ctx);

    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstExprContext : public ExprContext {
  public:
    ConstExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *CONST();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  TestExprContext : public antlr4::ParserRuleContext {
  public:
    TestExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TestExprContext() = default;
    void copyFrom(TestExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  EqualityTestExprContext : public TestExprContext {
  public:
    EqualityTestExprContext(TestExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RelationalTestExprContext : public TestExprContext {
  public:
    RelationalTestExprContext(TestExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParTestExprContext : public TestExprContext {
  public:
    ParTestExprContext(TestExprContext *ctx);

    TestExprContext *testExpr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TestExprContext* testExpr();

  class  VarsContext : public antlr4::ParserRuleContext {
  public:
    VarsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    VarsContext() = default;
    void copyFrom(VarsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DeclMultContext : public VarsContext {
  public:
    DeclMultContext(VarsContext *ctx);

    antlr4::tree::TerminalNode *VAR();
    VarsContext *vars();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LastDeclContext : public VarsContext {
  public:
    LastDeclContext(VarsContext *ctx);

    antlr4::tree::TerminalNode *VAR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  VarsContext* vars();

  class  DecContext : public antlr4::ParserRuleContext {
  public:
    DecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    VarsContext *vars();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecContext* dec();

  class  AffContext : public antlr4::ParserRuleContext {
  public:
    AffContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AffContext() = default;
    void copyFrom(AffContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AffEltConstContext : public AffContext {
  public:
    AffEltConstContext(AffContext *ctx);

    Array_eltContext *array_elt();
    antlr4::tree::TerminalNode *CONST();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffConstContext : public AffContext {
  public:
    AffConstContext(AffContext *ctx);

    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *CONST();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffDecCharContext : public AffContext {
  public:
    AffDecCharContext(AffContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *CHAREXP();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffDecExprContext : public AffContext {
  public:
    AffDecExprContext(AffContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *VAR();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffDecArrayContext : public AffContext {
  public:
    AffDecArrayContext(AffContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *CONST();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffVarContext : public AffContext {
  public:
    AffVarContext(AffContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> VAR();
    antlr4::tree::TerminalNode* VAR(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffDecConstContext : public AffContext {
  public:
    AffDecConstContext(AffContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *CONST();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffEltVarContext : public AffContext {
  public:
    AffEltVarContext(AffContext *ctx);

    Array_eltContext *array_elt();
    antlr4::tree::TerminalNode *VAR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffEltExprContext : public AffContext {
  public:
    AffEltExprContext(AffContext *ctx);

    Array_eltContext *array_elt();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffDecVarContext : public AffContext {
  public:
    AffDecVarContext(AffContext *ctx);

    TypeContext *type();
    std::vector<antlr4::tree::TerminalNode *> VAR();
    antlr4::tree::TerminalNode* VAR(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffCharContext : public AffContext {
  public:
    AffCharContext(AffContext *ctx);

    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *CHAREXP();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffExprContext : public AffContext {
  public:
    AffExprContext(AffContext *ctx);

    antlr4::tree::TerminalNode *VAR();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AffContext* aff();

  class  VarsGContext : public antlr4::ParserRuleContext {
  public:
    VarsGContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    VarsGContext() = default;
    void copyFrom(VarsGContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LastDecGContext : public VarsGContext {
  public:
    LastDecGContext(VarsGContext *ctx);

    antlr4::tree::TerminalNode *VAR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DecGMultContext : public VarsGContext {
  public:
    DecGMultContext(VarsGContext *ctx);

    antlr4::tree::TerminalNode *VAR();
    VarsGContext *varsG();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  VarsGContext* varsG();

  class  DecGlobalContext : public antlr4::ParserRuleContext {
  public:
    DecGlobalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DecGlobalContext() = default;
    void copyFrom(DecGlobalContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DecGAffCharContext : public DecGlobalContext {
  public:
    DecGAffCharContext(DecGlobalContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *CHAREXP();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DecGContext : public DecGlobalContext {
  public:
    DecGContext(DecGlobalContext *ctx);

    TypeContext *type();
    VarsGContext *varsG();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DecGAffConstContext : public DecGlobalContext {
  public:
    DecGAffConstContext(DecGlobalContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *CONST();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DecGlobalContext* decGlobal();

  class  IfLoopContext : public antlr4::ParserRuleContext {
  public:
    IfLoopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    IfLoopContext() = default;
    void copyFrom(IfLoopContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IfWithElseContext : public IfLoopContext {
  public:
    IfWithElseContext(IfLoopContext *ctx);

    TestExprContext *testExpr();
    std::vector<BlocContext *> bloc();
    BlocContext* bloc(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfNoElseContext : public IfLoopContext {
  public:
    IfNoElseContext(IfLoopContext *ctx);

    TestExprContext *testExpr();
    BlocContext *bloc();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfElseIfContext : public IfLoopContext {
  public:
    IfElseIfContext(IfLoopContext *ctx);

    TestExprContext *testExpr();
    BlocContext *bloc();
    IfLoopContext *ifLoop();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  IfLoopContext* ifLoop();

  class  WhileLoopContext : public antlr4::ParserRuleContext {
  public:
    WhileLoopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TestExprContext *testExpr();
    BlocContext *bloc();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileLoopContext* whileLoop();

  class  RetContext : public antlr4::ParserRuleContext {
  public:
    RetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    RetContext() = default;
    void copyFrom(RetContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  RetConstContext : public RetContext {
  public:
    RetConstContext(RetContext *ctx);

    antlr4::tree::TerminalNode *RET();
    antlr4::tree::TerminalNode *CONST();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RetExprContext : public RetContext {
  public:
    RetExprContext(RetContext *ctx);

    antlr4::tree::TerminalNode *RET();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RetVarContext : public RetContext {
  public:
    RetVarContext(RetContext *ctx);

    antlr4::tree::TerminalNode *RET();
    antlr4::tree::TerminalNode *VAR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  RetContext* ret();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *CHAR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  Array_eltContext : public antlr4::ParserRuleContext {
  public:
    Array_eltContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *CONST();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_eltContext* array_elt();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

