/*************************************************************************
                          Variable  -  description
                            -------------------
   début                : $DATE$
   copyright            : (C) $YEAR$ par $AUTHOR$
   e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Variable> (fichier Variable.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "variable.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques



//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
Variable::Variable()

{
  #ifdef MAP
      cout << "Appel au constructeur de <variable>" << endl;
  #endif
}

/*
Variable::Variable ( const Variable & uneVariable ) : value(uneVariable.value), date(uneVariable.date),
       description(uneVariable.description),
       unite(uneVariable.unite), capteurid(uneVariable.capteurid)

// Algorithme :
//
{
#ifdef MAP
   cout << "Appel au constructeur de copie de <Variable>" << endl;
#endif

} //----- Fin de Variable (constructeur de copie)


Variable::Variable (double uneValue, Moment& uneDate, string uneDescription,
  string uneUnite, string unCapteurid) :
      value(uneValue), date(uneDate), description(uneDescription), unite(uneUnite), capteurid(unCapteurid)
{
 #ifdef MAP
     cout << "Appel au constructeur de <Variable>" << endl;
 #endif
}

*/

Variable::~Variable ( )
// Algorithme :
//
{
#ifdef MAP
   cout << "Appel au destructeur de <Variable>" << endl;
#endif
} //----- Fin de ~Variable


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
