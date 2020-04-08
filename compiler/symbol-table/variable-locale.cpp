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

/*
VariableLocale::VariableLocale ( const VariableLocale & uneVariableLocale ) : value(uneVariableLocale.value), date(uneVariableLocale.date),
       description(uneVariableLocale.description),
       unite(uneVariableLocale.unite), capteurid(uneVariableLocale.capteurid)

// Algorithme :
//
{
#ifdef MAP
   cout << "Appel au constructeur de copie de <VariableLocale>" << endl;
#endif

} //----- Fin de VariableLocale (constructeur de copie)


VariableLocale::VariableLocale (double uneValue, Moment& uneDate, string uneDescription,
  string uneUnite, string unCapteurid) :
      value(uneValue), date(uneDate), description(uneDescription), unite(uneUnite), capteurid(unCapteurid)
{
 #ifdef MAP
     cout << "Appel au constructeur de <VariableLocale>" << endl;
 #endif
}

*/

VariableLocale::~VariableLocale ( )
// Algorithme :
//
{
#ifdef MAP
   cout << "Appel au destructeur de <VariableLocale>" << endl;
#endif
} //----- Fin de ~VariableLocale


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
