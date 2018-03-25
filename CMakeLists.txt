cmake_minimum_required(VERSION 3.5)
project(PLD-COMP)

set(CMAKE_CXX_STANDARD 11)
SET (PROJECT_SRC src)
SET (GLOB PROJECT_MODELS	${PROJECT_SRC}/structure/*.cpp)
SET (GLOB PROJECT_ANTLR4_FILES	${PROJECT_SRC}/antlr/*.cpp)
SET (PROJECT_MAIN		${PROJECT_SRC}/main.cpp)
SET (PROJECT_CPP 		${PROJECT_MODELS} ${PROJECT_ANTLR4_FILES} ${PROJECT_MAIN} src/structure/Prog.cpp src/structure/Prog.h)

include_directories(structures)
include_directories(antlr4-runtime)

link_directories(lib)

add_executable(cmm ${PROJECT_CPP})