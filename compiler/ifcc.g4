grammar ifcc;

axiom : prog       
      ;

prog : 'int' 'main' '(' ')' '{' aff ';' ret ';' '}' ;

aff :    'int' VAR '=' CONST ;

ret : RET VAR;

RET : 'return' ;
VAR : [a-z]+ ;
CONST : [0-9]+ ;
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);
