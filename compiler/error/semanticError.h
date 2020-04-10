/*************************************************************************
                           SemanticError  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <SemanticError> (fichier SemanticError.h) ----------------
#if ! defined ( SEMANTICERROR_H )
#define SEMANTICERROR_H

//--------------------------------------------------- Interfaces utilisées
#include <string>
#include <iostream>
#include "error.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <SemanticError>
//
//
//------------------------------------------------------------------------

class SemanticError : public Error
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void showError(ostream & os) const
    {
      Error::showError(os);
    }


//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur

  SemanticError (size_t lineNumberA, size_t charPositionInLineA,
   const std::string &msgA, string &lineA) :
                  Error(msgA, lineNumberA, charPositionInLineA, lineA){}

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//-------------------------------- Autres définitions dépendantes de <SemanticError>

#endif // SEMANTICERROR_H
