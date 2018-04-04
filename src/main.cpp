#include <antlr4-runtime.h>

#include "antlr/cmmLexer.h"
#include "antlr/cmmParser.h"
#include "antlr/cmmVisitor.h"
#include "antlr/cmmInterpreter.h"
#include "ir/ir.h"

using namespace antlr4;

int main(int argc, const char* argv[]) {

    string testName;
    testName = "1_decls";
    testName = "1_empty";
    testName = "2_putchar";
    testName = "3_variables";
    testName = "4-VarConstAddCall";
    testName = "5-IfThenElse";
    testName = "6-While";
    testName = "7-testWhileAndVariables";

    if(argc > 1){
        testName = argv[1];
    }

    string fileIn = string("../Test/Back/") + testName + string(".c");
    string fileOut =string("../Test/Back/") + testName + string(".s");

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


    ir::gen_asm(cout,testName + string(".c"), b);
    ir::gen_asm(outFile,testName + string(".c"), b);

    std::cout << tree->toStringTree(&parser) << std::endl;
    return 0;
}