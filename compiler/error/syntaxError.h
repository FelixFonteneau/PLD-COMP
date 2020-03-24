/*************************************************************************
                           SyntaxError  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <SyntaxError> (fichier SyntaxError.h) ----------------
#if ! defined ( SYNTAXERROR_H )
#define SYNTAXERROR_H

//--------------------------------------------------- Interfaces utilisées
#include <string>

#include "antlr4-runtime.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types
using namespace std;
using namespace antlr4;
//------------------------------------------------------------------------
// Rôle de la classe <SyntaxError>
//
//
//------------------------------------------------------------------------

class SyntaxError
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'opérateurs
  friend ostream & operator << (ostream & os, const SyntaxError & error);



//-------------------------------------------- Constructeurs - destructeur
    SyntaxError ( const SyntaxError & unSyntaxError );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    SyntaxError (Recognizer *recognizerA, Token * offendingSymbolA, size_t lineNumberA, size_t charPositionInLineA,
       const std::string &msgA, std::exception_ptr eA, string &lineA);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~SyntaxError ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
  Recognizer *recognizer;
  Token * offendingSymbol;
  size_t lineNumber;
  size_t charPositionInLine;
  string message;
  exception_ptr e;
  string line;
};

//-------------------------------- Autres définitions dépendantes de <SyntaxError>

#endif // SYNTAXERROR_H
