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



//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
Bloc::Bloc()

{
  #ifdef MAP
      cout << "Appel au constructeur de <bloc>" << endl;
  #endif
}

/*
Bloc::Bloc ( const Bloc & uneBloc ) : value(uneBloc.value), date(uneBloc.date),
       description(uneBloc.description),
       unite(uneBloc.unite), capteurid(uneBloc.capteurid)

// Algorithme :
//
{
#ifdef MAP
   cout << "Appel au constructeur de copie de <Bloc>" << endl;
#endif

} //----- Fin de Bloc (constructeur de copie)


Bloc::Bloc (double uneValue, Moment& uneDate, string uneDescription,
  string uneUnite, string unCapteurid) :
      value(uneValue), date(uneDate), description(uneDescription), unite(uneUnite), capteurid(unCapteurid)
{
 #ifdef MAP
     cout << "Appel au constructeur de <Bloc>" << endl;
 #endif
}

*/

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
