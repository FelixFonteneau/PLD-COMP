/*************************************************************************
                           IRInstr  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <IRInstr> (fichier IRInstr.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "IRInstr.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type IRInstr::Méthode ( liste des paramètres )


void IRInstr::genAsm(ostream &o){ /**< x86 assembly code generation for this IR instruction */
  string operation = "";
  switch (op) {
    case ldconst:
      //ld (LoaD) est normalement une instruction qui charge des données
      //  de la mémoire veres un registre
      operation = "ldconst"; //à implementer
      break;
		case add:
      operation = "addl";
      break;
		case sub:
      operation = "subl";
      break;
		case mul:
      operation = "imul";
      break;
    case neg:
      operation = "negl";
      break;
    case not_op:
      operation = "notl";
      break;
		case rmem:
      operation = "movl";
      break;
		case wmem:
      operation = "movl";
      break;
    case wmemq:
      operation = "movq";
      break;
		case call:
      operation = "callq"; //à implementer
      break;
		case cmp_eq:
      operation = "cmpl";
      break;
		case cmp_lt:
      operation = "cmpl";
      break;
		case cmp_le:
      operation = "cmpl";
      break;
    case and_bit :
      operation = "andl";
      break;
    case or_bit :
      operation = "orl";
      break;
    case xor_bit :
      operation = "xorl";
      break;
    case activationRecord:
      operation = "subq";
      break;
    case desactivationRecord:
      operation = "addq";
      break;
  }

  o << "  " << operation << " ";
  for(vector<string>::iterator it = params.begin(); it != params.end(); it++ ){
    o  << *it << (next(it) != params.end() ? ", " : "");
  }
  o << endl;
}

bool IRInstr::isComp(){
  return (op == cmp_eq) || (op == cmp_lt) || (op == cmp_le);
}

int IRInstr::compType(){
  if (op == cmp_eq) {
    return 1;
  }
  else if (op == cmp_lt) {
    return 2;
  }
  else if (op == cmp_le) {
    return 3;
  }
  else {
    return 0;
  }
}

//------------------------------------------------- Surcharge d'opérateurs
//-------------------------------------------- Constructeurs - destructeur
IRInstr::IRInstr (Operation op_, Type t_, vector<string> params_)
// Algorithme :
//
{
  op = op_;
  t  = t_;
  params = params_;
} //----- Fin de IRInstr

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
