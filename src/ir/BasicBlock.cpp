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
}

void BasicBlock::add_IRInstr(IRInstr* instruction) {
    instrs.push_back(instruction);
}
