/*************************************************************************
                          Bloc  -  description
                            -------------------
   début                : $DATE$
   copyright            : (C) $YEAR$ par $AUTHOR$
   e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Bloc> (fichier Bloc.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "bloc.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
bool Bloc::variableExiste(string nom){
  return variables.find(nom)!=variables.end();
}

Variable* Bloc::getVariable(string nom){
  return &variables.find(nom)->second;
}

void Bloc::AjouterVariable(Variable &var){
  variables.insert({var.getName(),var});
}

//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
Bloc::Bloc()

{
  #ifdef MAP
      cout << "Appel au constructeur de <bloc>" << endl;
  #endif
}



Bloc::~Bloc ( )
// Algorithme :
//
{
#ifdef MAP
   cout << "Appel au destructeur de <Bloc>" << endl;
#endif
} //----- Fin de ~Bloc


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
