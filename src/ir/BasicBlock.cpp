//
// Created by hvogel on 30/03/18.
//

#include "BasicBlock.h"

BasicBlock::BasicBlock(CFG *cfg, string entry_label):cfg(cfg), label(cfg->new_BB_name(entry_label)) {

}

void BasicBlock::gen_asm(ostream &o) {
    o << label << ":" << endl;

    for(IRInstr* inst : instrs)
        inst->gen_asm(o);
    if(exit_true == nullptr) { //Si il y a un return
        o << "\tjmp\t.BLOCK_END" << endl;
    }else if(exit_false == exit_true || exit_false == nullptr){ // si il n'y qu'un block aprés
        o << "\tjmp\t." << exit_true->label << endl;
    }else{ // si il y a une separation conditionnel
        o << "\tjne	." << exit_false->label << endl;
        o << "\tjmp\t." << exit_true->label << endl;
    }
}

void BasicBlock::add_IRInstr(IRInstr* instruction) {
    instrs.push_back(instruction);
}
