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

//----------------------------------------------------- Méthodes publiques
bool SymbolTable::variableExiste(string nom){
  return variables.find(nom)!=variables.end();
}

Variable* SymbolTable::getVariable(string nom){
  return &variables.find(nom)->second;
}

void SymbolTable::addVariable(Variable &var){
  variables.insert({var.getName(),var});
}


string SymbolTable::varToAsm(string reg){ /**< helper method: inputs a IR reg or input variable, returns e.g. "-24(%rbp)" for the proper value of 24 */
  Variable* var = this->getVariable(reg);
  if(var != nullptr){
    return "-" + to_string(var->getAddress()) + "(%rbp)";
  }
  return "";
}

int SymbolTable::bitesSize(){
  int bitesNumber = 0;
  for (unordered_map<string,Variable>::iterator it = variables.begin(); it != variables.end(); ++it){
    if(it->second.getType() == INT  ){
      bitesNumber += 4;
    } else if(it->second.getType() == CHAR) {
      bitesNumber += 1;
    }
  }
  return bitesNumber;

}


//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
SymbolTable::SymbolTable()

{
  #ifdef MAP
      cout << "Appel au constructeur de <bloc>" << endl;
  #endif
}



SymbolTable::~SymbolTable ( )
// Algorithme :
//
{
#ifdef MAP
   cout << "Appel au destructeur de <SymbolTable>" << endl;
#endif
} //----- Fin de ~SymbolTable


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
