//
// Created by hvogel on 03/04/18.
//

#ifndef PLD_COMP_IRINSTRTEST_H
#define PLD_COMP_IRINSTRTEST_H

#include "../IRInstr.h"

class IRInstrTest : public IRInstr {
protected:
    string testVar;

public:
    IRInstrTest( BasicBlock *bb_, Type t, string testVa );

    virtual void gen_asm( ostream &o );
};


#endif //PLD_COMP_IRINSTRTEST_H
