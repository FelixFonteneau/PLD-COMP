
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
    setState(22);
    prog();
   
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
  enterRule(_localctx, 2, ifccParser::RuleBloc);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(24);
    match(ifccParser::T__0);
    setState(25);
    statements();
    setState(26);
    match(ifccParser::T__1);
   
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
  enterRule(_localctx, 4, ifccParser::RuleProg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(28);
    match(ifccParser::T__2);
    setState(29);
    match(ifccParser::T__3);
    setState(30);
    match(ifccParser::T__4);
    setState(31);
    match(ifccParser::T__5);
    setState(32);
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
  enterRule(_localctx, 6, ifccParser::RuleStatements);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(38);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(34);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(35);
      statement();
      setState(36);
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
ifccParser::StatementContext* ifccParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 8, ifccParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(50);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::StatementDeclarationContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(40);
      dec();
      setState(41);
      match(ifccParser::T__6);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::StatementAffectationContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(43);
      aff();
      setState(44);
      match(ifccParser::T__6);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::StatementReturnContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(46);
      ret();
      setState(47);
      match(ifccParser::T__6);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::BoucleIfContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(49);
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
//----------------- PowExprContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::PowExprContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::PowExprContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::PowExprContext::PowExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::PowExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitPowExpr(this);
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
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, ifccParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(63);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::T__8: {
        _localctx = _tracker.createInstance<MinusExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(53);
        match(ifccParser::T__8);
        setState(54);
        expr(7);
        break;
      }

      case ifccParser::T__9: {
        _localctx = _tracker.createInstance<NotExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(55);
        match(ifccParser::T__9);
        setState(56);
        expr(6);
        break;
      }

      case ifccParser::T__4: {
        _localctx = _tracker.createInstance<ParExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(57);
        match(ifccParser::T__4);
        setState(58);
        expr(0);
        setState(59);
        match(ifccParser::T__5);
        break;
      }

      case ifccParser::CONST: {
        _localctx = _tracker.createInstance<ConstExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(61);
        match(ifccParser::CONST);
        break;
      }

      case ifccParser::VAR: {
        _localctx = _tracker.createInstance<VarExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(62);
        match(ifccParser::VAR);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(76);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(74);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PowExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(65);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(66);
          match(ifccParser::T__7);
          setState(67);
          expr(9);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MultiplicationExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(68);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(69);
          dynamic_cast<MultiplicationExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << ifccParser::T__10)
            | (1ULL << ifccParser::T__11)
            | (1ULL << ifccParser::T__12))) != 0))) {
            dynamic_cast<MultiplicationExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(70);
          expr(6);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AdditiveExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(71);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(72);
          dynamic_cast<AdditiveExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ifccParser::T__8

          || _la == ifccParser::T__13)) {
            dynamic_cast<AdditiveExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(73);
          expr(5);
          break;
        }

        } 
      }
      setState(78);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
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
  enterRule(_localctx, 12, ifccParser::RuleTestExpr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(99);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<TestExprContext *>(_tracker.createInstance<ifccParser::RelationalTestExprContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(79);
      expr(0);
      setState(80);
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
      setState(81);
      expr(0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<TestExprContext *>(_tracker.createInstance<ifccParser::EqualityTestExprContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(83);
      expr(0);
      setState(84);
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
      setState(85);
      expr(0);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<TestExprContext *>(_tracker.createInstance<ifccParser::AndTestExprContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(87);
      expr(0);
      setState(88);
      match(ifccParser::T__20);
      setState(89);
      expr(0);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<TestExprContext *>(_tracker.createInstance<ifccParser::OrTestExprContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(91);
      expr(0);
      setState(92);
      match(ifccParser::T__21);
      setState(93);
      expr(0);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<TestExprContext *>(_tracker.createInstance<ifccParser::ParTestExprContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(95);
      match(ifccParser::T__4);
      setState(96);
      testExpr();
      setState(97);
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

//----------------- DecContext ------------------------------------------------------------------

ifccParser::DecContext::DecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::DecContext::VAR() {
  return getToken(ifccParser::VAR, 0);
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
  enterRule(_localctx, 14, ifccParser::RuleDec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    match(ifccParser::T__2);
    setState(102);
    match(ifccParser::VAR);
   
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
//----------------- AffDecExprContext ------------------------------------------------------------------

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
//----------------- AffDecVarContext ------------------------------------------------------------------

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
  enterRule(_localctx, 16, ifccParser::RuleAff);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(125);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffDecConstContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(104);
      match(ifccParser::T__2);
      setState(105);
      match(ifccParser::VAR);
      setState(106);
      match(ifccParser::T__22);
      setState(107);
      match(ifccParser::CONST);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffDecVarContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(108);
      match(ifccParser::T__2);
      setState(109);
      match(ifccParser::VAR);
      setState(110);
      match(ifccParser::T__22);
      setState(111);
      match(ifccParser::VAR);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffDecExprContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(112);
      match(ifccParser::T__2);
      setState(113);
      match(ifccParser::VAR);
      setState(114);
      match(ifccParser::T__22);
      setState(115);
      expr(0);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffVarContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(116);
      match(ifccParser::VAR);
      setState(117);
      match(ifccParser::T__22);
      setState(118);
      match(ifccParser::VAR);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffConstContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(119);
      match(ifccParser::VAR);
      setState(120);
      match(ifccParser::T__22);
      setState(121);
      match(ifccParser::CONST);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffExprContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(122);
      match(ifccParser::VAR);
      setState(123);
      match(ifccParser::T__22);
      setState(124);
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
  enterRule(_localctx, 18, ifccParser::RuleIfLoop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(149);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<IfLoopContext *>(_tracker.createInstance<ifccParser::IfNoElseContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(127);
      match(ifccParser::T__23);
      setState(128);
      match(ifccParser::T__4);
      setState(129);
      testExpr();
      setState(130);
      match(ifccParser::T__5);
      setState(131);
      bloc();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<IfLoopContext *>(_tracker.createInstance<ifccParser::IfWithElseContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(133);
      match(ifccParser::T__23);
      setState(134);
      match(ifccParser::T__4);
      setState(135);
      testExpr();
      setState(136);
      match(ifccParser::T__5);
      setState(137);
      bloc();
      setState(138);
      match(ifccParser::T__24);
      setState(139);
      bloc();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<IfLoopContext *>(_tracker.createInstance<ifccParser::IfElseIfContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(141);
      match(ifccParser::T__23);
      setState(142);
      match(ifccParser::T__4);
      setState(143);
      testExpr();
      setState(144);
      match(ifccParser::T__5);
      setState(145);
      bloc();
      setState(146);
      match(ifccParser::T__24);
      setState(147);
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
  enterRule(_localctx, 20, ifccParser::RuleRet);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(155);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<RetContext *>(_tracker.createInstance<ifccParser::RetVarContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(151);
      match(ifccParser::RET);
      setState(152);
      match(ifccParser::VAR);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<RetContext *>(_tracker.createInstance<ifccParser::RetConstContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(153);
      match(ifccParser::RET);
      setState(154);
      match(ifccParser::CONST);
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

bool ifccParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 5: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ifccParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 8);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);

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
  "axiom", "bloc", "prog", "statements", "statement", "expr", "testExpr", 
  "dec", "aff", "ifLoop", "ret"
};

std::vector<std::string> ifccParser::_literalNames = {
  "", "'{'", "'}'", "'int'", "'main'", "'('", "')'", "';'", "'^'", "'-'", 
  "'!'", "'*'", "'/'", "'%'", "'+'", "'<='", "'>='", "'<'", "'>'", "'=='", 
  "'!='", "'&&'", "'||'", "'='", "'if'", "'else'", "'return'"
};

std::vector<std::string> ifccParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "RET", "VAR", "CONST", "COMMENT", "DIRECTIVE", 
  "WS"
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
    0x3, 0x21, 0xa0, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x29, 0xa, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x35, 0xa, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x42, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x7, 0x7, 0x4d, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x50, 0xb, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x66, 0xa, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x80, 0xa, 0xa, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x5, 0xb, 0x98, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 
    0xc, 0x9e, 0xa, 0xc, 0x3, 0xc, 0x2, 0x3, 0xc, 0xd, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x2, 0x6, 0x3, 0x2, 0xd, 0xf, 
    0x4, 0x2, 0xb, 0xb, 0x10, 0x10, 0x3, 0x2, 0x11, 0x14, 0x3, 0x2, 0x15, 
    0x16, 0x2, 0xab, 0x2, 0x18, 0x3, 0x2, 0x2, 0x2, 0x4, 0x1a, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x8, 0x28, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0x34, 0x3, 0x2, 0x2, 0x2, 0xc, 0x41, 0x3, 0x2, 0x2, 0x2, 0xe, 0x65, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x67, 0x3, 0x2, 0x2, 0x2, 0x12, 0x7f, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x97, 0x3, 0x2, 0x2, 0x2, 0x16, 0x9d, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x19, 0x5, 0x6, 0x4, 0x2, 0x19, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x1b, 0x7, 0x3, 0x2, 0x2, 0x1b, 0x1c, 0x5, 0x8, 0x5, 0x2, 
    0x1c, 0x1d, 0x7, 0x4, 0x2, 0x2, 0x1d, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1e, 
    0x1f, 0x7, 0x5, 0x2, 0x2, 0x1f, 0x20, 0x7, 0x6, 0x2, 0x2, 0x20, 0x21, 
    0x7, 0x7, 0x2, 0x2, 0x21, 0x22, 0x7, 0x8, 0x2, 0x2, 0x22, 0x23, 0x5, 
    0x4, 0x3, 0x2, 0x23, 0x7, 0x3, 0x2, 0x2, 0x2, 0x24, 0x29, 0x5, 0xa, 
    0x6, 0x2, 0x25, 0x26, 0x5, 0xa, 0x6, 0x2, 0x26, 0x27, 0x5, 0x8, 0x5, 
    0x2, 0x27, 0x29, 0x3, 0x2, 0x2, 0x2, 0x28, 0x24, 0x3, 0x2, 0x2, 0x2, 
    0x28, 0x25, 0x3, 0x2, 0x2, 0x2, 0x29, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2a, 
    0x2b, 0x5, 0x10, 0x9, 0x2, 0x2b, 0x2c, 0x7, 0x9, 0x2, 0x2, 0x2c, 0x35, 
    0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x5, 0x12, 0xa, 0x2, 0x2e, 0x2f, 0x7, 
    0x9, 0x2, 0x2, 0x2f, 0x35, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x5, 0x16, 
    0xc, 0x2, 0x31, 0x32, 0x7, 0x9, 0x2, 0x2, 0x32, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x33, 0x35, 0x5, 0x14, 0xb, 0x2, 0x34, 0x2a, 0x3, 0x2, 0x2, 0x2, 
    0x34, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x34, 0x30, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x33, 0x3, 0x2, 0x2, 0x2, 0x35, 0xb, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 
    0x8, 0x7, 0x1, 0x2, 0x37, 0x38, 0x7, 0xb, 0x2, 0x2, 0x38, 0x42, 0x5, 
    0xc, 0x7, 0x9, 0x39, 0x3a, 0x7, 0xc, 0x2, 0x2, 0x3a, 0x42, 0x5, 0xc, 
    0x7, 0x8, 0x3b, 0x3c, 0x7, 0x7, 0x2, 0x2, 0x3c, 0x3d, 0x5, 0xc, 0x7, 
    0x2, 0x3d, 0x3e, 0x7, 0x8, 0x2, 0x2, 0x3e, 0x42, 0x3, 0x2, 0x2, 0x2, 
    0x3f, 0x42, 0x7, 0x1e, 0x2, 0x2, 0x40, 0x42, 0x7, 0x1d, 0x2, 0x2, 0x41, 
    0x36, 0x3, 0x2, 0x2, 0x2, 0x41, 0x39, 0x3, 0x2, 0x2, 0x2, 0x41, 0x3b, 
    0x3, 0x2, 0x2, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x40, 0x3, 
    0x2, 0x2, 0x2, 0x42, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0xc, 0xa, 
    0x2, 0x2, 0x44, 0x45, 0x7, 0xa, 0x2, 0x2, 0x45, 0x4d, 0x5, 0xc, 0x7, 
    0xb, 0x46, 0x47, 0xc, 0x7, 0x2, 0x2, 0x47, 0x48, 0x9, 0x2, 0x2, 0x2, 
    0x48, 0x4d, 0x5, 0xc, 0x7, 0x8, 0x49, 0x4a, 0xc, 0x6, 0x2, 0x2, 0x4a, 
    0x4b, 0x9, 0x3, 0x2, 0x2, 0x4b, 0x4d, 0x5, 0xc, 0x7, 0x7, 0x4c, 0x43, 
    0x3, 0x2, 0x2, 0x2, 0x4c, 0x46, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x49, 0x3, 
    0x2, 0x2, 0x2, 0x4d, 0x50, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4c, 0x3, 0x2, 
    0x2, 0x2, 0x4e, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4f, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x5, 0xc, 0x7, 0x2, 
    0x52, 0x53, 0x9, 0x4, 0x2, 0x2, 0x53, 0x54, 0x5, 0xc, 0x7, 0x2, 0x54, 
    0x66, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x5, 0xc, 0x7, 0x2, 0x56, 0x57, 
    0x9, 0x5, 0x2, 0x2, 0x57, 0x58, 0x5, 0xc, 0x7, 0x2, 0x58, 0x66, 0x3, 
    0x2, 0x2, 0x2, 0x59, 0x5a, 0x5, 0xc, 0x7, 0x2, 0x5a, 0x5b, 0x7, 0x17, 
    0x2, 0x2, 0x5b, 0x5c, 0x5, 0xc, 0x7, 0x2, 0x5c, 0x66, 0x3, 0x2, 0x2, 
    0x2, 0x5d, 0x5e, 0x5, 0xc, 0x7, 0x2, 0x5e, 0x5f, 0x7, 0x18, 0x2, 0x2, 
    0x5f, 0x60, 0x5, 0xc, 0x7, 0x2, 0x60, 0x66, 0x3, 0x2, 0x2, 0x2, 0x61, 
    0x62, 0x7, 0x7, 0x2, 0x2, 0x62, 0x63, 0x5, 0xe, 0x8, 0x2, 0x63, 0x64, 
    0x7, 0x8, 0x2, 0x2, 0x64, 0x66, 0x3, 0x2, 0x2, 0x2, 0x65, 0x51, 0x3, 
    0x2, 0x2, 0x2, 0x65, 0x55, 0x3, 0x2, 0x2, 0x2, 0x65, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0x65, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x65, 0x61, 0x3, 0x2, 0x2, 
    0x2, 0x66, 0xf, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x7, 0x5, 0x2, 0x2, 
    0x68, 0x69, 0x7, 0x1d, 0x2, 0x2, 0x69, 0x11, 0x3, 0x2, 0x2, 0x2, 0x6a, 
    0x6b, 0x7, 0x5, 0x2, 0x2, 0x6b, 0x6c, 0x7, 0x1d, 0x2, 0x2, 0x6c, 0x6d, 
    0x7, 0x19, 0x2, 0x2, 0x6d, 0x80, 0x7, 0x1e, 0x2, 0x2, 0x6e, 0x6f, 0x7, 
    0x5, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x1d, 0x2, 0x2, 0x70, 0x71, 0x7, 0x19, 
    0x2, 0x2, 0x71, 0x80, 0x7, 0x1d, 0x2, 0x2, 0x72, 0x73, 0x7, 0x5, 0x2, 
    0x2, 0x73, 0x74, 0x7, 0x1d, 0x2, 0x2, 0x74, 0x75, 0x7, 0x19, 0x2, 0x2, 
    0x75, 0x80, 0x5, 0xc, 0x7, 0x2, 0x76, 0x77, 0x7, 0x1d, 0x2, 0x2, 0x77, 
    0x78, 0x7, 0x19, 0x2, 0x2, 0x78, 0x80, 0x7, 0x1d, 0x2, 0x2, 0x79, 0x7a, 
    0x7, 0x1d, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0x19, 0x2, 0x2, 0x7b, 0x80, 0x7, 
    0x1e, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0x1d, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0x19, 
    0x2, 0x2, 0x7e, 0x80, 0x5, 0xc, 0x7, 0x2, 0x7f, 0x6a, 0x3, 0x2, 0x2, 
    0x2, 0x7f, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x72, 0x3, 0x2, 0x2, 0x2, 
    0x7f, 0x76, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7f, 
    0x7c, 0x3, 0x2, 0x2, 0x2, 0x80, 0x13, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 
    0x7, 0x1a, 0x2, 0x2, 0x82, 0x83, 0x7, 0x7, 0x2, 0x2, 0x83, 0x84, 0x5, 
    0xe, 0x8, 0x2, 0x84, 0x85, 0x7, 0x8, 0x2, 0x2, 0x85, 0x86, 0x5, 0x4, 
    0x3, 0x2, 0x86, 0x98, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x7, 0x1a, 0x2, 
    0x2, 0x88, 0x89, 0x7, 0x7, 0x2, 0x2, 0x89, 0x8a, 0x5, 0xe, 0x8, 0x2, 
    0x8a, 0x8b, 0x7, 0x8, 0x2, 0x2, 0x8b, 0x8c, 0x5, 0x4, 0x3, 0x2, 0x8c, 
    0x8d, 0x7, 0x1b, 0x2, 0x2, 0x8d, 0x8e, 0x5, 0x4, 0x3, 0x2, 0x8e, 0x98, 
    0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x1a, 0x2, 0x2, 0x90, 0x91, 0x7, 
    0x7, 0x2, 0x2, 0x91, 0x92, 0x5, 0xe, 0x8, 0x2, 0x92, 0x93, 0x7, 0x8, 
    0x2, 0x2, 0x93, 0x94, 0x5, 0x4, 0x3, 0x2, 0x94, 0x95, 0x7, 0x1b, 0x2, 
    0x2, 0x95, 0x96, 0x5, 0x14, 0xb, 0x2, 0x96, 0x98, 0x3, 0x2, 0x2, 0x2, 
    0x97, 0x81, 0x3, 0x2, 0x2, 0x2, 0x97, 0x87, 0x3, 0x2, 0x2, 0x2, 0x97, 
    0x8f, 0x3, 0x2, 0x2, 0x2, 0x98, 0x15, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 
    0x7, 0x1c, 0x2, 0x2, 0x9a, 0x9e, 0x7, 0x1d, 0x2, 0x2, 0x9b, 0x9c, 0x7, 
    0x1c, 0x2, 0x2, 0x9c, 0x9e, 0x7, 0x1e, 0x2, 0x2, 0x9d, 0x99, 0x3, 0x2, 
    0x2, 0x2, 0x9d, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0xb, 0x28, 0x34, 0x41, 0x4c, 0x4e, 0x65, 0x7f, 0x97, 0x9d, 
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
