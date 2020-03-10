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

};

//-------------------------------- Autres définitions dépendantes de <Bloc>

#endif // BLOC_H
