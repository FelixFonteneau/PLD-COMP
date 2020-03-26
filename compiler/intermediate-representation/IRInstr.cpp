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


//------------------------------------------------- Surcharge d'opérateurs
//-------------------------------------------- Constructeurs - destructeur
IRInstr::IRInstr (BasicBlock* bb_, Operation op, Type t, vector<string> params)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <IRInstr>" << endl;
#endif
} //----- Fin de IRInstr

void IRInstr::gen_asm(ostream &o);/**< x86 assembly code generation for this IR instruction */


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
