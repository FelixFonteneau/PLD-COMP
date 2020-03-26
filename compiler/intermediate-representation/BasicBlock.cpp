/*************************************************************************
                           BasicBlock  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <BasicBlock> (fichier BasicBlock.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "IR.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type BasicBlock::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
void BasicBlock::gen_asm(ostream &o); /**< x86 assembly code generation for this basic block (very simple) */

void BasicBlock::add_IRInstr(IRInstr::Operation op, Type t, vector<string> params);


//------------------------------------------------- Surcharge d'opérateurs
//-------------------------------------------- Constructeurs - destructeur

BasicBlock::BasicBlock (CFG* cfg, string entry_label)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <BasicBlock>" << endl;
#endif
} //----- Fin de BasicBlock


BasicBlock::~BasicBlock ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <BasicBlock>" << endl;
#endif
} //----- Fin de ~BasicBlock


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
