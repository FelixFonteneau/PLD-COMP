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
        | array_elt                                 #arrayExpr
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
      | type VAR '=' arraydec    # affDecArray
      | type VAR '=' expr        # affDecExpr
      | VAR '=' VAR              # affVar
      | VAR '=' CONST            # affConst
      | VAR '=' CHAREXP          # affChar
      | VAR '=' arraydec         # affArray
      | VAR '=' expr             # affExpr
      | array_elt '=' VAR        # affEltVar
      | array_elt '=' CONST      # affEltConst
      | array_elt '=' expr       # affEltExpr
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
      | INT_ARRAY
      ;

arraydec : 'new' eltType=(INT | CHAR) '[' + CONST + ']';
array_elt : VAR '[' CONST ']';

INT : 'int' ;
CHAR : 'char' ;
INT_ARRAY : 'int[]';
RET : 'return' ;
CHAREXP : '\'' .*? '\'' ; // prends tout ce qu'il y a entre les ' ' -> TODO verifier si c'est un char ou pas lors de l'affectation
VAR : [a-z]+ ;
CONST : [0-9]+ ;
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);
