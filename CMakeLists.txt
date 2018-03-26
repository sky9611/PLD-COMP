cmake_minimum_required(VERSION 3.5)
project(PLD-COMP)

set(CMAKE_CXX_STANDARD 11)
SET (PROJECT_SRC src)
SET (GLOB PROJECT_MODELS	${PROJECT_SRC}/structure/*.cpp)
SET (GLOB PROJECT_ANTLR4_FILES	${PROJECT_SRC}/antlr/*.cpp)
SET (PROJECT_MAIN		${PROJECT_SRC}/main.cpp)
SET (PROJECT_CPP 		${PROJECT_MODELS} ${PROJECT_ANTLR4_FILES} ${PROJECT_MAIN} src/structure/Program.cpp src/structure/Program.h src/structure/DecVariable.cpp src/structure/DecVariable.h    src/structure/DecArray.cpp src/structure/DecArray.h src/structure/functions/FuncDefinition.cpp src/structure/functions/FuncDefinition.h src/structure/functions/FuncBlock.cpp src/structure/functions/FuncBlock.h src/structure/ParamsDefinition.cpp src/structure/ParamsDefinition.h src/structure/Varname.cpp src/structure/Varname.h src/structure/Statements/Expressions/Expression.cpp src/structure/Statements/Expressions/Expression.h src/structure/Statements/Statement.cpp src/structure/Statements/Statement.h src/structure/Statements/StmtBlock.cpp src/structure/Statements/StmtBlock.h src/structure/Statements/Expressions/ExprList.cpp src/structure/Statements/Expressions/ExprList.h src/structure/Statements/StmtWhile.cpp src/structure/Statements/StmtWhile.h src/structure/Statements/StmtIf.cpp src/structure/Statements/StmtIf.h src/structure/Statements/StmtReturn.cpp src/structure/Statements/StmtReturn.h src/structure/Statements/Expressions/ExprVariable.cpp src/structure/Statements/Expressions/ExprVariable.h src/structure/Statements/Expressions/ExprUnaire.cpp src/structure/Statements/Expressions/ExprUnaire.h src/structure/Statements/Expressions/ExprAssignment.cpp src/structure/Statements/Expressions/ExprAssignment.h src/structure/Statements/Expressions/ExprBinaire.cpp src/structure/Statements/Expressions/ExprBinaire.h src/structure/Statements/Expressions/ExprFuncCall.cpp src/structure/Statements/Expressions/ExprFuncCall.h src/structure/Statements/Expressions/ExprValue.cpp src/structure/Statements/Expressions/ExprValue.h src/structure/Statements/Expressions/ExprParen.cpp src/structure/Statements/Expressions/ExprParen.h src/antlr/cmmInterpreter.cpp src/antlr/cmmInterpreter.h)

include_directories(structures)
include_directories(antlr4-runtime)

link_directories(lib)

add_executable(cmm ${PROJECT_CPP})