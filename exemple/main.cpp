#include <iostream>

#include "antlr4-runtime.h"
#include "exprLexer.h"
#include "exprParser.h"

using namespace antlr4;

int main(int , const char **) {
  ANTLRInputStream input("1+3");
  exprLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  exprParser parser(&tokens);
  tree::ParseTree* tree = parser.expr();

  std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

  return 0;
}
