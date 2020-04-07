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
#include "variable.h"

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
    void addVariable(string name, Type t);

    string varToAsm(string reg);

    int bitesSize();

    // variables globales
    static void addDeclaredVarToGlobalVariables(string var);
    static void addDefinedVarToGlobalVariables(string var, int value);
    static SymbolTable* getGlobalVariablesST();
    static string generateAScodeGlobalVariable();
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
  static int nextFreeSymbolIndex; /**< to allocate new symbols in the symbol table */
  unordered_map<string, Variable> variables; // <liste des variables dans le bloc principal>

  static SymbolTable* globalVariables;
  static string asCodeGlobalVar;
};

//-------------------------------- Autres définitions dépendantes de <SymbolTable>

#endif // SYMBOLTABLE_H
