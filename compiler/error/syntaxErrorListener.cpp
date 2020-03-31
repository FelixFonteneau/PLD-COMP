/*************************************************************************
                          SyntaxErrorListener  -  description
                            -------------------
   début                : $DATE$
   copyright            : (C) $YEAR$ par $AUTHOR$
   e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <SyntaxErrorListener> (fichier SyntaxErrorListener.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "syntaxErrorListener.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void SyntaxErrorListener::syntaxError(Recognizer *recognizer, Token * offendingSymbol, size_t line, size_t charPositionInLine,
   const std::string &msg, std::exception_ptr e){
     string token;
     int i = 1;
     stringstream ss;
     ss.str(file);
     while(getline(ss, token, '\n') && i++ < line) {}
     SyntaxError error(recognizer, offendingSymbol, line, charPositionInLine, msg, e, token);
     errors.push_back(error);
     etatErreur = true;
}

//------------------------------------------------- Surcharge d'opérateurs
ostream & operator << (ostream & os, const SyntaxErrorListener & errorlistener){
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
 //----- Fin de la surchage de <<*/
//-------------------------------------------- Constructeurs - destructeur







//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
