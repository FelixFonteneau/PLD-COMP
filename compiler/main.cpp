#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <vector>

#include "antlr4-runtime.h"
#include "antlr4-generated/ifccLexer.h"
#include "antlr4-generated/ifccParser.h"
#include "antlr4-generated/ifccBaseVisitor.h"
#include "visitor.h"
#include "error/syntaxErrorListener.h"
#include "error/semanticErrorListener.h"
#include "intermediate-representation/CFG.h"
#include "symbol-table/symbolTable.h"
#include "symbol-table/functionTable.h"

using namespace antlr4;
using namespace std;


int main(int argn, const char **argv) {
  stringstream in;
  if (argn==2) {
     ifstream lecture(argv[1]);
     in << lecture.rdbuf();
  }
  ANTLRInputStream input(in.str());
  ifccLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  FunctionTable::addDefinedFunction("putchar", "void" , nullptr);
  FunctionTable::addDefinedFunction("getchar", "void" , nullptr);

  tokens.fill();

  ifccParser parser(&tokens);

  SyntaxErrorListener errorlistener(in.str());
  parser.removeErrorListeners();
  parser.addErrorListener(&errorlistener);

  // parse the antlr4 tree to find syntax errors.
  tree::ParseTree* tree = parser.axiom();
  if (errorlistener.Error()){
    cerr << "Error in " << argv[1] << "." << endl;
    cerr << errorlistener;
    return 1;
  }

  vector<CFG*> cfgs;
  SemanticErrorListener semanticErrorListener(in.str());

  // visit the antlr4 tree, build IR and semantic errors
  Visitor visitor(&cfgs, &semanticErrorListener);
  visitor.visit(tree);

  // show semantic errors.
  if (semanticErrorListener.Error()){
    cerr << "Error in " << argv[1] << "." << endl;
    cerr << semanticErrorListener;
    return 1;
  }


  // x86 back-end to transform the IR in assembly code

  // global variables
  cout << " .text" << endl;
  SymbolTable::generateAScodeGlobalVariable(cout);

  //functions
  cout << " .global main \n";
  for(vector<CFG*>::iterator it = cfgs.begin(); it != cfgs.end(); it++){
    (*it)->genAsm(cout);
  }



  return 0;
}
