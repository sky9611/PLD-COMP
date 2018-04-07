//
// Created by hvogel on 31/03/18.
//

#include "IRInstrBasicOperator.h"
#include "../BasicBlock.h"
#include "../ir.h"

IRInstrBasicOperator::IRInstrBasicOperator( BasicBlock *bb, Type t, string dest, string v1, string v2,
                                            BinaryOperator op )
        : IRInstr( bb, t ), dest( dest ), v1( v1 ), v2( v2 ), op( op ) {}

void IRInstrBasicOperator::gen_asm( ostream &o ) {

    CFG* cfg = bb->cfg;

    auto asmOpInfo = OperatorToAsmOperator( op );

    int sizeV1 = cfg->get_var_size( v1 );
    int sizeV2 = cfg->get_var_size( v2 );
    int sizeRes = type::getSize( t );

    string reg1;
    string reg2;

    //if(asmOpInfo.type == OperatorType::DIV || asmOpInfo.type == OperatorType::MOD){
    //    o << "\t" << (sizeRes == 64 ? "cqto" : "cltd") << endl;
    //}

    //ETAP 1 CHARGER VAR dans des reg 32 ou 64 byte

    if ( type::getSize( t ) == 64 ) { //utilisation des registre en 64 byte


        reg1 = ir::getAsmReg( 1, 64 );
        reg2 = ir::getAsmReg( 2, 64 );

        if ( sizeV1 == 64 || sizeV2 == 64 ) { // passage de 32 a 64 obligatoir

            // on charge les var non 64 bit dans des reg 32 bite
            if ( sizeV1 != 64 ) { ir::move( o, v1, 1, cfg ); }
            if ( sizeV2 != 64 ) { ir::move( o, v2, 2, cfg ); }

            // passage des reg 32 en 64
            o << "\tcltq" << endl;

            // on charge les var 64 bit
            if ( sizeV1 == 64 ) { ir::move( o, v1, 1, cfg ); }
            if ( sizeV2 == 64 ) { ir::move( o, v2, 2, cfg ); }
        }
        else {
            ir::move( o, v1, 1, cfg ); // var1 => reg1
            ir::move( o, v2, 2, cfg ); // var2 => reg2
        }

    }
    else {
        reg1 = ir::getAsmReg( 1, 32 );
        reg2 = ir::getAsmReg( 2, 32 );

        ir::move( o, v1, 1, cfg ); // var1 => reg1
        ir::move( o, v2, 2, cfg ); // var2 => reg2
    }

    //ETAP 2 Appliquer l'operateur et metre le resultat dans le 1er registre (reg a)

    switch ( asmOpInfo.type ) {
        case OperatorType::EQUATION:
            o << "\t" << asmOpInfo.asmOp << " " << reg2 << ", " << reg1 << endl; //reg1 = reg1 <OPERATOR> reg2
            ir::move( o, 1, dest, cfg );
            break;
        case OperatorType::COMPARATOR :;
            o << "\tcmp" << (sizeRes == 64 ? 'q' : 'l') << " " << reg2 << ", " << reg1 << endl;
            o << "\t" << asmOpInfo.asmOp << " %al" << endl;
            ir::move( o, 1, dest, cfg );
            break;
        case OperatorType::DIV:
            o << "\t" << (sizeRes == 64 ? "cqto" : "cltd") << endl;
            o << "\tidiv" << (sizeRes == 64 ? "q " : "l ") << cfg->IR_reg_to_asm(v2) << endl;
            ir::move( o, 1, dest, cfg );
            break;
        case OperatorType::MOD:
            o << "\t" << (sizeRes == 64 ? "cqto" : "cltd") << endl;
            o << "\tidiv" << (sizeRes == 64 ? "q " : "l ") << cfg->IR_reg_to_asm(v2) << endl;
            ir::move( o, 2, dest, cfg );
            break;
        default:
            o << "UNKNOWOP" << endl;
    }

}

IRInstrBasicOperator::OperatorInfo IRInstrBasicOperator::OperatorToAsmOperator(BinaryOperator op){
    switch (op){
        case BinaryOperator::Star: return {EQUATION ,"imul"};
        case BinaryOperator::Plus: return {EQUATION ,"add"};
        case BinaryOperator::Minus: return {EQUATION ,"sub"};
        case BinaryOperator::And: return {EQUATION ,"and"};
        case BinaryOperator::Or: return {EQUATION ,"or"};
        case BinaryOperator::Less : return {COMPARATOR ,"setl"} ;
        case BinaryOperator::LessEqual : return {COMPARATOR ,"setle"};
        case BinaryOperator::Greater : return {COMPARATOR ,"setg"} ;
        case BinaryOperator::GreaterEqual : return {COMPARATOR ,"setge"};
        case BinaryOperator::Equal : return {COMPARATOR ,"sete"} ;
        case BinaryOperator::NotEqual : return {COMPARATOR ,"setne"} ;
        case BinaryOperator::Div : return {OperatorType::DIV ,""} ;
        case BinaryOperator::Mod : return {OperatorType::MOD ,""} ;
        default: return {UNKNOWN ,"UNKNOWN"};
    }
}
