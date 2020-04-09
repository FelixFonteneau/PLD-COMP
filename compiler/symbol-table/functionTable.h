/*************************************************************************
                           FunctionTable  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <FunctionTable> (fichier FunctionTable.h) ----------------
#if ! defined ( FUNCTIONTABLE_H )
#define FUNCTIONTABLE_H

//--------------------------------------------------- Interfaces utilisées
#include <unordered_map>
#include <vector>
#include <string>
#include "fonction.h"
#include "antlr4-runtime.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types
//------------------------------------------------------------------------
// Rôle de la classe <FunctionTable>
//
// Cette classe correspond a l'objet represetant toues les informations d'un
// FunctionTable. Elle contient toutes les donnees nécessaires pour la gestion des blocs
// pendant la compilation.
//
//------------------------------------------------------------------------
class FunctionTable
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    static void addDeclaredFunction(string name, string t, antlr4::Token* token);
    static void addDefinedFunction(string name, string t, antlr4::Token* token);
    static Fonction* getFunction(string name);
    static bool checkIfFunctionExist(string name);
    static int getNumberOfFunction();
    static bool thereIsFunction();
    static unordered_map<string, Fonction*>* getFonctions(){
      return &progFonctions;
    }
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    // FunctionTable (const FunctionTable & unFunctionTable);
    FunctionTable ();
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~FunctionTable ( );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
  static unordered_map<string, Fonction*> progFonctions; // <liste des variables dans le bloc principal>

};

//-------------------------------- Autres définitions dépendantes de <SymbolTable>

#endif // FUNCTIONTABLE_H
