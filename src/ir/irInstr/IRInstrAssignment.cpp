//
// Created by hvogel on 31/03/18.
//

#include "IRInstrAssignment.h"
#include "../BasicBlock.h"
#include "../ir.h"

IRInstrAssignment::IRInstrAssignment(BasicBlock* bb_, Type t, string dest, string from)
    :IRInstr(bb_,t),dest(dest),from(from){}

void IRInstrAssignment::gen_asm(ostream &o){

    ir::move(o, from, 1, bb->cfg);

    if(!dest.empty()) {

        int sizeFrom = bb->cfg->get_var_size(from);
        int sizeDest = bb->cfg->get_var_size(dest);

        if (sizeDest == 64 && sizeFrom != 64) {
            o << "\tcltq" << endl;
        }
        ir::move(o, 1, dest, bb->cfg);
    }

}