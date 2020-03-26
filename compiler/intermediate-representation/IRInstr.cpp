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
#include "IR.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type IRInstr::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void IRInstr::gen_asm(ostream &o){ /**< x86 assembly code generation for this IR instruction */

}


//------------------------------------------------- Surcharge d'opérateurs
//-------------------------------------------- Constructeurs - destructeur
IRInstr::IRInstr (BasicBlock* bb_, Operation op_, Type t_, vector<string> params_)
// Algorithme :
//
{
  bb = bb_;
  op = op_;
  t  = t_;
  params = params_;

} //----- Fin de IRInstr


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
