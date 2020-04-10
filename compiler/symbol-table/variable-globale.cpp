/*************************************************************************
                          VariableGlobale  -  description
                            -------------------
   début                : $DATE$
   copyright            : (C) $YEAR$ par $AUTHOR$
   e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <VariableGlobale> (fichier variable-globale.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "variable-globale.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
VariableGlobale::VariableGlobale()

{
  #ifdef MAP
      cout << "Appel au constructeur de <VariableGlobale>" << endl;
  #endif
}

string VariableGlobale::getAddress()
{
  return this->address + "(%rip)";
}

VariableGlobale::~VariableGlobale ( )
{
#ifdef MAP
   cout << "Appel au destructeur de <VariableGlobale>" << endl;
#endif
} //----- Fin de ~VariableGlobale


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
