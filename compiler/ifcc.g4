grammar ifcc;

axiom : prog
      ;

bloc : '{' statements '}';

prog  : 'int' 'main' '(' ')' bloc;

statements : statement ';'
           | statement ';' statements
           ;

statement : dec  # statementDeclaration
          | aff  # statementAffectation
          | ret  # statementReturn
          ;

expr    : expr '^' expr                             #powExpr
        | '-' expr                                  #minusExpr
        | '!' expr                                  #notExpr
        | expr op=('*' | '/' | '%') expr            #multiplicationExpr
        | expr op=('+' | '-') expr                  #additiveExpr
        | expr op=('<=' | '>=' | '<' | '>') expr    #relationalExpr
        | expr op=('=' | '!=') expr                 #equalityExpr
        | expr '&&' expr                            #andExpr
        | expr '||' expr                            #orExpr
        | CONST                                     #constExpr
        | VAR                                       #varExpr
        ;

dec   : 'int' VAR;

aff   : 'int' VAR '=' CONST # affDecConst
      | 'int' VAR '=' VAR   # affDecVar
      | 'int' VAR '=' expr  # affDecExpr
      | VAR '=' VAR         # affVar
      | VAR '=' CONST       # affConst
      | VAR '=' expr        # affExpr
      ;

ret   : RET VAR   # retVar
      | RET CONST # retConst
      ;

RET : 'return' ;
VAR : [a-z]+ ;
CONST : [0-9]+ ;
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);
