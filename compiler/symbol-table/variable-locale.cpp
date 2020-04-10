/*************************************************************************
                          VariableLocale  -  description
                            -------------------
   début                : $DATE$
   copyright            : (C) $YEAR$ par $AUTHOR$
   e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <VariableLocale> (fichier variable-locale.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "variable-locale.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques



//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
VariableLocale::VariableLocale()
{
  #ifdef MAP
      cout << "Appel au constructeur de <VariableLocale>" << endl;
  #endif
}

string VariableLocale::getAddress()
{
  return to_string(this->address) + "(%rbp)";
}

VariableLocale::~VariableLocale ( )
{
#ifdef MAP
   cout << "Appel au destructeur de <VariableLocale>" << endl;
#endif
} //----- Fin de ~VariableLocale


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
