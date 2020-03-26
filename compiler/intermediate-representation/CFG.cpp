/*************************************************************************
                           CFG  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <CFG> (fichier CFG.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "IR.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type CFG::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
void CFG::add_bb(BasicBlock* bb);
void CFG::gen_asm(ostream& o);
string CFG::IR_reg_to_asm(string reg); /**< helper method: inputs a IR reg or input variable, returns e.g. "-24(%rbp)" for the proper value of 24 */
void CFG::gen_asm_prologue(ostream& o);
void CFG::gen_asm_epilogue(ostream& o);

// symbol table methods
void CFG::add_to_symbol_table(string name, Type t);
string CFG::create_new_tempvar(Type t);
int CFG::get_var_index(string name);
Type CFG::get_var_type(string name);

// basic block management
string new_BB_name();
//------------------------------------------------- Surcharge d'opérateurs
//-------------------------------------------- Constructeurs - destructeur

CFG::CFG(DefFonction* ast);
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <CFG>" << endl;
#endif
} //----- Fin de CFG


CFG::~CFG ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <CFG>" << endl;
#endif
} //----- Fin de ~CFG


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
