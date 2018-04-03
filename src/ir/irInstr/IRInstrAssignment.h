//
// Created by hvogel on 31/03/18.
//

#ifndef PLD_COMP_IRINSTRASSIGNMENT_H
#define PLD_COMP_IRINSTRASSIGNMENT_H

#include "../IRInstr.h"

class IRInstrAssignment : public IRInstr{
protected:
    string dest, from;
public:
    IRInstrAssignment(BasicBlock* bb_, Type t, string dest, string from);

    virtual void gen_asm(ostream &o);
};


#endif //PLD_COMP_IRINSTRASSIGNMENT_H
