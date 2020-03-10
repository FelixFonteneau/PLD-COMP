/*************************************************************************
                           Variable  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Variable> (fichier Variable.h) ----------------
#if ! defined ( VARIABLE_H )
#define VARIABLE_H

//--------------------------------------------------- Interfaces utilisées
#include <string>

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types
using namespace std;

//------------------------------------------------------------------------
// Rôle de la classe <Variable>
//
// Cette classe correspond a l'objet represetant toues les informations d'un
// capteur. Elle contient toutes les donnees possibles d'un capteur.
//
//------------------------------------------------------------------------
class Variable
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    //void AjouterMesure(Mesure *mesure);
    // Mode d'emploi :
    //
    // Cette methode permet d'ajouter une mesure aux structures de donnees du
    // capteur.
    //
    // Contrat :
    // Le poiteur doit pointer sur une mesure valide.



//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    // Variable (const Variable & unVariable);
    Variable ();
    // Mode d'emploi :
    //
    // Contrat :
    //

    Variable (string name, string type, int adress) : name(name), type(type), adress(adress){}
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Variable ( );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
  string name;
  string type;
  int adress;


};

//-------------------------------- Autres définitions dépendantes de <Variable>

#endif // VARIABLE_H
