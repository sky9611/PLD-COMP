//
// Created by hvogel on 30/03/18.
//

#include "IRInstr.h"
#include "BasicBlock.h"

IRInstr::IRInstr(BasicBlock *bb_, IRInstr::Operation op, Type t, vector<string> params):bb(bb),op(op),t(t),params(params) {

}

void IRInstr::gen_asm(ostream &o) {
}

IRInstr::IRInstr(BasicBlock *bb_, IRInstr::Operation op, Type t, string... params):bb(bb),op(op),t(t),params(vector(params)) {

}
