grammar ifcc;

axiom : globalVariables functions prog functions
      ;

globalVariables :
                | decGlobal ';' globalVariables
                ;

bloc : '{' statements '}';

blocRet : '{' statements ret '}'
        ;

prog  : INT 'main' '(' ')' bloc;

functions : funcDec
          | funcDec functions
          | /*epsilon*/
          ;

funcDec : funcType VAR '(' argsDec ')' bloc     #funcDecDef
        | funcType VAR '(' argsDec ')' ';'      #funcDecStrict
        ;

funcCall : VAR '(' args ')' ;

argsDec : type VAR ',' argsDec   #argsDecVar
        | type VAR               #lastArgDec
        | /*epsilon*/            #noArgDec
        ;

args : VAR ',' args         #argsVar
     | CONST ',' args       #argsConst
     | VAR                  #lastArgVar
     | CONST                #lastArgConst
     | /*epsilon*/          #noArg
     ;

statements : statement
           | statement statements
           ;

statement : dec ';'   # statementDeclaration
          | aff ';'   # statementAffectation
          | ret ';'      # statementReturn
          | ifLoop    # boucleIf
          | whileLoop # boucleWhile
          | funcCall ';' # callAFunction
          ;

expr    : expr op=('|' | '&' | '^') expr            #bitsExpr
        | '-' expr                                  #minusExpr
        | '!' expr                                  #notExpr
        | expr '*' expr                             #multiplicationExpr
        | expr op=('+' | '-') expr                  #additiveExpr
        | '(' expr ')'                              #parExpr
        | funcCall                                  #funcCallExpr
        | CONST                                     #constExpr
        | VAR                                       #varExpr
        | CHAREXP                                   #charExpr
        | array_elt                                 #arrayExpr
        ;

testExpr  : expr op=('<=' | '>=' | '<' | '>') expr    #relationalTestExpr
          | expr op=('==' | '!=') expr                #equalityTestExpr
          /* | expr '&&' expr                            #andTestExpr*/
          /* | expr '||' expr                            #orTestExpr*/
          | '(' testExpr ')'                          #parTestExpr
          ;

vars  : VAR ',' vars  #declMult
      | VAR           #lastDecl
      ;

dec   : type vars;

aff   : type VAR '=' CONST	   # affDecConst
      | type VAR '=' VAR	   # affDecVar
      | type VAR '=' CHAREXP     # affDecChar
      | type VAR '[' CONST ']'   # affDecArray
      | type VAR '=' expr        # affDecExpr
      | VAR '=' VAR              # affVar
      | VAR '=' CONST            # affConst
      | VAR '=' CHAREXP          # affChar
      | VAR '=' expr             # affExpr
      | array_elt '=' VAR        # affEltVar
      | array_elt '=' CONST      # affEltConst
      | array_elt '=' expr       # affEltExpr
      ;

varsG  : VAR ',' varsG  #decGMult
       | VAR            #lastDecG
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

ret   : RET VAR      # retVar
      | RET CONST    # retConst
      | RET expr     # retExpr
      ;

type : INT
      | CHAR
      ;

funcType : INT
         | CHAR
         | 'void'
         ;

array_elt : VAR '[' CONST ']';

INT : 'int' ;
CHAR : 'char' ;
RET : 'return' ;
CHAREXP : '\'' .*? '\'' ; // prends tout ce qu'il y a entre les ' ' -> TODO verifier si c'est un char ou pas lors de l'affectation
VAR : [a-zA-Z][a-zA-Z1-9]* ;
CONST : [0-9]+ ;
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);
