/*************************************************************************
                            Fonction -  description
                            -------------------
   début                : $DATE$
   copyright            : (C) $YEAR$ par $AUTHOR$
   e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Fonction> (fichier Fonction.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "fonction.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques



//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
Fonction::Fonction()

{
  #ifdef MAP
      cout << "Appel au constructeur de <Fonction>" << endl;
  #endif
}

/*
Fonction::Fonction ( const Fonction & uneFonction ) : value(uneFonction.value), date(uneFonction.date),
       description(uneFonction.description),
       unite(uneFonction.unite), capteurid(uneFonction.capteurid)

// Algorithme :
//
{
#ifdef MAP
   cout << "Appel au constructeur de copie de <Fonction>" << endl;
#endif

} //----- Fin de Fonction (constructeur de copie)


Fonction::Fonction (double uneValue, Moment& uneDate, string uneDescription,
  string uneUnite, string unCapteurid) :
      value(uneValue), date(uneDate), description(uneDescription), unite(uneUnite), capteurid(unCapteurid)
{
 #ifdef MAP
     cout << "Appel au constructeur de <Fonction>" << endl;
 #endif
}

*/

Fonction::~Fonction ( )
// Algorithme :
//
{
#ifdef MAP
   cout << "Appel au destructeur de <Fonction>" << endl;
#endif
} //----- Fin de ~Fonction


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
