//
// Created by hvogel on 03/04/18.
//

#ifndef PLD_COMP_IR_H
#define PLD_COMP_IR_H

#include "../structure/Program.h"
#include "../structure/Function.h"

namespace ir {
    static void gen_asm(ostream &o, string fileName,Program* p){

        o << endl
          << endl
          << "\t.file\t\"" << fileName <<"\"" << endl
          << "\t.text" << endl
          << endl;

        for(auto def : p->getContext()){
            if(typeid(*def.second) == typeid(Function)){
                Function* f = dynamic_cast<Function*>(def.second);
                f->getCfg()->gen_asm(o);
            }
        }
    }
};


#endif //PLD_COMP_IR_H
