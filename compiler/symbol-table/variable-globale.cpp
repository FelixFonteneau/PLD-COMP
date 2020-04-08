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

/*
VariableGlobale::VariableGlobale ( const VariableGlobale & uneVariableGlobale ) : value(uneVariableGlobale.value), date(uneVariableGlobale.date),
       description(uneVariableGlobale.description),
       unite(uneVariableGlobale.unite), capteurid(uneVariableGlobale.capteurid)

// Algorithme :
//
{
#ifdef MAP
   cout << "Appel au constructeur de copie de <VariableGlobale>" << endl;
#endif

} //----- Fin de VariableGlobale (constructeur de copie)


VariableGlobale::VariableGlobale (double uneValue, Moment& uneDate, string uneDescription,
  string uneUnite, string unCapteurid) :
      value(uneValue), date(uneDate), description(uneDescription), unite(uneUnite), capteurid(unCapteurid)
{
 #ifdef MAP
     cout << "Appel au constructeur de <VariableGlobale>" << endl;
 #endif
}

*/

VariableGlobale::~VariableGlobale ( )
// Algorithme :
//
{
#ifdef MAP
   cout << "Appel au destructeur de <VariableGlobale>" << endl;
#endif
} //----- Fin de ~VariableGlobale


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
