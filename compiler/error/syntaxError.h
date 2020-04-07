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

#include "error.h"
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

class SyntaxError : Error
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
    void showError(ostream & os) const
    {
      Error::showError(os);
    }


//------------------------------------------------- Surcharge d'opérateurs



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

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
  Recognizer *recognizer;
  Token * offendingSymbol;
  exception_ptr e;
};

//-------------------------------- Autres définitions dépendantes de <SyntaxError>

#endif // SYNTAXERROR_H
