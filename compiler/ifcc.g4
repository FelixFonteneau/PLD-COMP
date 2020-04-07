grammar ifcc;

axiom : prog
      ;

globalVariables :                               # nothing
                | decGlobal ';' globalVariables #decGAbstract
                ;


bloc : '{' statements '}';

prog  : globalVariables 'int' 'main' '(' ')' bloc;

statements : statement
           | statement statements
           ;

statement : dec ';'   # statementDeclaration
          | aff ';'   # statementAffectation
          | ret ';'   # statementReturn
          | ifLoop    # boucleIf
          | whileLoop # boucleWhile
          ;

expr    : expr op=('|' | '&' | '^') expr            #bitsExpr
        | '-' expr                                  #minusExpr
        | '!' expr                                  #notExpr
        | expr op=('*' | '/' | '%') expr            #multiplicationExpr
        | expr op=('+' | '-') expr                  #additiveExpr
        | '(' expr ')'                              #parExpr
        | CONST                                     #constExpr
        | VAR                                       #varExpr
        ;

testExpr  : expr op=('<=' | '>=' | '<' | '>') expr    #relationalTestExpr
          | expr op=('==' | '!=') expr                #equalityTestExpr
          | expr '&&' expr                            #andTestExpr
          | expr '||' expr                            #orTestExpr
          | '(' testExpr ')'                          #parTestExpr
          ;

vars  : VAR ',' vars  #declMult
      | VAR           #lastDecl
      ;

dec   : type vars;

aff   : type VAR '=' CONST	     # affDecConst
      | type VAR '=' VAR	       # affDecVar
      | type VAR '=' CHAREXP     # affDecChar
      | type VAR '=' expr        # affDecExpr
      | VAR '=' VAR              # affVar
      | VAR '=' CONST            # affConst
      | VAR '=' CHAREXP          # affChar
      | VAR '=' expr             # affExpr
      ;

varsG  : VAR ',' vars  #decGMult
       | VAR           #lastDecG
       ;

decGlobal   : type varsG               # decG
            | type VAR '=' CONST	     # decGAffConst
            | type VAR '=' CHAREXP     # decGAffChar
            ;

ifLoop  : 'if' '(' testExpr ')' bloc                # ifNoElse
        | 'if' '(' testExpr ')' bloc 'else' bloc    # ifWithElse
        | 'if' '(' testExpr ')' bloc 'else' ifLoop  # ifElseIf
        ;

whileLoop : 'while' '(' testExpr ')' bloc;

ret   : RET VAR   # retVar
      | RET CONST # retConst
      ;

type : INT
      | CHAR
      ;

INT : 'int' ;
CHAR : 'char' ;
RET : 'return' ;
CHAREXP : '\'' .*? '\'' ; // prends tout ce qu'il y a entre les ' ' -> TODO verifier si c'est un char ou pas lors de l'affectation
VAR : [a-z]+ ;
CONST : [0-9]+ ;
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);
