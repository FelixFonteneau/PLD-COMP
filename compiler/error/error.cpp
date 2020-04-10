/*************************************************************************
                           Error  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Error> (fichier Error.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "error.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void Error::showError(ostream & os) const {
  os << "Error " << message << ". On position " << lineNumber << ":" << charPositionInLine << endl;
  os << "   \"" << line << "\"" << endl;
  for(int i = 0; i < charPositionInLine + 4; i++)
  {
    os << " ";
  }
  os << "^" << endl;
}
