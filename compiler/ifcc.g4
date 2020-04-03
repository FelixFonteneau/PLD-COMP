grammar ifcc;

axiom : prog
      ;

bloc : '{' statements '}';

prog  : 'int' 'main' '(' ')' bloc;

statements : statement
           | statement statements
           ;

statement : dec ';' # statementDeclaration
          | aff ';' # statementAffectation
          | ret ';' # statementReturn
          | ifLoop  # boucleIf
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

dec   : 'int' VAR #decInt
      | 'char' VAR #decChar
      ;

aff   : 'int' VAR '=' CONST               # affDecConst
      | 'int' VAR '=' VAR                 # affDecVar
      | 'int' VAR '=' expr                # affDecExpr
      | 'char' VAR '=' CONST              # affCharDecConst
      | 'char' VAR '=' CHAR               # affCharDecChar   
      | 'char' VAR '=' VAR                # affCharDecVar
      | 'char' VAR '=' expr               # affCharDecExpr
      | VAR '=' VAR                       # affVar
      | VAR '=' CONST                     # affConst
      | VAR '=' CHAR                      # affChar
      | VAR '=' expr                      # affExpr
      ;

ifLoop  : 'if' '(' testExpr ')' bloc                # ifNoElse
        | 'if' '(' testExpr ')' bloc 'else' bloc    # ifWithElse
        | 'if' '(' testExpr ')' bloc 'else' ifLoop  # ifElseIf
        ;

ret   : RET VAR   # retVar
      | RET CONST # retConst
      ;

RET : 'return' ;
CHAR : '\'' .*? '\'' ; // prends tout ce qu'il y a entre les ' ' -> TODO verifier si c'est un char ou pas lors de l'affectation
VAR : [a-z]+ ;
CONST : [0-9]+ ;
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);
