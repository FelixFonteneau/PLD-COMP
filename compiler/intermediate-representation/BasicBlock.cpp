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
void BasicBlock::gen_asm(ostream &o){ /**< x86 assembly code generation for this basic block (very simple) */
  o << "." << label << ":" << endl;
  for(vector<IRInstr*>::iterator it = instrs.begin(); it != instrs.end(); it++){
    (*it)->gen_asm(o);
  }

  if(exit_true == nullptr){
    cfg->gen_asm_epilogue(o);
  } else if(exit_false != nullptr && (*(instrs.end()--))->isComp() ){
    // deux branches conditionnels sur la valeur de la dernière variable assignée
    o << "  je ." << exit_true->getLabel() << endl;
    o << "  jne ." << exit_false->getLabel() << endl;

  } else {
    // saut inconditionel vers la true branch
    o << "  jmp ." << exit_true->getLabel() << endl;
  }
  o << endl;
}

void BasicBlock::add_IRInstr(IRInstr::Operation op, Type t, vector<string> params){
  IRInstr* newInstr = new IRInstr(symbolTable, op, t, params);
  instrs.push_back(newInstr);

}

void BasicBlock::setExitTrueBlock(BasicBlock* exit_true_){
  exit_true = exit_true_;
}
void BasicBlock::setExitFalseBlock(BasicBlock* exit_false_){
  exit_false = exit_false_;
}

string BasicBlock::getLabel(){
  return label;
}


//------------------------------------------------- Surcharge d'opérateurs
//-------------------------------------------- Constructeurs - destructeur

BasicBlock::BasicBlock (SymbolTable * symbolTable_, CFG* cfg_, string entry_label)
// Algorithme :
//
{
  cfg = cfg_;
  symbolTable = symbolTable_;
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
