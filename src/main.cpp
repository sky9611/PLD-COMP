#include <antlr4-runtime.h>

#include "antlr/cmmLexer.h"
#include "antlr/cmmParser.h"
#include "antlr/cmmVisitor.h"
#include "antlr/cmmInterpreter.h"
#include "ir/ir.h"

using namespace antlr4;

int main(int argc, const char* argv[]) {

    string fileIn = "../Test/testComplex.txt";
    string fileOut = "../Test/testComplex.txt.s";

    ANTLRFileStream input(fileIn);
    cmmLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    tokens.fill();
    for (auto token : tokens.getTokens()) {
        std::cout << token->toString() << std::endl;
    }
    cmmParser parser(&tokens);
    tree::ParseTree *tree = parser.file();
    auto a = parser.file();

    cmmInterpreter* interpreter = new cmmInterpreter();


    Program* b = tree->accept(interpreter);

    b->builIR();

    ofstream outFile;
    outFile.open(fileOut);


    ir::gen_asm(cout,"testComplex.txt", b);
    ir::gen_asm(outFile,"testComplex.txt", b);

    std::cout << tree->toStringTree(&parser) << std::endl;
    return 0;
}