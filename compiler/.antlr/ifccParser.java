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
		T__24=25, T__25=26, T__26=27, T__27=28, RET=29, CHAR=30, VAR=31, CONST=32, 
		COMMENT=33, DIRECTIVE=34, WS=35;
	public static final int
		RULE_axiom = 0, RULE_bloc = 1, RULE_prog = 2, RULE_statements = 3, RULE_statement = 4, 
		RULE_expr = 5, RULE_testExpr = 6, RULE_dec = 7, RULE_aff = 8, RULE_ifLoop = 9, 
		RULE_ret = 10;
	public static final String[] ruleNames = {
		"axiom", "bloc", "prog", "statements", "statement", "expr", "testExpr", 
		"dec", "aff", "ifLoop", "ret"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'{'", "'}'", "'int'", "'main'", "'('", "')'", "';'", "'|'", "'&'", 
		"'^'", "'-'", "'!'", "'*'", "'/'", "'%'", "'+'", "'<='", "'>='", "'<'", 
		"'>'", "'=='", "'!='", "'&&'", "'||'", "'char'", "'='", "'if'", "'else'", 
		"'return'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, null, null, "RET", "CHAR", "VAR", "CONST", "COMMENT", 
		"DIRECTIVE", "WS"
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
			setState(22);
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
		enterRule(_localctx, 2, RULE_bloc);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(24);
			match(T__0);
			setState(25);
			statements();
			setState(26);
			match(T__1);
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
		enterRule(_localctx, 4, RULE_prog);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(28);
			match(T__2);
			setState(29);
			match(T__3);
			setState(30);
			match(T__4);
			setState(31);
			match(T__5);
			setState(32);
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
		enterRule(_localctx, 6, RULE_statements);
		try {
			setState(38);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,0,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(34);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(35);
				statement();
				setState(36);
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

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_statement);
		try {
			setState(50);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				_localctx = new StatementDeclarationContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(40);
				dec();
				setState(41);
				match(T__6);
				}
				break;
			case 2:
				_localctx = new StatementAffectationContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(43);
				aff();
				setState(44);
				match(T__6);
				}
				break;
			case 3:
				_localctx = new StatementReturnContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(46);
				ret();
				setState(47);
				match(T__6);
				}
				break;
			case 4:
				_localctx = new BoucleIfContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(49);
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
	public static class MultiplicationExprContext extends ExprContext {
		public Token op;
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
		int _startState = 10;
		enterRecursionRule(_localctx, 10, RULE_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(63);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__10:
				{
				_localctx = new MinusExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(53);
				match(T__10);
				setState(54);
				expr(7);
				}
				break;
			case T__11:
				{
				_localctx = new NotExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(55);
				match(T__11);
				setState(56);
				expr(6);
				}
				break;
			case T__4:
				{
				_localctx = new ParExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(57);
				match(T__4);
				setState(58);
				expr(0);
				setState(59);
				match(T__5);
				}
				break;
			case CONST:
				{
				_localctx = new ConstExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(61);
				match(CONST);
				}
				break;
			case VAR:
				{
				_localctx = new VarExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(62);
				match(VAR);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(76);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(74);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
					case 1:
						{
						_localctx = new BitsExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(65);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(66);
						((BitsExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__7) | (1L << T__8) | (1L << T__9))) != 0)) ) {
							((BitsExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(67);
						expr(9);
						}
						break;
					case 2:
						{
						_localctx = new MultiplicationExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(68);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(69);
						((MultiplicationExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__12) | (1L << T__13) | (1L << T__14))) != 0)) ) {
							((MultiplicationExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(70);
						expr(6);
						}
						break;
					case 3:
						{
						_localctx = new AdditiveExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(71);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(72);
						((AdditiveExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==T__10 || _la==T__15) ) {
							((AdditiveExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(73);
						expr(5);
						}
						break;
					}
					} 
				}
				setState(78);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
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
		enterRule(_localctx, 12, RULE_testExpr);
		int _la;
		try {
			setState(99);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				_localctx = new RelationalTestExprContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(79);
				expr(0);
				setState(80);
				((RelationalTestExprContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__16) | (1L << T__17) | (1L << T__18) | (1L << T__19))) != 0)) ) {
					((RelationalTestExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(81);
				expr(0);
				}
				break;
			case 2:
				_localctx = new EqualityTestExprContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(83);
				expr(0);
				setState(84);
				((EqualityTestExprContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==T__20 || _la==T__21) ) {
					((EqualityTestExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(85);
				expr(0);
				}
				break;
			case 3:
				_localctx = new AndTestExprContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(87);
				expr(0);
				setState(88);
				match(T__22);
				setState(89);
				expr(0);
				}
				break;
			case 4:
				_localctx = new OrTestExprContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(91);
				expr(0);
				setState(92);
				match(T__23);
				setState(93);
				expr(0);
				}
				break;
			case 5:
				_localctx = new ParTestExprContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(95);
				match(T__4);
				setState(96);
				testExpr();
				setState(97);
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

	public static class DecContext extends ParserRuleContext {
		public DecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dec; }
	 
		public DecContext() { }
		public void copyFrom(DecContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class DecCharContext extends DecContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public DecCharContext(DecContext ctx) { copyFrom(ctx); }
	}
	public static class DecIntContext extends DecContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public DecIntContext(DecContext ctx) { copyFrom(ctx); }
	}

	public final DecContext dec() throws RecognitionException {
		DecContext _localctx = new DecContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_dec);
		try {
			setState(105);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__2:
				_localctx = new DecIntContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(101);
				match(T__2);
				setState(102);
				match(VAR);
				}
				break;
			case T__24:
				_localctx = new DecCharContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(103);
				match(T__24);
				setState(104);
				match(VAR);
				}
				break;
			default:
				throw new NoViableAltException(this);
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
	public static class AffCharDecExprContext extends AffContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public AffCharDecExprContext(AffContext ctx) { copyFrom(ctx); }
	}
	public static class AffConstContext extends AffContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public TerminalNode CONST() { return getToken(ifccParser.CONST, 0); }
		public AffConstContext(AffContext ctx) { copyFrom(ctx); }
	}
	public static class AffDecExprContext extends AffContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public AffDecExprContext(AffContext ctx) { copyFrom(ctx); }
	}
	public static class AffVarContext extends AffContext {
		public List<TerminalNode> VAR() { return getTokens(ifccParser.VAR); }
		public TerminalNode VAR(int i) {
			return getToken(ifccParser.VAR, i);
		}
		public AffVarContext(AffContext ctx) { copyFrom(ctx); }
	}
	public static class AffDecConstContext extends AffContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public TerminalNode CONST() { return getToken(ifccParser.CONST, 0); }
		public AffDecConstContext(AffContext ctx) { copyFrom(ctx); }
	}
	public static class AffCharDecConstContext extends AffContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public TerminalNode CONST() { return getToken(ifccParser.CONST, 0); }
		public AffCharDecConstContext(AffContext ctx) { copyFrom(ctx); }
	}
	public static class AffCharDecVarContext extends AffContext {
		public List<TerminalNode> VAR() { return getTokens(ifccParser.VAR); }
		public TerminalNode VAR(int i) {
			return getToken(ifccParser.VAR, i);
		}
		public AffCharDecVarContext(AffContext ctx) { copyFrom(ctx); }
	}
	public static class AffDecVarContext extends AffContext {
		public List<TerminalNode> VAR() { return getTokens(ifccParser.VAR); }
		public TerminalNode VAR(int i) {
			return getToken(ifccParser.VAR, i);
		}
		public AffDecVarContext(AffContext ctx) { copyFrom(ctx); }
	}
	public static class AffCharDecCharContext extends AffContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public TerminalNode CHAR() { return getToken(ifccParser.CHAR, 0); }
		public AffCharDecCharContext(AffContext ctx) { copyFrom(ctx); }
	}
	public static class AffCharContext extends AffContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public TerminalNode CHAR() { return getToken(ifccParser.CHAR, 0); }
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
		enterRule(_localctx, 16, RULE_aff);
		try {
			setState(147);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				_localctx = new AffDecConstContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(107);
				match(T__2);
				setState(108);
				match(VAR);
				setState(109);
				match(T__25);
				setState(110);
				match(CONST);
				}
				break;
			case 2:
				_localctx = new AffDecVarContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(111);
				match(T__2);
				setState(112);
				match(VAR);
				setState(113);
				match(T__25);
				setState(114);
				match(VAR);
				}
				break;
			case 3:
				_localctx = new AffDecExprContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(115);
				match(T__2);
				setState(116);
				match(VAR);
				setState(117);
				match(T__25);
				setState(118);
				expr(0);
				}
				break;
			case 4:
				_localctx = new AffCharDecConstContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(119);
				match(T__24);
				setState(120);
				match(VAR);
				setState(121);
				match(T__25);
				setState(122);
				match(CONST);
				}
				break;
			case 5:
				_localctx = new AffCharDecCharContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(123);
				match(T__24);
				setState(124);
				match(VAR);
				setState(125);
				match(T__25);
				setState(126);
				match(CHAR);
				}
				break;
			case 6:
				_localctx = new AffCharDecVarContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(127);
				match(T__24);
				setState(128);
				match(VAR);
				setState(129);
				match(T__25);
				setState(130);
				match(VAR);
				}
				break;
			case 7:
				_localctx = new AffCharDecExprContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(131);
				match(T__24);
				setState(132);
				match(VAR);
				setState(133);
				match(T__25);
				setState(134);
				expr(0);
				}
				break;
			case 8:
				_localctx = new AffVarContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(135);
				match(VAR);
				setState(136);
				match(T__25);
				setState(137);
				match(VAR);
				}
				break;
			case 9:
				_localctx = new AffConstContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(138);
				match(VAR);
				setState(139);
				match(T__25);
				setState(140);
				match(CONST);
				}
				break;
			case 10:
				_localctx = new AffCharContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(141);
				match(VAR);
				setState(142);
				match(T__25);
				setState(143);
				match(CHAR);
				}
				break;
			case 11:
				_localctx = new AffExprContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(144);
				match(VAR);
				setState(145);
				match(T__25);
				setState(146);
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
		enterRule(_localctx, 18, RULE_ifLoop);
		try {
			setState(171);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				_localctx = new IfNoElseContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(149);
				match(T__26);
				setState(150);
				match(T__4);
				setState(151);
				testExpr();
				setState(152);
				match(T__5);
				setState(153);
				bloc();
				}
				break;
			case 2:
				_localctx = new IfWithElseContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(155);
				match(T__26);
				setState(156);
				match(T__4);
				setState(157);
				testExpr();
				setState(158);
				match(T__5);
				setState(159);
				bloc();
				setState(160);
				match(T__27);
				setState(161);
				bloc();
				}
				break;
			case 3:
				_localctx = new IfElseIfContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(163);
				match(T__26);
				setState(164);
				match(T__4);
				setState(165);
				testExpr();
				setState(166);
				match(T__5);
				setState(167);
				bloc();
				setState(168);
				match(T__27);
				setState(169);
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
	public static class RetVarContext extends RetContext {
		public TerminalNode RET() { return getToken(ifccParser.RET, 0); }
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public RetVarContext(RetContext ctx) { copyFrom(ctx); }
	}

	public final RetContext ret() throws RecognitionException {
		RetContext _localctx = new RetContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_ret);
		try {
			setState(177);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				_localctx = new RetVarContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(173);
				match(RET);
				setState(174);
				match(VAR);
				}
				break;
			case 2:
				_localctx = new RetConstContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(175);
				match(RET);
				setState(176);
				match(CONST);
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

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 5:
			return expr_sempred((ExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 8);
		case 1:
			return precpred(_ctx, 5);
		case 2:
			return precpred(_ctx, 4);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3%\u00b6\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\3\2\3\2\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\4\3\4\3\5\3\5\3"+
		"\5\3\5\5\5)\n\5\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\5\6\65\n\6\3\7"+
		"\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\5\7B\n\7\3\7\3\7\3\7\3\7\3\7"+
		"\3\7\3\7\3\7\3\7\7\7M\n\7\f\7\16\7P\13\7\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3"+
		"\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\5\bf\n\b\3\t\3\t\3"+
		"\t\3\t\5\tl\n\t\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3"+
		"\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n"+
		"\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\5\n\u0096\n\n\3\13\3\13\3\13\3\13"+
		"\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13"+
		"\3\13\3\13\3\13\3\13\5\13\u00ae\n\13\3\f\3\f\3\f\3\f\5\f\u00b4\n\f\3\f"+
		"\2\3\f\r\2\4\6\b\n\f\16\20\22\24\26\2\7\3\2\n\f\3\2\17\21\4\2\r\r\22\22"+
		"\3\2\23\26\3\2\27\30\2\u00c7\2\30\3\2\2\2\4\32\3\2\2\2\6\36\3\2\2\2\b"+
		"(\3\2\2\2\n\64\3\2\2\2\fA\3\2\2\2\16e\3\2\2\2\20k\3\2\2\2\22\u0095\3\2"+
		"\2\2\24\u00ad\3\2\2\2\26\u00b3\3\2\2\2\30\31\5\6\4\2\31\3\3\2\2\2\32\33"+
		"\7\3\2\2\33\34\5\b\5\2\34\35\7\4\2\2\35\5\3\2\2\2\36\37\7\5\2\2\37 \7"+
		"\6\2\2 !\7\7\2\2!\"\7\b\2\2\"#\5\4\3\2#\7\3\2\2\2$)\5\n\6\2%&\5\n\6\2"+
		"&\'\5\b\5\2\')\3\2\2\2($\3\2\2\2(%\3\2\2\2)\t\3\2\2\2*+\5\20\t\2+,\7\t"+
		"\2\2,\65\3\2\2\2-.\5\22\n\2./\7\t\2\2/\65\3\2\2\2\60\61\5\26\f\2\61\62"+
		"\7\t\2\2\62\65\3\2\2\2\63\65\5\24\13\2\64*\3\2\2\2\64-\3\2\2\2\64\60\3"+
		"\2\2\2\64\63\3\2\2\2\65\13\3\2\2\2\66\67\b\7\1\2\678\7\r\2\28B\5\f\7\t"+
		"9:\7\16\2\2:B\5\f\7\b;<\7\7\2\2<=\5\f\7\2=>\7\b\2\2>B\3\2\2\2?B\7\"\2"+
		"\2@B\7!\2\2A\66\3\2\2\2A9\3\2\2\2A;\3\2\2\2A?\3\2\2\2A@\3\2\2\2BN\3\2"+
		"\2\2CD\f\n\2\2DE\t\2\2\2EM\5\f\7\13FG\f\7\2\2GH\t\3\2\2HM\5\f\7\bIJ\f"+
		"\6\2\2JK\t\4\2\2KM\5\f\7\7LC\3\2\2\2LF\3\2\2\2LI\3\2\2\2MP\3\2\2\2NL\3"+
		"\2\2\2NO\3\2\2\2O\r\3\2\2\2PN\3\2\2\2QR\5\f\7\2RS\t\5\2\2ST\5\f\7\2Tf"+
		"\3\2\2\2UV\5\f\7\2VW\t\6\2\2WX\5\f\7\2Xf\3\2\2\2YZ\5\f\7\2Z[\7\31\2\2"+
		"[\\\5\f\7\2\\f\3\2\2\2]^\5\f\7\2^_\7\32\2\2_`\5\f\7\2`f\3\2\2\2ab\7\7"+
		"\2\2bc\5\16\b\2cd\7\b\2\2df\3\2\2\2eQ\3\2\2\2eU\3\2\2\2eY\3\2\2\2e]\3"+
		"\2\2\2ea\3\2\2\2f\17\3\2\2\2gh\7\5\2\2hl\7!\2\2ij\7\33\2\2jl\7!\2\2kg"+
		"\3\2\2\2ki\3\2\2\2l\21\3\2\2\2mn\7\5\2\2no\7!\2\2op\7\34\2\2p\u0096\7"+
		"\"\2\2qr\7\5\2\2rs\7!\2\2st\7\34\2\2t\u0096\7!\2\2uv\7\5\2\2vw\7!\2\2"+
		"wx\7\34\2\2x\u0096\5\f\7\2yz\7\33\2\2z{\7!\2\2{|\7\34\2\2|\u0096\7\"\2"+
		"\2}~\7\33\2\2~\177\7!\2\2\177\u0080\7\34\2\2\u0080\u0096\7 \2\2\u0081"+
		"\u0082\7\33\2\2\u0082\u0083\7!\2\2\u0083\u0084\7\34\2\2\u0084\u0096\7"+
		"!\2\2\u0085\u0086\7\33\2\2\u0086\u0087\7!\2\2\u0087\u0088\7\34\2\2\u0088"+
		"\u0096\5\f\7\2\u0089\u008a\7!\2\2\u008a\u008b\7\34\2\2\u008b\u0096\7!"+
		"\2\2\u008c\u008d\7!\2\2\u008d\u008e\7\34\2\2\u008e\u0096\7\"\2\2\u008f"+
		"\u0090\7!\2\2\u0090\u0091\7\34\2\2\u0091\u0096\7 \2\2\u0092\u0093\7!\2"+
		"\2\u0093\u0094\7\34\2\2\u0094\u0096\5\f\7\2\u0095m\3\2\2\2\u0095q\3\2"+
		"\2\2\u0095u\3\2\2\2\u0095y\3\2\2\2\u0095}\3\2\2\2\u0095\u0081\3\2\2\2"+
		"\u0095\u0085\3\2\2\2\u0095\u0089\3\2\2\2\u0095\u008c\3\2\2\2\u0095\u008f"+
		"\3\2\2\2\u0095\u0092\3\2\2\2\u0096\23\3\2\2\2\u0097\u0098\7\35\2\2\u0098"+
		"\u0099\7\7\2\2\u0099\u009a\5\16\b\2\u009a\u009b\7\b\2\2\u009b\u009c\5"+
		"\4\3\2\u009c\u00ae\3\2\2\2\u009d\u009e\7\35\2\2\u009e\u009f\7\7\2\2\u009f"+
		"\u00a0\5\16\b\2\u00a0\u00a1\7\b\2\2\u00a1\u00a2\5\4\3\2\u00a2\u00a3\7"+
		"\36\2\2\u00a3\u00a4\5\4\3\2\u00a4\u00ae\3\2\2\2\u00a5\u00a6\7\35\2\2\u00a6"+
		"\u00a7\7\7\2\2\u00a7\u00a8\5\16\b\2\u00a8\u00a9\7\b\2\2\u00a9\u00aa\5"+
		"\4\3\2\u00aa\u00ab\7\36\2\2\u00ab\u00ac\5\24\13\2\u00ac\u00ae\3\2\2\2"+
		"\u00ad\u0097\3\2\2\2\u00ad\u009d\3\2\2\2\u00ad\u00a5\3\2\2\2\u00ae\25"+
		"\3\2\2\2\u00af\u00b0\7\37\2\2\u00b0\u00b4\7!\2\2\u00b1\u00b2\7\37\2\2"+
		"\u00b2\u00b4\7\"\2\2\u00b3\u00af\3\2\2\2\u00b3\u00b1\3\2\2\2\u00b4\27"+
		"\3\2\2\2\f(\64ALNek\u0095\u00ad\u00b3";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}