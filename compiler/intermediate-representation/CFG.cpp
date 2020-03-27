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
void CFG::add_bb(BasicBlock* bb){
  current_bb = bb;
  nextBBnumber++;
  bbs.push_back(bb);
}

void CFG::gen_asm(ostream& o){
  gen_asm_prologue(o);
  o << endl;
  for(vector<BasicBlock*>::iterator it = bbs.begin(); it != bbs.end(); it++){
    (*it)->gen_asm(o);
  }
}

void CFG::gen_asm_prologue(ostream& o){
  o << "  #prologue" << endl;
  o << "  pushq %rbp" << endl;
  o << "  mov	%rbp, %rsp" << endl;
  o << "  subl	%rsp," << endl;
}

void CFG::gen_asm_epilogue(ostream& o){
  o << "  #epilogue" << endl;
  o << "  mov	%rsp, %rbp" << endl;
  o << "  popq	%rbp"     << endl;
  o << "  ret"           << endl;
}

// symbol table methods
void CFG::add_to_symbol_table(string name, Type t){

  Variable var(name, t, nextFreeSymbolIndex);
  nextFreeSymbolIndex += 4;
  symbolTable.addVariable(var);
}

//TODO bellow
string CFG::create_new_tempvar(Type t){return "";}


// basic block management
string CFG::new_BB_name(){
  return name+to_string(nextBBnumber);
}
//------------------------------------------------- Surcharge d'opérateurs
//-------------------------------------------- Constructeurs - destructeur

CFG::CFG(string name_)
// Algorithme :
//
{
  name = name_;
  nextFreeSymbolIndex = 0;
  nextBBnumber = 0;
  current_bb = nullptr;
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
  for(auto it = bbs.begin(); it != bbs.end(); ++it){
    delete *it;
  }

} //----- Fin de ~CFG


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
