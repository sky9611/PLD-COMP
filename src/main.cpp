
#include "antlr/cmmLexer.h"
#include "antlr/cmmParser.h"

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
    std::cout << tree->toStringTree(&parser) << std::endl;
    return 0;
}