//
// Created by wth on 2018/4/3.
//

#ifndef PLD_COMP_IRINSTRVALUE_H
#define PLD_COMP_IRINSTRVALUE_H


#include "../IRInstr.h"

class IRInstrValue : public IRInstr {
private:
    string var;
    long value;
public:
    IRInstrValue( BasicBlock *bb_, Type t, string _var, long _value );

    virtual void gen_asm( ostream &o );
};


#endif //PLD_COMP_IRINSTRVALUE_H
