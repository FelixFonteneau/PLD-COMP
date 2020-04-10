// Generated from ifcc.g4 by ANTLR 4.7.2
#include "visitor.h"

#include "intermediate-representation/IRInstr.h"
#include "intermediate-representation/BasicBlock.h"
#include "intermediate-representation/CFG.h"
#include "symbol-table/functionTable.h"

Visitor::Visitor(vector<CFG*>* cfgs_, SemanticErrorListener* errorlistener_)
{
    errorlistener = errorlistener_;
    cfgs = cfgs_;
    currentCFG = nullptr;
    currentBasicBlock = nullptr;
    numberTempVar = -1;
    thereIsTempVar = false;
    eax.name = "%eax";
    eax.used = false;
    registers[0] = eax;
    ebx.name = "%ebx";
    ebx.used = false;
    registers[1] = ebx;
    //ecx.name = "%ecx";
    //ecx.used = false;
    //registers[2] = ecx;
    r10d.name = "%r10d";
    r10d.used = false;
    registers[2] = r10d;
    r11d.name = "%r11d";
    r11d.used = false;
    registers[3] = r11d;
    r12d.name = "%r12d";
    r12d.used = false;
    registers[4] = r12d;
    r13d.name = "%r13d";
    r13d.used = false;
    registers[5] = r13d;
    r14d.name = "%r14d";
    r14d.used = false;
    registers[6] = r14d;
    r15d.name = "%r15d";
    r15d.used = false;
    registers[7] = r15d;
    currentRegister = registers;
    edi.name = "%edi";
    edi.used = false;
    registersFunc[0] = edi;
    esi.name = "%esi";
    esi.used = false;
    registersFunc[1] = esi;
    edx.name = "%edx";
    edx.used = false;
    registersFunc[2] = edx;
    ecx.name = "%ecx";
    ecx.used = false;
    registersFunc[3] = ecx;
    r8d.name = "%r8d";
    r8d.used = false;
    registersFunc[4] = r8d;
    r9d.name = "%r9d";
    r9d.used = false;
    registersFunc[5] = r9d;
    currentRegFunc = registersFunc;
}

//TODO : verifier les returns en cas d'erreur

antlrcpp::Any Visitor::visitAxiom(ifccParser::AxiomContext *ctx)
{
    visitChildren(ctx);
    //check if
    for (unordered_map<string, Fonction*>::iterator it = FunctionTable::getFonctions()->begin(); it != FunctionTable::getFonctions()->end(); ++it){
      if(!it->second->isDefined() && it->second->isUsed()){
        string message = it->first + " is not defined";
        errorlistener->addSemanticError(it->second->getToken(), message);
      }
    }
    return 0;
}

antlrcpp::Any Visitor::visitProg(ifccParser::ProgContext *ctx)
{

    currentCFG = new CFG("main");
    (*cfgs).push_back(currentCFG);
    currentBasicBlock = currentCFG->createNewBB();

    vector<string> params {"$32", "%rsp"};

    if(FunctionTable::thereIsFunction()) {
      currentBasicBlock->addIRInstr(IRInstr::activationRecord, INT, params);
    }

    visitChildren(ctx);

    if(FunctionTable::thereIsFunction()) {
      currentBasicBlock->addIRInstr(IRInstr::desactivationRecord, INT, params);
    }

    return 0;
}

antlrcpp::Any Visitor::visitFunctions(ifccParser::FunctionsContext *ctx)
{
  return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitFuncDecStrict(ifccParser::FuncDecStrictContext *ctx)
{
    string functionName = ctx->VAR()->getText();
    string retType = ctx->funcType()->getText();

    if(SymbolTable::getGlobalVariablesST()->variableExiste(functionName)) {
        string message = functionName + " redeclared as different kind of symbol";
        errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
        return 0;
    }

    if(FunctionTable::checkIfFunctionExist(functionName)) {
      string message = "different type declaration for " + functionName;
      errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
    } else {
      FunctionTable::addDeclaredFunction(functionName, retType, ctx->VAR()->getSymbol());
    }
    //currentCFG = new CFG(functionName);
    //(*cfgs).push_back(currentCFG);
    //currentBasicBlock = currentCFG->createNewBB();

    //visitChildren(ctx);
    return 0;
}

antlrcpp::Any Visitor::visitFuncDecDef(ifccParser::FuncDecDefContext *ctx)
{

    string functionName = ctx->VAR()->getText();
    string retType = ctx->funcType()->getText();

    if(SymbolTable::getGlobalVariablesST()->variableExiste(functionName)) {
        string message = functionName + " redeclared as different kind of symbol";
        errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
        return 0;
    }
    if(FunctionTable::checkIfFunctionExist(functionName)) {
      if(FunctionTable::getFunction(functionName)->isDefined()) {
        string message = "function " + functionName + " is already defined";
        errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
      } else if(FunctionTable::getFunction(functionName)->getReturnType()==retType){
        FunctionTable::getFunction(functionName)->setDefined();
        currentCFG = new CFG(functionName);
        (*cfgs).push_back(currentCFG);
        currentBasicBlock = currentCFG->createNewBB();
      } else {
        string message = "different type declaration for " + functionName;
        errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
      }
    } else {
      currentCFG = new CFG(functionName);
      (*cfgs).push_back(currentCFG);
      currentBasicBlock = currentCFG->createNewBB();
      FunctionTable::addDefinedFunction(functionName, retType, ctx->VAR()->getSymbol());
    }

    vector<string> params {"$32", "%rsp"};

    if(FunctionTable::thereIsFunction()) {
      currentBasicBlock->addIRInstr(IRInstr::activationRecord, INT, params);
    }

    visitChildren(ctx);

    currentRegFunc = registersFunc;
    if(FunctionTable::thereIsFunction()) {
      currentBasicBlock->addIRInstr(IRInstr::desactivationRecord, INT, params);
    }

    return 0;
}

antlrcpp::Any Visitor::visitFuncCall(ifccParser::FuncCallContext *ctx)
{
    string functionName = ctx->VAR()[0].getText();

    if(!FunctionTable::checkIfFunctionExist(functionName)){
        string message = "function " + functionName + " undefined";
        errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
        return 0;
    }
    FunctionTable::getFunction(functionName)->setUsed();
    visitChildren(ctx);
    vector<string> params {functionName};
    currentBasicBlock->addIRInstr(IRInstr::call, INT, params);
    currentRegFunc = registersFunc;
    return 0;
}

antlrcpp::Any Visitor::visitArgsDecVar(ifccParser::ArgsDecVarContext *ctx)
{
    string variableName = ctx->VAR()->getText();
    currentCFG->addToSymbolTable(variableName, INT);
    currentCFG->setDefined(variableName);

    vector<string> params {currentRegFunc->name, currentCFG->varToAsm(variableName)};
    currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);
    currentRegFunc++;

    return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitLastArgDec(ifccParser::LastArgDecContext *ctx)
{
    string variableName = ctx->VAR()->getText();
    currentCFG->addToSymbolTable(variableName, INT);
    currentCFG->setDefined(variableName);

    vector<string> params {currentRegFunc->name, currentCFG->varToAsm(variableName)};
    currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);
    currentRegFunc++;

    currentRegFunc = registersFunc;

    return 0;
}

antlrcpp::Any Visitor::visitArgsVar(ifccParser::ArgsVarContext *ctx)
{
    string variableName = ctx->VAR()->getText();
    if (!currentCFG->isVarExist(variableName)) {
      string message = "variable " + variableName + " is undefined";
      errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
      // if the variable does not exists, we throw an error.
    }

    vector<string> params {currentCFG->varToAsm(variableName), currentRegFunc->name};
    currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);
    currentRegFunc++;

    return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitLastArgVar(ifccParser::LastArgVarContext *ctx)
{
    string variableName = ctx->VAR()->getText();
    if (!currentCFG->isVarExist(variableName)) {
      string message = "variable " + variableName + " is undefined";
      errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
      // if the variable does not exists, we throw an error.
    }

    vector<string> params {currentCFG->varToAsm(variableName), currentRegFunc->name};
    currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);
    currentRegFunc++;

    return 0;
}

antlrcpp::Any Visitor::visitArgsConst(ifccParser::ArgsConstContext *ctx)
{
    string value = "$" + ctx->CONST()->getText();

    if(currentCFG->getName() == "main") {
      vector<string> params {value, currentRegFunc->name};
      currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);
      currentRegFunc++;
    } else {
      cout << "error" << endl;
      /*
      currentCFG->addToSymbolTable(variableName, INT);
      vector<string> params {currentRegFunc->name, currentCFG->varToAsm(variableName)};
      currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);
      currentRegFunc++;
      */
    }
    return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitLastArgConst(ifccParser::LastArgConstContext *ctx)
{
    string value = "$" + ctx->CONST()->getText();

    if(currentCFG->getName() == "main") {
      vector<string> params {value, currentRegFunc->name};
      currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);
      currentRegFunc++;
    } else {
      cout << "error" << endl;
      /*
      currentCFG->addToSymbolTable(variableName, INT);
      vector<string> params {currentRegFunc->name, currentCFG->varToAsm(variableName)};
      currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);
      currentRegFunc++;
      */
    }
    return 0;
}

antlrcpp::Any Visitor::visitAffDecConst(ifccParser::AffDecConstContext *ctx) // int a = 17;
{
  int retval = stoi(ctx->CONST()->getText());

  string variableName = ctx->VAR()->getText();
  if (currentCFG->isVarExistInScope(variableName))
  {
    string message = "variable " + variableName + " already exists";
    errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
      // if the variable name already exists, we throw an error.
  }
  currentCFG->addToSymbolTable(variableName, INT);

  string constant = "$"+ to_string(retval);
  vector<string> params {constant, currentCFG->varToAsm(variableName)};
  currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);

  currentCFG->setDefined(variableName);

  return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitAffDecVar(ifccParser::AffDecVarContext *ctx)
// int b;
// int a = b;
{
  string newVariableName = ctx->VAR()[0]->getText();
  //check if the left variable doesn't exist
  if (currentCFG->isVarExistInScope(newVariableName))    {
    string message = "variable " + newVariableName + " already exists";
    errorlistener->addSemanticError(ctx->VAR()[0]->getSymbol(), message);
    // if the variable name already exists, we throw an error.
  }

  string existingVariableName = ctx->VAR()[1]->getText();
  //check if the right variable exist
  if (!currentCFG->isVarExist(existingVariableName)){
    string message = "variable " + existingVariableName + " undeclared";
    errorlistener->addSemanticError(ctx->VAR()[1]->getSymbol(), message);
    // if the variable name doesn't exist, we throw an error.
    currentCFG->addToSymbolTable(newVariableName, INT); //on declare quand meme la variable de gauche
    return 0;
  }

  //check if the right variable is defined
  if (!currentCFG->isDefined(existingVariableName)){
    // if the variable name is not defined, we throw an error.
    string message = "variable " + existingVariableName + " is not defined";
    errorlistener->addSemanticError(ctx->VAR()[1]->getSymbol(), message);
    return 0;
  }

  currentCFG->addToSymbolTable(newVariableName, INT);

  vector<string> params1 {currentCFG->varToAsm(existingVariableName), "%eax"}; //TODO : registes
  vector<string> params2 {"%eax", currentCFG->varToAsm(newVariableName)};
  currentBasicBlock->addIRInstr(IRInstr::rmem, INT, params1);
  currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params2);

  currentCFG->setDefined(newVariableName);
  return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitAffDecExpr(ifccParser::AffDecExprContext *ctx)
{
  string variableName = ctx->VAR()->getText();
  visitChildren(ctx);
  if(currentCFG->isVarExistInScope(variableName)) {
    string message = "variable " + variableName + " already exists";
    errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
    // if the variable name already exists, we throw an error.
  }

  currentCFG->addToSymbolTable(variableName, INT);
  vector<string> params {(*currentRegister).name, currentCFG->varToAsm(variableName)};
  currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);

  currentCFG->setDefined(variableName);

  return 0;
}

antlrcpp::Any Visitor::visitAffVar(ifccParser::AffVarContext *ctx)
{
  string leftValName = ctx->VAR()[0]->getText();
  if (!currentCFG->isVarExist(leftValName)) {
    // if the variable name doesn't exist, we throw an error.
    string message = "variable " + leftValName + " undeclared";
    errorlistener->addSemanticError(ctx->VAR()[0]->getSymbol(), message);
    return 0;
  }

  string rightValName = ctx->VAR()[1]->getText();
  if (!currentCFG->isVarExist(rightValName)) {
    // if the variable name doesn't exist, we throw an error.
    string message = "variable " + rightValName + " undeclared";
    errorlistener->addSemanticError(ctx->VAR()[1]->getSymbol(), message);
    return 0;
  }

  //check if the right variable is defined
  if (!currentCFG->isDefined(rightValName)){
    // if the variable name is not defined, we throw an error.
    string message = "variable " + rightValName + " is not defined";
    errorlistener->addSemanticError(ctx->VAR()[1]->getSymbol(), message);
    return 0;
  }

  vector<string> params1 {currentCFG->varToAsm(rightValName), "%eax"};//TODO : registres
  vector<string> params2 { "%eax", currentCFG->varToAsm(leftValName)};
  currentBasicBlock->addIRInstr(IRInstr::rmem, INT, params1);
  currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params2);

  currentCFG->setDefined(leftValName);
  return 0;
}

antlrcpp::Any Visitor::visitAffConst(ifccParser::AffConstContext *ctx) // a = 2
{
  int retval = stoi(ctx->CONST()->getText());
  string variableName = ctx->VAR()->getText();
  if (!currentCFG->isVarExist(variableName))
  {
    // if the variable name doesn't exist, we throw an error.
    string message = "variable " + variableName + " undeclared";
    errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
  }

  string constant = "$"+ to_string(retval);
  vector<string> params {constant, currentCFG->varToAsm(variableName)};
  currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);

  currentCFG->setDefined(variableName);
  return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitAffExpr(ifccParser::AffExprContext *ctx)
{
  string leftValName = ctx->VAR()->getText();
  if (!currentCFG->isVarExist(leftValName)) {
    // if the variable name doesn't exist, we throw an error.
    string message = "variable " + leftValName + " undeclared";
    errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
    return 0;
  }

  visitChildren(ctx);

  vector<string> params { "%eax", currentCFG->varToAsm(leftValName)}; //TODO eax par current register
  currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);

  currentCFG->setDefined(leftValName);

  return 0;
}

antlrcpp::Any Visitor::visitDecGMult(ifccParser::DecGMultContext *ctx)  {
  string variableName = ctx->VAR()->getText();

  if (SymbolTable::getGlobalVariablesST()->variableExiste(variableName))
  {
    // if the variable name already exists, we throw an error.
      string message = "variable " + variableName + " is already defined";
      errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
  }
  SymbolTable::addDeclaredVarToGlobalVariables(variableName, INT);

  return visit(ctx->varsG());
}

antlrcpp::Any Visitor::visitLastDecG(ifccParser::LastDecGContext *ctx)  {
  string variableName = ctx->VAR()->getText();

  if (SymbolTable::getGlobalVariablesST()->variableExiste(variableName))
  {
    // if the variable name already exists, we throw an error.
      string message = "variable " + variableName + " is already defined";
      errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
  }
  SymbolTable::addDeclaredVarToGlobalVariables(variableName, INT);
  return 0;
}



antlrcpp::Any Visitor::visitDecGAffConst(ifccParser::DecGAffConstContext *ctx){
  int retval = stoi(ctx->CONST()->getText());
  string variableName = ctx->VAR()->getText();
  if (SymbolTable::getGlobalVariablesST()->variableExiste(variableName))
  {
      // if the variable name already exists, we throw an error.
      string message = "variable " + variableName + " is already defined";
      errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
  }
  SymbolTable::addDefinedVarToGlobalVariables(variableName, INT, retval);
  return visitChildren(ctx);

}

antlrcpp::Any Visitor::visitDecGAffChar(ifccParser::DecGAffCharContext *ctx){
  string charExp = ctx->CHAREXP()->getText();
  charExp = charExp.substr(1, charExp.length()-1);
  char character = charExp[0]; //tester avec \n, \0
  int retval = (int)character;

  string variableName = ctx->VAR()->getText();
  if (SymbolTable::getGlobalVariablesST()->variableExiste(variableName))
  {
      // if the variable name already exists, we throw an error.
      string message = "variable " + variableName + " is already defined";
      errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
  }
  SymbolTable::addDefinedVarToGlobalVariables(variableName, INT, retval);

  return visitChildren(ctx);
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
  else {
    cout << "error : mauvais opérateur" << endl;
  }

  // il faut revenir à un bloc "général" à la fin du then
  thenBlock->setExitTrueBlock(endBlock);

  //visite du bloc then
  currentBasicBlock = thenBlock;

  currentCFG->enteringNewScope();
  visit(ctx->bloc());
  currentCFG->exitScope();

  currentBasicBlock = endBlock;
  return endBlock;

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
  else {
    cout << "error : mauvais opérateur" << endl;
  }

  // il faut revenir à un bloc "général" à la fin des réalisations
  thenBlock->setExitTrueBlock(endBlock);
  elseBlock->setExitTrueBlock(endBlock);

  //visite du bloc then
  currentBasicBlock = thenBlock;

  currentCFG->enteringNewScope();
  visit(ctx->bloc()[0]);
  currentCFG->exitScope();

  //visite du bloc else
  currentBasicBlock = elseBlock;

  currentCFG->enteringNewScope();
  visit(ctx->bloc()[1]);
  currentCFG->exitScope();

  currentBasicBlock = endBlock;
  return endBlock;
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

  // pour réaliser les blocs du if/else
  if (testSign == 1) {
    currentBasicBlock->setExitTrueBlock(thenBlock);
    currentBasicBlock->setExitFalseBlock(elseBlock);
  }
  else if (testSign == -1) {
    currentBasicBlock->setExitTrueBlock(elseBlock);
    currentBasicBlock->setExitFalseBlock(thenBlock);
  }
  else {
    cout << "error : mauvais opérateur" << endl;
  }

  //visite du bloc then
  currentBasicBlock = thenBlock;

  currentCFG->enteringNewScope();
  visit(ctx->bloc());
  currentCFG->exitScope();

  //visite du bloc else
  currentBasicBlock = elseBlock;

  currentCFG->enteringNewScope();
  BasicBlock* endBlock = visit(ctx->ifLoop());
  currentCFG->exitScope();

  // il faut revenir à un bloc "général" à la fin des réalisations
  thenBlock->setExitTrueBlock(endBlock);
  //elseBlock->setExitTrueBlock(endBlock);

  currentBasicBlock = endBlock;
  return endBlock;

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
  vector<string> params {"%eax", "%ebx"}; //TODO : registres
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
    string constant = "$" + ctx->CONST()->getText();
    vector<string> params {constant, currentRegister->name};
    currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);
    currentRegister->used = true;
    //cout << "  movl $" << val << ", %" << (*currentRegister).name << endl;
    return 0;
}

antlrcpp::Any Visitor::visitCharExpr(ifccParser::CharExprContext *ctx)
{
  string charExp = ctx->CHAREXP()->getText();
  charExp = charExp.substr(1, charExp.length()-1);
  char character = charExp[0]; //TODO : tester avec \n, \0
  int retval = (int)character;

  string constant = "$" + to_string(retval);
  vector<string> params {constant, (*currentRegister).name}; //TODO : verifier registres
  currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);
  //cout << "  movl $" << val << ", %" << (*currentRegister).name << endl;
  return 0;
}


antlrcpp::Any Visitor::visitVarExpr(ifccParser::VarExprContext *ctx)
{
  string var = ctx->VAR()->getText();

  //check if the right variable exist
  if (!currentCFG->isVarExist(var)){
    string message = "variable " + var + " undeclared";
    errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
    // if the variable name doesn't exist, we throw an error.
    return 0;
  }

  //check if the variable is defined
  if (!currentCFG->isDefined(var)){
    // if the variable name is not defined, we throw an error.
    string message = "variable " + var + " is not defined";
    errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
    return 0;
  }

  vector<string> params {currentCFG->varToAsm(var), currentRegister->name};
  currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);
  currentRegister->used = true;
  //cout << "  movl -" << blocPrincipal.getVariable(var)->getAddress() << "(%rbp), %" << (*currentRegister).name << endl;
  return 0;
}

antlrcpp::Any Visitor::visitAdditiveExpr(ifccParser::AdditiveExprContext *ctx)
{
    bool isVar = false;
    bool isExpr = false;

    bool noRegLeft = false;
    int tempVarCreated = 0;

    string exprLeft = ctx->expr()[0]->getText();
    string exprRight = ctx->expr()[1]->getText();

    string memoryAddressRight = "";

/*
    cout << "exprRight :"<< endl;
    cout << exprRight << endl;
    cout << "exprLeft :" << endl;
    cout << exprLeft << endl;
*/

    if(exprRight.find("(") != string::npos || exprRight.find("*") != string::npos) {
      isExpr = true;
    }

    visit(ctx->expr()[0]);
/*
    cout << "isExpr : " << endl;
    cout << isExpr << endl;
    cout << "Curr :";
    cout << currentRegister->name <<  "  -  " << currentRegister->used << endl;
*/

    if(isExpr) {
      if(currentRegister->name == "%r15s" && currentRegister->used == true) {
        currentRegister = registers + 7; //à mettre à 7

        noRegLeft = true;
        vector<string> params {currentRegister->name, currentCFG->varToAsm(currentCFG->createNewTempvar(INT))};
        currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);
        numberTempVar++;
        currentRegister->used = false;
        tempVarCreated = 1;
/*
        cout << "salut" << endl;

        cout << "exprRight :"<< endl;
        cout << exprRight << endl;
        cout << "exprLeft :" << endl;
        cout << exprLeft << endl;
*/
      } else if(currentRegister->name != "%r15d") {
        currentRegister++;
        currentRegister->used = true;
      }

      if(tempVarCreated == 1) {
        visit(ctx->expr()[1]);
      } else {
        tempVarCreated = visit(ctx->expr()[1]);
      }

      if(tempVarCreated) {
        //cout << "you motherfucker i'm in" << endl;
        string tempVarName = "!" + to_string(numberTempVar);
        exprLeft = exprRight;
        exprRight = tempVarName;
        numberTempVar--;
        //cout << "ouesh :" << numberTempVar << endl;
      }

      if(currentRegister->name != "%eax" && !noRegLeft) {
        //cout << "hi there" << endl;
        currentRegister--;
      }
    }

    if(currentCFG->isVarExist(exprRight)) {
      memoryAddressRight = currentCFG->getVariable(exprRight)->getAddress();
    }

    if(memoryAddressRight != "") {
      isVar = true;
    }
/*
    cout << "curre :" << endl;
    cout << currentRegister->name << endl;

    cout << "prout :" << endl;
    cout << exprRight << endl;
*/
    if(ctx->op->getText() == "+") {
        if(!isVar) {
          if(!isExpr) {
            string rightVal = "$" + exprRight;
            vector<string> params {rightVal, currentRegister->name};
            currentBasicBlock->addIRInstr(IRInstr::add, INT, params);
            //cout << "  addl $" << rightVal << ", %" << (*currentRegister).name << endl;
          } else {
            vector<string> params {(currentRegister + 1)->name, currentRegister->name};
            currentBasicBlock->addIRInstr(IRInstr::add, INT, params);
            (currentRegister + 1)->used = false;
            //cout << "  addl %" << (*(currentRegister + 1)).name << ", %" << (*currentRegister).name << endl;
          }
        } else if(isVar) {
          vector<string> params {currentCFG->varToAsm(exprRight), currentRegister->name};
          currentBasicBlock->addIRInstr(IRInstr::add, INT, params);
          if(exprRight.find("!") != string::npos) {
            currentCFG->deleteLastTempvar(INT);
          }
          //cout << "  addl -" << memoryAddressRight << "(%rbp), %" << (*currentRegister).name << endl;
        }
      } else {
        if(!isVar) {
          if(!isExpr) {
            //int rightVal = stoi(exprRight);
            string rightVal = "$" + exprRight;
            vector<string> params {rightVal, currentRegister->name};
            currentBasicBlock->addIRInstr(IRInstr::sub, INT, params);
            //cout << "  subl $" << rightVal << ", %" << (*currentRegister).name << endl;
          } else {
            vector<string> params {(currentRegister + 1)->name, currentRegister->name};
            currentBasicBlock->addIRInstr(IRInstr::sub, INT, params);
            (currentRegister + 1)->used = false;
            //cout << "  subl %" << (*(currentRegister + 1)).name << ", %" << (*currentRegister).name << endl;
          }
        } else if(isVar) {
          vector<string> params {currentCFG->varToAsm(exprRight), currentRegister->name};
          currentBasicBlock->addIRInstr(IRInstr::sub, INT, params);
          if(exprRight.find("!") != string::npos) {
            currentCFG->deleteLastTempvar(INT);
          }
          //cout << "  subl -" << memoryAddressRight << "(%rbp), %" << (*currentRegister).name << endl;
        }
    }
    return tempVarCreated;
  }

antlrcpp::Any Visitor::visitParExpr(ifccParser::ParExprContext *ctx)
{
  visitChildren(ctx);
  currentRegister->used = true;
  return 0;
}

antlrcpp::Any Visitor::visitRetVar(ifccParser::RetVarContext *ctx)
{
  string variable = ctx->VAR()->getText();

  //check if the variable exist
  if (!currentCFG->isVarExist(variable)){
    string message = "variable " + variable + " undeclared";
    errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
    // if the variable name doesn't exist, we throw an error.
    return 0;
  }

  //check if the variable is defined
  if (!currentCFG->isDefined(variable)){
    // if the variable name is not defined, we throw an error.
    string message = "variable " + variable + " is not defined";
    errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
    return 0;
  }

  vector<string> params {currentCFG->varToAsm(variable), "%rax"};
  currentBasicBlock->addIRInstr(IRInstr::wmemq, INT, params);
  return 0;
}

antlrcpp::Any Visitor::visitRetConst(ifccParser::RetConstContext *ctx)
{
    string retval = ctx->CONST()->getText();
    vector<string> params {"$"+retval, "%rax"};
    currentBasicBlock->addIRInstr(IRInstr::wmemq, INT, params);
    return 0;
}


antlrcpp::Any Visitor::visitRetExpr(ifccParser::RetExprContext *ctx) {
    visit(ctx->expr()); //TODO : voir avec les registres
    return 0;
}

antlrcpp::Any Visitor::visitMultiplicationExpr(ifccParser::MultiplicationExprContext *ctx)
{
/*
  cout << "start of exprMult" << endl;
  cout << "Curr : "<< endl;
  cout << currentRegister-> name << " - " << currentRegister->used << endl;
*/
  bool isVar = false;
  bool isExpr = false;

  bool noRegLeft = false;
  int tempVarCreated = 0;

  string exprLeft = ctx->expr()[0]->getText();
  string exprRight = ctx->expr()[1]->getText();

  string memoryAddressRight = "";

  if(exprRight.find("(") != string::npos) {
    isExpr = true;
  }
/*
  cout << "exprRight :"<< endl;
  cout << exprRight << endl;
  cout << "exprLeft :" << endl;
  cout << exprLeft << endl;
*/
  visit(ctx->expr()[0]);



  if(isExpr) {
    if(currentRegister->name == "%r15d" && currentRegister->used == true) {
      currentRegister = registers + 7; //à mettre à 7

      noRegLeft = true;
      vector<string> params {currentRegister->name, currentCFG->varToAsm(currentCFG->createNewTempvar(INT))};
      currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);
      numberTempVar++;
      currentRegister->used = false;
      tempVarCreated = 1;
/*
      cout << "salut" << endl;

      cout << "exprRight :"<< endl;
      cout << exprRight << endl;
      cout << "exprLeft :" << endl;
      cout << exprLeft << endl;
*/
    } else if(currentRegister->name != "%r15d") {
      currentRegister->used = true;
      currentRegister++;
    }

    if(tempVarCreated == 1) {
      visit(ctx->expr()[1]);
    } else {
      tempVarCreated = visit(ctx->expr()[1]);
    }

    if(tempVarCreated) {
      //cout << "you motherfucker i'm in" << endl;
      string tempVarName = "!" + to_string(numberTempVar);
      exprLeft = exprRight;
      exprRight = tempVarName;
      numberTempVar--;
      //cout << "ouesh :" << numberTempVar << endl;
    }

    if(currentRegister->name != "%eax" && !noRegLeft) {
      //cout << "hi there" << endl;
      currentRegister--;
    }
  }

  if(currentCFG->isVarExist(exprRight)) {
    memoryAddressRight = currentCFG->getVariable(exprRight)->getAddress();
  }

  if(memoryAddressRight != "") {
    isVar = true;
  }

  if(!isVar) {
    if(!isExpr) {
      string rightVal = "$" + exprRight;
      vector<string> params {rightVal, currentRegister->name};
      currentBasicBlock->addIRInstr(IRInstr::mul, INT, params);
    } else {
      vector<string> params {(currentRegister + 1)->name, currentRegister->name};
      currentBasicBlock->addIRInstr(IRInstr::mul, INT, params);
    }
  } else if(isVar) {
    vector<string> params {currentCFG->varToAsm(exprRight), currentRegister->name};
    currentBasicBlock->addIRInstr(IRInstr::mul, INT, params);
    if(exprRight.find("!") != string::npos) {
      currentCFG->deleteLastTempvar(INT);
    }
  }
  return 0;
}

antlrcpp::Any Visitor::visitNotExpr(ifccParser::NotExprContext *ctx) {
  visit(ctx->expr());
  vector<string> params {"%eax"};
  currentBasicBlock->addIRInstr(IRInstr::not_op, INT, params);

  return 0;
}

antlrcpp::Any Visitor::visitMinusExpr(ifccParser::MinusExprContext *ctx) {
  visit(ctx->expr());
  vector<string> params {"%eax"}; //TODO : registres
  currentBasicBlock->addIRInstr(IRInstr::neg, INT, params);

  return 0;
}

antlrcpp::Any Visitor::visitBitsExpr(ifccParser::BitsExprContext *ctx) {
  visit(ctx->expr()[1]);

  vector<string> params = {"%eax", "%ebx"}; //TODO : registes
  currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);

  visit(ctx->expr()[0]);

  vector<string> params_op = {"%ebx", "%eax"}; //TODO : registres

  if (ctx->op->getText() == "&") {
    currentBasicBlock->addIRInstr(IRInstr::and_bit, INT, params_op);
  } else if (ctx->op->getText() == "|") {
    currentBasicBlock->addIRInstr(IRInstr::or_bit, INT, params_op);
  } else if (ctx->op->getText() == "^") {
    currentBasicBlock->addIRInstr(IRInstr::xor_bit, INT, params_op);
  }

  return 0;
}

antlrcpp::Any Visitor::visitAffDecChar(ifccParser::AffDecCharContext *ctx)
{
  string charExp = ctx->CHAREXP()->getText();
  charExp = charExp.substr(1, charExp.length()-1);
  char character = charExp[0]; //TODO : tester avec \n, \0
  int retval = (int)character;

  string variableName = ctx->VAR()->getText();
  if (currentCFG->isVarExistInScope(variableName))
  {
    string message = "variable " + variableName + " already exists";
    errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
      // if the variable name already exists, we throw an error.
  }

  currentCFG->addToSymbolTable(variableName, INT);
  string constant = "$"+ to_string(retval);
  vector<string> params {constant, currentCFG->varToAsm(variableName)};
  currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);

  currentCFG->setDefined(variableName);

  return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitAffChar(ifccParser::AffCharContext *ctx)
{
  string charExp = ctx->CHAREXP()->getText();
  charExp = charExp.substr(1, charExp.length()-1);
  char character = charExp[0]; //tester avec \n, \0
  int retval = (int)character;

  string variableName = ctx->VAR()->getText();
  if (!currentCFG->isVarExist(variableName))
  {
    // if the variable name doesn't exist, we throw an error.
    string message = "variable " + variableName + " undeclared";
    errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
  }

  string constant = "$"+ to_string(retval);
  vector<string> params {constant, currentCFG->varToAsm(variableName)};
  currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);

  currentCFG->setDefined(variableName);

  return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitDeclMult(ifccParser::DeclMultContext *ctx) {
  string variableName = ctx->VAR()->getText();

  if (currentCFG->isVarExistInScope(variableName))
  {
    // if the variable name already exists, we throw an error.
      string message = "variable " + variableName + " already exists";
      errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
  }
  currentCFG->addToSymbolTable(variableName, INT);

  return visit(ctx->vars());
}

antlrcpp::Any Visitor::visitLastDecl(ifccParser::LastDeclContext *ctx) {
  string variableName = ctx->VAR()->getText();

  if (currentCFG->isVarExist(variableName))
  {
    // if the variable name already exists, we throw an error.
      string message = "variable " + variableName + " already exists";
      errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
  }
  currentCFG->addToSymbolTable(variableName, INT);

  return 0;
}

antlrcpp::Any Visitor::visitWhileLoop(ifccParser::WhileLoopContext *ctx) {
  BasicBlock* testBlock = currentCFG->createNewBB();
  BasicBlock* whileBlock = currentCFG->createNewBB();
  BasicBlock* endBlock = currentCFG->createNewBB();

  currentBasicBlock->setExitTrueBlock(testBlock);
  currentBasicBlock = testBlock;

  int testSign = visit(ctx->testExpr());

  // pour réaliser le bloc
  if (testSign == 1) {
    currentBasicBlock->setExitTrueBlock(whileBlock);
    currentBasicBlock->setExitFalseBlock(endBlock);
  }
  else if (testSign == -1) {
    currentBasicBlock->setExitTrueBlock(endBlock);
    currentBasicBlock->setExitFalseBlock(whileBlock);
  }
  else {
    cout << "error : mauvais opérateur" << endl;
  }

  // il faut revenir au test à la fin du bloc
  whileBlock->setExitTrueBlock(testBlock);

  //visite du bloc then (pour générer l'assembleur)
  currentBasicBlock = whileBlock;

  currentCFG->enteringNewScope();
  visit(ctx->bloc());
  currentCFG->exitScope();

  currentBasicBlock = endBlock;

  return 0;
}

antlrcpp::Any Visitor::visitAffDecArray(ifccParser::AffDecArrayContext *ctx) {
  string variableName = ctx->VAR()->getText();

  if(currentCFG->isVarExistInScope(variableName)) {
    string message = "variable " + variableName + " is already defined";
    errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
    // if the variable name already exists, we throw an error.
  }

  int size = stoi(ctx->CONST()->getText());

  currentCFG->addArrayToSymbolTable(variableName, INT_ARRAY, size);

  return 0;
}

antlrcpp::Any Visitor::visitArrayExpr(ifccParser::ArrayExprContext *ctx) {
  string address = visit(ctx->array_elt());

  if (address != "") {
    vector<string> params {address, (*currentRegister).name};
    currentBasicBlock->addIRInstr(IRInstr::rmem, INT, params);
  }

  return 0;
}

antlrcpp::Any Visitor::visitAffEltVar(ifccParser::AffEltVarContext *ctx) {
  string arrayEltAddr = visit(ctx->array_elt());
  if (arrayEltAddr == "") {
    return 0;
  }

  string rightValName = ctx->VAR()->getText();
  if (!currentCFG->isVarExist(rightValName)) {
    // if the variable name doesn't exist, we throw an error.
    string message = "variable " + rightValName + " does not exist";
    errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
    return 0;
  }
  vector<string> params {currentCFG->varToAsm(rightValName), "%eax"};
  vector<string> params2 {"%eax", arrayEltAddr};

  currentBasicBlock->addIRInstr(IRInstr::rmem, INT, params);
  currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params2);

  return 0;
}

antlrcpp::Any Visitor::visitAffEltConst(ifccParser::AffEltConstContext *ctx) {
  int valeur = stoi(ctx->CONST()->getText());

  string arrayEltAddr = visit(ctx->array_elt());
  if (arrayEltAddr == "") {
    return 0;
  }

  string constant = "$"+ to_string(valeur);
  vector<string> params {constant, arrayEltAddr};
  currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);
  return 0;
}

antlrcpp::Any Visitor::visitAffEltExpr(ifccParser::AffEltExprContext *ctx) {
  string arrayEltAddr = visit(ctx->array_elt());
  if (arrayEltAddr == "") {
    return 0;
  }

  visit(ctx->expr());

  vector<string> params { "%eax", arrayEltAddr}; //TODO eax par current register
  currentBasicBlock->addIRInstr(IRInstr::wmem, INT, params);

  return 0;
}

antlrcpp::Any Visitor::visitArray_elt(ifccParser::Array_eltContext *ctx) {
  string arrayName = ctx->VAR()->getText();
  string addr = "";

  if (!currentCFG->isVarExist(arrayName)){
    string message = "variable " + arrayName + " does not exist";
    errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
    // if the variable name does not exist, we throw an error.

    return addr;
  }

  int index = stoi(ctx->CONST()->getText());
  addr = currentCFG->arrayToAsm(arrayName, index);

  if (addr != "") {
    return addr;
  }
  else {
    string message = "Index out of bounds : " + to_string(index);
    errorlistener->addSemanticError(ctx->VAR()->getSymbol(), message);
    // if the variable name does not exist, we throw an error.

    return addr;
  }
}
