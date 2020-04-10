/*************************************************************************
                           SemanticErrorListener  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <SemanticErrorListener> (fichier SemanticErrorListener.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "semanticErrorListener.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void SemanticErrorListener::addSemanticError(antlr4::Token* symbol, string message){
  string token;
  int i = 1;
  stringstream ss;
  ss.str(file);
  while(getline(ss, token, '\n') && i++ < symbol->getLine()) {}
  SemanticError error(symbol->getLine(), symbol->getCharPositionInLine(), message, token);
  errors.push_back(error);
  etatErreur = true;
}

//------------------------------------------------- Surcharge d'opérateurs
ostream & operator << (ostream & os, const SemanticErrorListener & errorlistener){
  for (auto err = errorlistener.errors.begin(); err != errorlistener.errors.end(); ++err){
    (*err).showError(os);
    os << endl;
  }
  string err = "errors";
  if(errorlistener.errors.size() == 1){
    err = "error";
  }
  os << errorlistener.errors.size() << " " << err << " generated." << endl;
  return os;
}

//-------------------------------------------- Constructeurs - destructeur




//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
