//
// Created by wth on 2018/4/4.
//

#ifndef PLD_COMP_IRINSTRARRAY_H
#define PLD_COMP_IRINSTRARRAY_H


#include <src/ir/IRInstr.h>
#include "../IRInstr.h"

class IRInstrArray : public IRInstr {
public:
    IRInstrArray( BasicBlock *bb_, Type t, const string &dest, const string &arrayName, const string &var );

    void gen_asm( ostream &o ) override;

private:
    string dest, arrayName, var;

};


#endif //PLD_COMP_IRINSTRARRAY_H
