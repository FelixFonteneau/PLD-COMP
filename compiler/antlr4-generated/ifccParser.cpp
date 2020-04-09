
// Generated from ifcc.g4 by ANTLR 4.7.2


#include "ifccVisitor.h"

#include "ifccParser.h"


using namespace antlrcpp;
using namespace antlr4;

ifccParser::ifccParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ifccParser::~ifccParser() {
  delete _interpreter;
}

std::string ifccParser::getGrammarFileName() const {
  return "ifcc.g4";
}

const std::vector<std::string>& ifccParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ifccParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- AxiomContext ------------------------------------------------------------------

ifccParser::AxiomContext::AxiomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::GlobalVariablesContext* ifccParser::AxiomContext::globalVariables() {
  return getRuleContext<ifccParser::GlobalVariablesContext>(0);
}

std::vector<ifccParser::FunctionsContext *> ifccParser::AxiomContext::functions() {
  return getRuleContexts<ifccParser::FunctionsContext>();
}

ifccParser::FunctionsContext* ifccParser::AxiomContext::functions(size_t i) {
  return getRuleContext<ifccParser::FunctionsContext>(i);
}

ifccParser::ProgContext* ifccParser::AxiomContext::prog() {
  return getRuleContext<ifccParser::ProgContext>(0);
}


size_t ifccParser::AxiomContext::getRuleIndex() const {
  return ifccParser::RuleAxiom;
}

antlrcpp::Any ifccParser::AxiomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAxiom(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::AxiomContext* ifccParser::axiom() {
  AxiomContext *_localctx = _tracker.createInstance<AxiomContext>(_ctx, getState());
  enterRule(_localctx, 0, ifccParser::RuleAxiom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    globalVariables();
    setState(51);
    functions();
    setState(52);
    prog();
    setState(53);
    functions();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GlobalVariablesContext ------------------------------------------------------------------

ifccParser::GlobalVariablesContext::GlobalVariablesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::DecGlobalContext* ifccParser::GlobalVariablesContext::decGlobal() {
  return getRuleContext<ifccParser::DecGlobalContext>(0);
}

ifccParser::GlobalVariablesContext* ifccParser::GlobalVariablesContext::globalVariables() {
  return getRuleContext<ifccParser::GlobalVariablesContext>(0);
}


size_t ifccParser::GlobalVariablesContext::getRuleIndex() const {
  return ifccParser::RuleGlobalVariables;
}

antlrcpp::Any ifccParser::GlobalVariablesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitGlobalVariables(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::GlobalVariablesContext* ifccParser::globalVariables() {
  GlobalVariablesContext *_localctx = _tracker.createInstance<GlobalVariablesContext>(_ctx, getState());
  enterRule(_localctx, 2, ifccParser::RuleGlobalVariables);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(60);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);

      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(56);
      decGlobal();
      setState(57);
      match(ifccParser::T__0);
      setState(58);
      globalVariables();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlocContext ------------------------------------------------------------------

ifccParser::BlocContext::BlocContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::StatementsContext* ifccParser::BlocContext::statements() {
  return getRuleContext<ifccParser::StatementsContext>(0);
}


size_t ifccParser::BlocContext::getRuleIndex() const {
  return ifccParser::RuleBloc;
}

antlrcpp::Any ifccParser::BlocContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBloc(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::BlocContext* ifccParser::bloc() {
  BlocContext *_localctx = _tracker.createInstance<BlocContext>(_ctx, getState());
  enterRule(_localctx, 4, ifccParser::RuleBloc);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    match(ifccParser::T__1);
    setState(63);
    statements();
    setState(64);
    match(ifccParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlocRetContext ------------------------------------------------------------------

ifccParser::BlocRetContext::BlocRetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::StatementsContext* ifccParser::BlocRetContext::statements() {
  return getRuleContext<ifccParser::StatementsContext>(0);
}

ifccParser::RetContext* ifccParser::BlocRetContext::ret() {
  return getRuleContext<ifccParser::RetContext>(0);
}


size_t ifccParser::BlocRetContext::getRuleIndex() const {
  return ifccParser::RuleBlocRet;
}

antlrcpp::Any ifccParser::BlocRetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBlocRet(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::BlocRetContext* ifccParser::blocRet() {
  BlocRetContext *_localctx = _tracker.createInstance<BlocRetContext>(_ctx, getState());
  enterRule(_localctx, 6, ifccParser::RuleBlocRet);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    match(ifccParser::T__1);
    setState(67);
    statements();
    setState(68);
    ret();
    setState(69);
    match(ifccParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgContext ------------------------------------------------------------------

ifccParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::ProgContext::INT() {
  return getToken(ifccParser::INT, 0);
}

ifccParser::BlocContext* ifccParser::ProgContext::bloc() {
  return getRuleContext<ifccParser::BlocContext>(0);
}


size_t ifccParser::ProgContext::getRuleIndex() const {
  return ifccParser::RuleProg;
}

antlrcpp::Any ifccParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::ProgContext* ifccParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 8, ifccParser::RuleProg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    match(ifccParser::INT);
    setState(72);
    match(ifccParser::T__3);
    setState(73);
    match(ifccParser::T__4);
    setState(74);
    match(ifccParser::T__5);
    setState(75);
    bloc();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionsContext ------------------------------------------------------------------

ifccParser::FunctionsContext::FunctionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::FuncDecContext* ifccParser::FunctionsContext::funcDec() {
  return getRuleContext<ifccParser::FuncDecContext>(0);
}

ifccParser::FunctionsContext* ifccParser::FunctionsContext::functions() {
  return getRuleContext<ifccParser::FunctionsContext>(0);
}


size_t ifccParser::FunctionsContext::getRuleIndex() const {
  return ifccParser::RuleFunctions;
}

antlrcpp::Any ifccParser::FunctionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitFunctions(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::FunctionsContext* ifccParser::functions() {
  FunctionsContext *_localctx = _tracker.createInstance<FunctionsContext>(_ctx, getState());
  enterRule(_localctx, 10, ifccParser::RuleFunctions);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(82);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(77);
      funcDec();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(78);
      funcDec();
      setState(79);
      functions();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);

      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDecContext ------------------------------------------------------------------

ifccParser::FuncDecContext::FuncDecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::FuncDecContext::getRuleIndex() const {
  return ifccParser::RuleFuncDec;
}

void ifccParser::FuncDecContext::copyFrom(FuncDecContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FuncDecDefContext ------------------------------------------------------------------

ifccParser::FuncTypeContext* ifccParser::FuncDecDefContext::funcType() {
  return getRuleContext<ifccParser::FuncTypeContext>(0);
}

tree::TerminalNode* ifccParser::FuncDecDefContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::ArgsDecContext* ifccParser::FuncDecDefContext::argsDec() {
  return getRuleContext<ifccParser::ArgsDecContext>(0);
}

ifccParser::BlocContext* ifccParser::FuncDecDefContext::bloc() {
  return getRuleContext<ifccParser::BlocContext>(0);
}

ifccParser::FuncDecDefContext::FuncDecDefContext(FuncDecContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::FuncDecDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitFuncDecDef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncDecStrictContext ------------------------------------------------------------------

ifccParser::FuncTypeContext* ifccParser::FuncDecStrictContext::funcType() {
  return getRuleContext<ifccParser::FuncTypeContext>(0);
}

tree::TerminalNode* ifccParser::FuncDecStrictContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::ArgsDecContext* ifccParser::FuncDecStrictContext::argsDec() {
  return getRuleContext<ifccParser::ArgsDecContext>(0);
}

ifccParser::FuncDecStrictContext::FuncDecStrictContext(FuncDecContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::FuncDecStrictContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitFuncDecStrict(this);
  else
    return visitor->visitChildren(this);
}
ifccParser::FuncDecContext* ifccParser::funcDec() {
  FuncDecContext *_localctx = _tracker.createInstance<FuncDecContext>(_ctx, getState());
  enterRule(_localctx, 12, ifccParser::RuleFuncDec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(98);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<FuncDecContext *>(_tracker.createInstance<ifccParser::FuncDecDefContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(84);
      funcType();
      setState(85);
      match(ifccParser::VAR);
      setState(86);
      match(ifccParser::T__4);
      setState(87);
      argsDec();
      setState(88);
      match(ifccParser::T__5);
      setState(89);
      bloc();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<FuncDecContext *>(_tracker.createInstance<ifccParser::FuncDecStrictContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(91);
      funcType();
      setState(92);
      match(ifccParser::VAR);
      setState(93);
      match(ifccParser::T__4);
      setState(94);
      argsDec();
      setState(95);
      match(ifccParser::T__5);
      setState(96);
      match(ifccParser::T__0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncCallContext ------------------------------------------------------------------

ifccParser::FuncCallContext::FuncCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::FuncCallContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::ArgsContext* ifccParser::FuncCallContext::args() {
  return getRuleContext<ifccParser::ArgsContext>(0);
}


size_t ifccParser::FuncCallContext::getRuleIndex() const {
  return ifccParser::RuleFuncCall;
}

antlrcpp::Any ifccParser::FuncCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitFuncCall(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::FuncCallContext* ifccParser::funcCall() {
  FuncCallContext *_localctx = _tracker.createInstance<FuncCallContext>(_ctx, getState());
  enterRule(_localctx, 14, ifccParser::RuleFuncCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    match(ifccParser::VAR);
    setState(101);
    match(ifccParser::T__4);
    setState(102);
    args();
    setState(103);
    match(ifccParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgsDecContext ------------------------------------------------------------------

ifccParser::ArgsDecContext::ArgsDecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::ArgsDecContext::getRuleIndex() const {
  return ifccParser::RuleArgsDec;
}

void ifccParser::ArgsDecContext::copyFrom(ArgsDecContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LastArgDecContext ------------------------------------------------------------------

ifccParser::TypeContext* ifccParser::LastArgDecContext::type() {
  return getRuleContext<ifccParser::TypeContext>(0);
}

tree::TerminalNode* ifccParser::LastArgDecContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::LastArgDecContext::LastArgDecContext(ArgsDecContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::LastArgDecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitLastArgDec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArgsDecVarContext ------------------------------------------------------------------

ifccParser::TypeContext* ifccParser::ArgsDecVarContext::type() {
  return getRuleContext<ifccParser::TypeContext>(0);
}

tree::TerminalNode* ifccParser::ArgsDecVarContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::ArgsDecContext* ifccParser::ArgsDecVarContext::argsDec() {
  return getRuleContext<ifccParser::ArgsDecContext>(0);
}

ifccParser::ArgsDecVarContext::ArgsDecVarContext(ArgsDecContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::ArgsDecVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitArgsDecVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NoArgDecContext ------------------------------------------------------------------

ifccParser::NoArgDecContext::NoArgDecContext(ArgsDecContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::NoArgDecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitNoArgDec(this);
  else
    return visitor->visitChildren(this);
}
ifccParser::ArgsDecContext* ifccParser::argsDec() {
  ArgsDecContext *_localctx = _tracker.createInstance<ArgsDecContext>(_ctx, getState());
  enterRule(_localctx, 16, ifccParser::RuleArgsDec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(114);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ArgsDecContext *>(_tracker.createInstance<ifccParser::ArgsDecVarContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(105);
      type();
      setState(106);
      match(ifccParser::VAR);
      setState(107);
      match(ifccParser::T__6);
      setState(108);
      argsDec();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ArgsDecContext *>(_tracker.createInstance<ifccParser::LastArgDecContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(110);
      type();
      setState(111);
      match(ifccParser::VAR);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<ArgsDecContext *>(_tracker.createInstance<ifccParser::NoArgDecContext>(_localctx));
      enterOuterAlt(_localctx, 3);

      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

ifccParser::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::ArgsContext::getRuleIndex() const {
  return ifccParser::RuleArgs;
}

void ifccParser::ArgsContext::copyFrom(ArgsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LastArgConstContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::LastArgConstContext::CONST() {
  return getToken(ifccParser::CONST, 0);
}

ifccParser::LastArgConstContext::LastArgConstContext(ArgsContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::LastArgConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitLastArgConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArgsConstContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::ArgsConstContext::CONST() {
  return getToken(ifccParser::CONST, 0);
}

ifccParser::ArgsContext* ifccParser::ArgsConstContext::args() {
  return getRuleContext<ifccParser::ArgsContext>(0);
}

ifccParser::ArgsConstContext::ArgsConstContext(ArgsContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::ArgsConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitArgsConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LastArgVarContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::LastArgVarContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::LastArgVarContext::LastArgVarContext(ArgsContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::LastArgVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitLastArgVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NoArgContext ------------------------------------------------------------------

ifccParser::NoArgContext::NoArgContext(ArgsContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::NoArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitNoArg(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArgsVarContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::ArgsVarContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::ArgsContext* ifccParser::ArgsVarContext::args() {
  return getRuleContext<ifccParser::ArgsContext>(0);
}

ifccParser::ArgsVarContext::ArgsVarContext(ArgsContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::ArgsVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitArgsVar(this);
  else
    return visitor->visitChildren(this);
}
ifccParser::ArgsContext* ifccParser::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 18, ifccParser::RuleArgs);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(125);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ArgsContext *>(_tracker.createInstance<ifccParser::ArgsVarContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(116);
      match(ifccParser::VAR);
      setState(117);
      match(ifccParser::T__6);
      setState(118);
      args();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ArgsContext *>(_tracker.createInstance<ifccParser::ArgsConstContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(119);
      match(ifccParser::CONST);
      setState(120);
      match(ifccParser::T__6);
      setState(121);
      args();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<ArgsContext *>(_tracker.createInstance<ifccParser::LastArgVarContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(122);
      match(ifccParser::VAR);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<ArgsContext *>(_tracker.createInstance<ifccParser::LastArgConstContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(123);
      match(ifccParser::CONST);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<ArgsContext *>(_tracker.createInstance<ifccParser::NoArgContext>(_localctx));
      enterOuterAlt(_localctx, 5);

      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementsContext ------------------------------------------------------------------

ifccParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::StatementContext* ifccParser::StatementsContext::statement() {
  return getRuleContext<ifccParser::StatementContext>(0);
}

ifccParser::StatementsContext* ifccParser::StatementsContext::statements() {
  return getRuleContext<ifccParser::StatementsContext>(0);
}


size_t ifccParser::StatementsContext::getRuleIndex() const {
  return ifccParser::RuleStatements;
}

antlrcpp::Any ifccParser::StatementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitStatements(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::StatementsContext* ifccParser::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 20, ifccParser::RuleStatements);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(131);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(127);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(128);
      statement();
      setState(129);
      statements();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

ifccParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::StatementContext::getRuleIndex() const {
  return ifccParser::RuleStatement;
}

void ifccParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StatementAffectationContext ------------------------------------------------------------------

ifccParser::AffContext* ifccParser::StatementAffectationContext::aff() {
  return getRuleContext<ifccParser::AffContext>(0);
}

ifccParser::StatementAffectationContext::StatementAffectationContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::StatementAffectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitStatementAffectation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoucleIfContext ------------------------------------------------------------------

ifccParser::IfLoopContext* ifccParser::BoucleIfContext::ifLoop() {
  return getRuleContext<ifccParser::IfLoopContext>(0);
}

ifccParser::BoucleIfContext::BoucleIfContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::BoucleIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBoucleIf(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatementReturnContext ------------------------------------------------------------------

ifccParser::RetContext* ifccParser::StatementReturnContext::ret() {
  return getRuleContext<ifccParser::RetContext>(0);
}

ifccParser::StatementReturnContext::StatementReturnContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::StatementReturnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitStatementReturn(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatementDeclarationContext ------------------------------------------------------------------

ifccParser::DecContext* ifccParser::StatementDeclarationContext::dec() {
  return getRuleContext<ifccParser::DecContext>(0);
}

ifccParser::StatementDeclarationContext::StatementDeclarationContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::StatementDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitStatementDeclaration(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CallAFunctionContext ------------------------------------------------------------------

ifccParser::FuncCallContext* ifccParser::CallAFunctionContext::funcCall() {
  return getRuleContext<ifccParser::FuncCallContext>(0);
}

ifccParser::CallAFunctionContext::CallAFunctionContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::CallAFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitCallAFunction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoucleWhileContext ------------------------------------------------------------------

ifccParser::WhileLoopContext* ifccParser::BoucleWhileContext::whileLoop() {
  return getRuleContext<ifccParser::WhileLoopContext>(0);
}

ifccParser::BoucleWhileContext::BoucleWhileContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::BoucleWhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBoucleWhile(this);
  else
    return visitor->visitChildren(this);
}
ifccParser::StatementContext* ifccParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 22, ifccParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(147);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::StatementDeclarationContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(133);
      dec();
      setState(134);
      match(ifccParser::T__0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::StatementAffectationContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(136);
      aff();
      setState(137);
      match(ifccParser::T__0);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::StatementReturnContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(139);
      ret();
      setState(140);
      match(ifccParser::T__0);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::BoucleIfContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(142);
      ifLoop();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::BoucleWhileContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(143);
      whileLoop();
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::CallAFunctionContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(144);
      funcCall();
      setState(145);
      match(ifccParser::T__0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

ifccParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::ExprContext::getRuleIndex() const {
  return ifccParser::RuleExpr;
}

void ifccParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParExprContext ------------------------------------------------------------------

ifccParser::ExprContext* ifccParser::ParExprContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

ifccParser::ParExprContext::ParExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::ParExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitParExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarExprContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::VarExprContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::VarExprContext::VarExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::VarExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitVarExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CharExprContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::CharExprContext::CHAREXP() {
  return getToken(ifccParser::CHAREXP, 0);
}

ifccParser::CharExprContext::CharExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::CharExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitCharExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitsExprContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::BitsExprContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::BitsExprContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::BitsExprContext::BitsExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::BitsExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBitsExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotExprContext ------------------------------------------------------------------

ifccParser::ExprContext* ifccParser::NotExprContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

ifccParser::NotExprContext::NotExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::NotExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitNotExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayExprContext ------------------------------------------------------------------

ifccParser::Array_eltContext* ifccParser::ArrayExprContext::array_elt() {
  return getRuleContext<ifccParser::Array_eltContext>(0);
}

ifccParser::ArrayExprContext::ArrayExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::ArrayExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitArrayExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiplicationExprContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::MultiplicationExprContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::MultiplicationExprContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::MultiplicationExprContext::MultiplicationExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::MultiplicationExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitMultiplicationExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncCallExprContext ------------------------------------------------------------------

ifccParser::FuncCallContext* ifccParser::FuncCallExprContext::funcCall() {
  return getRuleContext<ifccParser::FuncCallContext>(0);
}

ifccParser::FuncCallExprContext::FuncCallExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::FuncCallExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitFuncCallExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AdditiveExprContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::AdditiveExprContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::AdditiveExprContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::AdditiveExprContext::AdditiveExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::AdditiveExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAdditiveExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MinusExprContext ------------------------------------------------------------------

ifccParser::ExprContext* ifccParser::MinusExprContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

ifccParser::MinusExprContext::MinusExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::MinusExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitMinusExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstExprContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::ConstExprContext::CONST() {
  return getToken(ifccParser::CONST, 0);
}

ifccParser::ConstExprContext::ConstExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::ConstExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitConstExpr(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::ExprContext* ifccParser::expr() {
   return expr(0);
}

ifccParser::ExprContext* ifccParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ifccParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  ifccParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, ifccParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(163);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<MinusExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(150);
      match(ifccParser::T__10);
      setState(151);
      expr(10);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<NotExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(152);
      match(ifccParser::T__11);
      setState(153);
      expr(9);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ParExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(154);
      match(ifccParser::T__4);
      setState(155);
      expr(0);
      setState(156);
      match(ifccParser::T__5);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<FuncCallExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(158);
      funcCall();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ConstExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(159);
      match(ifccParser::CONST);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<VarExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(160);
      match(ifccParser::VAR);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<CharExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(161);
      match(ifccParser::CHAREXP);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<ArrayExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(162);
      array_elt();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(176);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(174);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BitsExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(165);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(166);
          dynamic_cast<BitsExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << ifccParser::T__7)
            | (1ULL << ifccParser::T__8)
            | (1ULL << ifccParser::T__9))) != 0))) {
            dynamic_cast<BitsExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(167);
          expr(12);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MultiplicationExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(168);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(169);
          match(ifccParser::T__12);
          setState(170);
          expr(9);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AdditiveExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(171);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(172);
          dynamic_cast<AdditiveExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ifccParser::T__10

          || _la == ifccParser::T__13)) {
            dynamic_cast<AdditiveExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(173);
          expr(8);
          break;
        }

        } 
      }
      setState(178);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TestExprContext ------------------------------------------------------------------

ifccParser::TestExprContext::TestExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::TestExprContext::getRuleIndex() const {
  return ifccParser::RuleTestExpr;
}

void ifccParser::TestExprContext::copyFrom(TestExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- EqualityTestExprContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::EqualityTestExprContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::EqualityTestExprContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::EqualityTestExprContext::EqualityTestExprContext(TestExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::EqualityTestExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitEqualityTestExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelationalTestExprContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::RelationalTestExprContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::RelationalTestExprContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::RelationalTestExprContext::RelationalTestExprContext(TestExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::RelationalTestExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitRelationalTestExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParTestExprContext ------------------------------------------------------------------

ifccParser::TestExprContext* ifccParser::ParTestExprContext::testExpr() {
  return getRuleContext<ifccParser::TestExprContext>(0);
}

ifccParser::ParTestExprContext::ParTestExprContext(TestExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::ParTestExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitParTestExpr(this);
  else
    return visitor->visitChildren(this);
}
ifccParser::TestExprContext* ifccParser::testExpr() {
  TestExprContext *_localctx = _tracker.createInstance<TestExprContext>(_ctx, getState());
  enterRule(_localctx, 26, ifccParser::RuleTestExpr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(191);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<TestExprContext *>(_tracker.createInstance<ifccParser::RelationalTestExprContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(179);
      expr(0);
      setState(180);
      dynamic_cast<RelationalTestExprContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ifccParser::T__14)
        | (1ULL << ifccParser::T__15)
        | (1ULL << ifccParser::T__16)
        | (1ULL << ifccParser::T__17))) != 0))) {
        dynamic_cast<RelationalTestExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(181);
      expr(0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<TestExprContext *>(_tracker.createInstance<ifccParser::EqualityTestExprContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(183);
      expr(0);
      setState(184);
      dynamic_cast<EqualityTestExprContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == ifccParser::T__18

      || _la == ifccParser::T__19)) {
        dynamic_cast<EqualityTestExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(185);
      expr(0);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<TestExprContext *>(_tracker.createInstance<ifccParser::ParTestExprContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(187);
      match(ifccParser::T__4);
      setState(188);
      testExpr();
      setState(189);
      match(ifccParser::T__5);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarsContext ------------------------------------------------------------------

ifccParser::VarsContext::VarsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::VarsContext::getRuleIndex() const {
  return ifccParser::RuleVars;
}

void ifccParser::VarsContext::copyFrom(VarsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DeclMultContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::DeclMultContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::VarsContext* ifccParser::DeclMultContext::vars() {
  return getRuleContext<ifccParser::VarsContext>(0);
}

ifccParser::DeclMultContext::DeclMultContext(VarsContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::DeclMultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitDeclMult(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LastDeclContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::LastDeclContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::LastDeclContext::LastDeclContext(VarsContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::LastDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitLastDecl(this);
  else
    return visitor->visitChildren(this);
}
ifccParser::VarsContext* ifccParser::vars() {
  VarsContext *_localctx = _tracker.createInstance<VarsContext>(_ctx, getState());
  enterRule(_localctx, 28, ifccParser::RuleVars);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(197);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VarsContext *>(_tracker.createInstance<ifccParser::DeclMultContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(193);
      match(ifccParser::VAR);
      setState(194);
      match(ifccParser::T__6);
      setState(195);
      vars();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VarsContext *>(_tracker.createInstance<ifccParser::LastDeclContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(196);
      match(ifccParser::VAR);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecContext ------------------------------------------------------------------

ifccParser::DecContext::DecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::TypeContext* ifccParser::DecContext::type() {
  return getRuleContext<ifccParser::TypeContext>(0);
}

ifccParser::VarsContext* ifccParser::DecContext::vars() {
  return getRuleContext<ifccParser::VarsContext>(0);
}


size_t ifccParser::DecContext::getRuleIndex() const {
  return ifccParser::RuleDec;
}

antlrcpp::Any ifccParser::DecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitDec(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::DecContext* ifccParser::dec() {
  DecContext *_localctx = _tracker.createInstance<DecContext>(_ctx, getState());
  enterRule(_localctx, 30, ifccParser::RuleDec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(199);
    type();
    setState(200);
    vars();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AffContext ------------------------------------------------------------------

ifccParser::AffContext::AffContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::AffContext::getRuleIndex() const {
  return ifccParser::RuleAff;
}

void ifccParser::AffContext::copyFrom(AffContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AffEltConstContext ------------------------------------------------------------------

ifccParser::Array_eltContext* ifccParser::AffEltConstContext::array_elt() {
  return getRuleContext<ifccParser::Array_eltContext>(0);
}

tree::TerminalNode* ifccParser::AffEltConstContext::CONST() {
  return getToken(ifccParser::CONST, 0);
}

ifccParser::AffEltConstContext::AffEltConstContext(AffContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::AffEltConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAffEltConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffConstContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::AffConstContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

tree::TerminalNode* ifccParser::AffConstContext::CONST() {
  return getToken(ifccParser::CONST, 0);
}

ifccParser::AffConstContext::AffConstContext(AffContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::AffConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAffConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffDecCharContext ------------------------------------------------------------------

ifccParser::TypeContext* ifccParser::AffDecCharContext::type() {
  return getRuleContext<ifccParser::TypeContext>(0);
}

tree::TerminalNode* ifccParser::AffDecCharContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

tree::TerminalNode* ifccParser::AffDecCharContext::CHAREXP() {
  return getToken(ifccParser::CHAREXP, 0);
}

ifccParser::AffDecCharContext::AffDecCharContext(AffContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::AffDecCharContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAffDecChar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffDecExprContext ------------------------------------------------------------------

ifccParser::TypeContext* ifccParser::AffDecExprContext::type() {
  return getRuleContext<ifccParser::TypeContext>(0);
}

tree::TerminalNode* ifccParser::AffDecExprContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::ExprContext* ifccParser::AffDecExprContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

ifccParser::AffDecExprContext::AffDecExprContext(AffContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::AffDecExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAffDecExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffDecArrayContext ------------------------------------------------------------------

ifccParser::TypeContext* ifccParser::AffDecArrayContext::type() {
  return getRuleContext<ifccParser::TypeContext>(0);
}

tree::TerminalNode* ifccParser::AffDecArrayContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

tree::TerminalNode* ifccParser::AffDecArrayContext::CONST() {
  return getToken(ifccParser::CONST, 0);
}

ifccParser::AffDecArrayContext::AffDecArrayContext(AffContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::AffDecArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAffDecArray(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffVarContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> ifccParser::AffVarContext::VAR() {
  return getTokens(ifccParser::VAR);
}

tree::TerminalNode* ifccParser::AffVarContext::VAR(size_t i) {
  return getToken(ifccParser::VAR, i);
}

ifccParser::AffVarContext::AffVarContext(AffContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::AffVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAffVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffDecConstContext ------------------------------------------------------------------

ifccParser::TypeContext* ifccParser::AffDecConstContext::type() {
  return getRuleContext<ifccParser::TypeContext>(0);
}

tree::TerminalNode* ifccParser::AffDecConstContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

tree::TerminalNode* ifccParser::AffDecConstContext::CONST() {
  return getToken(ifccParser::CONST, 0);
}

ifccParser::AffDecConstContext::AffDecConstContext(AffContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::AffDecConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAffDecConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffEltVarContext ------------------------------------------------------------------

ifccParser::Array_eltContext* ifccParser::AffEltVarContext::array_elt() {
  return getRuleContext<ifccParser::Array_eltContext>(0);
}

tree::TerminalNode* ifccParser::AffEltVarContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::AffEltVarContext::AffEltVarContext(AffContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::AffEltVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAffEltVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffEltExprContext ------------------------------------------------------------------

ifccParser::Array_eltContext* ifccParser::AffEltExprContext::array_elt() {
  return getRuleContext<ifccParser::Array_eltContext>(0);
}

ifccParser::ExprContext* ifccParser::AffEltExprContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

ifccParser::AffEltExprContext::AffEltExprContext(AffContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::AffEltExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAffEltExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffDecVarContext ------------------------------------------------------------------

ifccParser::TypeContext* ifccParser::AffDecVarContext::type() {
  return getRuleContext<ifccParser::TypeContext>(0);
}

std::vector<tree::TerminalNode *> ifccParser::AffDecVarContext::VAR() {
  return getTokens(ifccParser::VAR);
}

tree::TerminalNode* ifccParser::AffDecVarContext::VAR(size_t i) {
  return getToken(ifccParser::VAR, i);
}

ifccParser::AffDecVarContext::AffDecVarContext(AffContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::AffDecVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAffDecVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffCharContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::AffCharContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

tree::TerminalNode* ifccParser::AffCharContext::CHAREXP() {
  return getToken(ifccParser::CHAREXP, 0);
}

ifccParser::AffCharContext::AffCharContext(AffContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::AffCharContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAffChar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffExprContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::AffExprContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::ExprContext* ifccParser::AffExprContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

ifccParser::AffExprContext::AffExprContext(AffContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::AffExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAffExpr(this);
  else
    return visitor->visitChildren(this);
}
ifccParser::AffContext* ifccParser::aff() {
  AffContext *_localctx = _tracker.createInstance<AffContext>(_ctx, getState());
  enterRule(_localctx, 32, ifccParser::RuleAff);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(252);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffDecConstContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(202);
      type();
      setState(203);
      match(ifccParser::VAR);
      setState(204);
      match(ifccParser::T__20);
      setState(205);
      match(ifccParser::CONST);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffDecVarContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(207);
      type();
      setState(208);
      match(ifccParser::VAR);
      setState(209);
      match(ifccParser::T__20);
      setState(210);
      match(ifccParser::VAR);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffDecCharContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(212);
      type();
      setState(213);
      match(ifccParser::VAR);
      setState(214);
      match(ifccParser::T__20);
      setState(215);
      match(ifccParser::CHAREXP);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffDecArrayContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(217);
      type();
      setState(218);
      match(ifccParser::VAR);
      setState(219);
      match(ifccParser::T__21);
      setState(220);
      match(ifccParser::CONST);
      setState(221);
      match(ifccParser::T__22);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffDecExprContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(223);
      type();
      setState(224);
      match(ifccParser::VAR);
      setState(225);
      match(ifccParser::T__20);
      setState(226);
      expr(0);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffVarContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(228);
      match(ifccParser::VAR);
      setState(229);
      match(ifccParser::T__20);
      setState(230);
      match(ifccParser::VAR);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffConstContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(231);
      match(ifccParser::VAR);
      setState(232);
      match(ifccParser::T__20);
      setState(233);
      match(ifccParser::CONST);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffCharContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(234);
      match(ifccParser::VAR);
      setState(235);
      match(ifccParser::T__20);
      setState(236);
      match(ifccParser::CHAREXP);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffExprContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(237);
      match(ifccParser::VAR);
      setState(238);
      match(ifccParser::T__20);
      setState(239);
      expr(0);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffEltVarContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(240);
      array_elt();
      setState(241);
      match(ifccParser::T__20);
      setState(242);
      match(ifccParser::VAR);
      break;
    }

    case 11: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffEltConstContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(244);
      array_elt();
      setState(245);
      match(ifccParser::T__20);
      setState(246);
      match(ifccParser::CONST);
      break;
    }

    case 12: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffEltExprContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(248);
      array_elt();
      setState(249);
      match(ifccParser::T__20);
      setState(250);
      expr(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarsGContext ------------------------------------------------------------------

ifccParser::VarsGContext::VarsGContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::VarsGContext::getRuleIndex() const {
  return ifccParser::RuleVarsG;
}

void ifccParser::VarsGContext::copyFrom(VarsGContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LastDecGContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::LastDecGContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::LastDecGContext::LastDecGContext(VarsGContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::LastDecGContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitLastDecG(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DecGMultContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::DecGMultContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::VarsGContext* ifccParser::DecGMultContext::varsG() {
  return getRuleContext<ifccParser::VarsGContext>(0);
}

ifccParser::DecGMultContext::DecGMultContext(VarsGContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::DecGMultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitDecGMult(this);
  else
    return visitor->visitChildren(this);
}
ifccParser::VarsGContext* ifccParser::varsG() {
  VarsGContext *_localctx = _tracker.createInstance<VarsGContext>(_ctx, getState());
  enterRule(_localctx, 34, ifccParser::RuleVarsG);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(258);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VarsGContext *>(_tracker.createInstance<ifccParser::DecGMultContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(254);
      match(ifccParser::VAR);
      setState(255);
      match(ifccParser::T__6);
      setState(256);
      varsG();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VarsGContext *>(_tracker.createInstance<ifccParser::LastDecGContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(257);
      match(ifccParser::VAR);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecGlobalContext ------------------------------------------------------------------

ifccParser::DecGlobalContext::DecGlobalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::DecGlobalContext::getRuleIndex() const {
  return ifccParser::RuleDecGlobal;
}

void ifccParser::DecGlobalContext::copyFrom(DecGlobalContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DecGAffCharContext ------------------------------------------------------------------

ifccParser::TypeContext* ifccParser::DecGAffCharContext::type() {
  return getRuleContext<ifccParser::TypeContext>(0);
}

tree::TerminalNode* ifccParser::DecGAffCharContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

tree::TerminalNode* ifccParser::DecGAffCharContext::CHAREXP() {
  return getToken(ifccParser::CHAREXP, 0);
}

ifccParser::DecGAffCharContext::DecGAffCharContext(DecGlobalContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::DecGAffCharContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitDecGAffChar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DecGContext ------------------------------------------------------------------

ifccParser::TypeContext* ifccParser::DecGContext::type() {
  return getRuleContext<ifccParser::TypeContext>(0);
}

ifccParser::VarsGContext* ifccParser::DecGContext::varsG() {
  return getRuleContext<ifccParser::VarsGContext>(0);
}

ifccParser::DecGContext::DecGContext(DecGlobalContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::DecGContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitDecG(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DecGAffConstContext ------------------------------------------------------------------

ifccParser::TypeContext* ifccParser::DecGAffConstContext::type() {
  return getRuleContext<ifccParser::TypeContext>(0);
}

tree::TerminalNode* ifccParser::DecGAffConstContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

tree::TerminalNode* ifccParser::DecGAffConstContext::CONST() {
  return getToken(ifccParser::CONST, 0);
}

ifccParser::DecGAffConstContext::DecGAffConstContext(DecGlobalContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::DecGAffConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitDecGAffConst(this);
  else
    return visitor->visitChildren(this);
}
ifccParser::DecGlobalContext* ifccParser::decGlobal() {
  DecGlobalContext *_localctx = _tracker.createInstance<DecGlobalContext>(_ctx, getState());
  enterRule(_localctx, 36, ifccParser::RuleDecGlobal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(273);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<DecGlobalContext *>(_tracker.createInstance<ifccParser::DecGContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(260);
      type();
      setState(261);
      varsG();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<DecGlobalContext *>(_tracker.createInstance<ifccParser::DecGAffConstContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(263);
      type();
      setState(264);
      match(ifccParser::VAR);
      setState(265);
      match(ifccParser::T__20);
      setState(266);
      match(ifccParser::CONST);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<DecGlobalContext *>(_tracker.createInstance<ifccParser::DecGAffCharContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(268);
      type();
      setState(269);
      match(ifccParser::VAR);
      setState(270);
      match(ifccParser::T__20);
      setState(271);
      match(ifccParser::CHAREXP);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfLoopContext ------------------------------------------------------------------

ifccParser::IfLoopContext::IfLoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::IfLoopContext::getRuleIndex() const {
  return ifccParser::RuleIfLoop;
}

void ifccParser::IfLoopContext::copyFrom(IfLoopContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IfWithElseContext ------------------------------------------------------------------

ifccParser::TestExprContext* ifccParser::IfWithElseContext::testExpr() {
  return getRuleContext<ifccParser::TestExprContext>(0);
}

std::vector<ifccParser::BlocContext *> ifccParser::IfWithElseContext::bloc() {
  return getRuleContexts<ifccParser::BlocContext>();
}

ifccParser::BlocContext* ifccParser::IfWithElseContext::bloc(size_t i) {
  return getRuleContext<ifccParser::BlocContext>(i);
}

ifccParser::IfWithElseContext::IfWithElseContext(IfLoopContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::IfWithElseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitIfWithElse(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfNoElseContext ------------------------------------------------------------------

ifccParser::TestExprContext* ifccParser::IfNoElseContext::testExpr() {
  return getRuleContext<ifccParser::TestExprContext>(0);
}

ifccParser::BlocContext* ifccParser::IfNoElseContext::bloc() {
  return getRuleContext<ifccParser::BlocContext>(0);
}

ifccParser::IfNoElseContext::IfNoElseContext(IfLoopContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::IfNoElseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitIfNoElse(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfElseIfContext ------------------------------------------------------------------

ifccParser::TestExprContext* ifccParser::IfElseIfContext::testExpr() {
  return getRuleContext<ifccParser::TestExprContext>(0);
}

ifccParser::BlocContext* ifccParser::IfElseIfContext::bloc() {
  return getRuleContext<ifccParser::BlocContext>(0);
}

ifccParser::IfLoopContext* ifccParser::IfElseIfContext::ifLoop() {
  return getRuleContext<ifccParser::IfLoopContext>(0);
}

ifccParser::IfElseIfContext::IfElseIfContext(IfLoopContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::IfElseIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitIfElseIf(this);
  else
    return visitor->visitChildren(this);
}
ifccParser::IfLoopContext* ifccParser::ifLoop() {
  IfLoopContext *_localctx = _tracker.createInstance<IfLoopContext>(_ctx, getState());
  enterRule(_localctx, 38, ifccParser::RuleIfLoop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(297);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<IfLoopContext *>(_tracker.createInstance<ifccParser::IfNoElseContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(275);
      match(ifccParser::T__23);
      setState(276);
      match(ifccParser::T__4);
      setState(277);
      testExpr();
      setState(278);
      match(ifccParser::T__5);
      setState(279);
      bloc();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<IfLoopContext *>(_tracker.createInstance<ifccParser::IfWithElseContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(281);
      match(ifccParser::T__23);
      setState(282);
      match(ifccParser::T__4);
      setState(283);
      testExpr();
      setState(284);
      match(ifccParser::T__5);
      setState(285);
      bloc();
      setState(286);
      match(ifccParser::T__24);
      setState(287);
      bloc();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<IfLoopContext *>(_tracker.createInstance<ifccParser::IfElseIfContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(289);
      match(ifccParser::T__23);
      setState(290);
      match(ifccParser::T__4);
      setState(291);
      testExpr();
      setState(292);
      match(ifccParser::T__5);
      setState(293);
      bloc();
      setState(294);
      match(ifccParser::T__24);
      setState(295);
      ifLoop();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileLoopContext ------------------------------------------------------------------

ifccParser::WhileLoopContext::WhileLoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::TestExprContext* ifccParser::WhileLoopContext::testExpr() {
  return getRuleContext<ifccParser::TestExprContext>(0);
}

ifccParser::BlocContext* ifccParser::WhileLoopContext::bloc() {
  return getRuleContext<ifccParser::BlocContext>(0);
}


size_t ifccParser::WhileLoopContext::getRuleIndex() const {
  return ifccParser::RuleWhileLoop;
}

antlrcpp::Any ifccParser::WhileLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitWhileLoop(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::WhileLoopContext* ifccParser::whileLoop() {
  WhileLoopContext *_localctx = _tracker.createInstance<WhileLoopContext>(_ctx, getState());
  enterRule(_localctx, 40, ifccParser::RuleWhileLoop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(299);
    match(ifccParser::T__25);
    setState(300);
    match(ifccParser::T__4);
    setState(301);
    testExpr();
    setState(302);
    match(ifccParser::T__5);
    setState(303);
    bloc();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RetContext ------------------------------------------------------------------

ifccParser::RetContext::RetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::RetContext::getRuleIndex() const {
  return ifccParser::RuleRet;
}

void ifccParser::RetContext::copyFrom(RetContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- RetConstContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::RetConstContext::RET() {
  return getToken(ifccParser::RET, 0);
}

tree::TerminalNode* ifccParser::RetConstContext::CONST() {
  return getToken(ifccParser::CONST, 0);
}

ifccParser::RetConstContext::RetConstContext(RetContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::RetConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitRetConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RetExprContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::RetExprContext::RET() {
  return getToken(ifccParser::RET, 0);
}

ifccParser::ExprContext* ifccParser::RetExprContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

ifccParser::RetExprContext::RetExprContext(RetContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::RetExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitRetExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RetVarContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::RetVarContext::RET() {
  return getToken(ifccParser::RET, 0);
}

tree::TerminalNode* ifccParser::RetVarContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::RetVarContext::RetVarContext(RetContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::RetVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitRetVar(this);
  else
    return visitor->visitChildren(this);
}
ifccParser::RetContext* ifccParser::ret() {
  RetContext *_localctx = _tracker.createInstance<RetContext>(_ctx, getState());
  enterRule(_localctx, 42, ifccParser::RuleRet);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(311);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<RetContext *>(_tracker.createInstance<ifccParser::RetVarContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(305);
      match(ifccParser::RET);
      setState(306);
      match(ifccParser::VAR);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<RetContext *>(_tracker.createInstance<ifccParser::RetConstContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(307);
      match(ifccParser::RET);
      setState(308);
      match(ifccParser::CONST);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<RetContext *>(_tracker.createInstance<ifccParser::RetExprContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(309);
      match(ifccParser::RET);
      setState(310);
      expr(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

ifccParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::TypeContext::INT() {
  return getToken(ifccParser::INT, 0);
}

tree::TerminalNode* ifccParser::TypeContext::CHAR() {
  return getToken(ifccParser::CHAR, 0);
}


size_t ifccParser::TypeContext::getRuleIndex() const {
  return ifccParser::RuleType;
}

antlrcpp::Any ifccParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::TypeContext* ifccParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 44, ifccParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(313);
    _la = _input->LA(1);
    if (!(_la == ifccParser::INT

    || _la == ifccParser::CHAR)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncTypeContext ------------------------------------------------------------------

ifccParser::FuncTypeContext::FuncTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::FuncTypeContext::INT() {
  return getToken(ifccParser::INT, 0);
}

tree::TerminalNode* ifccParser::FuncTypeContext::CHAR() {
  return getToken(ifccParser::CHAR, 0);
}


size_t ifccParser::FuncTypeContext::getRuleIndex() const {
  return ifccParser::RuleFuncType;
}

antlrcpp::Any ifccParser::FuncTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitFuncType(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::FuncTypeContext* ifccParser::funcType() {
  FuncTypeContext *_localctx = _tracker.createInstance<FuncTypeContext>(_ctx, getState());
  enterRule(_localctx, 46, ifccParser::RuleFuncType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(315);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ifccParser::T__26)
      | (1ULL << ifccParser::INT)
      | (1ULL << ifccParser::CHAR))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_eltContext ------------------------------------------------------------------

ifccParser::Array_eltContext::Array_eltContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::Array_eltContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

tree::TerminalNode* ifccParser::Array_eltContext::CONST() {
  return getToken(ifccParser::CONST, 0);
}


size_t ifccParser::Array_eltContext::getRuleIndex() const {
  return ifccParser::RuleArray_elt;
}

antlrcpp::Any ifccParser::Array_eltContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitArray_elt(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::Array_eltContext* ifccParser::array_elt() {
  Array_eltContext *_localctx = _tracker.createInstance<Array_eltContext>(_ctx, getState());
  enterRule(_localctx, 48, ifccParser::RuleArray_elt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(317);
    match(ifccParser::VAR);
    setState(318);
    match(ifccParser::T__21);
    setState(319);
    match(ifccParser::CONST);
    setState(320);
    match(ifccParser::T__22);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool ifccParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 12: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ifccParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 11);
    case 1: return precpred(_ctx, 8);
    case 2: return precpred(_ctx, 7);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> ifccParser::_decisionToDFA;
atn::PredictionContextCache ifccParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ifccParser::_atn;
std::vector<uint16_t> ifccParser::_serializedATN;

std::vector<std::string> ifccParser::_ruleNames = {
  "axiom", "globalVariables", "bloc", "blocRet", "prog", "functions", "funcDec", 
  "funcCall", "argsDec", "args", "statements", "statement", "expr", "testExpr", 
  "vars", "dec", "aff", "varsG", "decGlobal", "ifLoop", "whileLoop", "ret", 
  "type", "funcType", "array_elt"
};

std::vector<std::string> ifccParser::_literalNames = {
  "", "';'", "'{'", "'}'", "'main'", "'('", "')'", "','", "'|'", "'&'", 
  "'^'", "'-'", "'!'", "'*'", "'+'", "'<='", "'>='", "'<'", "'>'", "'=='", 
  "'!='", "'='", "'['", "']'", "'if'", "'else'", "'while'", "'void'", "'int'", 
  "'char'", "'return'"
};

std::vector<std::string> ifccParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "INT", "CHAR", "RET", "CHAREXP", 
  "VAR", "CONST", "COMMENT", "DIRECTIVE", "WS"
};

dfa::Vocabulary ifccParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ifccParser::_tokenNames;

ifccParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x26, 0x145, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x5, 0x3, 0x3f, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x55, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x65, 0xa, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x5, 0xa, 0x75, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x80, 0xa, 
    0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x86, 0xa, 0xc, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x5, 0xd, 0x96, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xa6, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x7, 0xe, 0xb1, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xb4, 0xb, 0xe, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xc2, 0xa, 0xf, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xc8, 0xa, 0x10, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x5, 0x12, 0xff, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x5, 0x13, 0x105, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x114, 0xa, 0x14, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x12c, 0xa, 0x15, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x13a, 
    0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x2, 0x3, 0x1a, 0x1b, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 
    0x2, 0x8, 0x3, 0x2, 0xa, 0xc, 0x4, 0x2, 0xd, 0xd, 0x10, 0x10, 0x3, 0x2, 
    0x11, 0x14, 0x3, 0x2, 0x15, 0x16, 0x3, 0x2, 0x1e, 0x1f, 0x3, 0x2, 0x1d, 
    0x1f, 0x2, 0x15a, 0x2, 0x34, 0x3, 0x2, 0x2, 0x2, 0x4, 0x3e, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x40, 0x3, 0x2, 0x2, 0x2, 0x8, 0x44, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0x49, 0x3, 0x2, 0x2, 0x2, 0xc, 0x54, 0x3, 0x2, 0x2, 0x2, 0xe, 0x64, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x66, 0x3, 0x2, 0x2, 0x2, 0x12, 0x74, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x16, 0x85, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x95, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xa5, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xc7, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x22, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0x104, 0x3, 0x2, 0x2, 0x2, 0x26, 0x113, 0x3, 0x2, 0x2, 0x2, 0x28, 0x12b, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x139, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x30, 0x13d, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x5, 0x4, 0x3, 
    0x2, 0x35, 0x36, 0x5, 0xc, 0x7, 0x2, 0x36, 0x37, 0x5, 0xa, 0x6, 0x2, 
    0x37, 0x38, 0x5, 0xc, 0x7, 0x2, 0x38, 0x3, 0x3, 0x2, 0x2, 0x2, 0x39, 
    0x3f, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x5, 0x26, 0x14, 0x2, 0x3b, 0x3c, 
    0x7, 0x3, 0x2, 0x2, 0x3c, 0x3d, 0x5, 0x4, 0x3, 0x2, 0x3d, 0x3f, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3a, 0x3, 0x2, 
    0x2, 0x2, 0x3f, 0x5, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x7, 0x4, 0x2, 
    0x2, 0x41, 0x42, 0x5, 0x16, 0xc, 0x2, 0x42, 0x43, 0x7, 0x5, 0x2, 0x2, 
    0x43, 0x7, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x7, 0x4, 0x2, 0x2, 0x45, 
    0x46, 0x5, 0x16, 0xc, 0x2, 0x46, 0x47, 0x5, 0x2c, 0x17, 0x2, 0x47, 0x48, 
    0x7, 0x5, 0x2, 0x2, 0x48, 0x9, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x7, 
    0x1e, 0x2, 0x2, 0x4a, 0x4b, 0x7, 0x6, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x7, 
    0x2, 0x2, 0x4c, 0x4d, 0x7, 0x8, 0x2, 0x2, 0x4d, 0x4e, 0x5, 0x6, 0x4, 
    0x2, 0x4e, 0xb, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x55, 0x5, 0xe, 0x8, 0x2, 
    0x50, 0x51, 0x5, 0xe, 0x8, 0x2, 0x51, 0x52, 0x5, 0xc, 0x7, 0x2, 0x52, 
    0x55, 0x3, 0x2, 0x2, 0x2, 0x53, 0x55, 0x3, 0x2, 0x2, 0x2, 0x54, 0x4f, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x50, 0x3, 0x2, 0x2, 0x2, 0x54, 0x53, 0x3, 
    0x2, 0x2, 0x2, 0x55, 0xd, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x5, 0x30, 
    0x19, 0x2, 0x57, 0x58, 0x7, 0x22, 0x2, 0x2, 0x58, 0x59, 0x7, 0x7, 0x2, 
    0x2, 0x59, 0x5a, 0x5, 0x12, 0xa, 0x2, 0x5a, 0x5b, 0x7, 0x8, 0x2, 0x2, 
    0x5b, 0x5c, 0x5, 0x6, 0x4, 0x2, 0x5c, 0x65, 0x3, 0x2, 0x2, 0x2, 0x5d, 
    0x5e, 0x5, 0x30, 0x19, 0x2, 0x5e, 0x5f, 0x7, 0x22, 0x2, 0x2, 0x5f, 0x60, 
    0x7, 0x7, 0x2, 0x2, 0x60, 0x61, 0x5, 0x12, 0xa, 0x2, 0x61, 0x62, 0x7, 
    0x8, 0x2, 0x2, 0x62, 0x63, 0x7, 0x3, 0x2, 0x2, 0x63, 0x65, 0x3, 0x2, 
    0x2, 0x2, 0x64, 0x56, 0x3, 0x2, 0x2, 0x2, 0x64, 0x5d, 0x3, 0x2, 0x2, 
    0x2, 0x65, 0xf, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x7, 0x22, 0x2, 0x2, 
    0x67, 0x68, 0x7, 0x7, 0x2, 0x2, 0x68, 0x69, 0x5, 0x14, 0xb, 0x2, 0x69, 
    0x6a, 0x7, 0x8, 0x2, 0x2, 0x6a, 0x11, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 
    0x5, 0x2e, 0x18, 0x2, 0x6c, 0x6d, 0x7, 0x22, 0x2, 0x2, 0x6d, 0x6e, 0x7, 
    0x9, 0x2, 0x2, 0x6e, 0x6f, 0x5, 0x12, 0xa, 0x2, 0x6f, 0x75, 0x3, 0x2, 
    0x2, 0x2, 0x70, 0x71, 0x5, 0x2e, 0x18, 0x2, 0x71, 0x72, 0x7, 0x22, 0x2, 
    0x2, 0x72, 0x75, 0x3, 0x2, 0x2, 0x2, 0x73, 0x75, 0x3, 0x2, 0x2, 0x2, 
    0x74, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x74, 0x70, 0x3, 0x2, 0x2, 0x2, 0x74, 
    0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 0x13, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 
    0x7, 0x22, 0x2, 0x2, 0x77, 0x78, 0x7, 0x9, 0x2, 0x2, 0x78, 0x80, 0x5, 
    0x14, 0xb, 0x2, 0x79, 0x7a, 0x7, 0x23, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0x9, 
    0x2, 0x2, 0x7b, 0x80, 0x5, 0x14, 0xb, 0x2, 0x7c, 0x80, 0x7, 0x22, 0x2, 
    0x2, 0x7d, 0x80, 0x7, 0x23, 0x2, 0x2, 0x7e, 0x80, 0x3, 0x2, 0x2, 0x2, 
    0x7f, 0x76, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7f, 
    0x7c, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7e, 
    0x3, 0x2, 0x2, 0x2, 0x80, 0x15, 0x3, 0x2, 0x2, 0x2, 0x81, 0x86, 0x5, 
    0x18, 0xd, 0x2, 0x82, 0x83, 0x5, 0x18, 0xd, 0x2, 0x83, 0x84, 0x5, 0x16, 
    0xc, 0x2, 0x84, 0x86, 0x3, 0x2, 0x2, 0x2, 0x85, 0x81, 0x3, 0x2, 0x2, 
    0x2, 0x85, 0x82, 0x3, 0x2, 0x2, 0x2, 0x86, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0x87, 0x88, 0x5, 0x20, 0x11, 0x2, 0x88, 0x89, 0x7, 0x3, 0x2, 0x2, 0x89, 
    0x96, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x5, 0x22, 0x12, 0x2, 0x8b, 0x8c, 
    0x7, 0x3, 0x2, 0x2, 0x8c, 0x96, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x5, 
    0x2c, 0x17, 0x2, 0x8e, 0x8f, 0x7, 0x3, 0x2, 0x2, 0x8f, 0x96, 0x3, 0x2, 
    0x2, 0x2, 0x90, 0x96, 0x5, 0x28, 0x15, 0x2, 0x91, 0x96, 0x5, 0x2a, 0x16, 
    0x2, 0x92, 0x93, 0x5, 0x10, 0x9, 0x2, 0x93, 0x94, 0x7, 0x3, 0x2, 0x2, 
    0x94, 0x96, 0x3, 0x2, 0x2, 0x2, 0x95, 0x87, 0x3, 0x2, 0x2, 0x2, 0x95, 
    0x8a, 0x3, 0x2, 0x2, 0x2, 0x95, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x95, 0x90, 
    0x3, 0x2, 0x2, 0x2, 0x95, 0x91, 0x3, 0x2, 0x2, 0x2, 0x95, 0x92, 0x3, 
    0x2, 0x2, 0x2, 0x96, 0x19, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x8, 0xe, 
    0x1, 0x2, 0x98, 0x99, 0x7, 0xd, 0x2, 0x2, 0x99, 0xa6, 0x5, 0x1a, 0xe, 
    0xc, 0x9a, 0x9b, 0x7, 0xe, 0x2, 0x2, 0x9b, 0xa6, 0x5, 0x1a, 0xe, 0xb, 
    0x9c, 0x9d, 0x7, 0x7, 0x2, 0x2, 0x9d, 0x9e, 0x5, 0x1a, 0xe, 0x2, 0x9e, 
    0x9f, 0x7, 0x8, 0x2, 0x2, 0x9f, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa6, 
    0x5, 0x10, 0x9, 0x2, 0xa1, 0xa6, 0x7, 0x23, 0x2, 0x2, 0xa2, 0xa6, 0x7, 
    0x22, 0x2, 0x2, 0xa3, 0xa6, 0x7, 0x21, 0x2, 0x2, 0xa4, 0xa6, 0x5, 0x32, 
    0x1a, 0x2, 0xa5, 0x97, 0x3, 0x2, 0x2, 0x2, 0xa5, 0x9a, 0x3, 0x2, 0x2, 
    0x2, 0xa5, 0x9c, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa0, 0x3, 0x2, 0x2, 0x2, 
    0xa5, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa5, 
    0xa3, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xb2, 
    0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0xc, 0xd, 0x2, 0x2, 0xa8, 0xa9, 0x9, 
    0x2, 0x2, 0x2, 0xa9, 0xb1, 0x5, 0x1a, 0xe, 0xe, 0xaa, 0xab, 0xc, 0xa, 
    0x2, 0x2, 0xab, 0xac, 0x7, 0xf, 0x2, 0x2, 0xac, 0xb1, 0x5, 0x1a, 0xe, 
    0xb, 0xad, 0xae, 0xc, 0x9, 0x2, 0x2, 0xae, 0xaf, 0x9, 0x3, 0x2, 0x2, 
    0xaf, 0xb1, 0x5, 0x1a, 0xe, 0xa, 0xb0, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xb0, 
    0xaa, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xad, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb4, 
    0x3, 0x2, 0x2, 0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x3, 
    0x2, 0x2, 0x2, 0xb3, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb2, 0x3, 0x2, 
    0x2, 0x2, 0xb5, 0xb6, 0x5, 0x1a, 0xe, 0x2, 0xb6, 0xb7, 0x9, 0x4, 0x2, 
    0x2, 0xb7, 0xb8, 0x5, 0x1a, 0xe, 0x2, 0xb8, 0xc2, 0x3, 0x2, 0x2, 0x2, 
    0xb9, 0xba, 0x5, 0x1a, 0xe, 0x2, 0xba, 0xbb, 0x9, 0x5, 0x2, 0x2, 0xbb, 
    0xbc, 0x5, 0x1a, 0xe, 0x2, 0xbc, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 
    0x7, 0x7, 0x2, 0x2, 0xbe, 0xbf, 0x5, 0x1c, 0xf, 0x2, 0xbf, 0xc0, 0x7, 
    0x8, 0x2, 0x2, 0xc0, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xb5, 0x3, 0x2, 
    0x2, 0x2, 0xc1, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xbd, 0x3, 0x2, 0x2, 
    0x2, 0xc2, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x7, 0x22, 0x2, 0x2, 
    0xc4, 0xc5, 0x7, 0x9, 0x2, 0x2, 0xc5, 0xc8, 0x5, 0x1e, 0x10, 0x2, 0xc6, 
    0xc8, 0x7, 0x22, 0x2, 0x2, 0xc7, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc6, 
    0x3, 0x2, 0x2, 0x2, 0xc8, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x5, 
    0x2e, 0x18, 0x2, 0xca, 0xcb, 0x5, 0x1e, 0x10, 0x2, 0xcb, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0xcc, 0xcd, 0x5, 0x2e, 0x18, 0x2, 0xcd, 0xce, 0x7, 0x22, 
    0x2, 0x2, 0xce, 0xcf, 0x7, 0x17, 0x2, 0x2, 0xcf, 0xd0, 0x7, 0x23, 0x2, 
    0x2, 0xd0, 0xff, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x5, 0x2e, 0x18, 0x2, 
    0xd2, 0xd3, 0x7, 0x22, 0x2, 0x2, 0xd3, 0xd4, 0x7, 0x17, 0x2, 0x2, 0xd4, 
    0xd5, 0x7, 0x22, 0x2, 0x2, 0xd5, 0xff, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 
    0x5, 0x2e, 0x18, 0x2, 0xd7, 0xd8, 0x7, 0x22, 0x2, 0x2, 0xd8, 0xd9, 0x7, 
    0x17, 0x2, 0x2, 0xd9, 0xda, 0x7, 0x21, 0x2, 0x2, 0xda, 0xff, 0x3, 0x2, 
    0x2, 0x2, 0xdb, 0xdc, 0x5, 0x2e, 0x18, 0x2, 0xdc, 0xdd, 0x7, 0x22, 0x2, 
    0x2, 0xdd, 0xde, 0x7, 0x18, 0x2, 0x2, 0xde, 0xdf, 0x7, 0x23, 0x2, 0x2, 
    0xdf, 0xe0, 0x7, 0x19, 0x2, 0x2, 0xe0, 0xff, 0x3, 0x2, 0x2, 0x2, 0xe1, 
    0xe2, 0x5, 0x2e, 0x18, 0x2, 0xe2, 0xe3, 0x7, 0x22, 0x2, 0x2, 0xe3, 0xe4, 
    0x7, 0x17, 0x2, 0x2, 0xe4, 0xe5, 0x5, 0x1a, 0xe, 0x2, 0xe5, 0xff, 0x3, 
    0x2, 0x2, 0x2, 0xe6, 0xe7, 0x7, 0x22, 0x2, 0x2, 0xe7, 0xe8, 0x7, 0x17, 
    0x2, 0x2, 0xe8, 0xff, 0x7, 0x22, 0x2, 0x2, 0xe9, 0xea, 0x7, 0x22, 0x2, 
    0x2, 0xea, 0xeb, 0x7, 0x17, 0x2, 0x2, 0xeb, 0xff, 0x7, 0x23, 0x2, 0x2, 
    0xec, 0xed, 0x7, 0x22, 0x2, 0x2, 0xed, 0xee, 0x7, 0x17, 0x2, 0x2, 0xee, 
    0xff, 0x7, 0x21, 0x2, 0x2, 0xef, 0xf0, 0x7, 0x22, 0x2, 0x2, 0xf0, 0xf1, 
    0x7, 0x17, 0x2, 0x2, 0xf1, 0xff, 0x5, 0x1a, 0xe, 0x2, 0xf2, 0xf3, 0x5, 
    0x32, 0x1a, 0x2, 0xf3, 0xf4, 0x7, 0x17, 0x2, 0x2, 0xf4, 0xf5, 0x7, 0x22, 
    0x2, 0x2, 0xf5, 0xff, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x5, 0x32, 0x1a, 
    0x2, 0xf7, 0xf8, 0x7, 0x17, 0x2, 0x2, 0xf8, 0xf9, 0x7, 0x23, 0x2, 0x2, 
    0xf9, 0xff, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x5, 0x32, 0x1a, 0x2, 0xfb, 
    0xfc, 0x7, 0x17, 0x2, 0x2, 0xfc, 0xfd, 0x5, 0x1a, 0xe, 0x2, 0xfd, 0xff, 
    0x3, 0x2, 0x2, 0x2, 0xfe, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xd1, 0x3, 
    0x2, 0x2, 0x2, 0xfe, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xdb, 0x3, 0x2, 
    0x2, 0x2, 0xfe, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xe6, 0x3, 0x2, 0x2, 
    0x2, 0xfe, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xec, 0x3, 0x2, 0x2, 0x2, 
    0xfe, 0xef, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xfe, 
    0xf6, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xff, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 0x7, 0x22, 0x2, 0x2, 0x101, 0x102, 
    0x7, 0x9, 0x2, 0x2, 0x102, 0x105, 0x5, 0x24, 0x13, 0x2, 0x103, 0x105, 
    0x7, 0x22, 0x2, 0x2, 0x104, 0x100, 0x3, 0x2, 0x2, 0x2, 0x104, 0x103, 
    0x3, 0x2, 0x2, 0x2, 0x105, 0x25, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 0x5, 
    0x2e, 0x18, 0x2, 0x107, 0x108, 0x5, 0x24, 0x13, 0x2, 0x108, 0x114, 0x3, 
    0x2, 0x2, 0x2, 0x109, 0x10a, 0x5, 0x2e, 0x18, 0x2, 0x10a, 0x10b, 0x7, 
    0x22, 0x2, 0x2, 0x10b, 0x10c, 0x7, 0x17, 0x2, 0x2, 0x10c, 0x10d, 0x7, 
    0x23, 0x2, 0x2, 0x10d, 0x114, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x5, 
    0x2e, 0x18, 0x2, 0x10f, 0x110, 0x7, 0x22, 0x2, 0x2, 0x110, 0x111, 0x7, 
    0x17, 0x2, 0x2, 0x111, 0x112, 0x7, 0x21, 0x2, 0x2, 0x112, 0x114, 0x3, 
    0x2, 0x2, 0x2, 0x113, 0x106, 0x3, 0x2, 0x2, 0x2, 0x113, 0x109, 0x3, 
    0x2, 0x2, 0x2, 0x113, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x114, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x115, 0x116, 0x7, 0x1a, 0x2, 0x2, 0x116, 0x117, 0x7, 0x7, 
    0x2, 0x2, 0x117, 0x118, 0x5, 0x1c, 0xf, 0x2, 0x118, 0x119, 0x7, 0x8, 
    0x2, 0x2, 0x119, 0x11a, 0x5, 0x6, 0x4, 0x2, 0x11a, 0x12c, 0x3, 0x2, 
    0x2, 0x2, 0x11b, 0x11c, 0x7, 0x1a, 0x2, 0x2, 0x11c, 0x11d, 0x7, 0x7, 
    0x2, 0x2, 0x11d, 0x11e, 0x5, 0x1c, 0xf, 0x2, 0x11e, 0x11f, 0x7, 0x8, 
    0x2, 0x2, 0x11f, 0x120, 0x5, 0x6, 0x4, 0x2, 0x120, 0x121, 0x7, 0x1b, 
    0x2, 0x2, 0x121, 0x122, 0x5, 0x6, 0x4, 0x2, 0x122, 0x12c, 0x3, 0x2, 
    0x2, 0x2, 0x123, 0x124, 0x7, 0x1a, 0x2, 0x2, 0x124, 0x125, 0x7, 0x7, 
    0x2, 0x2, 0x125, 0x126, 0x5, 0x1c, 0xf, 0x2, 0x126, 0x127, 0x7, 0x8, 
    0x2, 0x2, 0x127, 0x128, 0x5, 0x6, 0x4, 0x2, 0x128, 0x129, 0x7, 0x1b, 
    0x2, 0x2, 0x129, 0x12a, 0x5, 0x28, 0x15, 0x2, 0x12a, 0x12c, 0x3, 0x2, 
    0x2, 0x2, 0x12b, 0x115, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x11b, 0x3, 0x2, 
    0x2, 0x2, 0x12b, 0x123, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0x12d, 0x12e, 0x7, 0x1c, 0x2, 0x2, 0x12e, 0x12f, 0x7, 0x7, 0x2, 
    0x2, 0x12f, 0x130, 0x5, 0x1c, 0xf, 0x2, 0x130, 0x131, 0x7, 0x8, 0x2, 
    0x2, 0x131, 0x132, 0x5, 0x6, 0x4, 0x2, 0x132, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0x133, 0x134, 0x7, 0x20, 0x2, 0x2, 0x134, 0x13a, 0x7, 0x22, 0x2, 0x2, 
    0x135, 0x136, 0x7, 0x20, 0x2, 0x2, 0x136, 0x13a, 0x7, 0x23, 0x2, 0x2, 
    0x137, 0x138, 0x7, 0x20, 0x2, 0x2, 0x138, 0x13a, 0x5, 0x1a, 0xe, 0x2, 
    0x139, 0x133, 0x3, 0x2, 0x2, 0x2, 0x139, 0x135, 0x3, 0x2, 0x2, 0x2, 
    0x139, 0x137, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x13b, 
    0x13c, 0x9, 0x6, 0x2, 0x2, 0x13c, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13e, 
    0x9, 0x7, 0x2, 0x2, 0x13e, 0x31, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x140, 0x7, 
    0x22, 0x2, 0x2, 0x140, 0x141, 0x7, 0x18, 0x2, 0x2, 0x141, 0x142, 0x7, 
    0x23, 0x2, 0x2, 0x142, 0x143, 0x7, 0x19, 0x2, 0x2, 0x143, 0x33, 0x3, 
    0x2, 0x2, 0x2, 0x13, 0x3e, 0x54, 0x64, 0x74, 0x7f, 0x85, 0x95, 0xa5, 
    0xb0, 0xb2, 0xc1, 0xc7, 0xfe, 0x104, 0x113, 0x12b, 0x139, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ifccParser::Initializer ifccParser::_init;
