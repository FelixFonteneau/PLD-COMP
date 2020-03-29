/*************************************************************************
                           BasicBlock  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <BasicBlock> (fichier BasicBlock.h) ----------------
#if ! defined ( BASICBLOCK_H )
#define BASICBLOCK_H

//--------------------------------------------------- Interfaces utilisées
#include <vector>
#include <string>
#include <iostream>
#include <initializer_list>

#include "IRInstr.h"

#include "../symbol-table/symbolTable.h"
#include "../symbol-table/variable.h"
#include "../symbol-table/type.h"

/**  The class for a basic block */

/* A few important comments.
	 IRInstr has no jump instructions:
	 assembly jumps are generated as follows in BasicBlock::gen_asm():
     1/ a cmp_* comparison instructions, if it is the last instruction of its block,
       generates an actual assembly comparison followed by a conditional jump to the exit_false branch
			 If it is not the last instruction of its block, it behaves as an arithmetic two-operand instruction (add or mult)
		 2/ BasicBlock::gen_asm() first calls IRInstr::gen_asm() on all its instructions, and then
		    if  exit_true  is a  nullptr, it generates the epilogue
				if  exit_false is not a nullptr, and the last instruction is not a cmp, it generates two conditional branches based on the value of the last variable assigned
        otherwise it generates an unconditional jmp to the exit_true branch
*/

class BasicBlock {
 public:
	BasicBlock(SymbolTable * symbolTable, string entry_label);
	void genAsm(ostream &o); /**< x86 assembly code generation for this basic block (very simple) */

	void addIRInstr(IRInstr::Operation op, Type t, vector<string> params);

  void genAsmEpilogue(ostream& o);

  void setExitTrueBlock(BasicBlock* exit_true);
  void setExitFalseBlock(BasicBlock* exit_false);

  string getLabel();
  virtual ~BasicBlock ( );

 protected:
  BasicBlock* exit_true;  /**< pointer to the next basic block, true branch. If nullptr, return from procedure */
 	BasicBlock* exit_false; /**< pointer to the next basic block, false branch. If null_ptr, the basic block ends with an unconditional jump */
 	string label; /**< label of the BB, also will be the label in the generated code */
 	SymbolTable* symbolTable;
 	vector<IRInstr*> instrs; /** < the instructions themselves. */

};
#endif // BASICBLOCK_H
