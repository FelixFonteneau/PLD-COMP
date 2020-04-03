grammar ifcc;

axiom : prog
      ;

bloc : '{' statements '}';

prog  : 'int' 'main' '(' ')' bloc;

statements : statement
           | statement statements
           ;

statement : dec ';'   # statementDeclaration
          | aff ';'   # statementAffectation
          | ret ';'   # statementReturn
          | ifLoop    # boucleIf
          | whileLoop # boucleWhile
          ;

expr    : expr op=('|' | '&' | '^') expr               #bitsExpr
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

dec   : 'int' vars;

aff   : 'int' VAR '=' CONST # affDecConst
      | 'int' VAR '=' VAR   # affDecVar
      | 'int' VAR '=' expr  # affDecExpr
      | VAR '=' VAR         # affVar
      | VAR '=' CONST       # affConst
      | VAR '=' expr        # affExpr
      ;

ifLoop  : 'if' '(' testExpr ')' bloc                # ifNoElse
        | 'if' '(' testExpr ')' bloc 'else' bloc    # ifWithElse
        | 'if' '(' testExpr ')' bloc 'else' ifLoop  # ifElseIf
        ;

whileLoop : 'while' '(' testExpr ')' bloc;

ret   : RET VAR   # retVar
      | RET CONST # retConst
      ;

RET : 'return' ;
VAR : [a-z]+ ;
CONST : [0-9]+ ;
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);
