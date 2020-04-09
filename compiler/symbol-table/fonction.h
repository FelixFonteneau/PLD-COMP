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

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    // Variable (const Variable & unVariable);
    Fonction ();
    // Mode d'emploi :
    //
    // Contrat :
    //

    Fonction (string name, string returnType) : name(name), returnType(returnType), defined(false){}
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
  bool defined;

};

//-------------------------------- Autres définitions dépendantes de <Variable>

#endif // VARIABLE_H
