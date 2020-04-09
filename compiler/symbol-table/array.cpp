/*************************************************************************
                          Array  -  description
                            -------------------
   début                : $DATE$
   copyright            : (C) $YEAR$ par $AUTHOR$
   e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Array> (fichier Array.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "array.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques



//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur

Array::Array()
// Algorithme :
//
{
  #ifdef MAP
      cout << "Appel au constructeur de <array>" << endl;
  #endif
}

Array::~Array ( )
// Algorithme :
//
{
#ifdef MAP
   cout << "Appel au destructeur de <Array>" << endl;
#endif
} //----- Fin de ~Array


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
