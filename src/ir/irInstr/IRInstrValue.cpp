//
// Created by wth on 2018/4/3.
//

#include "IRInstrValue.h"
#include "../BasicBlock.h"

IRInstrValue::IRInstrValue( BasicBlock *bb_, Type t, string _var, long _value ) : IRInstr( bb_, t ), var( _var ),
                                                                                  value( _value ) {}

void IRInstrValue::gen_asm( ostream &o ) {
    string varAsm = bb->cfg->IR_reg_to_asm( var );
    switch ( type::getSize( t )) {
        case 8: // move 8 bits to reg 32 byte (movzbl)
            o << "\tmovb  $" << to_string( value ) << ", " << varAsm << endl;
            break;
        case 16: // move 16 bit to reg 32 byte (movswl)
            o << "\tmovw  $" << to_string( value ) << ", " << varAsm << endl;
            break;
        case 32: // move 32 bit to reg 32 byte (mov)
            o << "\tmovl  $" << to_string( value ) << ", " << varAsm << endl;
            break;
        case 64: // move 64 bit to reg 64 byte (mov)
            o << "\tmovq  $" << to_string( value ) << ", %rax" << endl;
            o << "\tmovq  %rax, " << varAsm << endl;
            break;
    }
}
