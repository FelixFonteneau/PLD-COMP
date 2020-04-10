/*************************************************************************
                           SyntaxErrorListener  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <SyntaxErrorListener> (fichier SyntaxErrorListener.h) ----------------
#if ! defined ( SYNTAXERRORLISTENER_H )
#define SYNTAXERRORLISTENER_H

//--------------------------------------------------- Interfaces utilisées
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

#include "antlr4-runtime.h"
#include "syntaxError.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types
using namespace std;
using namespace antlr4;

//------------------------------------------------------------------------
// Rôle de la classe <SyntaxErrorListener>

//------------------------------------------------------------------------
class SyntaxErrorListener : public BaseErrorListener
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
  bool Error() { return etatErreur; }

   virtual void syntaxError(Recognizer *recognizer, Token * offendingSymbol, size_t line, size_t charPositionInLine,
      const std::string &msg, std::exception_ptr e);



//------------------------------------------------- Surcharge d'opérateurs
  friend ostream & operator << (ostream & os, const SyntaxErrorListener & errorlistener);
    // Mode d'emploi :

//-------------------------------------------- Constructeurs - destructeur
    // SyntaxErrorListener (const SyntaxErrorListener & unSyntaxErrorListener);
    SyntaxErrorListener (string inputFile){
      file = inputFile;
      etatErreur = false;
    };




//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
  bool etatErreur;
  vector<SyntaxError> errors;
  string file;

};

//-------------------------------- Autres définitions dépendantes de <SyntaxErrorListener>

#endif // SYNTAXERRORLISTENER_H
