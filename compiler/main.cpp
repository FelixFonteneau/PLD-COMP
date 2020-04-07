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

  tokens.fill();
  //for (auto token : tokens.getTokens()) {
  //  std::cout << token->toString() << std::endl;
  //}

  ifccParser parser(&tokens);

  SyntaxErrorListener errorlistener(in.str());
  parser.removeErrorListeners();
  parser.addErrorListener(&errorlistener);

  tree::ParseTree* tree = parser.axiom();
  if (errorlistener.Error()){
    cerr << "Error in " << argv[1] << "." << endl;
    cerr << errorlistener;
    return 1;
  }

  vector<CFG*> cfgs;
  SemanticErrorListener semanticErrorListener(in.str());

  Visitor visitor(&cfgs, &semanticErrorListener);
  visitor.visit(tree);

  if (semanticErrorListener.Error()){
    cerr << "Error in " << argv[1] << "." << endl;
    cerr << semanticErrorListener;
    return 1;
  }


  // pass CFG to x86 back-end

  cout << ".text \n" //"# declaration of ’text’ section (which means ’program’)" // entry point to the ELF linker or loader.
          ".global main \n";
  for(vector<CFG*>::iterator it = cfgs.begin(); it != cfgs.end(); it++){
    (*it)->genAsm(cout);
  }



  return 0;
}
