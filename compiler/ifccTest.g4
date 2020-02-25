grammar ifcc;

axiom : prog       
      ;

prog : 'int' 'main' '(' ')' '{' aff ';' RETURN VAR ';' '}' ;

aff :    VAR '=' CONST ;

RETURN : 'return' ;
VAR : [a-z]+ ;
CONST : [0-9]+ ;
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);
