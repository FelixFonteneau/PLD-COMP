// Generated from /home/fabien/Documents/PLDCOMP/PLD-COMP/compiler/ifcc.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class ifccParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, T__22=23, T__23=24, 
		T__24=25, T__25=26, T__26=27, T__27=28, INT=29, CHAR=30, RET=31, CHAREXP=32, 
		VAR=33, CONST=34, COMMENT=35, DIRECTIVE=36, WS=37;
	public static final int
		RULE_axiom = 0, RULE_globalVariables = 1, RULE_bloc = 2, RULE_prog = 3, 
		RULE_statements = 4, RULE_statement = 5, RULE_expr = 6, RULE_testExpr = 7, 
		RULE_vars = 8, RULE_dec = 9, RULE_aff = 10, RULE_varsG = 11, RULE_decGlobal = 12, 
		RULE_ifLoop = 13, RULE_whileLoop = 14, RULE_ret = 15, RULE_type = 16, 
		RULE_array_elt = 17;
	public static final String[] ruleNames = {
		"axiom", "globalVariables", "bloc", "prog", "statements", "statement", 
		"expr", "testExpr", "vars", "dec", "aff", "varsG", "decGlobal", "ifLoop", 
		"whileLoop", "ret", "type", "array_elt"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "';'", "'{'", "'}'", "'main'", "'('", "')'", "'|'", "'&'", "'^'", 
		"'-'", "'!'", "'*'", "'+'", "'<='", "'>='", "'<'", "'>'", "'=='", "'!='", 
		"'&&'", "'||'", "','", "'='", "'['", "']'", "'if'", "'else'", "'while'", 
		"'int'", "'char'", "'return'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, null, null, "INT", "CHAR", "RET", "CHAREXP", "VAR", 
		"CONST", "COMMENT", "DIRECTIVE", "WS"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "ifcc.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public ifccParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class AxiomContext extends ParserRuleContext {
		public ProgContext prog() {
			return getRuleContext(ProgContext.class,0);
		}
		public AxiomContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_axiom; }
	}

	public final AxiomContext axiom() throws RecognitionException {
		AxiomContext _localctx = new AxiomContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_axiom);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(36);
			prog();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class GlobalVariablesContext extends ParserRuleContext {
		public DecGlobalContext decGlobal() {
			return getRuleContext(DecGlobalContext.class,0);
		}
		public GlobalVariablesContext globalVariables() {
			return getRuleContext(GlobalVariablesContext.class,0);
		}
		public GlobalVariablesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_globalVariables; }
	}

	public final GlobalVariablesContext globalVariables() throws RecognitionException {
		GlobalVariablesContext _localctx = new GlobalVariablesContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_globalVariables);
		try {
			setState(43);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,0,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(39);
				decGlobal();
				setState(40);
				match(T__0);
				setState(41);
				globalVariables();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BlocContext extends ParserRuleContext {
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public BlocContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bloc; }
	}

	public final BlocContext bloc() throws RecognitionException {
		BlocContext _localctx = new BlocContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_bloc);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(45);
			match(T__1);
			setState(46);
			statements();
			setState(47);
			match(T__2);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ProgContext extends ParserRuleContext {
		public GlobalVariablesContext globalVariables() {
			return getRuleContext(GlobalVariablesContext.class,0);
		}
		public BlocContext bloc() {
			return getRuleContext(BlocContext.class,0);
		}
		public ProgContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prog; }
	}

	public final ProgContext prog() throws RecognitionException {
		ProgContext _localctx = new ProgContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_prog);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(49);
			globalVariables();
			setState(50);
			match(INT);
			setState(51);
			match(T__3);
			setState(52);
			match(T__4);
			setState(53);
			match(T__5);
			setState(54);
			bloc();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementsContext extends ParserRuleContext {
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public StatementsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statements; }
	}

	public final StatementsContext statements() throws RecognitionException {
		StatementsContext _localctx = new StatementsContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_statements);
		try {
			setState(60);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(56);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(57);
				statement();
				setState(58);
				statements();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementContext extends ParserRuleContext {
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	 
		public StatementContext() { }
		public void copyFrom(StatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class StatementAffectationContext extends StatementContext {
		public AffContext aff() {
			return getRuleContext(AffContext.class,0);
		}
		public StatementAffectationContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class BoucleIfContext extends StatementContext {
		public IfLoopContext ifLoop() {
			return getRuleContext(IfLoopContext.class,0);
		}
		public BoucleIfContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class StatementReturnContext extends StatementContext {
		public RetContext ret() {
			return getRuleContext(RetContext.class,0);
		}
		public StatementReturnContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class StatementDeclarationContext extends StatementContext {
		public DecContext dec() {
			return getRuleContext(DecContext.class,0);
		}
		public StatementDeclarationContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class BoucleWhileContext extends StatementContext {
		public WhileLoopContext whileLoop() {
			return getRuleContext(WhileLoopContext.class,0);
		}
		public BoucleWhileContext(StatementContext ctx) { copyFrom(ctx); }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_statement);
		try {
			setState(73);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				_localctx = new StatementDeclarationContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(62);
				dec();
				setState(63);
				match(T__0);
				}
				break;
			case 2:
				_localctx = new StatementAffectationContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(65);
				aff();
				setState(66);
				match(T__0);
				}
				break;
			case 3:
				_localctx = new StatementReturnContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(68);
				ret();
				setState(69);
				match(T__0);
				}
				break;
			case 4:
				_localctx = new BoucleIfContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(71);
				ifLoop();
				}
				break;
			case 5:
				_localctx = new BoucleWhileContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(72);
				whileLoop();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExprContext extends ParserRuleContext {
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	 
		public ExprContext() { }
		public void copyFrom(ExprContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ParExprContext extends ExprContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public ParExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class VarExprContext extends ExprContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public VarExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class CharExprContext extends ExprContext {
		public TerminalNode CHAREXP() { return getToken(ifccParser.CHAREXP, 0); }
		public CharExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class BitsExprContext extends ExprContext {
		public Token op;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public BitsExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class NotExprContext extends ExprContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public NotExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class ArrayExprContext extends ExprContext {
		public Array_eltContext array_elt() {
			return getRuleContext(Array_eltContext.class,0);
		}
		public ArrayExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class MultiplicationExprContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public MultiplicationExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class AdditiveExprContext extends ExprContext {
		public Token op;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public AdditiveExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class MinusExprContext extends ExprContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public MinusExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class ConstExprContext extends ExprContext {
		public TerminalNode CONST() { return getToken(ifccParser.CONST, 0); }
		public ConstExprContext(ExprContext ctx) { copyFrom(ctx); }
	}

	public final ExprContext expr() throws RecognitionException {
		return expr(0);
	}

	private ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState);
		ExprContext _prevctx = _localctx;
		int _startState = 12;
		enterRecursionRule(_localctx, 12, RULE_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(88);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				{
				_localctx = new MinusExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(76);
				match(T__9);
				setState(77);
				expr(9);
				}
				break;
			case 2:
				{
				_localctx = new NotExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(78);
				match(T__10);
				setState(79);
				expr(8);
				}
				break;
			case 3:
				{
				_localctx = new ParExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(80);
				match(T__4);
				setState(81);
				expr(0);
				setState(82);
				match(T__5);
				}
				break;
			case 4:
				{
				_localctx = new ConstExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(84);
				match(CONST);
				}
				break;
			case 5:
				{
				_localctx = new VarExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(85);
				match(VAR);
				}
				break;
			case 6:
				{
				_localctx = new CharExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(86);
				match(CHAREXP);
				}
				break;
			case 7:
				{
				_localctx = new ArrayExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(87);
				array_elt();
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(101);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(99);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
					case 1:
						{
						_localctx = new BitsExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(90);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(91);
						((BitsExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__6) | (1L << T__7) | (1L << T__8))) != 0)) ) {
							((BitsExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(92);
						expr(11);
						}
						break;
					case 2:
						{
						_localctx = new MultiplicationExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(93);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(94);
						match(T__11);
						setState(95);
						expr(8);
						}
						break;
					case 3:
						{
						_localctx = new AdditiveExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(96);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(97);
						((AdditiveExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==T__9 || _la==T__12) ) {
							((AdditiveExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(98);
						expr(7);
						}
						break;
					}
					} 
				}
				setState(103);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class TestExprContext extends ParserRuleContext {
		public TestExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_testExpr; }
	 
		public TestExprContext() { }
		public void copyFrom(TestExprContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class EqualityTestExprContext extends TestExprContext {
		public Token op;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public EqualityTestExprContext(TestExprContext ctx) { copyFrom(ctx); }
	}
	public static class OrTestExprContext extends TestExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public OrTestExprContext(TestExprContext ctx) { copyFrom(ctx); }
	}
	public static class RelationalTestExprContext extends TestExprContext {
		public Token op;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public RelationalTestExprContext(TestExprContext ctx) { copyFrom(ctx); }
	}
	public static class AndTestExprContext extends TestExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public AndTestExprContext(TestExprContext ctx) { copyFrom(ctx); }
	}
	public static class ParTestExprContext extends TestExprContext {
		public TestExprContext testExpr() {
			return getRuleContext(TestExprContext.class,0);
		}
		public ParTestExprContext(TestExprContext ctx) { copyFrom(ctx); }
	}

	public final TestExprContext testExpr() throws RecognitionException {
		TestExprContext _localctx = new TestExprContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_testExpr);
		int _la;
		try {
			setState(124);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				_localctx = new RelationalTestExprContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(104);
				expr(0);
				setState(105);
				((RelationalTestExprContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__13) | (1L << T__14) | (1L << T__15) | (1L << T__16))) != 0)) ) {
					((RelationalTestExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(106);
				expr(0);
				}
				break;
			case 2:
				_localctx = new EqualityTestExprContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(108);
				expr(0);
				setState(109);
				((EqualityTestExprContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==T__17 || _la==T__18) ) {
					((EqualityTestExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(110);
				expr(0);
				}
				break;
			case 3:
				_localctx = new AndTestExprContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(112);
				expr(0);
				setState(113);
				match(T__19);
				setState(114);
				expr(0);
				}
				break;
			case 4:
				_localctx = new OrTestExprContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(116);
				expr(0);
				setState(117);
				match(T__20);
				setState(118);
				expr(0);
				}
				break;
			case 5:
				_localctx = new ParTestExprContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(120);
				match(T__4);
				setState(121);
				testExpr();
				setState(122);
				match(T__5);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VarsContext extends ParserRuleContext {
		public VarsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_vars; }
	 
		public VarsContext() { }
		public void copyFrom(VarsContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class DeclMultContext extends VarsContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public VarsContext vars() {
			return getRuleContext(VarsContext.class,0);
		}
		public DeclMultContext(VarsContext ctx) { copyFrom(ctx); }
	}
	public static class LastDeclContext extends VarsContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public LastDeclContext(VarsContext ctx) { copyFrom(ctx); }
	}

	public final VarsContext vars() throws RecognitionException {
		VarsContext _localctx = new VarsContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_vars);
		try {
			setState(130);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				_localctx = new DeclMultContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(126);
				match(VAR);
				setState(127);
				match(T__21);
				setState(128);
				vars();
				}
				break;
			case 2:
				_localctx = new LastDeclContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(129);
				match(VAR);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DecContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public VarsContext vars() {
			return getRuleContext(VarsContext.class,0);
		}
		public DecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dec; }
	}

	public final DecContext dec() throws RecognitionException {
		DecContext _localctx = new DecContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_dec);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(132);
			type();
			setState(133);
			vars();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AffContext extends ParserRuleContext {
		public AffContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_aff; }
	 
		public AffContext() { }
		public void copyFrom(AffContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class AffEltConstContext extends AffContext {
		public Array_eltContext array_elt() {
			return getRuleContext(Array_eltContext.class,0);
		}
		public TerminalNode CONST() { return getToken(ifccParser.CONST, 0); }
		public AffEltConstContext(AffContext ctx) { copyFrom(ctx); }
	}
	public static class AffConstContext extends AffContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public TerminalNode CONST() { return getToken(ifccParser.CONST, 0); }
		public AffConstContext(AffContext ctx) { copyFrom(ctx); }
	}
	public static class AffDecCharContext extends AffContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public TerminalNode CHAREXP() { return getToken(ifccParser.CHAREXP, 0); }
		public AffDecCharContext(AffContext ctx) { copyFrom(ctx); }
	}
	public static class AffDecExprContext extends AffContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public AffDecExprContext(AffContext ctx) { copyFrom(ctx); }
	}
	public static class AffDecArrayContext extends AffContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public TerminalNode CONST() { return getToken(ifccParser.CONST, 0); }
		public AffDecArrayContext(AffContext ctx) { copyFrom(ctx); }
	}
	public static class AffVarContext extends AffContext {
		public List<TerminalNode> VAR() { return getTokens(ifccParser.VAR); }
		public TerminalNode VAR(int i) {
			return getToken(ifccParser.VAR, i);
		}
		public AffVarContext(AffContext ctx) { copyFrom(ctx); }
	}
	public static class AffDecConstContext extends AffContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public TerminalNode CONST() { return getToken(ifccParser.CONST, 0); }
		public AffDecConstContext(AffContext ctx) { copyFrom(ctx); }
	}
	public static class AffEltVarContext extends AffContext {
		public Array_eltContext array_elt() {
			return getRuleContext(Array_eltContext.class,0);
		}
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public AffEltVarContext(AffContext ctx) { copyFrom(ctx); }
	}
	public static class AffEltExprContext extends AffContext {
		public Array_eltContext array_elt() {
			return getRuleContext(Array_eltContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public AffEltExprContext(AffContext ctx) { copyFrom(ctx); }
	}
	public static class AffDecVarContext extends AffContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public List<TerminalNode> VAR() { return getTokens(ifccParser.VAR); }
		public TerminalNode VAR(int i) {
			return getToken(ifccParser.VAR, i);
		}
		public AffDecVarContext(AffContext ctx) { copyFrom(ctx); }
	}
	public static class AffCharContext extends AffContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public TerminalNode CHAREXP() { return getToken(ifccParser.CHAREXP, 0); }
		public AffCharContext(AffContext ctx) { copyFrom(ctx); }
	}
	public static class AffExprContext extends AffContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public AffExprContext(AffContext ctx) { copyFrom(ctx); }
	}

	public final AffContext aff() throws RecognitionException {
		AffContext _localctx = new AffContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_aff);
		try {
			setState(185);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				_localctx = new AffDecConstContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(135);
				type();
				setState(136);
				match(VAR);
				setState(137);
				match(T__22);
				setState(138);
				match(CONST);
				}
				break;
			case 2:
				_localctx = new AffDecVarContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(140);
				type();
				setState(141);
				match(VAR);
				setState(142);
				match(T__22);
				setState(143);
				match(VAR);
				}
				break;
			case 3:
				_localctx = new AffDecCharContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(145);
				type();
				setState(146);
				match(VAR);
				setState(147);
				match(T__22);
				setState(148);
				match(CHAREXP);
				}
				break;
			case 4:
				_localctx = new AffDecArrayContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(150);
				type();
				setState(151);
				match(VAR);
				setState(152);
				match(T__23);
				setState(153);
				match(CONST);
				setState(154);
				match(T__24);
				}
				break;
			case 5:
				_localctx = new AffDecExprContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(156);
				type();
				setState(157);
				match(VAR);
				setState(158);
				match(T__22);
				setState(159);
				expr(0);
				}
				break;
			case 6:
				_localctx = new AffVarContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(161);
				match(VAR);
				setState(162);
				match(T__22);
				setState(163);
				match(VAR);
				}
				break;
			case 7:
				_localctx = new AffConstContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(164);
				match(VAR);
				setState(165);
				match(T__22);
				setState(166);
				match(CONST);
				}
				break;
			case 8:
				_localctx = new AffCharContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(167);
				match(VAR);
				setState(168);
				match(T__22);
				setState(169);
				match(CHAREXP);
				}
				break;
			case 9:
				_localctx = new AffExprContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(170);
				match(VAR);
				setState(171);
				match(T__22);
				setState(172);
				expr(0);
				}
				break;
			case 10:
				_localctx = new AffEltVarContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(173);
				array_elt();
				setState(174);
				match(T__22);
				setState(175);
				match(VAR);
				}
				break;
			case 11:
				_localctx = new AffEltConstContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(177);
				array_elt();
				setState(178);
				match(T__22);
				setState(179);
				match(CONST);
				}
				break;
			case 12:
				_localctx = new AffEltExprContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(181);
				array_elt();
				setState(182);
				match(T__22);
				setState(183);
				expr(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VarsGContext extends ParserRuleContext {
		public VarsGContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_varsG; }
	 
		public VarsGContext() { }
		public void copyFrom(VarsGContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class LastDecGContext extends VarsGContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public LastDecGContext(VarsGContext ctx) { copyFrom(ctx); }
	}
	public static class DecGMultContext extends VarsGContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public VarsContext vars() {
			return getRuleContext(VarsContext.class,0);
		}
		public DecGMultContext(VarsGContext ctx) { copyFrom(ctx); }
	}

	public final VarsGContext varsG() throws RecognitionException {
		VarsGContext _localctx = new VarsGContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_varsG);
		try {
			setState(191);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				_localctx = new DecGMultContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(187);
				match(VAR);
				setState(188);
				match(T__21);
				setState(189);
				vars();
				}
				break;
			case 2:
				_localctx = new LastDecGContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(190);
				match(VAR);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DecGlobalContext extends ParserRuleContext {
		public DecGlobalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_decGlobal; }
	 
		public DecGlobalContext() { }
		public void copyFrom(DecGlobalContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class DecGAffCharContext extends DecGlobalContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public TerminalNode CHAREXP() { return getToken(ifccParser.CHAREXP, 0); }
		public DecGAffCharContext(DecGlobalContext ctx) { copyFrom(ctx); }
	}
	public static class DecGContext extends DecGlobalContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public VarsGContext varsG() {
			return getRuleContext(VarsGContext.class,0);
		}
		public DecGContext(DecGlobalContext ctx) { copyFrom(ctx); }
	}
	public static class DecGAffConstContext extends DecGlobalContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public TerminalNode CONST() { return getToken(ifccParser.CONST, 0); }
		public DecGAffConstContext(DecGlobalContext ctx) { copyFrom(ctx); }
	}

	public final DecGlobalContext decGlobal() throws RecognitionException {
		DecGlobalContext _localctx = new DecGlobalContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_decGlobal);
		try {
			setState(206);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
			case 1:
				_localctx = new DecGContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(193);
				type();
				setState(194);
				varsG();
				}
				break;
			case 2:
				_localctx = new DecGAffConstContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(196);
				type();
				setState(197);
				match(VAR);
				setState(198);
				match(T__22);
				setState(199);
				match(CONST);
				}
				break;
			case 3:
				_localctx = new DecGAffCharContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(201);
				type();
				setState(202);
				match(VAR);
				setState(203);
				match(T__22);
				setState(204);
				match(CHAREXP);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IfLoopContext extends ParserRuleContext {
		public IfLoopContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifLoop; }
	 
		public IfLoopContext() { }
		public void copyFrom(IfLoopContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class IfWithElseContext extends IfLoopContext {
		public TestExprContext testExpr() {
			return getRuleContext(TestExprContext.class,0);
		}
		public List<BlocContext> bloc() {
			return getRuleContexts(BlocContext.class);
		}
		public BlocContext bloc(int i) {
			return getRuleContext(BlocContext.class,i);
		}
		public IfWithElseContext(IfLoopContext ctx) { copyFrom(ctx); }
	}
	public static class IfNoElseContext extends IfLoopContext {
		public TestExprContext testExpr() {
			return getRuleContext(TestExprContext.class,0);
		}
		public BlocContext bloc() {
			return getRuleContext(BlocContext.class,0);
		}
		public IfNoElseContext(IfLoopContext ctx) { copyFrom(ctx); }
	}
	public static class IfElseIfContext extends IfLoopContext {
		public TestExprContext testExpr() {
			return getRuleContext(TestExprContext.class,0);
		}
		public BlocContext bloc() {
			return getRuleContext(BlocContext.class,0);
		}
		public IfLoopContext ifLoop() {
			return getRuleContext(IfLoopContext.class,0);
		}
		public IfElseIfContext(IfLoopContext ctx) { copyFrom(ctx); }
	}

	public final IfLoopContext ifLoop() throws RecognitionException {
		IfLoopContext _localctx = new IfLoopContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_ifLoop);
		try {
			setState(230);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				_localctx = new IfNoElseContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(208);
				match(T__25);
				setState(209);
				match(T__4);
				setState(210);
				testExpr();
				setState(211);
				match(T__5);
				setState(212);
				bloc();
				}
				break;
			case 2:
				_localctx = new IfWithElseContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(214);
				match(T__25);
				setState(215);
				match(T__4);
				setState(216);
				testExpr();
				setState(217);
				match(T__5);
				setState(218);
				bloc();
				setState(219);
				match(T__26);
				setState(220);
				bloc();
				}
				break;
			case 3:
				_localctx = new IfElseIfContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(222);
				match(T__25);
				setState(223);
				match(T__4);
				setState(224);
				testExpr();
				setState(225);
				match(T__5);
				setState(226);
				bloc();
				setState(227);
				match(T__26);
				setState(228);
				ifLoop();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class WhileLoopContext extends ParserRuleContext {
		public TestExprContext testExpr() {
			return getRuleContext(TestExprContext.class,0);
		}
		public BlocContext bloc() {
			return getRuleContext(BlocContext.class,0);
		}
		public WhileLoopContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_whileLoop; }
	}

	public final WhileLoopContext whileLoop() throws RecognitionException {
		WhileLoopContext _localctx = new WhileLoopContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_whileLoop);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(232);
			match(T__27);
			setState(233);
			match(T__4);
			setState(234);
			testExpr();
			setState(235);
			match(T__5);
			setState(236);
			bloc();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RetContext extends ParserRuleContext {
		public RetContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ret; }
	 
		public RetContext() { }
		public void copyFrom(RetContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class RetConstContext extends RetContext {
		public TerminalNode RET() { return getToken(ifccParser.RET, 0); }
		public TerminalNode CONST() { return getToken(ifccParser.CONST, 0); }
		public RetConstContext(RetContext ctx) { copyFrom(ctx); }
	}
	public static class RetExprContext extends RetContext {
		public TerminalNode RET() { return getToken(ifccParser.RET, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public RetExprContext(RetContext ctx) { copyFrom(ctx); }
	}
	public static class RetVarContext extends RetContext {
		public TerminalNode RET() { return getToken(ifccParser.RET, 0); }
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public RetVarContext(RetContext ctx) { copyFrom(ctx); }
	}

	public final RetContext ret() throws RecognitionException {
		RetContext _localctx = new RetContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_ret);
		try {
			setState(244);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				_localctx = new RetVarContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(238);
				match(RET);
				setState(239);
				match(VAR);
				}
				break;
			case 2:
				_localctx = new RetConstContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(240);
				match(RET);
				setState(241);
				match(CONST);
				}
				break;
			case 3:
				_localctx = new RetExprContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(242);
				match(RET);
				setState(243);
				expr(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeContext extends ParserRuleContext {
		public TerminalNode INT() { return getToken(ifccParser.INT, 0); }
		public TerminalNode CHAR() { return getToken(ifccParser.CHAR, 0); }
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(246);
			_la = _input.LA(1);
			if ( !(_la==INT || _la==CHAR) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Array_eltContext extends ParserRuleContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public TerminalNode CONST() { return getToken(ifccParser.CONST, 0); }
		public Array_eltContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_array_elt; }
	}

	public final Array_eltContext array_elt() throws RecognitionException {
		Array_eltContext _localctx = new Array_eltContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_array_elt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(248);
			match(VAR);
			setState(249);
			match(T__23);
			setState(250);
			match(CONST);
			setState(251);
			match(T__24);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 6:
			return expr_sempred((ExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 10);
		case 1:
			return precpred(_ctx, 7);
		case 2:
			return precpred(_ctx, 6);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\'\u0100\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\3\2\3\2\3\3\3\3\3\3\3\3\3\3\5\3.\n\3\3\4\3\4\3\4\3\4\3\5\3"+
		"\5\3\5\3\5\3\5\3\5\3\5\3\6\3\6\3\6\3\6\5\6?\n\6\3\7\3\7\3\7\3\7\3\7\3"+
		"\7\3\7\3\7\3\7\3\7\3\7\5\7L\n\7\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3"+
		"\b\3\b\3\b\3\b\5\b[\n\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\7\bf\n\b\f"+
		"\b\16\bi\13\b\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t"+
		"\3\t\3\t\3\t\3\t\3\t\3\t\5\t\177\n\t\3\n\3\n\3\n\3\n\5\n\u0085\n\n\3\13"+
		"\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f"+
		"\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3"+
		"\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f"+
		"\5\f\u00bc\n\f\3\r\3\r\3\r\3\r\5\r\u00c2\n\r\3\16\3\16\3\16\3\16\3\16"+
		"\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\5\16\u00d1\n\16\3\17\3\17\3\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17"+
		"\3\17\3\17\3\17\3\17\3\17\5\17\u00e9\n\17\3\20\3\20\3\20\3\20\3\20\3\20"+
		"\3\21\3\21\3\21\3\21\3\21\3\21\5\21\u00f7\n\21\3\22\3\22\3\23\3\23\3\23"+
		"\3\23\3\23\3\23\2\3\16\24\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$\2"+
		"\7\3\2\t\13\4\2\f\f\17\17\3\2\20\23\3\2\24\25\3\2\37 \2\u0113\2&\3\2\2"+
		"\2\4-\3\2\2\2\6/\3\2\2\2\b\63\3\2\2\2\n>\3\2\2\2\fK\3\2\2\2\16Z\3\2\2"+
		"\2\20~\3\2\2\2\22\u0084\3\2\2\2\24\u0086\3\2\2\2\26\u00bb\3\2\2\2\30\u00c1"+
		"\3\2\2\2\32\u00d0\3\2\2\2\34\u00e8\3\2\2\2\36\u00ea\3\2\2\2 \u00f6\3\2"+
		"\2\2\"\u00f8\3\2\2\2$\u00fa\3\2\2\2&\'\5\b\5\2\'\3\3\2\2\2(.\3\2\2\2)"+
		"*\5\32\16\2*+\7\3\2\2+,\5\4\3\2,.\3\2\2\2-(\3\2\2\2-)\3\2\2\2.\5\3\2\2"+
		"\2/\60\7\4\2\2\60\61\5\n\6\2\61\62\7\5\2\2\62\7\3\2\2\2\63\64\5\4\3\2"+
		"\64\65\7\37\2\2\65\66\7\6\2\2\66\67\7\7\2\2\678\7\b\2\289\5\6\4\29\t\3"+
		"\2\2\2:?\5\f\7\2;<\5\f\7\2<=\5\n\6\2=?\3\2\2\2>:\3\2\2\2>;\3\2\2\2?\13"+
		"\3\2\2\2@A\5\24\13\2AB\7\3\2\2BL\3\2\2\2CD\5\26\f\2DE\7\3\2\2EL\3\2\2"+
		"\2FG\5 \21\2GH\7\3\2\2HL\3\2\2\2IL\5\34\17\2JL\5\36\20\2K@\3\2\2\2KC\3"+
		"\2\2\2KF\3\2\2\2KI\3\2\2\2KJ\3\2\2\2L\r\3\2\2\2MN\b\b\1\2NO\7\f\2\2O["+
		"\5\16\b\13PQ\7\r\2\2Q[\5\16\b\nRS\7\7\2\2ST\5\16\b\2TU\7\b\2\2U[\3\2\2"+
		"\2V[\7$\2\2W[\7#\2\2X[\7\"\2\2Y[\5$\23\2ZM\3\2\2\2ZP\3\2\2\2ZR\3\2\2\2"+
		"ZV\3\2\2\2ZW\3\2\2\2ZX\3\2\2\2ZY\3\2\2\2[g\3\2\2\2\\]\f\f\2\2]^\t\2\2"+
		"\2^f\5\16\b\r_`\f\t\2\2`a\7\16\2\2af\5\16\b\nbc\f\b\2\2cd\t\3\2\2df\5"+
		"\16\b\te\\\3\2\2\2e_\3\2\2\2eb\3\2\2\2fi\3\2\2\2ge\3\2\2\2gh\3\2\2\2h"+
		"\17\3\2\2\2ig\3\2\2\2jk\5\16\b\2kl\t\4\2\2lm\5\16\b\2m\177\3\2\2\2no\5"+
		"\16\b\2op\t\5\2\2pq\5\16\b\2q\177\3\2\2\2rs\5\16\b\2st\7\26\2\2tu\5\16"+
		"\b\2u\177\3\2\2\2vw\5\16\b\2wx\7\27\2\2xy\5\16\b\2y\177\3\2\2\2z{\7\7"+
		"\2\2{|\5\20\t\2|}\7\b\2\2}\177\3\2\2\2~j\3\2\2\2~n\3\2\2\2~r\3\2\2\2~"+
		"v\3\2\2\2~z\3\2\2\2\177\21\3\2\2\2\u0080\u0081\7#\2\2\u0081\u0082\7\30"+
		"\2\2\u0082\u0085\5\22\n\2\u0083\u0085\7#\2\2\u0084\u0080\3\2\2\2\u0084"+
		"\u0083\3\2\2\2\u0085\23\3\2\2\2\u0086\u0087\5\"\22\2\u0087\u0088\5\22"+
		"\n\2\u0088\25\3\2\2\2\u0089\u008a\5\"\22\2\u008a\u008b\7#\2\2\u008b\u008c"+
		"\7\31\2\2\u008c\u008d\7$\2\2\u008d\u00bc\3\2\2\2\u008e\u008f\5\"\22\2"+
		"\u008f\u0090\7#\2\2\u0090\u0091\7\31\2\2\u0091\u0092\7#\2\2\u0092\u00bc"+
		"\3\2\2\2\u0093\u0094\5\"\22\2\u0094\u0095\7#\2\2\u0095\u0096\7\31\2\2"+
		"\u0096\u0097\7\"\2\2\u0097\u00bc\3\2\2\2\u0098\u0099\5\"\22\2\u0099\u009a"+
		"\7#\2\2\u009a\u009b\7\32\2\2\u009b\u009c\7$\2\2\u009c\u009d\7\33\2\2\u009d"+
		"\u00bc\3\2\2\2\u009e\u009f\5\"\22\2\u009f\u00a0\7#\2\2\u00a0\u00a1\7\31"+
		"\2\2\u00a1\u00a2\5\16\b\2\u00a2\u00bc\3\2\2\2\u00a3\u00a4\7#\2\2\u00a4"+
		"\u00a5\7\31\2\2\u00a5\u00bc\7#\2\2\u00a6\u00a7\7#\2\2\u00a7\u00a8\7\31"+
		"\2\2\u00a8\u00bc\7$\2\2\u00a9\u00aa\7#\2\2\u00aa\u00ab\7\31\2\2\u00ab"+
		"\u00bc\7\"\2\2\u00ac\u00ad\7#\2\2\u00ad\u00ae\7\31\2\2\u00ae\u00bc\5\16"+
		"\b\2\u00af\u00b0\5$\23\2\u00b0\u00b1\7\31\2\2\u00b1\u00b2\7#\2\2\u00b2"+
		"\u00bc\3\2\2\2\u00b3\u00b4\5$\23\2\u00b4\u00b5\7\31\2\2\u00b5\u00b6\7"+
		"$\2\2\u00b6\u00bc\3\2\2\2\u00b7\u00b8\5$\23\2\u00b8\u00b9\7\31\2\2\u00b9"+
		"\u00ba\5\16\b\2\u00ba\u00bc\3\2\2\2\u00bb\u0089\3\2\2\2\u00bb\u008e\3"+
		"\2\2\2\u00bb\u0093\3\2\2\2\u00bb\u0098\3\2\2\2\u00bb\u009e\3\2\2\2\u00bb"+
		"\u00a3\3\2\2\2\u00bb\u00a6\3\2\2\2\u00bb\u00a9\3\2\2\2\u00bb\u00ac\3\2"+
		"\2\2\u00bb\u00af\3\2\2\2\u00bb\u00b3\3\2\2\2\u00bb\u00b7\3\2\2\2\u00bc"+
		"\27\3\2\2\2\u00bd\u00be\7#\2\2\u00be\u00bf\7\30\2\2\u00bf\u00c2\5\22\n"+
		"\2\u00c0\u00c2\7#\2\2\u00c1\u00bd\3\2\2\2\u00c1\u00c0\3\2\2\2\u00c2\31"+
		"\3\2\2\2\u00c3\u00c4\5\"\22\2\u00c4\u00c5\5\30\r\2\u00c5\u00d1\3\2\2\2"+
		"\u00c6\u00c7\5\"\22\2\u00c7\u00c8\7#\2\2\u00c8\u00c9\7\31\2\2\u00c9\u00ca"+
		"\7$\2\2\u00ca\u00d1\3\2\2\2\u00cb\u00cc\5\"\22\2\u00cc\u00cd\7#\2\2\u00cd"+
		"\u00ce\7\31\2\2\u00ce\u00cf\7\"\2\2\u00cf\u00d1\3\2\2\2\u00d0\u00c3\3"+
		"\2\2\2\u00d0\u00c6\3\2\2\2\u00d0\u00cb\3\2\2\2\u00d1\33\3\2\2\2\u00d2"+
		"\u00d3\7\34\2\2\u00d3\u00d4\7\7\2\2\u00d4\u00d5\5\20\t\2\u00d5\u00d6\7"+
		"\b\2\2\u00d6\u00d7\5\6\4\2\u00d7\u00e9\3\2\2\2\u00d8\u00d9\7\34\2\2\u00d9"+
		"\u00da\7\7\2\2\u00da\u00db\5\20\t\2\u00db\u00dc\7\b\2\2\u00dc\u00dd\5"+
		"\6\4\2\u00dd\u00de\7\35\2\2\u00de\u00df\5\6\4\2\u00df\u00e9\3\2\2\2\u00e0"+
		"\u00e1\7\34\2\2\u00e1\u00e2\7\7\2\2\u00e2\u00e3\5\20\t\2\u00e3\u00e4\7"+
		"\b\2\2\u00e4\u00e5\5\6\4\2\u00e5\u00e6\7\35\2\2\u00e6\u00e7\5\34\17\2"+
		"\u00e7\u00e9\3\2\2\2\u00e8\u00d2\3\2\2\2\u00e8\u00d8\3\2\2\2\u00e8\u00e0"+
		"\3\2\2\2\u00e9\35\3\2\2\2\u00ea\u00eb\7\36\2\2\u00eb\u00ec\7\7\2\2\u00ec"+
		"\u00ed\5\20\t\2\u00ed\u00ee\7\b\2\2\u00ee\u00ef\5\6\4\2\u00ef\37\3\2\2"+
		"\2\u00f0\u00f1\7!\2\2\u00f1\u00f7\7#\2\2\u00f2\u00f3\7!\2\2\u00f3\u00f7"+
		"\7$\2\2\u00f4\u00f5\7!\2\2\u00f5\u00f7\5\16\b\2\u00f6\u00f0\3\2\2\2\u00f6"+
		"\u00f2\3\2\2\2\u00f6\u00f4\3\2\2\2\u00f7!\3\2\2\2\u00f8\u00f9\t\6\2\2"+
		"\u00f9#\3\2\2\2\u00fa\u00fb\7#\2\2\u00fb\u00fc\7\32\2\2\u00fc\u00fd\7"+
		"$\2\2\u00fd\u00fe\7\33\2\2\u00fe%\3\2\2\2\17->KZeg~\u0084\u00bb\u00c1"+
		"\u00d0\u00e8\u00f6";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}