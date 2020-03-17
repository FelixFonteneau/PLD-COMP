// Generated from ifcc.g4 by ANTLR 4.7.2

#include "visitor.h"

Visitor::Visitor()
{
    addressIterator = 4;
}

antlrcpp::Any Visitor::visitAxiom(ifccParser::AxiomContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitProg(ifccParser::ProgContext *ctx)
{

    cout << ".text \n" //"# declaration of ’text’ section (which means ’program’)" // entry point to the ELF linker or loader.
            ".global main \n"
            "main: \n"
            "  # prologue\n"
            "  pushq %rbp\n"      //save %rbp on the stack
            "  movq %rsp, %rbp\n" //define %rbp for the current function

            "\n  # body \n";

    visitChildren(ctx);

    cout << "\n  # epilogue\n"
            "  popq %rbp\n" //restore %rbp from the stack
            "  ret\n";      //return to the caller (here the shell)

    return 0;
}

antlrcpp::Any Visitor::visitDec(ifccParser::DecContext *ctx)
{
    string variableName = ctx->VAR()->getText();
    if (blocPrincipal.variableExiste(variableName))
    {
        // if the variable name already exists, we throw an error.
    }
    int memoryAddress = addressIterator;
    addressIterator += 4;
    Variable* variable = new Variable(variableName, "int", memoryAddress);
    blocPrincipal.AjouterVariable(*variable);
    return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitAffDecConst(ifccParser::AffDecConstContext *ctx)
{
    int retval = stoi(ctx->CONST()->getText());
    string variableName = ctx->VAR()->getText();
    if (blocPrincipal.variableExiste(variableName))
    {
        // if the variable name already exists, we throw an error.
    }
    int memoryAddress = addressIterator;
    addressIterator += 4;
    cout << " movl $" << retval << ", -" << memoryAddress << "(%rbp)" << endl;
    Variable* variable = new Variable(variableName, "int", memoryAddress);
    blocPrincipal.AjouterVariable(*variable);
    return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitAffDecVar(ifccParser::AffDecVarContext *ctx)
{
    string newVariableName = ctx->VAR()[0]->getText();
    if (blocPrincipal.variableExiste(newVariableName))    {
        // if the variable name already exists, we throw an error.
    }
    string existingVariableName = ctx->VAR()[1]->getText();
    if (!blocPrincipal.variableExiste(existingVariableName))    {
        // if the variable name does not exist, we throw an error.
    }
    int memoryAddress = addressIterator;
    addressIterator += 4;
    cout << " movl -" << blocPrincipal.getVariable(existingVariableName)->getAddress() << "(%rbp), -" << memoryAddress << "(%rbp)" << endl;
    Variable* variable = new Variable(newVariableName, "int", memoryAddress);
    blocPrincipal.AjouterVariable(*variable);
    return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitAffDecExpr(ifccParser::AffDecExprContext *ctx)
{
    string variableName = ctx->VAR()->getText();
    int val = visitChildren(ctx);
    if(blocPrincipal.variableExiste(variableName)){
      // if the variable name already exists, we throw an error.
    }
    int memoryAddress = addressIterator;
    addressIterator += 4;
    if(val==0) {
      cout << " movl %eax, -" << memoryAddress << "(%rbp)" << endl;
    } else {
      cout << "movl $" << val << ", -" << memoryAddress << "(%rbp)" << endl;
    }
    Variable* variable = new Variable(variableName, "int", memoryAddress);
    blocPrincipal.AjouterVariable(*variable);
    return 0;
}

antlrcpp::Any Visitor::visitAffVar(ifccParser::AffVarContext *ctx)
{
  string leftValName = ctx->VAR()[0]->getText();
  if (!blocPrincipal.variableExiste(leftValName)) {
    // if the variable name doesn't exist, we throw an error.
  }

  string rightValName = ctx->VAR()[1]->getText();
  if (!blocPrincipal.variableExiste(rightValName)) {
    // if the variable name doesn't exist, we throw an error.
  }

  int rightValAddr = blocPrincipal.getVariable(rightValName)->getAddress();
  int leftValAddr = blocPrincipal.getVariable(leftValName)->getAddress();

  cout << " movl -" << rightValAddr << "(%rbp), %eax" << endl;
  cout << " movl %eax, -" << leftValAddr << "(%rbp)" << endl;

  return 0;
}

antlrcpp::Any Visitor::visitAffConst(ifccParser::AffConstContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitAffExpr(ifccParser::AffExprContext *ctx)
{
    string leftValName = ctx->VAR()->getText();
    if (!blocPrincipal.variableExiste(leftValName)) {
      // if the variable name doesn't exist, we throw an error.
    }
    int leftValAddr = blocPrincipal.getVariable(leftValName)->getAddress();

    int val = visitChildren(ctx);

    /*if(val==0) {
      cout << " movl %eax, -" << memoryAddress << "(%rbp)" << endl;
    } else {*/
      cout << "movl $" << val << ", -" << leftValAddr << "(%rbp)" << endl;
    //}

    return 0;
}

antlrcpp::Any Visitor::visitConstExpr(ifccParser::ConstExprContext *ctx)
{
    int val = stoi(ctx->CONST()->getText());
    return val;
}

antlrcpp::Any Visitor::visitVarExpr(ifccParser::VarExprContext *ctx)
{
    int val = 666;
    return val;
}

antlrcpp::Any Visitor::visitAdditiveExpr(ifccParser::AdditiveExprContext *ctx)
{
    string exprLeft = ctx->expr()[0]->getText();
    string exprRight = ctx->expr()[1]->getText();
    int memoryAddressLeft = 0;
    int memoryAddressRight = 0;
    if(blocPrincipal.variableExiste(exprLeft)) {
      memoryAddressLeft = blocPrincipal.getVariable(exprLeft)->getAddress();
    }
    if(blocPrincipal.variableExiste(exprRight)) {
      memoryAddressRight = blocPrincipal.getVariable(exprRight)->getAddress();
    }

    if(ctx->op->getText() == "+") {
        if(memoryAddressLeft == 0 && memoryAddressRight == 0) {
          int leftVal = visit(ctx->expr()[0]);
          int rightVal = visit(ctx->expr()[1]);
          return leftVal+rightVal;
        } else if(memoryAddressLeft == 0 && memoryAddressRight != 0) {
          int leftVal = visit(ctx->expr()[0]);
          cout << " movl -" << memoryAddressRight << "(%rbp), %eax" << endl;
          cout << " addl $" << leftVal << "(%rbp), %eax" << endl;
        } else if(memoryAddressLeft != 0 && memoryAddressRight == 0) {
          int rightVal = visit(ctx->expr()[1]);
          cout << " movl -" << memoryAddressLeft << "(%rbp), %eax" << endl;
          cout << " addl $" << rightVal << "(%rbp), %eax" << endl;
        } else {
          cout << " movl -" << memoryAddressLeft << "(%rbp), %eax" << endl;
          cout << " addl -" << memoryAddressRight << "(%rbp), %eax" << endl;
        }
      } else {
        if(memoryAddressLeft == 0 && memoryAddressRight == 0) {
          int leftVal = visit(ctx->expr()[0]);
          int rightVal = visit(ctx->expr()[1]);
          rightVal = -rightVal;
          return leftVal+rightVal;
        } else if(memoryAddressLeft == 0 && memoryAddressRight != 0) {
          int leftVal = visit(ctx->expr()[0]);
          cout << " movl -" << memoryAddressRight << "(%rbp), %eax" << endl;
          cout << " subl $" << leftVal << "(%rbp), %eax" << endl;
        } else if(memoryAddressLeft != 0 && memoryAddressRight == 0) {
          int rightVal = visit(ctx->expr()[1]);
          cout << " movl -" << memoryAddressLeft << "(%rbp), %eax" << endl;
          cout << " subl $" << rightVal << "(%rbp), %eax" << endl;
        } else {
          cout << " movl -" << memoryAddressLeft << "(%rbp), %eax" << endl;
          cout << " subl -" << memoryAddressRight << "(%rbp), %eax" << endl;
        }
    }
    return 0;
  }

antlrcpp::Any Visitor::visitRetVar(ifccParser::RetVarContext *ctx)
{
    string variable = ctx->VAR()->getText();
    cout << "  movl -" << blocPrincipal.getVariable(variable)->getAddress() << "(%rbp), %eax" << endl;
    return 0;
}

antlrcpp::Any Visitor::visitRetConst(ifccParser::RetConstContext *ctx)
{
    int retval = stoi(ctx->CONST()->getText());
    cout << "  movl $" << retval << ", %eax" << endl;
    return 0;
}
