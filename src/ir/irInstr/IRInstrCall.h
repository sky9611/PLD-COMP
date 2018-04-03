//
// Created by hvogel on 02/04/18.
//

#ifndef PLD_COMP_IRINSTRCALL_H
#define PLD_COMP_IRINSTRCALL_H

#include "../IRInstr.h"

class IRInstrCall : public IRInstr{
protected:
    string fctName;
    string dest;
    vector<string> vars;

public:
    IRInstrCall(BasicBlock* bb, Type t, string dest, string fctName, vector<string> vars);

    virtual void gen_asm(ostream &o);

};


#endif //PLD_COMP_IRINSTRCALL_H
