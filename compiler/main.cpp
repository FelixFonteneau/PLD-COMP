#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>

#include "antlr4-runtime.h"
#include "antlr4-generated/ifccLexer.h"
#include "antlr4-generated/ifccParser.h"
#include "antlr4-generated/ifccBaseVisitor.h"
#include "visitor.h"

using namespace antlr4;
using namespace std;

class MyErrorListener : public BaseErrorListener {
   public:
      MyErrorListener() { error = false; }
      bool Error() { return error; }
      virtual void syntaxError(Recognizer *recognizer, Token * offendingSymbol, size_t line, size_t charPositionInLine,
         const std::string &msg, std::exception_ptr e)  {
         cout<<"Error on position "<<line<<":"<<charPositionInLine<<endl;
         error = true;
      }

   protected:
      bool error;
};

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

  MyErrorListener errorlistener;
  parser.removeErrorListeners();
  parser.addErrorListener(&errorlistener);

  tree::ParseTree* tree = parser.axiom();
  if (errorlistener.Error())
     return 1;

  Visitor visitor;
  visitor.visit(tree);

  return 0;
}
