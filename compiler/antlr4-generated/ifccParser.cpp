
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
    setState(18);
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
    setState(20);
    match(ifccParser::T__0);
    setState(21);
    statements();
    setState(22);
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
    setState(24);
    match(ifccParser::T__2);
    setState(25);
    match(ifccParser::T__3);
    setState(26);
    match(ifccParser::T__4);
    setState(27);
    match(ifccParser::T__5);
    setState(28);
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
    setState(37);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(30);
      statement();
      setState(31);
      match(ifccParser::T__6);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(33);
      statement();
      setState(34);
      match(ifccParser::T__6);
      setState(35);
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
    setState(42);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::StatementDeclarationContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(39);
      dec();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::StatementAffectationContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(40);
      aff();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ifccParser::StatementReturnContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(41);
      ret();
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
//----------------- OrExprContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::OrExprContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::OrExprContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::OrExprContext::OrExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::OrExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitOrExpr(this);
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
//----------------- RelationalExprContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::RelationalExprContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::RelationalExprContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::RelationalExprContext::RelationalExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::RelationalExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitRelationalExpr(this);
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
//----------------- EqualityExprContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::EqualityExprContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::EqualityExprContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::EqualityExprContext::EqualityExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::EqualityExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitEqualityExpr(this);
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
//----------------- AndExprContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::AndExprContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::AndExprContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::AndExprContext::AndExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::AndExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAndExpr(this);
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
    setState(55);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::T__8: {
        _localctx = _tracker.createInstance<MinusExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(45);
        match(ifccParser::T__8);
        setState(46);
        expr(11);
        break;
      }

      case ifccParser::T__9: {
        _localctx = _tracker.createInstance<NotExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(47);
        match(ifccParser::T__9);
        setState(48);
        expr(10);
        break;
      }

      case ifccParser::T__4: {
        _localctx = _tracker.createInstance<ParExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(49);
        match(ifccParser::T__4);
        setState(50);
        expr(0);
        setState(51);
        match(ifccParser::T__5);
        break;
      }

      case ifccParser::CONST: {
        _localctx = _tracker.createInstance<ConstExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(53);
        match(ifccParser::CONST);
        break;
      }

      case ifccParser::VAR: {
        _localctx = _tracker.createInstance<VarExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(54);
        match(ifccParser::VAR);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(80);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(78);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PowExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(57);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(58);
          match(ifccParser::T__7);
          setState(59);
          expr(13);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MultiplicationExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(60);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(61);
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
          setState(62);
          expr(10);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AdditiveExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(63);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(64);
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
          setState(65);
          expr(9);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<RelationalExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(66);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(67);
          dynamic_cast<RelationalExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << ifccParser::T__14)
            | (1ULL << ifccParser::T__15)
            | (1ULL << ifccParser::T__16)
            | (1ULL << ifccParser::T__17))) != 0))) {
            dynamic_cast<RelationalExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(68);
          expr(8);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<EqualityExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(69);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(70);
          dynamic_cast<EqualityExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ifccParser::T__18

          || _la == ifccParser::T__19)) {
            dynamic_cast<EqualityExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(71);
          expr(7);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<AndExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(72);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(73);
          match(ifccParser::T__20);
          setState(74);
          expr(6);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<OrExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(75);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(76);
          match(ifccParser::T__21);
          setState(77);
          expr(5);
          break;
        }

        } 
      }
      setState(82);
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
  enterRule(_localctx, 12, ifccParser::RuleDec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    match(ifccParser::T__2);
    setState(84);
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
  enterRule(_localctx, 14, ifccParser::RuleAff);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(107);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffDecConstContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(86);
      match(ifccParser::T__2);
      setState(87);
      match(ifccParser::VAR);
      setState(88);
      match(ifccParser::T__18);
      setState(89);
      match(ifccParser::CONST);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffDecVarContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(90);
      match(ifccParser::T__2);
      setState(91);
      match(ifccParser::VAR);
      setState(92);
      match(ifccParser::T__18);
      setState(93);
      match(ifccParser::VAR);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffDecExprContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(94);
      match(ifccParser::T__2);
      setState(95);
      match(ifccParser::VAR);
      setState(96);
      match(ifccParser::T__18);
      setState(97);
      expr(0);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffVarContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(98);
      match(ifccParser::VAR);
      setState(99);
      match(ifccParser::T__18);
      setState(100);
      match(ifccParser::VAR);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffConstContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(101);
      match(ifccParser::VAR);
      setState(102);
      match(ifccParser::T__18);
      setState(103);
      match(ifccParser::CONST);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ifccParser::AffExprContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(104);
      match(ifccParser::VAR);
      setState(105);
      match(ifccParser::T__18);
      setState(106);
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
  enterRule(_localctx, 16, ifccParser::RuleRet);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(113);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<RetContext *>(_tracker.createInstance<ifccParser::RetVarContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(109);
      match(ifccParser::RET);
      setState(110);
      match(ifccParser::VAR);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<RetContext *>(_tracker.createInstance<ifccParser::RetConstContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(111);
      match(ifccParser::RET);
      setState(112);
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
    case 0: return precpred(_ctx, 12);
    case 1: return precpred(_ctx, 9);
    case 2: return precpred(_ctx, 8);
    case 3: return precpred(_ctx, 7);
    case 4: return precpred(_ctx, 6);
    case 5: return precpred(_ctx, 5);
    case 6: return precpred(_ctx, 4);

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
  "axiom", "bloc", "prog", "statements", "statement", "expr", "dec", "aff", 
  "ret"
};

std::vector<std::string> ifccParser::_literalNames = {
  "", "'{'", "'}'", "'int'", "'main'", "'('", "')'", "';'", "'^'", "'-'", 
  "'!'", "'*'", "'/'", "'%'", "'+'", "'<='", "'>='", "'<'", "'>'", "'='", 
  "'!='", "'&&'", "'||'", "'return'"
};

std::vector<std::string> ifccParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "RET", "VAR", "CONST", "COMMENT", "DIRECTIVE", "WS"
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
    0x3, 0x1e, 0x76, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x28, 0xa, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x2d, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x5, 0x7, 0x3a, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x51, 0xa, 0x7, 0xc, 
    0x7, 0xe, 0x7, 0x54, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 
    0x6e, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x74, 
    0xa, 0xa, 0x3, 0xa, 0x2, 0x3, 0xc, 0xb, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x2, 0x6, 0x3, 0x2, 0xd, 0xf, 0x4, 0x2, 0xb, 0xb, 0x10, 
    0x10, 0x3, 0x2, 0x11, 0x14, 0x3, 0x2, 0x15, 0x16, 0x2, 0x80, 0x2, 0x14, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x16, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1a, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x27, 0x3, 0x2, 0x2, 0x2, 0xa, 0x2c, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x39, 0x3, 0x2, 0x2, 0x2, 0xe, 0x55, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0x6d, 0x3, 0x2, 0x2, 0x2, 0x12, 0x73, 0x3, 0x2, 0x2, 0x2, 0x14, 0x15, 
    0x5, 0x6, 0x4, 0x2, 0x15, 0x3, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 0x7, 
    0x3, 0x2, 0x2, 0x17, 0x18, 0x5, 0x8, 0x5, 0x2, 0x18, 0x19, 0x7, 0x4, 
    0x2, 0x2, 0x19, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1b, 0x7, 0x5, 0x2, 
    0x2, 0x1b, 0x1c, 0x7, 0x6, 0x2, 0x2, 0x1c, 0x1d, 0x7, 0x7, 0x2, 0x2, 
    0x1d, 0x1e, 0x7, 0x8, 0x2, 0x2, 0x1e, 0x1f, 0x5, 0x4, 0x3, 0x2, 0x1f, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x20, 0x21, 0x5, 0xa, 0x6, 0x2, 0x21, 0x22, 
    0x7, 0x9, 0x2, 0x2, 0x22, 0x28, 0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 0x5, 
    0xa, 0x6, 0x2, 0x24, 0x25, 0x7, 0x9, 0x2, 0x2, 0x25, 0x26, 0x5, 0x8, 
    0x5, 0x2, 0x26, 0x28, 0x3, 0x2, 0x2, 0x2, 0x27, 0x20, 0x3, 0x2, 0x2, 
    0x2, 0x27, 0x23, 0x3, 0x2, 0x2, 0x2, 0x28, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x29, 0x2d, 0x5, 0xe, 0x8, 0x2, 0x2a, 0x2d, 0x5, 0x10, 0x9, 0x2, 0x2b, 
    0x2d, 0x5, 0x12, 0xa, 0x2, 0x2c, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2a, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x2f, 0x8, 0x7, 0x1, 0x2, 0x2f, 0x30, 0x7, 0xb, 
    0x2, 0x2, 0x30, 0x3a, 0x5, 0xc, 0x7, 0xd, 0x31, 0x32, 0x7, 0xc, 0x2, 
    0x2, 0x32, 0x3a, 0x5, 0xc, 0x7, 0xc, 0x33, 0x34, 0x7, 0x7, 0x2, 0x2, 
    0x34, 0x35, 0x5, 0xc, 0x7, 0x2, 0x35, 0x36, 0x7, 0x8, 0x2, 0x2, 0x36, 
    0x3a, 0x3, 0x2, 0x2, 0x2, 0x37, 0x3a, 0x7, 0x1b, 0x2, 0x2, 0x38, 0x3a, 
    0x7, 0x1a, 0x2, 0x2, 0x39, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x39, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0x39, 0x33, 0x3, 0x2, 0x2, 0x2, 0x39, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x39, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x52, 0x3, 0x2, 0x2, 
    0x2, 0x3b, 0x3c, 0xc, 0xe, 0x2, 0x2, 0x3c, 0x3d, 0x7, 0xa, 0x2, 0x2, 
    0x3d, 0x51, 0x5, 0xc, 0x7, 0xf, 0x3e, 0x3f, 0xc, 0xb, 0x2, 0x2, 0x3f, 
    0x40, 0x9, 0x2, 0x2, 0x2, 0x40, 0x51, 0x5, 0xc, 0x7, 0xc, 0x41, 0x42, 
    0xc, 0xa, 0x2, 0x2, 0x42, 0x43, 0x9, 0x3, 0x2, 0x2, 0x43, 0x51, 0x5, 
    0xc, 0x7, 0xb, 0x44, 0x45, 0xc, 0x9, 0x2, 0x2, 0x45, 0x46, 0x9, 0x4, 
    0x2, 0x2, 0x46, 0x51, 0x5, 0xc, 0x7, 0xa, 0x47, 0x48, 0xc, 0x8, 0x2, 
    0x2, 0x48, 0x49, 0x9, 0x5, 0x2, 0x2, 0x49, 0x51, 0x5, 0xc, 0x7, 0x9, 
    0x4a, 0x4b, 0xc, 0x7, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x17, 0x2, 0x2, 0x4c, 
    0x51, 0x5, 0xc, 0x7, 0x8, 0x4d, 0x4e, 0xc, 0x6, 0x2, 0x2, 0x4e, 0x4f, 
    0x7, 0x18, 0x2, 0x2, 0x4f, 0x51, 0x5, 0xc, 0x7, 0x7, 0x50, 0x3b, 0x3, 
    0x2, 0x2, 0x2, 0x50, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x50, 0x41, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x44, 0x3, 0x2, 0x2, 0x2, 0x50, 0x47, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x50, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0x51, 0x54, 0x3, 0x2, 0x2, 0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 
    0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0xd, 0x3, 0x2, 0x2, 0x2, 0x54, 0x52, 
    0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x7, 0x5, 0x2, 0x2, 0x56, 0x57, 0x7, 
    0x1a, 0x2, 0x2, 0x57, 0xf, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x7, 0x5, 
    0x2, 0x2, 0x59, 0x5a, 0x7, 0x1a, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0x15, 0x2, 
    0x2, 0x5b, 0x6e, 0x7, 0x1b, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0x5, 0x2, 0x2, 
    0x5d, 0x5e, 0x7, 0x1a, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x15, 0x2, 0x2, 0x5f, 
    0x6e, 0x7, 0x1a, 0x2, 0x2, 0x60, 0x61, 0x7, 0x5, 0x2, 0x2, 0x61, 0x62, 
    0x7, 0x1a, 0x2, 0x2, 0x62, 0x63, 0x7, 0x15, 0x2, 0x2, 0x63, 0x6e, 0x5, 
    0xc, 0x7, 0x2, 0x64, 0x65, 0x7, 0x1a, 0x2, 0x2, 0x65, 0x66, 0x7, 0x15, 
    0x2, 0x2, 0x66, 0x6e, 0x7, 0x1a, 0x2, 0x2, 0x67, 0x68, 0x7, 0x1a, 0x2, 
    0x2, 0x68, 0x69, 0x7, 0x15, 0x2, 0x2, 0x69, 0x6e, 0x7, 0x1b, 0x2, 0x2, 
    0x6a, 0x6b, 0x7, 0x1a, 0x2, 0x2, 0x6b, 0x6c, 0x7, 0x15, 0x2, 0x2, 0x6c, 
    0x6e, 0x5, 0xc, 0x7, 0x2, 0x6d, 0x58, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x5c, 
    0x3, 0x2, 0x2, 0x2, 0x6d, 0x60, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x64, 0x3, 
    0x2, 0x2, 0x2, 0x6d, 0x67, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6a, 0x3, 0x2, 
    0x2, 0x2, 0x6e, 0x11, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x19, 0x2, 
    0x2, 0x70, 0x74, 0x7, 0x1a, 0x2, 0x2, 0x71, 0x72, 0x7, 0x19, 0x2, 0x2, 
    0x72, 0x74, 0x7, 0x1b, 0x2, 0x2, 0x73, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x73, 
    0x71, 0x3, 0x2, 0x2, 0x2, 0x74, 0x13, 0x3, 0x2, 0x2, 0x2, 0x9, 0x27, 
    0x2c, 0x39, 0x50, 0x52, 0x6d, 0x73, 
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
