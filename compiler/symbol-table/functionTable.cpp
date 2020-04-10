/*************************************************************************
                          FunctionTable  -  description
                            -------------------
   début                : $DATE$
   copyright            : (C) $YEAR$ par $AUTHOR$
   e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <FunctionTable> (fichier FunctionTable.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "functionTable.h"
#include "antlr4-runtime.h"

//------------------------------------------------------------- Constantes
unordered_map<string, Fonction*> FunctionTable::progFonctions;
//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void FunctionTable::addDeclaredFunction(string name, string t, antlr4::Token* token){
  Fonction* f = new Fonction(name, t, token);
  progFonctions.insert({name, f});
}

void FunctionTable::addDefinedFunction(string name, string t, antlr4::Token* token){
  Fonction* f = new Fonction(name, t, token);
  f->setDefined();
  progFonctions.insert({name, f});
}

bool FunctionTable::checkIfFunctionExist(string name){
  std::unordered_map<string, Fonction*>::const_iterator find = progFonctions.find(name);
  if (find == progFonctions.end()) {
    return false;
  } else {
    return true;
  }
}

Fonction* FunctionTable::getFunction(string name){
  std::unordered_map<string, Fonction*>::const_iterator find = progFonctions.find(name);
  if (find == progFonctions.end()) {
    return NULL;
  } else {
    return find->second;
  }
}

int FunctionTable::getNumberOfFunction(){
  return progFonctions.size();
}

bool FunctionTable::thereIsFunction(){
  return !progFonctions.empty();
}

//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
FunctionTable::FunctionTable()
{

}


FunctionTable::~FunctionTable ( )
{

} //----- Fin de ~SymbolTable


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
