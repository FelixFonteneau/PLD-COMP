/*************************************************************************
                           SyntaxError  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <SyntaxError> (fichier SyntaxError.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "syntaxError.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

//-------------------------------------------- Constructeurs - destructeur
SyntaxError::SyntaxError ( const SyntaxError & unSyntaxError ) :   Error(unSyntaxError.message, unSyntaxError.lineNumber, unSyntaxError.charPositionInLine, unSyntaxError.line)
// Algorithme :
//
{
  recognizer = unSyntaxError.recognizer;
  offendingSymbol = unSyntaxError.offendingSymbol;
  e = unSyntaxError.e;
#ifdef MAP
    cout << "Appel au constructeur de copie de <SyntaxError>" << endl;
#endif
} //----- Fin de SyntaxError (constructeur de copie)


SyntaxError::SyntaxError ( Recognizer *recognizerA, Token * offendingSymbolA, size_t lineNumberA, size_t charPositionInLineA,
   const std::string & msgA, std::exception_ptr eA, string &lineA) :   Error(msgA, lineNumberA, charPositionInLineA, lineA)
// Algorithme :
//
{
  recognizer = recognizerA;
  e = eA;
  offendingSymbol = offendingSymbolA;
#ifdef MAP
    cout << "Appel au constructeur de <SyntaxError>" << endl;
#endif
} //----- Fin de SyntaxError (constructeur de copie)





//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
