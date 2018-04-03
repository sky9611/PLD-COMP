//
// Created by hvogel on 30/03/18.
//

#include "BasicBlock.h"

BasicBlock::BasicBlock(CFG *cfg, string entry_label) {
    cfg->new_BB_name(label);
    cfg->add_bb(this);
}

void BasicBlock::gen_asm(ostream &o) {

}

void BasicBlock::add_IRInstr(IRInstr* instruction) {
    instrs.push_back(instruction);
}
