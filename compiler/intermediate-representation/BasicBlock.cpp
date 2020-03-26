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
void BasicBlock::gen_asm(ostream &o){} /**< x86 assembly code generation for this basic block (very simple) */

void BasicBlock::add_IRInstr(IRInstr::Operation op, Type t, vector<string> params){
  IRInstr* newInstr = new IRInstr(this, op, t, params);
  instrs.push_back(newInstr);

}

void BasicBlock::setExitTrueBlock(BasicBlock* exit_true_){
  exit_true = exit_true_;
}
void BasicBlock::setExitFalseBlock(BasicBlock* exit_false_){
  exit_false = exit_false_;
}

//------------------------------------------------- Surcharge d'opérateurs
//-------------------------------------------- Constructeurs - destructeur

BasicBlock::BasicBlock (CFG* cfg_, string entry_label)
// Algorithme :
//
{
  cfg = cfg_;
  label = entry_label;
} //----- Fin de BasicBlock


BasicBlock::~BasicBlock ( )
// Algorithme :
//
{
  for(auto it = instrs.begin(); it != instrs.end(); ++it){
    delete *it;
  }

} //----- Fin de ~BasicBlock


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
