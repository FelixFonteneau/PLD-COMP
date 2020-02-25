grammar gram;

axiom : prog;
prog : func;

func : type_plus name '(' decl ')' bloc;

type_plus : type | 'void';
type : 'int' | 'char';
name : [a-z]+;

bloc : '{' b '}';
b : decls insts;

decls : decl_init decls | ;
decl_init : decl init ';';
decl : type name;
init : '=' val | ;

val : [0-9]+;

insts : inst insts | ;
inst : if | expr | affect;

if : 'if' '(' expr ')' bloc else;
else : 'else' bloc | ;

affect : name '=' expr ';';
expr : ...;


