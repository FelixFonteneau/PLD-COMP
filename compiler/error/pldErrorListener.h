/*************************************************************************
                           PldErrorListener  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <PldErrorListener> (fichier PldErrorListener.h) ----------------
#if ! defined ( PLDERRORLISTENER_H )
#define PLDERRORLISTENER_H

//--------------------------------------------------- Interfaces utilisées
#include <string>
#include <vector>
#include <iostream>

#include "antlr4-runtime.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types
using namespace std;
using namespace antlr4;

//------------------------------------------------------------------------
// Rôle de la classe <PldErrorListener>
//
//
//
//
//------------------------------------------------------------------------
class PldErrorListener : public BaseErrorListener
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
  bool Error() { return error; }

   virtual void syntaxError(Recognizer *recognizer, Token * offendingSymbol, size_t line, size_t charPositionInLine,
      const std::string &msg, std::exception_ptr e);



//------------------------------------------------- Surcharge d'opérateurs
  friend ostream & operator << (ostream & os, const PldErrorListener & errorlistener);
    // Mode d'emploi :

//-------------------------------------------- Constructeurs - destructeur
    // PldErrorListener (const PldErrorListener & unPldErrorListener);
    PldErrorListener (){
      error = false;
    };




//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
  bool error;
  vector<string> errors;


};

//-------------------------------- Autres définitions dépendantes de <PldErrorListener>

#endif // PLDERRORLISTENER_H
