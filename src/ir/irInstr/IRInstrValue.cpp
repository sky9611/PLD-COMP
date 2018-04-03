//
// Created by wth on 2018/4/3.
//

#include "IRInstrValue.h"

IRInstrValue::IRInstrValue(BasicBlock *bb_, Type t, string _var, long _value) : IRInstr(bb_, t),var(_var), value(_value)
{}

void IRInstrValue::gen_asm(ostream &o)
{
    o << "movl  $" << value << "%eax" <<endl;
    move(o,1,var);
}
