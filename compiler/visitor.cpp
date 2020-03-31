// Generated from ifcc.g4 by ANTLR 4.7.2
#include "visitor.h"

#include "intermediate-representation/IRInstr.h"
#include "intermediate-representation/BasicBlock.h"
#include "intermediate-representation/CFG.h"

Visitor::Visitor(vector<CFG*>* cfgs_)
{
    cfgs = cfgs_;
    currentCFG = nullptr;
    currentBasicBlock = nullptr;
    /*addressIterator = 4;
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
    currentRegister = registers;*/
}

antlrcpp::Any Visitor::visitAxiom(ifccParser::AxiomContext *ctx)
{
    return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitProg(ifccParser::ProgContext *ctx)
{
    currentCFG = new CFG("main");
    (*cfgs).push_back(currentCFG);
    currentBasicBlock = currentCFG->createNewBB();

    visitChildren(ctx);
    return 0;
}

antlrcpp::Any Visitor::visitDec(ifccParser::DecContext *ctx)
{
    string variableName = ctx->VAR()->getText();
    if (currentCFG->symbolTable.variableExiste(variableName))
    {
        // if the variable name already exists, we throw an error.
    }
    currentCFG->addToSymbolTable(variableName, INT);
    return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitAffDecConst(ifccParser::AffDecConstContext *ctx)
{
    int retval = stoi(ctx->CONST()->getText());
    string variableName = ctx->VAR()->getText();
    if (currentCFG->symbolTable.variableExiste(variableName))
    {
        // if the variable name already exists, we throw an error.
    }
    currentCFG->addToSymbolTable(variableName, INT);
    string constant = "$"+ to_string(retval);
    vector<string> params {constant, currentCFG->symbolTable.varToAsm(variableName)};
    currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);

    return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitAffDecVar(ifccParser::AffDecVarContext *ctx)
{
    string newVariableName = ctx->VAR()[0]->getText();
    if (currentCFG->symbolTable.variableExiste(newVariableName))    {
        // if the variable name already exists, we throw an error.
    }
    string existingVariableName = ctx->VAR()[1]->getText();
    if (!currentCFG->symbolTable.variableExiste(existingVariableName)){
        // if the variable name does not exist, we throw an error.
    }
    currentCFG->addToSymbolTable(newVariableName, INT);
    vector<string> params {currentCFG->symbolTable.varToAsm(existingVariableName), currentCFG->symbolTable.varToAsm(newVariableName)};
    currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);
    return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitAffDecExpr(ifccParser::AffDecExprContext *ctx)
{
  /*
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
    */
    return 0;

}

antlrcpp::Any Visitor::visitAffVar(ifccParser::AffVarContext *ctx)
{
  string leftValName = ctx->VAR()[0]->getText();
  if (!currentCFG->symbolTable.variableExiste(leftValName)) {
    // if the variable name doesn't exist, we throw an error.
  }

  string rightValName = ctx->VAR()[1]->getText();
  if (!currentCFG->symbolTable.variableExiste(rightValName)) {
    // if the variable name doesn't exist, we throw an error.
  }
  vector<string> params {currentCFG->symbolTable.varToAsm(rightValName), "%eax"};
  vector<string> params2 {"%eax", currentCFG->symbolTable.varToAsm(leftValName)};

  currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);
  currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params2);

  return 0;
}

antlrcpp::Any Visitor::visitAffConst(ifccParser::AffConstContext *ctx) // a = 2
{

    int retval = stoi(ctx->CONST()->getText());
    string variableName = ctx->VAR()->getText();
    if (!currentCFG->symbolTable.variableExiste(variableName))
    {
        // if the variable name already exists, we throw an error.
    }
    string constant = "$"+ to_string(retval);
    vector<string> params {constant, currentCFG->symbolTable.varToAsm(variableName)};
    currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);
    return visitChildren(ctx);
    //cout << "Coucou dans le visitAffConst" << endl;

}

antlrcpp::Any Visitor::visitAffExpr(ifccParser::AffExprContext *ctx)
{
  /*
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
*/
    return 0;
}

antlrcpp::Any Visitor::visitIfNoElse(ifccParser::IfNoElseContext *ctx)
{
  int testSign = visit(ctx->testExpr());
  BasicBlock* thenBlock = currentCFG->createNewBB();
  BasicBlock* endBlock = currentCFG->createNewBB();

  // pour réaliser le blocs du then
  if (testSign == 1) {
    currentBasicBlock->setExitTrueBlock(thenBlock);
    currentBasicBlock->setExitFalseBlock(endBlock);
  }
  else if (testSign == -1) {
    currentBasicBlock->setExitTrueBlock(endBlock);
    currentBasicBlock->setExitFalseBlock(thenBlock);
  }

  // il faut revenir à un bloc "général" à la fin du then
  thenBlock->setExitTrueBlock(endBlock);

  //visite du bloc then
  currentBasicBlock = thenBlock;
  visit(ctx->bloc());

  currentBasicBlock = endBlock;
  return 0;

  /*
  int ifnumber = labelcounter++;
  cout << ".if" << ifnumber << ":" <<endl;
  visit(ctx->testExpr());
  cout << ".fi" << ifnumber << endl;
  visit(ctx->bloc());
  cout << ".fi" << ifnumber << ":" << endl;
*/
}

antlrcpp::Any Visitor::visitIfWithElse(ifccParser::IfWithElseContext *ctx)
{
  int testSign = visit(ctx->testExpr());
  BasicBlock* thenBlock = currentCFG->createNewBB();
  BasicBlock* elseBlock = currentCFG->createNewBB();
  BasicBlock* endBlock = currentCFG->createNewBB();

  // pour réaliser les blocs du if/else
  if (testSign == 1) {
    currentBasicBlock->setExitTrueBlock(thenBlock);
    currentBasicBlock->setExitFalseBlock(elseBlock);
  }
  else if (testSign == -1) {
    currentBasicBlock->setExitTrueBlock(elseBlock);
    currentBasicBlock->setExitFalseBlock(thenBlock);
  }

  // il faut revenir à un bloc "général" à la fin des réalisations
  thenBlock->setExitTrueBlock(endBlock);
  elseBlock->setExitTrueBlock(endBlock);

  //visite du bloc then
  currentBasicBlock = thenBlock;
  visit(ctx->bloc()[0]);

  //visite du bloc else
  currentBasicBlock = elseBlock;
  visit(ctx->bloc()[1]);

  currentBasicBlock = endBlock;
  return 0;
  /*
  int ifnumber = labelcounter++;
  cout << ".if" << ifnumber << ":" <<endl;
  visit(ctx->testExpr());
  cout << ".else" << ifnumber << endl;
  visit(ctx->bloc()[0]);
  cout << " jmp .fi" << ifnumber << endl;
  cout << ".else" << ifnumber << ":" << endl;
  visit(ctx->bloc()[1]);
  cout << ".fi" << ifnumber << ":" << endl;
*/
}

antlrcpp::Any Visitor::visitIfElseIf(ifccParser::IfElseIfContext *ctx)
{

  int testSign = visit(ctx->testExpr());
  BasicBlock* thenBlock = currentCFG->createNewBB();
  BasicBlock* elseBlock = currentCFG->createNewBB();
  BasicBlock* endBlock = currentCFG->createNewBB();

  // pour réaliser les blocs du if/else
  if (testSign == 1) {
    currentBasicBlock->setExitTrueBlock(thenBlock);
    currentBasicBlock->setExitFalseBlock(elseBlock);
  }
  else if (testSign == -1) {
    currentBasicBlock->setExitTrueBlock(elseBlock);
    currentBasicBlock->setExitFalseBlock(thenBlock);
  }

  // il faut revenir à un bloc "général" à la fin des réalisations
  thenBlock->setExitTrueBlock(endBlock);
  elseBlock->setExitTrueBlock(endBlock);

  //visite du bloc then
  currentBasicBlock = thenBlock;
  visit(ctx->bloc());

  //visite du bloc else
  currentBasicBlock = elseBlock;
  visit(ctx->ifLoop());

  currentBasicBlock = endBlock;
  return 0;

  /*
  int ifnumber = labelcounter++;
  cout << ".if" << ifnumber << ":" <<endl;
  visit(ctx->testExpr());
  cout << ".else" << ifnumber << endl;
  visit(ctx->bloc());
  cout << " jmp .fi" << ifnumber << endl;
  cout << ".else" << ifnumber << ":" << endl;
  visit(ctx->ifLoop());
  cout << ".fi" << ifnumber << ":" << endl;
*/
}

antlrcpp::Any Visitor::visitRelationalTestExpr(ifccParser::RelationalTestExprContext *ctx)
{
  visit(ctx->expr()[0]);
  vector<string> params {"%eax", "%ebx"};
  currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);

  visit(ctx->expr()[1]);

  if(ctx->op->getText() == ">") {
    currentBasicBlock->addIRInstr(IRInstr::cmp_le, INT, params);
    return -1;
  }
  else if(ctx->op->getText() == "<") {
    currentBasicBlock->addIRInstr(IRInstr::cmp_lt, INT, params);
    return 1;
  }
  else if(ctx->op->getText() == ">=") {
    currentBasicBlock->addIRInstr(IRInstr::cmp_lt, INT, params);
    return -1;
  }
  else if(ctx->op->getText() == "<=") {
    currentBasicBlock->addIRInstr(IRInstr::cmp_le, INT, params);
    return 1;
  }
  else {
    return 0;
  }
  /*
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
  */
  //return 0;
}

antlrcpp::Any Visitor::visitEqualityTestExpr(ifccParser::EqualityTestExprContext *ctx)
{
  visit(ctx->expr()[0]);
  vector<string> params {"%eax", "%ebx"};
  currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);

  visit(ctx->expr()[1]);
  currentBasicBlock->addIRInstr(IRInstr::cmp_eq, INT, params);
  /*
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
  */

  if(ctx->op->getText() == "==") {
    return 1;
  }
  else if(ctx->op->getText() == "!=") {
    return -1;
  }
  else {
    return 0;
  }
}

antlrcpp::Any Visitor::visitParTestExpr(ifccParser::ParTestExprContext *ctx)
{
  return visit(ctx->testExpr());
}

antlrcpp::Any Visitor::visitConstExpr(ifccParser::ConstExprContext *ctx)
{
  /*
    int val = stoi(ctx->CONST()->getText());
    cout << "  movl $" << val << ", %" << (*currentRegister).name << endl;
    */
    return 0;
}

antlrcpp::Any Visitor::visitVarExpr(ifccParser::VarExprContext *ctx)
{
    /*string var = ctx->VAR()->getText();
    cout << "  movl -" << blocPrincipal.getVariable(var)->getAddress() << "(%rbp), %" << (*currentRegister).name << endl;
    */
    return 0;
}

antlrcpp::Any Visitor::visitAdditiveExpr(ifccParser::AdditiveExprContext *ctx)
{
    /*bool isVar = false;
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
    }*/
    return 0;
  }

antlrcpp::Any Visitor::visitParExpr(ifccParser::ParExprContext *ctx)
{
  /*
  visitChildren(ctx);
  (*currentRegister).used = true;
  */
  return 0;
}

antlrcpp::Any Visitor::visitRetVar(ifccParser::RetVarContext *ctx)
{
  string variable = ctx->VAR()->getText();
  vector<string> params {currentCFG->symbolTable.varToAsm(variable), "%eax"};
  currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);
  return 0;
}

antlrcpp::Any Visitor::visitRetConst(ifccParser::RetConstContext *ctx)
{
    string retval = ctx->CONST()->getText();
    vector<string> params {"$"+retval, "%eax"};
    currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);
    return 0;
}

antlrcpp::Any Visitor::visitMultiplicationExpr(ifccParser::MultiplicationExprContext *ctx)
{
  /*
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
*/
  return 0;
}
