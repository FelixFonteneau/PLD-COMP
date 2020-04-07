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
		T__24=25, T__25=26, INT=27, CHAR=28, RET=29, CHAREXP=30, VAR=31, CONST=32, 
		COMMENT=33, DIRECTIVE=34, WS=35;
	public static final int
		RULE_axiom = 0, RULE_bloc = 1, RULE_prog = 2, RULE_statements = 3, RULE_statement = 4, 
		RULE_expr = 5, RULE_testExpr = 6, RULE_dec = 7, RULE_aff = 8, RULE_ifLoop = 9, 
		RULE_ret = 10, RULE_type = 11;
	public static final String[] ruleNames = {
		"axiom", "bloc", "prog", "statements", "statement", "expr", "testExpr", 
		"dec", "aff", "ifLoop", "ret", "type"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'{'", "'}'", "'main'", "'('", "')'", "';'", "'|'", "'&'", "'^'", 
		"'-'", "'!'", "'*'", "'/'", "'%'", "'+'", "'<='", "'>='", "'<'", "'>'", 
		"'=='", "'!='", "'&&'", "'||'", "'='", "'if'", "'else'", "'int'", "'char'", 
		"'return'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, "INT", "CHAR", "RET", "CHAREXP", "VAR", "CONST", "COMMENT", 
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
			setState(24);
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
			setState(26);
			match(T__0);
			setState(27);
			statements();
			setState(28);
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
			setState(30);
			match(INT);
			setState(31);
			match(T__2);
			setState(32);
			match(T__3);
			setState(33);
			match(T__4);
			setState(34);
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
			setState(40);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,0,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(36);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(37);
				statement();
				setState(38);
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
			setState(52);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				_localctx = new StatementDeclarationContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(42);
				dec();
				setState(43);
				match(T__5);
				}
				break;
			case 2:
				_localctx = new StatementAffectationContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(45);
				aff();
				setState(46);
				match(T__5);
				}
				break;
			case 3:
				_localctx = new StatementReturnContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(48);
				ret();
				setState(49);
				match(T__5);
				}
				break;
			case 4:
				_localctx = new BoucleIfContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(51);
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
			setState(65);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__9:
				{
				_localctx = new MinusExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(55);
				match(T__9);
				setState(56);
				expr(7);
				}
				break;
			case T__10:
				{
				_localctx = new NotExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(57);
				match(T__10);
				setState(58);
				expr(6);
				}
				break;
			case T__3:
				{
				_localctx = new ParExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(59);
				match(T__3);
				setState(60);
				expr(0);
				setState(61);
				match(T__4);
				}
				break;
			case CONST:
				{
				_localctx = new ConstExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(63);
				match(CONST);
				}
				break;
			case VAR:
				{
				_localctx = new VarExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(64);
				match(VAR);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(78);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(76);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
					case 1:
						{
						_localctx = new BitsExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(67);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(68);
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
						setState(69);
						expr(9);
						}
						break;
					case 2:
						{
						_localctx = new MultiplicationExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(70);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(71);
						((MultiplicationExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << T__12) | (1L << T__13))) != 0)) ) {
							((MultiplicationExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(72);
						expr(6);
						}
						break;
					case 3:
						{
						_localctx = new AdditiveExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(73);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(74);
						((AdditiveExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==T__9 || _la==T__14) ) {
							((AdditiveExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(75);
						expr(5);
						}
						break;
					}
					} 
				}
				setState(80);
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
			setState(101);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				_localctx = new RelationalTestExprContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(81);
				expr(0);
				setState(82);
				((RelationalTestExprContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__15) | (1L << T__16) | (1L << T__17) | (1L << T__18))) != 0)) ) {
					((RelationalTestExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(83);
				expr(0);
				}
				break;
			case 2:
				_localctx = new EqualityTestExprContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(85);
				expr(0);
				setState(86);
				((EqualityTestExprContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==T__19 || _la==T__20) ) {
					((EqualityTestExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(87);
				expr(0);
				}
				break;
			case 3:
				_localctx = new AndTestExprContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(89);
				expr(0);
				setState(90);
				match(T__21);
				setState(91);
				expr(0);
				}
				break;
			case 4:
				_localctx = new OrTestExprContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(93);
				expr(0);
				setState(94);
				match(T__22);
				setState(95);
				expr(0);
				}
				break;
			case 5:
				_localctx = new ParTestExprContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(97);
				match(T__3);
				setState(98);
				testExpr();
				setState(99);
				match(T__4);
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
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public DecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dec; }
	}

	public final DecContext dec() throws RecognitionException {
		DecContext _localctx = new DecContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_dec);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(103);
			type();
			setState(104);
			match(VAR);
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
	public static class AffConstContext extends AffContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public TerminalNode CONST() { return getToken(ifccParser.CONST, 0); }
		public AffConstContext(AffContext ctx) { copyFrom(ctx); }
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
	public static class AffDecCharContext extends AffContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public TerminalNode CHAREXP() { return getToken(ifccParser.CHAREXP, 0); }
		public AffDecCharContext(AffContext ctx) { copyFrom(ctx); }
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
		enterRule(_localctx, 16, RULE_aff);
		try {
			setState(138);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				_localctx = new AffDecConstContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(106);
				type();
				setState(107);
				match(VAR);
				setState(108);
				match(T__23);
				setState(109);
				match(CONST);
				}
				break;
			case 2:
				_localctx = new AffDecVarContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(111);
				type();
				setState(112);
				match(VAR);
				setState(113);
				match(T__23);
				setState(114);
				match(VAR);
				}
				break;
			case 3:
				_localctx = new AffDecExprContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(116);
				type();
				setState(117);
				match(VAR);
				setState(118);
				match(T__23);
				setState(119);
				expr(0);
				}
				break;
			case 4:
				_localctx = new AffDecCharContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(121);
				type();
				setState(122);
				match(VAR);
				setState(123);
				match(T__23);
				setState(124);
				match(CHAREXP);
				}
				break;
			case 5:
				_localctx = new AffVarContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(126);
				match(VAR);
				setState(127);
				match(T__23);
				setState(128);
				match(VAR);
				}
				break;
			case 6:
				_localctx = new AffConstContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(129);
				match(VAR);
				setState(130);
				match(T__23);
				setState(131);
				match(CONST);
				}
				break;
			case 7:
				_localctx = new AffCharContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(132);
				match(VAR);
				setState(133);
				match(T__23);
				setState(134);
				match(CHAREXP);
				}
				break;
			case 8:
				_localctx = new AffExprContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(135);
				match(VAR);
				setState(136);
				match(T__23);
				setState(137);
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
			setState(162);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				_localctx = new IfNoElseContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(140);
				match(T__24);
				setState(141);
				match(T__3);
				setState(142);
				testExpr();
				setState(143);
				match(T__4);
				setState(144);
				bloc();
				}
				break;
			case 2:
				_localctx = new IfWithElseContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(146);
				match(T__24);
				setState(147);
				match(T__3);
				setState(148);
				testExpr();
				setState(149);
				match(T__4);
				setState(150);
				bloc();
				setState(151);
				match(T__25);
				setState(152);
				bloc();
				}
				break;
			case 3:
				_localctx = new IfElseIfContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(154);
				match(T__24);
				setState(155);
				match(T__3);
				setState(156);
				testExpr();
				setState(157);
				match(T__4);
				setState(158);
				bloc();
				setState(159);
				match(T__25);
				setState(160);
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
			setState(168);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				_localctx = new RetVarContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(164);
				match(RET);
				setState(165);
				match(VAR);
				}
				break;
			case 2:
				_localctx = new RetConstContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(166);
				match(RET);
				setState(167);
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
		enterRule(_localctx, 22, RULE_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(170);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3%\u00af\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\3\2\3\2\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\4\3\4\3"+
		"\5\3\5\3\5\3\5\5\5+\n\5\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\5\6\67"+
		"\n\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\5\7D\n\7\3\7\3\7\3\7"+
		"\3\7\3\7\3\7\3\7\3\7\3\7\7\7O\n\7\f\7\16\7R\13\7\3\b\3\b\3\b\3\b\3\b\3"+
		"\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\5\bh\n\b\3"+
		"\t\3\t\3\t\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n"+
		"\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\5"+
		"\n\u008d\n\n\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3"+
		"\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\5\13\u00a5\n\13"+
		"\3\f\3\f\3\f\3\f\5\f\u00ab\n\f\3\r\3\r\3\r\2\3\f\16\2\4\6\b\n\f\16\20"+
		"\22\24\26\30\2\b\3\2\t\13\3\2\16\20\4\2\f\f\21\21\3\2\22\25\3\2\26\27"+
		"\3\2\35\36\2\u00bb\2\32\3\2\2\2\4\34\3\2\2\2\6 \3\2\2\2\b*\3\2\2\2\n\66"+
		"\3\2\2\2\fC\3\2\2\2\16g\3\2\2\2\20i\3\2\2\2\22\u008c\3\2\2\2\24\u00a4"+
		"\3\2\2\2\26\u00aa\3\2\2\2\30\u00ac\3\2\2\2\32\33\5\6\4\2\33\3\3\2\2\2"+
		"\34\35\7\3\2\2\35\36\5\b\5\2\36\37\7\4\2\2\37\5\3\2\2\2 !\7\35\2\2!\""+
		"\7\5\2\2\"#\7\6\2\2#$\7\7\2\2$%\5\4\3\2%\7\3\2\2\2&+\5\n\6\2\'(\5\n\6"+
		"\2()\5\b\5\2)+\3\2\2\2*&\3\2\2\2*\'\3\2\2\2+\t\3\2\2\2,-\5\20\t\2-.\7"+
		"\b\2\2.\67\3\2\2\2/\60\5\22\n\2\60\61\7\b\2\2\61\67\3\2\2\2\62\63\5\26"+
		"\f\2\63\64\7\b\2\2\64\67\3\2\2\2\65\67\5\24\13\2\66,\3\2\2\2\66/\3\2\2"+
		"\2\66\62\3\2\2\2\66\65\3\2\2\2\67\13\3\2\2\289\b\7\1\29:\7\f\2\2:D\5\f"+
		"\7\t;<\7\r\2\2<D\5\f\7\b=>\7\6\2\2>?\5\f\7\2?@\7\7\2\2@D\3\2\2\2AD\7\""+
		"\2\2BD\7!\2\2C8\3\2\2\2C;\3\2\2\2C=\3\2\2\2CA\3\2\2\2CB\3\2\2\2DP\3\2"+
		"\2\2EF\f\n\2\2FG\t\2\2\2GO\5\f\7\13HI\f\7\2\2IJ\t\3\2\2JO\5\f\7\bKL\f"+
		"\6\2\2LM\t\4\2\2MO\5\f\7\7NE\3\2\2\2NH\3\2\2\2NK\3\2\2\2OR\3\2\2\2PN\3"+
		"\2\2\2PQ\3\2\2\2Q\r\3\2\2\2RP\3\2\2\2ST\5\f\7\2TU\t\5\2\2UV\5\f\7\2Vh"+
		"\3\2\2\2WX\5\f\7\2XY\t\6\2\2YZ\5\f\7\2Zh\3\2\2\2[\\\5\f\7\2\\]\7\30\2"+
		"\2]^\5\f\7\2^h\3\2\2\2_`\5\f\7\2`a\7\31\2\2ab\5\f\7\2bh\3\2\2\2cd\7\6"+
		"\2\2de\5\16\b\2ef\7\7\2\2fh\3\2\2\2gS\3\2\2\2gW\3\2\2\2g[\3\2\2\2g_\3"+
		"\2\2\2gc\3\2\2\2h\17\3\2\2\2ij\5\30\r\2jk\7!\2\2k\21\3\2\2\2lm\5\30\r"+
		"\2mn\7!\2\2no\7\32\2\2op\7\"\2\2p\u008d\3\2\2\2qr\5\30\r\2rs\7!\2\2st"+
		"\7\32\2\2tu\7!\2\2u\u008d\3\2\2\2vw\5\30\r\2wx\7!\2\2xy\7\32\2\2yz\5\f"+
		"\7\2z\u008d\3\2\2\2{|\5\30\r\2|}\7!\2\2}~\7\32\2\2~\177\7 \2\2\177\u008d"+
		"\3\2\2\2\u0080\u0081\7!\2\2\u0081\u0082\7\32\2\2\u0082\u008d\7!\2\2\u0083"+
		"\u0084\7!\2\2\u0084\u0085\7\32\2\2\u0085\u008d\7\"\2\2\u0086\u0087\7!"+
		"\2\2\u0087\u0088\7\32\2\2\u0088\u008d\7 \2\2\u0089\u008a\7!\2\2\u008a"+
		"\u008b\7\32\2\2\u008b\u008d\5\f\7\2\u008cl\3\2\2\2\u008cq\3\2\2\2\u008c"+
		"v\3\2\2\2\u008c{\3\2\2\2\u008c\u0080\3\2\2\2\u008c\u0083\3\2\2\2\u008c"+
		"\u0086\3\2\2\2\u008c\u0089\3\2\2\2\u008d\23\3\2\2\2\u008e\u008f\7\33\2"+
		"\2\u008f\u0090\7\6\2\2\u0090\u0091\5\16\b\2\u0091\u0092\7\7\2\2\u0092"+
		"\u0093\5\4\3\2\u0093\u00a5\3\2\2\2\u0094\u0095\7\33\2\2\u0095\u0096\7"+
		"\6\2\2\u0096\u0097\5\16\b\2\u0097\u0098\7\7\2\2\u0098\u0099\5\4\3\2\u0099"+
		"\u009a\7\34\2\2\u009a\u009b\5\4\3\2\u009b\u00a5\3\2\2\2\u009c\u009d\7"+
		"\33\2\2\u009d\u009e\7\6\2\2\u009e\u009f\5\16\b\2\u009f\u00a0\7\7\2\2\u00a0"+
		"\u00a1\5\4\3\2\u00a1\u00a2\7\34\2\2\u00a2\u00a3\5\24\13\2\u00a3\u00a5"+
		"\3\2\2\2\u00a4\u008e\3\2\2\2\u00a4\u0094\3\2\2\2\u00a4\u009c\3\2\2\2\u00a5"+
		"\25\3\2\2\2\u00a6\u00a7\7\37\2\2\u00a7\u00ab\7!\2\2\u00a8\u00a9\7\37\2"+
		"\2\u00a9\u00ab\7\"\2\2\u00aa\u00a6\3\2\2\2\u00aa\u00a8\3\2\2\2\u00ab\27"+
		"\3\2\2\2\u00ac\u00ad\t\7\2\2\u00ad\31\3\2\2\2\13*\66CNPg\u008c\u00a4\u00aa";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}