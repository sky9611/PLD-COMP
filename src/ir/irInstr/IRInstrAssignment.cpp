//
// Created by hvogel on 31/03/18.
//

#include "IRInstrAssignment.h"
#include "../BasicBlock.h"
#include "../ir.h"

IRInstrAssignment::IRInstrAssignment( BasicBlock *bb_, Type t, string dest, string from )
        : IRInstr( bb_, t ), destAddr( "" ), dest( dest ), from( from ) {}

IRInstrAssignment::IRInstrAssignment( BasicBlock *bb_, Type t, string dest, string destAddr, string from )
        : IRInstr( bb_, t ), dest( dest ), destAddr( destAddr ), from( from ) {}

void IRInstrAssignment::gen_asm( ostream &o ) {


    if ( dest.empty( )) {
        //test?
        ir::move( o, from, 1, bb->cfg );
    }
    else if ( destAddr.empty( )) {

        ir::move( o, from, 1, bb->cfg );
        int sizeFrom = bb->cfg->get_var_size( from );
        int sizeDest = bb->cfg->get_var_size( dest );

        if ( sizeDest == 64 && sizeFrom != 64 ) {
            o << "\tcltq" << endl;
        }
        ir::move( o, 1, dest, bb->cfg );
    }
    else {
        ir::move( o, from, 2, bb->cfg );
        ir::move( o, destAddr, 1, bb->cfg );
        o << "\tmov " << ir::getAsmReg( 2, bb->cfg->get_var_size( dest )) << ", " << bb->cfg->IR_regArray_to_asm( dest )
          << endl;
    }

}