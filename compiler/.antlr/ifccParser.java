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
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, RET=9, 
		VAR=10, CONST=11, COMMENT=12, DIRECTIVE=13, WS=14;
	public static final int
		RULE_axiom = 0, RULE_prog = 1, RULE_statements = 2, RULE_statement = 3, 
		RULE_dec = 4, RULE_aff = 5, RULE_ret = 6;
	public static final String[] ruleNames = {
		"axiom", "prog", "statements", "statement", "dec", "aff", "ret"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'int'", "'main'", "'('", "')'", "'{'", "'}'", "';'", "'='", "'return'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, null, null, null, "RET", "VAR", "CONST", 
		"COMMENT", "DIRECTIVE", "WS"
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
			setState(14);
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

	public static class ProgContext extends ParserRuleContext {
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public ProgContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prog; }
	}

	public final ProgContext prog() throws RecognitionException {
		ProgContext _localctx = new ProgContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_prog);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(16);
			match(T__0);
			setState(17);
			match(T__1);
			setState(18);
			match(T__2);
			setState(19);
			match(T__3);
			setState(20);
			match(T__4);
			setState(21);
			statements();
			setState(22);
			match(T__5);
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
		enterRule(_localctx, 4, RULE_statements);
		try {
			setState(31);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,0,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(24);
				statement();
				setState(25);
				match(T__6);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(27);
				statement();
				setState(28);
				match(T__6);
				setState(29);
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
		enterRule(_localctx, 6, RULE_statement);
		try {
			setState(36);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				_localctx = new StatementDeclarationContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(33);
				dec();
				}
				break;
			case 2:
				_localctx = new StatementAffectationContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(34);
				aff();
				}
				break;
			case 3:
				_localctx = new StatementReturnContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(35);
				ret();
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
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public DecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dec; }
	}

	public final DecContext dec() throws RecognitionException {
		DecContext _localctx = new DecContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_dec);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(38);
			match(T__0);
			setState(39);
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
	public static class AffDecVarContext extends AffContext {
		public List<TerminalNode> VAR() { return getTokens(ifccParser.VAR); }
		public TerminalNode VAR(int i) {
			return getToken(ifccParser.VAR, i);
		}
		public AffDecVarContext(AffContext ctx) { copyFrom(ctx); }
	}

	public final AffContext aff() throws RecognitionException {
		AffContext _localctx = new AffContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_aff);
		try {
			setState(55);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				_localctx = new AffDecConstContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(41);
				match(T__0);
				setState(42);
				match(VAR);
				setState(43);
				match(T__7);
				setState(44);
				match(CONST);
				}
				break;
			case 2:
				_localctx = new AffDecVarContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(45);
				match(T__0);
				setState(46);
				match(VAR);
				setState(47);
				match(T__7);
				setState(48);
				match(VAR);
				}
				break;
			case 3:
				_localctx = new AffVarContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(49);
				match(VAR);
				setState(50);
				match(T__7);
				setState(51);
				match(VAR);
				}
				break;
			case 4:
				_localctx = new AffConstContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(52);
				match(VAR);
				setState(53);
				match(T__7);
				setState(54);
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
		enterRule(_localctx, 12, RULE_ret);
		try {
			setState(61);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				_localctx = new RetVarContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(57);
				match(RET);
				setState(58);
				match(VAR);
				}
				break;
			case 2:
				_localctx = new RetConstContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(59);
				match(RET);
				setState(60);
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

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\20B\4\2\t\2\4\3\t"+
		"\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\3\2\3\2\3\3\3\3\3\3\3\3\3\3"+
		"\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\4\3\4\3\4\5\4\"\n\4\3\5\3\5\3\5\5\5\'\n"+
		"\5\3\6\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7"+
		"\5\7:\n\7\3\b\3\b\3\b\3\b\5\b@\n\b\3\b\2\2\t\2\4\6\b\n\f\16\2\2\2A\2\20"+
		"\3\2\2\2\4\22\3\2\2\2\6!\3\2\2\2\b&\3\2\2\2\n(\3\2\2\2\f9\3\2\2\2\16?"+
		"\3\2\2\2\20\21\5\4\3\2\21\3\3\2\2\2\22\23\7\3\2\2\23\24\7\4\2\2\24\25"+
		"\7\5\2\2\25\26\7\6\2\2\26\27\7\7\2\2\27\30\5\6\4\2\30\31\7\b\2\2\31\5"+
		"\3\2\2\2\32\33\5\b\5\2\33\34\7\t\2\2\34\"\3\2\2\2\35\36\5\b\5\2\36\37"+
		"\7\t\2\2\37 \5\6\4\2 \"\3\2\2\2!\32\3\2\2\2!\35\3\2\2\2\"\7\3\2\2\2#\'"+
		"\5\n\6\2$\'\5\f\7\2%\'\5\16\b\2&#\3\2\2\2&$\3\2\2\2&%\3\2\2\2\'\t\3\2"+
		"\2\2()\7\3\2\2)*\7\f\2\2*\13\3\2\2\2+,\7\3\2\2,-\7\f\2\2-.\7\n\2\2.:\7"+
		"\r\2\2/\60\7\3\2\2\60\61\7\f\2\2\61\62\7\n\2\2\62:\7\f\2\2\63\64\7\f\2"+
		"\2\64\65\7\n\2\2\65:\7\f\2\2\66\67\7\f\2\2\678\7\n\2\28:\7\r\2\29+\3\2"+
		"\2\29/\3\2\2\29\63\3\2\2\29\66\3\2\2\2:\r\3\2\2\2;<\7\13\2\2<@\7\f\2\2"+
		"=>\7\13\2\2>@\7\r\2\2?;\3\2\2\2?=\3\2\2\2@\17\3\2\2\2\6!&9?";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}