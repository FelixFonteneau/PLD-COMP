/*************************************************************************
                           SymbolTable  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <SymbolTable> (fichier SymbolTable.h) ----------------
#if ! defined ( SYMBOLTABLE_H )
#define SYMBOLTABLE_H

//--------------------------------------------------- Interfaces utilisées
#include <unordered_map>
#include <vector>
#include <string>
#include "array.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types
//------------------------------------------------------------------------
// Rôle de la classe <SymbolTable>
//
// Cette classe correspond a l'objet represetant toues les informations d'un
// SymbolTable. Elle contient toutes les donnees nécessaires pour la gestion des blocs
// pendant la compilation.
//
//------------------------------------------------------------------------
class SymbolTable
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    bool variableExiste(string nom);
    Variable* getVariable(string nom);
    bool isArray(string nom);
    void addVariable(Variable &var);

    string varToAsm(string reg);
    string arrayToAsm(string reg, int index);

    int bitesSize();

    // variables globales
    static void createGlobalVariablesST(vector<string> variables);
    static SymbolTable* getGlobalVariablesST();
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    // SymbolTable (const SymbolTable & unSymbolTable);
    SymbolTable ();
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~SymbolTable ( );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
  static SymbolTable* globalVariables;
  unordered_map<string, Variable> variables; // <liste des variables dans le bloc principal>

};

//-------------------------------- Autres définitions dépendantes de <SymbolTable>

#endif // SYMBOLTABLE_H
