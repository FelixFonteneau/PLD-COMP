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


Fonction::~Fonction ( )
{
#ifdef MAP
   cout << "Appel au destructeur de <Fonction>" << endl;
#endif
} //----- Fin de ~Fonction


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
