// Generated from ifcc.g4 by ANTLR 4.7.2
#include "visitor.h"

Visitor::Visitor()
{
    addressIterator = 4;
    labelcounter = 0;
    eax.name = "eax";
    eax.used = false;
    registers[0] = eax;
    ebx.name = "ebx";
    ebx.used = false;
    registers[1] = ebx;
    ecx.name = "ecx";
    ecx.used = false;
    registers[2] = ecx;
    edx.name = "edx";
    edx.used = false;
    registers[3] = edx;
    edi.name = "edi";
    edi.used = false;
    registers[4] = edi;
    esi.name = "esi";
    esi.used = false;
    registers[5] = esi;
    ebp.name = "ebp";
    ebp.used = false;
    registers[6] = ebp;
    esp.name = "esp";
    esp.used = false;
    registers[7] = esp;
    eip.name = "eip";
    eip.used = false;
    registers[8] = eip;
    currentRegister = registers;
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
    cout << "  movl $" << retval << ", -" << memoryAddress << "(%rbp)" << endl;
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
    cout << "  movl -" << blocPrincipal.getVariable(existingVariableName)->getAddress() << "(%rbp), -" << memoryAddress << "(%rbp)" << endl;
    Variable* variable = new Variable(newVariableName, "int", memoryAddress);
    blocPrincipal.AjouterVariable(*variable);
    return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitAffDecExpr(ifccParser::AffDecExprContext *ctx)
{
    string variableName = ctx->VAR()->getText();
    visitChildren(ctx);
    if(blocPrincipal.variableExiste(variableName)){
      // if the variable name already exists, we throw an error.
    }
    int memoryAddress = addressIterator;
    addressIterator += 4;

    cout << "  movl % " << (*currentRegister).name << ", -" << memoryAddress << "(%rbp)" << endl;
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

  cout << "  movl -" << rightValAddr << "(%rbp), %eax" << endl;
  cout << "  movl %eax, -" << leftValAddr << "(%rbp)" << endl;

  return 0;
}

antlrcpp::Any Visitor::visitAffConst(ifccParser::AffConstContext *ctx)
{
    int retval = stoi(ctx->CONST()->getText());
    string variableName = ctx->VAR()->getText();
    if (!blocPrincipal.variableExiste(variableName))
    {
        // if the variable name already exists, we throw an error.
    }
    int memoryAddress = blocPrincipal.getVariable(variableName)->getAddress();
    cout << " movl $" << retval << ", -" << memoryAddress << "(%rbp)" << endl;
    return visitChildren(ctx);
    //cout << "Coucou dans le visitAffConst" << endl;
}

antlrcpp::Any Visitor::visitAffExpr(ifccParser::AffExprContext *ctx)
{
    string leftValName = ctx->VAR()->getText();
    if (!blocPrincipal.variableExiste(leftValName)) {
      // if the variable name doesn't exist, we throw an error.
    }
    int memoryAddress = blocPrincipal.getVariable(leftValName)->getAddress();

    int val = visitChildren(ctx);

    if(val==0) {
      cout << " movl %eax, -" << memoryAddress << "(%rbp)" << endl;
    } else {
      //cout << "movl $" << val << ", -" << leftValAddr << "(%rbp)" << endl;
    }

    return 0;
}

antlrcpp::Any Visitor::visitIfNoElse(ifccParser::IfNoElseContext *ctx)
{
  int ifnumber = labelcounter++;
  cout << ".if" << ifnumber << ":" <<endl;
  visit(ctx->testExpr());
  cout << ".fi" << ifnumber << endl;
  visit(ctx->bloc());
  cout << ".fi" << ifnumber << ":" << endl;

  return 0;
}

antlrcpp::Any Visitor::visitIfWithElse(ifccParser::IfWithElseContext *ctx)
{
  int ifnumber = labelcounter++;
  cout << ".if" << ifnumber << ":" <<endl;
  visit(ctx->testExpr());
  cout << ".else" << ifnumber << endl;
  visit(ctx->bloc()[0]);
  cout << " jmp .fi" << ifnumber << endl;
  cout << ".else" << ifnumber << ":" << endl;
  visit(ctx->bloc()[1]);
  cout << ".fi" << ifnumber << ":" << endl;

  return 0;
}

antlrcpp::Any Visitor::visitIfElseIf(ifccParser::IfElseIfContext *ctx)
{
  int ifnumber = labelcounter++;
  cout << ".if" << ifnumber << ":" <<endl;
  visit(ctx->testExpr());
  cout << ".else" << ifnumber << endl;
  visit(ctx->bloc());
  cout << " jmp .fi" << ifnumber << endl;
  cout << ".else" << ifnumber << ":" << endl;
  visit(ctx->ifLoop());
  cout << ".fi" << ifnumber << ":" << endl;

  return 0;
}

antlrcpp::Any Visitor::visitRelationalTestExpr(ifccParser::RelationalTestExprContext *ctx)
{
  visit(ctx->expr()[0]);
  cout << " movl %eax, %ebx" << endl;
  visit(ctx->expr()[1]);
  cout << " cmpl %eax, %ebx" << endl;

  if(ctx->op->getText() == ">") {
    cout << " jle ";
  }
  else if(ctx->op->getText() == "<") {
    cout << " jge ";
  }
  else if(ctx->op->getText() == ">=") {
    cout << " jl ";
  }
  else if(ctx->op->getText() == "<=") {
    cout << " jg ";
  }

  return 0;
}

antlrcpp::Any Visitor::visitEqualityTestExpr(ifccParser::EqualityTestExprContext *ctx)
{
  visit(ctx->expr()[0]);
  cout << " movl %eax, %ebx" << endl;
  visit(ctx->expr()[1]);
  cout << " cmpl %eax, %ebx" << endl;

  if(ctx->op->getText() == "==") {
    cout << " jne ";
  }
  else if(ctx->op->getText() == "!=") {
    cout << " je ";
  }
  return 0;
}

antlrcpp::Any Visitor::visitParTestExpr(ifccParser::ParTestExprContext *ctx)
{
  return visit(ctx->testExpr());
}

antlrcpp::Any Visitor::visitConstExpr(ifccParser::ConstExprContext *ctx)
{
    int val = stoi(ctx->CONST()->getText());
    cout << "  movl $" << val << ", %" << (*currentRegister).name << endl;
    return 0;
}

antlrcpp::Any Visitor::visitVarExpr(ifccParser::VarExprContext *ctx)
{
    string var = ctx->VAR()->getText();
    cout << "  movl -" << blocPrincipal.getVariable(var)->getAddress() << "(%rbp), %" << (*currentRegister).name << endl;
    return 0;
}

antlrcpp::Any Visitor::visitAdditiveExpr(ifccParser::AdditiveExprContext *ctx)
{
    bool isVar = false;
    bool isExpr = false;

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

    if(exprRight.find("(") != string::npos || exprRight.find("*") != string::npos) {
      isExpr = true;
    }
    if(memoryAddressRight != 0) {
      isVar = true;
    }

    visit(ctx->expr()[0]);
    if(isExpr) {
      (*currentRegister).used = true;
      while((*currentRegister).used) {
        currentRegister++;
      }
      visit(ctx->expr()[1]);
      if((*currentRegister).name != "eax") {
        currentRegister--;
      }
    }

    if(ctx->op->getText() == "+") {
        if(!isVar) {
          if(!isExpr) {
            int rightVal = stoi(exprRight);
            cout << "  addl $" << rightVal << ", %" << (*currentRegister).name << endl;
          } else {
            cout << "  addl %" << (*(currentRegister + 1)).name << ", %" << (*currentRegister).name << endl;
          }
        } else if(isVar) {
          cout << "  addl -" << memoryAddressRight << "(%rbp), %" << (*currentRegister).name << endl;
        }
      } else {
        if(!isVar) {
          if(!isExpr) {
            int rightVal = stoi(exprRight);
            cout << "  subl $" << rightVal << ", %" << (*currentRegister).name << endl;
          } else {
            cout << "  subl %" << (*(currentRegister + 1)).name << ", %" << (*currentRegister).name << endl;
          }
        } else if(isVar) {
          cout << "  subl -" << memoryAddressRight << "(%rbp), %" << (*currentRegister).name << endl;
        }
    }
    return 0;
  }

antlrcpp::Any Visitor::visitParExpr(ifccParser::ParExprContext *ctx)
{
  visitChildren(ctx);
  (*currentRegister).used = true;
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

antlrcpp::Any Visitor::visitMultiplicationExpr(ifccParser::MultiplicationExprContext *ctx)
{
  bool isVar = false;
  bool isExpr = false;

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

  if(exprRight.find("(") != string::npos) {
    isExpr = true;
  }
  if(memoryAddressRight != 0) {
    isVar = true;
  }

  visit(ctx->expr()[0]);
  if(isExpr) {
    (*currentRegister).used = true;
    while((*currentRegister).used) {
      currentRegister++;
    }
    visit(ctx->expr()[1]);
    if((*currentRegister).name != "eax") {
      currentRegister--;
    }
  }

  if(ctx->op->getText() == "*") {
    if(!isVar) {
      if(!isExpr) {
        int rightVal = stoi(exprRight);
        cout << "  imull $" << rightVal << ", %" << (*currentRegister).name << endl;
      } else {
        cout << "  imull %" << (*(currentRegister + 1)).name << ", %" << (*currentRegister).name << endl;
      }
    } else if(isVar) {
      cout << "  imull -" << memoryAddressRight << "(%rbp), %" << (*currentRegister).name << endl;
    }
  }

  return 0;
}
