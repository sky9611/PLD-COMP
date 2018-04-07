//
// Created by wth on 2018/4/4.
//

#include <src/ir/ir.h>
#include "IRInstrArray.h"

IRInstrArray::IRInstrArray( BasicBlock *bb_, Type t, const string &dest, const string &arrayName, const string &var )
        : IRInstr( bb_, t ), dest( dest ), arrayName( arrayName ), var( var ) {}

void IRInstrArray::gen_asm( ostream &o ) {
    ir::move( o, var, 1, bb->cfg );
    if ( type::getSize( t ) != 64 ) {
        o << "\tcltq" << endl;
    }
    string arrayAsm = bb->cfg->IR_regArray_to_asm( arrayName );
    o << "\tmov   " << arrayAsm << "," << ir::getAsmReg( 1, type::getSize( t )) << endl;
    ir::move( o, 1, dest, bb->cfg );
}
