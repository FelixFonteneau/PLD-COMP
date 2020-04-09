
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
    setState(36);
    prog();
   
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
    setState(43);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);

      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(39);
      decGlobal();
      setState(40);
      match(ifccParser::T__0);
      setState(41);
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
    setState(45);
    match(ifccParser::T__1);
    setState(46);
    statements();
    setState(47);
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

ifccParser::GlobalVariablesContext* ifccParser::ProgContext::globalVariables() {
  return getRuleContext<ifccParser::GlobalVariablesContext>(0);
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
  enterRule(_localctx, 6, ifccParser::RuleProg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49);
    globalVariables();
    setState(50);
    match(ifccParser::INT);
    setState(51);
    match(ifccParser::T__3);
    setState(52);
    match(ifccParser::T__4);
    setState(53);
    match(ifccParser::T__5);
    setState(54);
    bloc();
   
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
  enterRule(_localctx, 8, ifccParser::RuleStatements);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(60);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(56);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(57);
      statement();
      setState(58);
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
  enterRule(_localctx, 10, ifccParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(73);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::StatementDeclarationContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(62);
      dec();
      setState(63);
      match(ifccParser::T__0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::StatementAffectationContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(65);
      aff();
      setState(66);
      match(ifccParser::T__0);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::StatementReturnContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(68);
      ret();
      setState(69);
      match(ifccParser::T__0);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::BoucleIfContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(71);
      ifLoop();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::BoucleWhileContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(72);
      whileLoop();
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
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, ifccParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(87);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<MinusExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(76);
      match(ifccParser::T__9);
      setState(77);
      expr(8);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<NotExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(78);
      match(ifccParser::T__10);
      setState(79);
      expr(7);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ParExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(80);
      match(ifccParser::T__4);
      setState(81);
      expr(0);
      setState(82);
      match(ifccParser::T__5);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ConstExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(84);
      match(ifccParser::CONST);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<VarExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(85);
      match(ifccParser::VAR);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<ArrayExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(86);
      array_elt();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(100);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(98);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BitsExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(89);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(90);
          dynamic_cast<BitsExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << ifccParser::T__6)
            | (1ULL << ifccParser::T__7)
            | (1ULL << ifccParser::T__8))) != 0))) {
            dynamic_cast<BitsExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(91);
          expr(10);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MultiplicationExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(92);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(93);
          match(ifccParser::T__11);
          setState(94);
          expr(7);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AdditiveExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(95);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(96);
          dynamic_cast<AdditiveExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ifccParser::T__9

          || _la == ifccParser::T__12)) {
            dynamic_cast<AdditiveExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(97);
          expr(6);
          break;
        }

        } 
      }
      setState(102);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
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
//----------------- OrTestExprContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::OrTestExprContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::OrTestExprContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::OrTestExprContext::OrTestExprContext(TestExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::OrTestExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitOrTestExpr(this);
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
//----------------- AndTestExprContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::AndTestExprContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::AndTestExprContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::AndTestExprContext::AndTestExprContext(TestExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::AndTestExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAndTestExpr(this);
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
  enterRule(_localctx, 14, ifccParser::RuleTestExpr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(123);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<TestExprContext *>(_tracker.createInstance<ifccParser::RelationalTestExprContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(103);
      expr(0);
      setState(104);
      dynamic_cast<RelationalTestExprContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ifccParser::T__13)
        | (1ULL << ifccParser::T__14)
        | (1ULL << ifccParser::T__15)
        | (1ULL << ifccParser::T__16))) != 0))) {
        dynamic_cast<RelationalTestExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(105);
      expr(0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<TestExprContext *>(_tracker.createInstance<ifccParser::EqualityTestExprContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(107);
      expr(0);
      setState(108);
      dynamic_cast<EqualityTestExprContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == ifccParser::T__17

      || _la == ifccParser::T__18)) {
        dynamic_cast<EqualityTestExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(109);
      expr(0);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<TestExprContext *>(_tracker.createInstance<ifccParser::AndTestExprContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(111);
      expr(0);
      setState(112);
      match(ifccParser::T__19);
      setState(113);
      expr(0);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<TestExprContext *>(_tracker.createInstance<ifccParser::OrTestExprContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(115);
      expr(0);
      setState(116);
      match(ifccParser::T__20);
      setState(117);
      expr(0);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<TestExprContext *>(_tracker.createInstance<ifccParser::ParTestExprContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(119);
      match(ifccParser::T__4);
      setState(120);
      testExpr();
      setState(121);
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
  enterRule(_localctx, 16, ifccParser::RuleVars);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(129);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VarsContext *>(_tracker.createInstance<ifccParser::DeclMultContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(125);
      match(ifccParser::VAR);
      setState(126);
      match(ifccParser::T__21);
      setState(127);
      vars();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VarsContext *>(_tracker.createInstance<ifccParser::LastDeclContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(128);
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
  enterRule(_localctx, 18, ifccParser::RuleDec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    type();
    setState(132);
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
  enterRule(_localctx, 20, ifccParser::RuleAff);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(184);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffDecConstContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(134);
      type();
      setState(135);
      match(ifccParser::VAR);
      setState(136);
      match(ifccParser::T__22);
      setState(137);
      match(ifccParser::CONST);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffDecVarContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(139);
      type();
      setState(140);
      match(ifccParser::VAR);
      setState(141);
      match(ifccParser::T__22);
      setState(142);
      match(ifccParser::VAR);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffDecCharContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(144);
      type();
      setState(145);
      match(ifccParser::VAR);
      setState(146);
      match(ifccParser::T__22);
      setState(147);
      match(ifccParser::CHAREXP);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffDecArrayContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(149);
      type();
      setState(150);
      match(ifccParser::VAR);
      setState(151);
      match(ifccParser::T__23);
      setState(152);
      match(ifccParser::CONST);
      setState(153);
      match(ifccParser::T__24);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffDecExprContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(155);
      type();
      setState(156);
      match(ifccParser::VAR);
      setState(157);
      match(ifccParser::T__22);
      setState(158);
      expr(0);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffVarContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(160);
      match(ifccParser::VAR);
      setState(161);
      match(ifccParser::T__22);
      setState(162);
      match(ifccParser::VAR);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffConstContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(163);
      match(ifccParser::VAR);
      setState(164);
      match(ifccParser::T__22);
      setState(165);
      match(ifccParser::CONST);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffCharContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(166);
      match(ifccParser::VAR);
      setState(167);
      match(ifccParser::T__22);
      setState(168);
      match(ifccParser::CHAREXP);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffExprContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(169);
      match(ifccParser::VAR);
      setState(170);
      match(ifccParser::T__22);
      setState(171);
      expr(0);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffEltVarContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(172);
      array_elt();
      setState(173);
      match(ifccParser::T__22);
      setState(174);
      match(ifccParser::VAR);
      break;
    }

    case 11: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffEltConstContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(176);
      array_elt();
      setState(177);
      match(ifccParser::T__22);
      setState(178);
      match(ifccParser::CONST);
      break;
    }

    case 12: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffEltExprContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(180);
      array_elt();
      setState(181);
      match(ifccParser::T__22);
      setState(182);
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

ifccParser::VarsContext* ifccParser::DecGMultContext::vars() {
  return getRuleContext<ifccParser::VarsContext>(0);
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
  enterRule(_localctx, 22, ifccParser::RuleVarsG);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(190);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VarsGContext *>(_tracker.createInstance<ifccParser::DecGMultContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(186);
      match(ifccParser::VAR);
      setState(187);
      match(ifccParser::T__21);
      setState(188);
      vars();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VarsGContext *>(_tracker.createInstance<ifccParser::LastDecGContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(189);
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
  enterRule(_localctx, 24, ifccParser::RuleDecGlobal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(205);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<DecGlobalContext *>(_tracker.createInstance<ifccParser::DecGContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(192);
      type();
      setState(193);
      varsG();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<DecGlobalContext *>(_tracker.createInstance<ifccParser::DecGAffConstContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(195);
      type();
      setState(196);
      match(ifccParser::VAR);
      setState(197);
      match(ifccParser::T__22);
      setState(198);
      match(ifccParser::CONST);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<DecGlobalContext *>(_tracker.createInstance<ifccParser::DecGAffCharContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(200);
      type();
      setState(201);
      match(ifccParser::VAR);
      setState(202);
      match(ifccParser::T__22);
      setState(203);
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
  enterRule(_localctx, 26, ifccParser::RuleIfLoop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(229);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<IfLoopContext *>(_tracker.createInstance<ifccParser::IfNoElseContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(207);
      match(ifccParser::T__25);
      setState(208);
      match(ifccParser::T__4);
      setState(209);
      testExpr();
      setState(210);
      match(ifccParser::T__5);
      setState(211);
      bloc();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<IfLoopContext *>(_tracker.createInstance<ifccParser::IfWithElseContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(213);
      match(ifccParser::T__25);
      setState(214);
      match(ifccParser::T__4);
      setState(215);
      testExpr();
      setState(216);
      match(ifccParser::T__5);
      setState(217);
      bloc();
      setState(218);
      match(ifccParser::T__26);
      setState(219);
      bloc();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<IfLoopContext *>(_tracker.createInstance<ifccParser::IfElseIfContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(221);
      match(ifccParser::T__25);
      setState(222);
      match(ifccParser::T__4);
      setState(223);
      testExpr();
      setState(224);
      match(ifccParser::T__5);
      setState(225);
      bloc();
      setState(226);
      match(ifccParser::T__26);
      setState(227);
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
  enterRule(_localctx, 28, ifccParser::RuleWhileLoop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(231);
    match(ifccParser::T__27);
    setState(232);
    match(ifccParser::T__4);
    setState(233);
    testExpr();
    setState(234);
    match(ifccParser::T__5);
    setState(235);
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
  enterRule(_localctx, 30, ifccParser::RuleRet);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(243);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<RetContext *>(_tracker.createInstance<ifccParser::RetVarContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(237);
      match(ifccParser::RET);
      setState(238);
      match(ifccParser::VAR);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<RetContext *>(_tracker.createInstance<ifccParser::RetConstContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(239);
      match(ifccParser::RET);
      setState(240);
      match(ifccParser::CONST);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<RetContext *>(_tracker.createInstance<ifccParser::RetExprContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(241);
      match(ifccParser::RET);
      setState(242);
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
  enterRule(_localctx, 32, ifccParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
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
  enterRule(_localctx, 34, ifccParser::RuleArray_elt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    match(ifccParser::VAR);
    setState(248);
    match(ifccParser::T__23);
    setState(249);
    match(ifccParser::CONST);
    setState(250);
    match(ifccParser::T__24);
   
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
    case 6: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ifccParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 9);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);

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
  "axiom", "globalVariables", "bloc", "prog", "statements", "statement", 
  "expr", "testExpr", "vars", "dec", "aff", "varsG", "decGlobal", "ifLoop", 
  "whileLoop", "ret", "type", "array_elt"
};

std::vector<std::string> ifccParser::_literalNames = {
  "", "';'", "'{'", "'}'", "'main'", "'('", "')'", "'|'", "'&'", "'^'", 
  "'-'", "'!'", "'*'", "'+'", "'<='", "'>='", "'<'", "'>'", "'=='", "'!='", 
  "'&&'", "'||'", "','", "'='", "'['", "']'", "'if'", "'else'", "'while'", 
  "'int'", "'char'", "'return'"
};

std::vector<std::string> ifccParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "INT", "CHAR", "RET", "CHAREXP", 
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
    0x3, 0x27, 0xff, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x2e, 0xa, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x5, 0x6, 0x3f, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 
    0x7, 0x4c, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0x5a, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x65, 0xa, 0x8, 
    0xc, 0x8, 0xe, 0x8, 0x68, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x7e, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x84, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x5, 0xc, 0xbb, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x5, 0xd, 0xc1, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xd0, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 
    0xe8, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x5, 0x11, 0xf6, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x2, 0x3, 0xe, 0x14, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x20, 0x22, 0x24, 0x2, 0x7, 0x3, 0x2, 0x9, 0xb, 0x4, 0x2, 
    0xc, 0xc, 0xf, 0xf, 0x3, 0x2, 0x10, 0x13, 0x3, 0x2, 0x14, 0x15, 0x3, 
    0x2, 0x1f, 0x20, 0x2, 0x111, 0x2, 0x26, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x8, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x3e, 0x3, 0x2, 0x2, 0x2, 0xc, 0x4b, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x59, 0x3, 0x2, 0x2, 0x2, 0x10, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x83, 0x3, 0x2, 0x2, 0x2, 0x14, 0x85, 0x3, 0x2, 0x2, 0x2, 0x16, 0xba, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xcf, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xe9, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x22, 0xf7, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x5, 0x8, 0x5, 0x2, 
    0x27, 0x3, 0x3, 0x2, 0x2, 0x2, 0x28, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x29, 
    0x2a, 0x5, 0x1a, 0xe, 0x2, 0x2a, 0x2b, 0x7, 0x3, 0x2, 0x2, 0x2b, 0x2c, 
    0x5, 0x4, 0x3, 0x2, 0x2c, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x28, 0x3, 
    0x2, 0x2, 0x2, 0x2d, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x2f, 0x30, 0x7, 0x4, 0x2, 0x2, 0x30, 0x31, 0x5, 0xa, 0x6, 
    0x2, 0x31, 0x32, 0x7, 0x5, 0x2, 0x2, 0x32, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x33, 0x34, 0x5, 0x4, 0x3, 0x2, 0x34, 0x35, 0x7, 0x1f, 0x2, 0x2, 0x35, 
    0x36, 0x7, 0x6, 0x2, 0x2, 0x36, 0x37, 0x7, 0x7, 0x2, 0x2, 0x37, 0x38, 
    0x7, 0x8, 0x2, 0x2, 0x38, 0x39, 0x5, 0x6, 0x4, 0x2, 0x39, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0x3a, 0x3f, 0x5, 0xc, 0x7, 0x2, 0x3b, 0x3c, 0x5, 0xc, 
    0x7, 0x2, 0x3c, 0x3d, 0x5, 0xa, 0x6, 0x2, 0x3d, 0x3f, 0x3, 0x2, 0x2, 
    0x2, 0x3e, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x3f, 0xb, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x5, 0x14, 0xb, 0x2, 0x41, 
    0x42, 0x7, 0x3, 0x2, 0x2, 0x42, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 
    0x5, 0x16, 0xc, 0x2, 0x44, 0x45, 0x7, 0x3, 0x2, 0x2, 0x45, 0x4c, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x47, 0x5, 0x20, 0x11, 0x2, 0x47, 0x48, 0x7, 0x3, 
    0x2, 0x2, 0x48, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4c, 0x5, 0x1c, 0xf, 
    0x2, 0x4a, 0x4c, 0x5, 0x1e, 0x10, 0x2, 0x4b, 0x40, 0x3, 0x2, 0x2, 0x2, 
    0x4b, 0x43, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x46, 0x3, 0x2, 0x2, 0x2, 0x4b, 
    0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x8, 0x8, 0x1, 0x2, 0x4e, 0x4f, 0x7, 
    0xc, 0x2, 0x2, 0x4f, 0x5a, 0x5, 0xe, 0x8, 0xa, 0x50, 0x51, 0x7, 0xd, 
    0x2, 0x2, 0x51, 0x5a, 0x5, 0xe, 0x8, 0x9, 0x52, 0x53, 0x7, 0x7, 0x2, 
    0x2, 0x53, 0x54, 0x5, 0xe, 0x8, 0x2, 0x54, 0x55, 0x7, 0x8, 0x2, 0x2, 
    0x55, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x56, 0x5a, 0x7, 0x24, 0x2, 0x2, 0x57, 
    0x5a, 0x7, 0x23, 0x2, 0x2, 0x58, 0x5a, 0x5, 0x24, 0x13, 0x2, 0x59, 0x4d, 
    0x3, 0x2, 0x2, 0x2, 0x59, 0x50, 0x3, 0x2, 0x2, 0x2, 0x59, 0x52, 0x3, 
    0x2, 0x2, 0x2, 0x59, 0x56, 0x3, 0x2, 0x2, 0x2, 0x59, 0x57, 0x3, 0x2, 
    0x2, 0x2, 0x59, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x66, 0x3, 0x2, 0x2, 
    0x2, 0x5b, 0x5c, 0xc, 0xb, 0x2, 0x2, 0x5c, 0x5d, 0x9, 0x2, 0x2, 0x2, 
    0x5d, 0x65, 0x5, 0xe, 0x8, 0xc, 0x5e, 0x5f, 0xc, 0x8, 0x2, 0x2, 0x5f, 
    0x60, 0x7, 0xe, 0x2, 0x2, 0x60, 0x65, 0x5, 0xe, 0x8, 0x9, 0x61, 0x62, 
    0xc, 0x7, 0x2, 0x2, 0x62, 0x63, 0x9, 0x3, 0x2, 0x2, 0x63, 0x65, 0x5, 
    0xe, 0x8, 0x8, 0x64, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x64, 0x5e, 0x3, 0x2, 
    0x2, 0x2, 0x64, 0x61, 0x3, 0x2, 0x2, 0x2, 0x65, 0x68, 0x3, 0x2, 0x2, 
    0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x3, 0x2, 0x2, 0x2, 
    0x67, 0xf, 0x3, 0x2, 0x2, 0x2, 0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 0x69, 
    0x6a, 0x5, 0xe, 0x8, 0x2, 0x6a, 0x6b, 0x9, 0x4, 0x2, 0x2, 0x6b, 0x6c, 
    0x5, 0xe, 0x8, 0x2, 0x6c, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x5, 
    0xe, 0x8, 0x2, 0x6e, 0x6f, 0x9, 0x5, 0x2, 0x2, 0x6f, 0x70, 0x5, 0xe, 
    0x8, 0x2, 0x70, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x5, 0xe, 0x8, 
    0x2, 0x72, 0x73, 0x7, 0x16, 0x2, 0x2, 0x73, 0x74, 0x5, 0xe, 0x8, 0x2, 
    0x74, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x5, 0xe, 0x8, 0x2, 0x76, 
    0x77, 0x7, 0x17, 0x2, 0x2, 0x77, 0x78, 0x5, 0xe, 0x8, 0x2, 0x78, 0x7e, 
    0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x7, 0x7, 0x2, 0x2, 0x7a, 0x7b, 0x5, 
    0x10, 0x9, 0x2, 0x7b, 0x7c, 0x7, 0x8, 0x2, 0x2, 0x7c, 0x7e, 0x3, 0x2, 
    0x2, 0x2, 0x7d, 0x69, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x6d, 0x3, 0x2, 0x2, 
    0x2, 0x7d, 0x71, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x75, 0x3, 0x2, 0x2, 0x2, 
    0x7d, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x11, 0x3, 0x2, 0x2, 0x2, 0x7f, 
    0x80, 0x7, 0x23, 0x2, 0x2, 0x80, 0x81, 0x7, 0x18, 0x2, 0x2, 0x81, 0x84, 
    0x5, 0x12, 0xa, 0x2, 0x82, 0x84, 0x7, 0x23, 0x2, 0x2, 0x83, 0x7f, 0x3, 
    0x2, 0x2, 0x2, 0x83, 0x82, 0x3, 0x2, 0x2, 0x2, 0x84, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x85, 0x86, 0x5, 0x22, 0x12, 0x2, 0x86, 0x87, 0x5, 0x12, 0xa, 
    0x2, 0x87, 0x15, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x5, 0x22, 0x12, 0x2, 
    0x89, 0x8a, 0x7, 0x23, 0x2, 0x2, 0x8a, 0x8b, 0x7, 0x19, 0x2, 0x2, 0x8b, 
    0x8c, 0x7, 0x24, 0x2, 0x2, 0x8c, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 
    0x5, 0x22, 0x12, 0x2, 0x8e, 0x8f, 0x7, 0x23, 0x2, 0x2, 0x8f, 0x90, 0x7, 
    0x19, 0x2, 0x2, 0x90, 0x91, 0x7, 0x23, 0x2, 0x2, 0x91, 0xbb, 0x3, 0x2, 
    0x2, 0x2, 0x92, 0x93, 0x5, 0x22, 0x12, 0x2, 0x93, 0x94, 0x7, 0x23, 0x2, 
    0x2, 0x94, 0x95, 0x7, 0x19, 0x2, 0x2, 0x95, 0x96, 0x7, 0x22, 0x2, 0x2, 
    0x96, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x5, 0x22, 0x12, 0x2, 0x98, 
    0x99, 0x7, 0x23, 0x2, 0x2, 0x99, 0x9a, 0x7, 0x1a, 0x2, 0x2, 0x9a, 0x9b, 
    0x7, 0x24, 0x2, 0x2, 0x9b, 0x9c, 0x7, 0x1b, 0x2, 0x2, 0x9c, 0xbb, 0x3, 
    0x2, 0x2, 0x2, 0x9d, 0x9e, 0x5, 0x22, 0x12, 0x2, 0x9e, 0x9f, 0x7, 0x23, 
    0x2, 0x2, 0x9f, 0xa0, 0x7, 0x19, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0xe, 0x8, 
    0x2, 0xa1, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x7, 0x23, 0x2, 0x2, 
    0xa3, 0xa4, 0x7, 0x19, 0x2, 0x2, 0xa4, 0xbb, 0x7, 0x23, 0x2, 0x2, 0xa5, 
    0xa6, 0x7, 0x23, 0x2, 0x2, 0xa6, 0xa7, 0x7, 0x19, 0x2, 0x2, 0xa7, 0xbb, 
    0x7, 0x24, 0x2, 0x2, 0xa8, 0xa9, 0x7, 0x23, 0x2, 0x2, 0xa9, 0xaa, 0x7, 
    0x19, 0x2, 0x2, 0xaa, 0xbb, 0x7, 0x22, 0x2, 0x2, 0xab, 0xac, 0x7, 0x23, 
    0x2, 0x2, 0xac, 0xad, 0x7, 0x19, 0x2, 0x2, 0xad, 0xbb, 0x5, 0xe, 0x8, 
    0x2, 0xae, 0xaf, 0x5, 0x24, 0x13, 0x2, 0xaf, 0xb0, 0x7, 0x19, 0x2, 0x2, 
    0xb0, 0xb1, 0x7, 0x23, 0x2, 0x2, 0xb1, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xb2, 
    0xb3, 0x5, 0x24, 0x13, 0x2, 0xb3, 0xb4, 0x7, 0x19, 0x2, 0x2, 0xb4, 0xb5, 
    0x7, 0x24, 0x2, 0x2, 0xb5, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x5, 
    0x24, 0x13, 0x2, 0xb7, 0xb8, 0x7, 0x19, 0x2, 0x2, 0xb8, 0xb9, 0x5, 0xe, 
    0x8, 0x2, 0xb9, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xba, 0x88, 0x3, 0x2, 0x2, 
    0x2, 0xba, 0x8d, 0x3, 0x2, 0x2, 0x2, 0xba, 0x92, 0x3, 0x2, 0x2, 0x2, 
    0xba, 0x97, 0x3, 0x2, 0x2, 0x2, 0xba, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xba, 
    0xa2, 0x3, 0x2, 0x2, 0x2, 0xba, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xba, 0xa8, 
    0x3, 0x2, 0x2, 0x2, 0xba, 0xab, 0x3, 0x2, 0x2, 0x2, 0xba, 0xae, 0x3, 
    0x2, 0x2, 0x2, 0xba, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xba, 0xb6, 0x3, 0x2, 
    0x2, 0x2, 0xbb, 0x17, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x7, 0x23, 0x2, 
    0x2, 0xbd, 0xbe, 0x7, 0x18, 0x2, 0x2, 0xbe, 0xc1, 0x5, 0x12, 0xa, 0x2, 
    0xbf, 0xc1, 0x7, 0x23, 0x2, 0x2, 0xc0, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xc0, 
    0xbf, 0x3, 0x2, 0x2, 0x2, 0xc1, 0x19, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 
    0x5, 0x22, 0x12, 0x2, 0xc3, 0xc4, 0x5, 0x18, 0xd, 0x2, 0xc4, 0xd0, 0x3, 
    0x2, 0x2, 0x2, 0xc5, 0xc6, 0x5, 0x22, 0x12, 0x2, 0xc6, 0xc7, 0x7, 0x23, 
    0x2, 0x2, 0xc7, 0xc8, 0x7, 0x19, 0x2, 0x2, 0xc8, 0xc9, 0x7, 0x24, 0x2, 
    0x2, 0xc9, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x5, 0x22, 0x12, 0x2, 
    0xcb, 0xcc, 0x7, 0x23, 0x2, 0x2, 0xcc, 0xcd, 0x7, 0x19, 0x2, 0x2, 0xcd, 
    0xce, 0x7, 0x22, 0x2, 0x2, 0xce, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xc2, 
    0x3, 0x2, 0x2, 0x2, 0xcf, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xca, 0x3, 
    0x2, 0x2, 0x2, 0xd0, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x7, 0x1c, 
    0x2, 0x2, 0xd2, 0xd3, 0x7, 0x7, 0x2, 0x2, 0xd3, 0xd4, 0x5, 0x10, 0x9, 
    0x2, 0xd4, 0xd5, 0x7, 0x8, 0x2, 0x2, 0xd5, 0xd6, 0x5, 0x6, 0x4, 0x2, 
    0xd6, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x7, 0x1c, 0x2, 0x2, 0xd8, 
    0xd9, 0x7, 0x7, 0x2, 0x2, 0xd9, 0xda, 0x5, 0x10, 0x9, 0x2, 0xda, 0xdb, 
    0x7, 0x8, 0x2, 0x2, 0xdb, 0xdc, 0x5, 0x6, 0x4, 0x2, 0xdc, 0xdd, 0x7, 
    0x1d, 0x2, 0x2, 0xdd, 0xde, 0x5, 0x6, 0x4, 0x2, 0xde, 0xe8, 0x3, 0x2, 
    0x2, 0x2, 0xdf, 0xe0, 0x7, 0x1c, 0x2, 0x2, 0xe0, 0xe1, 0x7, 0x7, 0x2, 
    0x2, 0xe1, 0xe2, 0x5, 0x10, 0x9, 0x2, 0xe2, 0xe3, 0x7, 0x8, 0x2, 0x2, 
    0xe3, 0xe4, 0x5, 0x6, 0x4, 0x2, 0xe4, 0xe5, 0x7, 0x1d, 0x2, 0x2, 0xe5, 
    0xe6, 0x5, 0x1c, 0xf, 0x2, 0xe6, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xd1, 
    0x3, 0x2, 0x2, 0x2, 0xe7, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xdf, 0x3, 
    0x2, 0x2, 0x2, 0xe8, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x7, 0x1e, 
    0x2, 0x2, 0xea, 0xeb, 0x7, 0x7, 0x2, 0x2, 0xeb, 0xec, 0x5, 0x10, 0x9, 
    0x2, 0xec, 0xed, 0x7, 0x8, 0x2, 0x2, 0xed, 0xee, 0x5, 0x6, 0x4, 0x2, 
    0xee, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x7, 0x21, 0x2, 0x2, 0xf0, 
    0xf6, 0x7, 0x23, 0x2, 0x2, 0xf1, 0xf2, 0x7, 0x21, 0x2, 0x2, 0xf2, 0xf6, 
    0x7, 0x24, 0x2, 0x2, 0xf3, 0xf4, 0x7, 0x21, 0x2, 0x2, 0xf4, 0xf6, 0x5, 
    0xe, 0x8, 0x2, 0xf5, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf1, 0x3, 0x2, 
    0x2, 0x2, 0xf5, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf6, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0xf7, 0xf8, 0x9, 0x6, 0x2, 0x2, 0xf8, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0xf9, 0xfa, 0x7, 0x23, 0x2, 0x2, 0xfa, 0xfb, 0x7, 0x1a, 0x2, 0x2, 0xfb, 
    0xfc, 0x7, 0x24, 0x2, 0x2, 0xfc, 0xfd, 0x7, 0x1b, 0x2, 0x2, 0xfd, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0xf, 0x2d, 0x3e, 0x4b, 0x59, 0x64, 0x66, 0x7d, 0x83, 
    0xba, 0xc0, 0xcf, 0xe7, 0xf5, 
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
