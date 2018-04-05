#include <antlr4-runtime.h>

#include "antlr/cmmLexer.h"
#include "antlr/cmmParser.h"
#include "antlr/cmmVisitor.h"
#include "antlr/cmmInterpreter.h"
#include "ir/ir.h"

using namespace antlr4;

void error( string msg ) {
    cerr << msg << endl;
}

void info() {
    cout << "cmm Compilation tool" << endl;
    cout << "arguments :" << endl;
    cout << "Please specify a file name in the input arguments." << endl;
    cout << "     -c           Compilation into a specified file." << endl;
    cout << "     -a           Perform a static analysis of the program." << endl;
    cout << "     -o           Perform a simple optimization of the program." << endl;
    cout << "     -h           Display the help page." << endl;
}

string parseArgs( vector<string> args ) {
    args.erase( args.begin( ));
    for ( string a : args ) {
        if ( a != "-a" && a != "-c" && a != "-o" && a != "-h" ) {
            return a;
        }
    }
    return string( );
}

int main( int argc, const char *argv[] ) {

    string testName;
    testName = "1_decls";
    testName = "1_empty";
    testName = "2_putchar";
    testName = "3_variables";
    testName = "4-VarConstAddCall";
    testName = "5-IfThenElse";
    testName = "6-While";
    testName = "7-testWhileAndVariables";

    if ( argc > 1 ) {
        testName = argv[1];
    }
    else {
        error( "Error : not enough arguments" );
        return 1;
    }

    vector<string> args( argv, argv + argc );
    if ( find( args.begin( ), args.end( ), "-h" ) != args.end( )) {
        info( );
        return 0;
    }
    bool staticAnalysis = find( args.begin( ), args.end( ), "-a" ) != args.end( );
    bool compilationToFile = find( args.begin( ), args.end( ), "-c" ) != args.end( );
    bool opmitization = find( args.begin( ), args.end( ), "-o" ) != args.end( );

    string fileName = parseArgs( args );
    if ( fileName == string( )) {
        error( "Error : no file name in arguments" );
        return 1;
    }
    string fileIn = fileName + string( ".cmm" );
    string fileOut = fileName + string( ".s" );
    //string fileIn = string("../Test/Back/") + testName + string(".cmm");
    //string fileOut =string("../Test/Back/") + testName + string(".s");
    ANTLRFileStream input( fileIn );
    cmmLexer lexer( &input );
    CommonTokenStream tokens( &lexer );
    tokens.fill( );
    for ( auto token : tokens.getTokens( )) {
        std::cout << token->toString( ) << std::endl;
    }
    cmmParser parser( &tokens );
    tree::ParseTree *tree = parser.file( );
    //auto a = parser.file();

    cmmInterpreter *interpreter = new cmmInterpreter( );

    Program *b = tree->accept( interpreter );

    //partie analyse
    if ( staticAnalysis ) {
        b->performMisuseAnalysis( );
        b->performUnuseAnalysis( );
    }
    //partie construction de la RI
    b->builIR( );

    ofstream outFile;
    outFile.open( fileOut );


    ir::gen_asm( cout, testName + string( ".cmm" ), b );
    ir::gen_asm( outFile, testName + string( ".cmm" ), b );

    std::cout << tree->toStringTree( &parser ) << std::endl;
    return 0;
}

