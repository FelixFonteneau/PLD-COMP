/*************************************************************************
                           VariableLocale  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <VariableLocale> (fichier variable-locale.h) ----------------
#if ! defined ( VARIABLE_LOCALE_H )
#define VARIABLE_LOCALE_H

//--------------------------------------------------- Interfaces utilisées
#include "variable.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

using namespace std;

//------------------------------------------------------------------------
// Rôle de la classe <VariableLocale>
//
// Cette classe correspond a l'objet represetant toues les informations d'une
// variable. Elle contient toutes les donnees nécessaires concernant les
// variables pendant la compilation.
//
//------------------------------------------------------------------------
class VariableLocale : public Variable
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
  virtual string getAddress() override;

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    // VariableLocale (const VariableLocale & unVariableLocale);
    VariableLocale ();

    VariableLocale (string name, Type type, int address) : Variable(name, type), address(address){}

    virtual ~VariableLocale ( );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
  int address;
};

//-------------------------------- Autres définitions dépendantes de <VariableLocale>

#endif // VARIABLE_LOCALE_H
