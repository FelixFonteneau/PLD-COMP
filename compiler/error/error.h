/*************************************************************************
                           Error  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Error> (fichier Error.h) ----------------
#if ! defined ( ERROR_H )
#define ERROR_H

//--------------------------------------------------- Interfaces utilisées
#include <string>
#include <iostream>
using namespace std;

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Error>
//
//
//------------------------------------------------------------------------

class Error
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
    virtual void showError(ostream & os) const;


//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur

    Error (string message, int lineNb, int charPos, string line ) : message(message),
                                                                    lineNumber(lineNb),
                                                                    charPositionInLine(charPos),
                                                                    line(line){}
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
  string message;
  size_t lineNumber;
  size_t charPositionInLine;
  string line;
};

//-------------------------------- Autres définitions dépendantes de <Error>

#endif // ERROR_H
