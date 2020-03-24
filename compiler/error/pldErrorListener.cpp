/*************************************************************************
                          PldErrorListener  -  description
                            -------------------
   début                : $DATE$
   copyright            : (C) $YEAR$ par $AUTHOR$
   e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <PldErrorListener> (fichier PldErrorListener.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "pldErrorListener.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void PldErrorListener::syntaxError(Recognizer *recognizer, Token * offendingSymbol, size_t line, size_t charPositionInLine,
   const std::string &msg, std::exception_ptr e){
     stringstream stringStream;
     stringStream << "Error on position " << line << ":" << charPositionInLine << endl;
     stringStream << msg << endl;
     errors.push_back(stringStream.str());
     error = true;
}

//------------------------------------------------- Surcharge d'opérateurs

ostream & operator << (ostream & os, const PldErrorListener & errorlistener)
// Algorithme :
{
  for (auto errorIterator = errorlistener.errors.begin(); errorIterator != errorlistener.errors.end(); ++errorIterator)
        os << *errorIterator << endl;
	return os;
} //----- Fin de la surchage de <<*/
//-------------------------------------------- Constructeurs - destructeur







//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
