/*************************************************************************
                           SemanticErrorListener  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <SemanticErrorListener> (fichier SemanticErrorListener.h) ----------------
#if ! defined ( SEMANTICERRORLISTENER_H )
#define SEMANTICERRORLISTENER_H

//--------------------------------------------------- Interfaces utilisées
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

#include "antlr4-runtime.h"
#include "semanticError.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types
using namespace std;

//------------------------------------------------------------------------
// Rôle de la classe <SemanticErrorListener>
//------------------------------------------------------------------------
class SemanticErrorListener
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
  bool Error() { return etatErreur; }

  void addSemanticError(antlr4::Token* symbol, string message);




//------------------------------------------------- Surcharge d'opérateurs
  friend ostream & operator << (ostream & os, const SemanticErrorListener & errorlistener);
    // Mode d'emploi :

//-------------------------------------------- Constructeurs - destructeur
    // SemanticErrorListener (const SemanticErrorListener & unSemanticErrorListener);
    SemanticErrorListener (string inputFile){
      file = inputFile;
      etatErreur = false;
    };




//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
  bool etatErreur;
  vector<SemanticError> errors;
  string file;

};

//-------------------------------- Autres définitions dépendantes de <SemanticErrorListener>

#endif // SEMANTICERRORLISTENER_H
