/*************************************************************************
                           VariableGlobale  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <VariableGlobale> (fichier variable-globale.h) ----------------
#if ! defined ( VARIABLE_GLOBALE_H )
#define VARIABLE_GLOBALE_H

//--------------------------------------------------- Interfaces utilisées
#include "variable.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

using namespace std;

//------------------------------------------------------------------------
// Rôle de la classe <VariableGlobale>
//
// Cette classe correspond a l'objet represetant toues les informations d'une
// variable. Elle contient toutes les donnees nécessaires concernant les
// variables pendant la compilation.
//
//------------------------------------------------------------------------
class VariableGlobale : public Variable
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
  string getAddress()
  {
    return this->address + "(%rip)";
  }

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    // VariableGlobale (const VariableGlobale & unVariableGlobale);
    VariableGlobale ();
    // Mode d'emploi :
    //
    // Contrat :
    //

    VariableGlobale (string name, Type type, string address) : Variable(name, type), address(address){}
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~VariableGlobale ( );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
  string address;

};

//-------------------------------- Autres définitions dépendantes de <VariableGlobale>

#endif // VARIABLE_GLOBALE_H
