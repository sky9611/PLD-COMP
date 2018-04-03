//
// Created by hvogel on 31/03/18.
//

#include "IRInstrAssignment.h"
IRInstrAssignment::IRInstrAssignment(BasicBlock* bb_, Type t, string dest, string from)
    :IRInstr(bb_,t),dest(dest),from(from){}

virtual void gen_asm(ostream &o){

    int sizeFrom = type::getSize(bb->cfg->get_var_size(from));
    int sizeDest = type::getSize(bb->cfg->get_var_size(dest));

    move(o, from, 1);

    if( sizeDest == 64 && sizeFrom != 64){
        o << "    cltq" << endl;
    }
    move(o,1, dest);

}