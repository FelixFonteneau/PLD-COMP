/*************************************************************************
                           Fonction  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Fonction> (fichier Fonction.h) ----------------
#if ! defined ( Fonction )
#define FONCTION_H

//--------------------------------------------------- Interfaces utilisées
#include <string>
#include "type.h"
#include "antlr4-runtime.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

using namespace std;

//------------------------------------------------------------------------
// Rôle de la classe <Variable>
//
// Cette classe correspond a l'objet represetant toues les informations d'une
// variable. Elle contient toutes les donnees nécessaires concernant les
// variables pendant la compilation.
//
//------------------------------------------------------------------------
class Fonction
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
  string getName()
  {
    return this->name;
  }

  string getReturnType()
  {
    return this->returnType;
  }

  void setDefined()
  {
    defined = true;
  }

  bool isDefined()
  {
    return defined;
  }

  void setUsed(){
    used = true;
  }

  bool isUsed(){
    return used;
  }

  antlr4::Token* getToken(){
    return token;
  }


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    // Variable (const Variable & unVariable);
    Fonction ();
    // Mode d'emploi :
    //
    // Contrat :
    //

    Fonction (string name, string returnType, antlr4::Token* token) : name(name), returnType(returnType), token(token), defined(false), used(false){}
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Fonction ( );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
  string name;
  string returnType;
  antlr4::Token* token;
  bool defined;
  bool used;
};

//-------------------------------- Autres définitions dépendantes de <Variable>

#endif // VARIABLE_H
