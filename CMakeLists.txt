cmake_minimum_required(VERSION 3.5)
project(PLD-COMP)

set(CMAKE_CXX_STANDARD 11)
SET (PROJECT_SRC src)
file (GLOB PROJECT_MODELS
        ${PROJECT_SRC}/structure/*.cpp
        ${PROJECT_SRC}/structure/function/*.cpp
        ${PROJECT_SRC}/structure/Stamtement/*.cpp
        ${PROJECT_SRC}/structure/Statement/Expressions/*.cpp
        )
file (GLOB PROJECT_ANTLR4_FILES ${PROJECT_SRC}/antlr/*.cpp)
file (GLOB PROJECT_EXCEPTION ${PROJECT_SRC}/Exception/*.cpp)
SET (PROJECT_MAIN		${PROJECT_SRC}/main.cpp)
SET (PROJECT_CPP 		${PROJECT_MAIN} ${PROJECT_MODELS} ${PROJECT_ANTLR4_FILES} ${PROJECT_EXCEPTION})

include_directories(src)
include_directories(antlr4-runtime)
add_executable(cmm ${PROJECT_CPP})

target_include_directories(cmm PUBLIC antlr4-runtime ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(cmm ${CMAKE_CURRENT_SOURCE_DIR}/lib/libantlr4-runtime.dll.a)
#target_link_libraries(cmm "D:/documents/INSA/4IF/PLD COMP/git/PLD-COMP/liblibantlr4-runtime.dll.a")