//
// Created by hvogel on 30/03/18.
//

#ifndef PLD_COMP_CFG_H
#define PLD_COMP_CFG_H

class CFG;

#include <map>
#include <vector>
#include <string>
#include <iostream>
#include "BasicBlock.h"

class Function; //#include "../structure/Function.h"
#include "../structure/Type.h"

using namespace std;

/** The class for the control flow graph, also includes the symbol table */

/* A few important comments:
	 The entry block is the one with the same label as the AST function name.
	   (it could be the first of bbs, or it could be defined by an attribute value)
	 The exit block is the one with both exit pointers equal to nullptr.
     (again it could be identified in a more explicit way)

 */
class CFG {
public:
    CFG( Function *ast );

    Function *ast; /**< The AST this CFG comes from */

    void add_bb( BasicBlock *bb );

    // x86 code generation: could be encapsulated in a processor class in a retargetable compiler
    void gen_asm( ostream &o );

    string IR_reg_to_asm(
            string reg ); /**< helper method: inputs a IR reg or input variable, returns e.g. "-24(%rbp)" for the proper value of 24 */
    string IR_regArray_to_asm(
            string reg ); /**< helper method: inputs a IR reg or input variable, returns e.g. "-24(%rbp)" for the proper value of 24 */
    string getReturnReg();

    void gen_asm_prologue( ostream &o );

    void gen_asm_epilogue( ostream &o );

    void indexVar();

    // symbol table methods
    void add_to_symbol_table( string name, Type t );

    void addArray_to_symbol_table( string name, Type t, int size );

    string create_new_tempvar( Type t );

    int get_var_index( string name );

    int get_var_size( string name );

    Type get_var_type( string name );

    // basic block management
    string new_BB_name( string basicString );

    BasicBlock *current_bb;

    void add_to_symbol_table_params( basic_string<char, char_traits<char>, allocator<char>> basic_string, Type type );

protected:
    map<string, Type> SymbolType; /**< part of the symbol table  */
    map<string, int> SymbolIndex; /**< part of the symbol table  */
    int nextFreeSymbolIndex = 0; /**< to allocate new symbols in the symbol table */
    int nextFreeSymbolParamsIndex = 16;/**< to find pos of params new symbols in the symbol table */
    static int getNextBBnumber(); /**< just for naming */

    vector<BasicBlock *> bbs; /**< all the basic blocks of this CFG*/
};


#endif //PLD_COMP_CFG_H
