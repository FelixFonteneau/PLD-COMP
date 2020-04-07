/*************************************************************************
                           IRInstr  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <IRInstr> (fichier IRInstr.h) ----------------
#if ! defined ( IRINSTR_H )
#define IRINSTR_H

//--------------------------------------------------- Interfaces utilisées
#include <vector>
#include <string>
#include <iostream>
#include <initializer_list>

#include "../symbol-table/symbolTable.h"
#include "../symbol-table/variable.h"
#include "../symbol-table/type.h"


//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <IRInstr>
//
//
//------------------------------------------------------------------------

class IRInstr
{
  public:
    /** The instructions themselves -- feel free to subclass instead */
    typedef enum {
     ldconst,
     add,
     sub,
     mul,
     neg,
     not_op,
     rmem,
     wmem,
     call,
     cmp_eq,
     cmp_lt,
     cmp_le,
     and_bit,
     or_bit,
     xor_bit
    } Operation;

    /**  constructor */
    IRInstr(Operation op, Type t, vector<string> params);

    /** Actual code generation */
    void genAsm(ostream &o); /**< x86 assembly code generation for this IR instruction */
    int compType();
    bool isComp();

  private:
    Operation op;
    Type t;
    vector<string> params; /**< For 3-op instrs: d, x, y; for ldconst: d, c;  For call: label, d, params;  for wmem and rmem: choose yourself */
    // if you subclass IRInstr, each IRInstr subclass has its parameters and the previous (very important) comment becomes useless: it would be a better design.

};

//-------------------------------- Autres définitions dépendantes de <IRInstr>

#endif // IRINSTR_H
