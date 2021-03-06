//
// Created by hvogel on 02/04/18.
//

#include "IRInstrUnaryOperator.h"
#include "../BasicBlock.h"
#include "../ir.h"

IRInstrUnaryOperator::IRInstrUnaryOperator( BasicBlock *bb_, Type t, string dest, string var, UnaryOperator _op )
        : IRInstr( bb_, t ), dest( dest ), var( var ), op( _op ) {}


void IRInstrUnaryOperator::gen_asm( ostream &o ) {
    string reg = ir::getAsmReg( 1, type::getSize( t ) == 64 ? 64 : 32 );
    if ( op == NOT ) {
        gen_asm_not( o );
    }
    else if ( op == MINUS ) {
        gen_asm_minus( o );
    }
}

string IRInstrUnaryOperator::OperatorToAsmOperator( UnaryOperator op ) {
    switch ( op ) {
        case MINUS:
            return "neg";
        case NOT:
            return "sete";
    }
}

void IRInstrUnaryOperator::gen_asm_not( ostream &o ) {
    ir::move( o, var, 1, bb->cfg );

    int size = bb->cfg->get_var_size( var );

     if ( size != 64 ) {
        o << "\tcmpl $0, %eax"<< endl;
    }
    else{
        o << "\tcmpq $0, %rax"<< endl;
    }

    o << "\tsete %al" << endl;

    o << "\tmovzbl %al, %eax" << endl;

    ir::move( o, 1, dest, bb->cfg );

}

void IRInstrUnaryOperator::gen_asm_minus( ostream &o ) {
    ir::move( o, var, 1, bb->cfg );

    int size = bb->cfg->get_var_size( var );

    string reg1 = ir::getAsmReg( 1, size );

    o << "	neg " << reg1 << endl; //reg1 = reg1 <OPERATOR> reg2

    ir::move( o, 1, dest, bb->cfg );
}
