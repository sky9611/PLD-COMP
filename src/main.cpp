#include <antlr4-runtime.h>

#include "antlr/cmmLexer.h"
#include "antlr/cmmParser.h"
#include "antlr/cmmVisitor.h"
#include "antlr/cmmInterpreter.h"

using namespace antlr4;
int main(int argc, const char* argv[]) {

    ANTLRFileStream input("../Test/test1.txt");
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



    std::cout << tree->toStringTree(&parser) << std::endl;
    return 0;
}