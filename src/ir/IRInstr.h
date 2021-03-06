//
// Created by hvogel on 30/03/18.
//

#ifndef PLD_COMP_IRINSTR_H
#define PLD_COMP_IRINSTR_H

class IRInstr;

#include <iostream>
#include <string>
#include <vector>
#include "../structure/Type.h"

class BasicBlock; //#include "BasicBlock.h"

using namespace std;

//! The class for one 3-address instruction
class IRInstr {

public:
    /** The instructions themselves -- feel free to subclass instead */
    typedef enum {
        mov,
        ldconst,
        add,
        sub,
        mul,
        div,
        rmem,
        wmem,
        call,
        cmp_eq,
        cmp_lt,
        cmp_le
    } Operation;

    /**  constructor */
    IRInstr( BasicBlock *bb_, Type t );

    /** Actual code generation */
    virtual void gen_asm( ostream &o ) =0; /**< x86 assembly code generation for this IR instruction */

protected:

    BasicBlock *bb; /**< The BB this instruction belongs to, which provides a pointer to the CFG this instruction belong to */
    Type t;
    // vector<string> params; /**< For 3-op instrs: d, x, y; for ldconst: d, c;  For call: label, d, params;  for wmem and rmem: choose yourself */
    // if you subclass IRInstr, each IRInstr subclass has its parameters and the previous (very important) comment becomes useless: it would be a better design.
};


#endif //PLD_COMP_IRINSTR_H
