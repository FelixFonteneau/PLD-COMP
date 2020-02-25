grammar ifcc;

axiom : prog
      ;

prog  : 'int' 'main' '(' ')' '{' statements '}' ;

statements : statement ';'
           | statement ';' statements
           ;

statement : dec  # statementDeclaration
          | aff  # statementAffectation
          | ret  # statementReturn
          ;

dec   : 'int' VAR;

aff   : 'int' VAR '=' CONST # affDecConst
      | 'int' VAR '=' VAR   # affDecVar
      | VAR '=' VAR         # affVar
      | VAR '=' CONST       # affConst
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
