/*************************************************************************
                          SymbolTable  -  description
                            -------------------
   début                : $DATE$
   copyright            : (C) $YEAR$ par $AUTHOR$
   e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <SymbolTable> (fichier SymbolTable.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "symbolTable.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC
SymbolTable* SymbolTable::globalVariables = new SymbolTable();
int SymbolTable::nextFreeSymbolIndex = -4;
vector<string> SymbolTable::asCodeGlobalVar;

//----------------------------------------------------- Méthodes publiques
bool SymbolTable::variableExiste(string nom){
  return variables.find(nom)!=variables.end();
}

Variable* SymbolTable::getVariable(string nom){
  return variables.find(nom)->second;
}

void SymbolTable::addVariable(string name, Type t){
  VariableLocale* var = new VariableLocale(name, t, nextFreeSymbolIndex);
  nextFreeSymbolIndex -= 4;
  variables.insert({var->getName(),var});
}

void SymbolTable::addArray(string name, Type t, int size) {
  Array* array = new Array(name, t, nextFreeSymbolIndex, size);
  nextFreeSymbolIndex -= (4*size);
  variables.insert({array->getName(),array});
}

bool SymbolTable::isArray(string nom) {
  return variables.find(nom)->second->isArray();
}

void SymbolTable::removeVariable(Variable &var) {
  variables.erase(var.getName());
}

string SymbolTable::varToAsm(string reg){ /**< helper method: inputs a IR reg or input variable, returns e.g. "-24(%rbp)" for the proper value of 24 */
  Variable* var = this->getVariable(reg);

  if(var != nullptr){
    return var->getAddress();
  }

  return "";
}

string SymbolTable::arrayToAsm(string reg, int index) {
  Variable* var = this->getVariable(reg);

  if(var != nullptr && var->isArray()){
    string addr = ((Array*)var)->getAddress(index);

    return addr;
  }
  return "";
}

int SymbolTable::bitesSize(){
  int bitesNumber = 0;

  for (unordered_map<string,Variable*>::iterator it = variables.begin(); it != variables.end(); ++it){
    if(it->second->getType() == INT  ){
      bitesNumber += 4;
    } else if(it->second->getType() == CHAR) {
      bitesNumber += 1;
    }
  }

  return bitesNumber;
}

//global variables;
void SymbolTable::addDeclaredVarToGlobalVariables(string name, Type t){
  VariableGlobale* var = new VariableGlobale(name, t, name);

  globalVariables->variables.insert({var->getName(),var});

  string asCode = " .comm " + name +",4,4\n";
  asCodeGlobalVar.push_back(asCode);
}

void SymbolTable::addDefinedVarToGlobalVariables(string name, Type t, int value){
  VariableGlobale* var = new VariableGlobale(name, t, name);

  globalVariables->variables.insert({var->getName(),var});

  string asCode = " .global " + name + "\n";
  asCode += " .data \n";
  asCode += " .align 4\n";
  asCode += " .type " + name + ", @object\n";
  asCode += " .size "+ name + ", 4\n";
  asCode += name + ":\n";
  asCode += " .long "+ to_string(value) + "\n";
  asCodeGlobalVar.push_back(asCode);
}


SymbolTable* SymbolTable::getGlobalVariablesST(){
  return globalVariables;
}


void SymbolTable::generateAScodeGlobalVariable(ostream& o){
  if(globalVariables == nullptr || asCodeGlobalVar.size() < 1){
    return;
  }
  for (vector<string>::iterator it = asCodeGlobalVar.begin(); it != asCodeGlobalVar.end(); ++it){
    o << (*it);
  }
}

//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
SymbolTable::SymbolTable()

{

}



SymbolTable::~SymbolTable ( )
// Algorithme :
//
{

} //----- Fin de ~SymbolTable


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
