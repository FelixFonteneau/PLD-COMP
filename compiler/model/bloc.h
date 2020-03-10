/*************************************************************************
                           Bloc  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Bloc> (fichier Bloc.h) ----------------
#if ! defined ( BLOC_H )
#define BLOC_H

//--------------------------------------------------- Interfaces utilisées
#include <unordered_map>
#include "variable.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types
//------------------------------------------------------------------------
// Rôle de la classe <Bloc>
//
// Cette classe correspond a l'objet represetant toues les informations d'un
// capteur. Elle contient toutes les donnees possibles d'un capteur.
//
//------------------------------------------------------------------------
class Bloc
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    bool variableExiste(string nom);
    Variable* getVariable(string nom);
    void AjouterVariable(Variable &var);

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
    // Bloc (const Bloc & unBloc);
    Bloc ();
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Bloc ( );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

unordered_map<string, Variable> variables; // <liste des variables dans le bloc principal>

};

//-------------------------------- Autres définitions dépendantes de <Bloc>

#endif // BLOC_H
