cmake_minimum_required(VERSION 3.5)
project(antlr4cmm)

if(EXISTS "/Library/antlr4-cpp-runtime-4/antlr4-runtim")
	SET (ANTLR4_LIB_DIR /Library/antlr4-cpp-runtime-4/antlr4-runtim)
elseif(EXISTS "/usr/local/lib/antlr4-runtim")
	SET (ANTLR4_LIB_DIR /usr/local/lib/antlr4-runtim)
elseif(EXISTS "/usr/lib/antlr4-cpp-runtime-4/antlr4-runtime")
	SET (ANTLR4_LIB_DIR /usr/lib/antlr4-cpp-runtime-4/antlr4-runtime)
else()
	message( FATAL_ERROR "antlr4-runtim n'ai pas étais trouvé!\nAjouter antlr4 dans un des dossier suivant:\n- /Library/antlr4-cpp-runtime-4/antlr4-runtim\n- /usr/local/lib/antlr4-runtim" )
endif()

SET (CMAKE_CXX_STANDARD 14)
SET (PROJECT_SRC src)
SET (GLOB PROJECT_MODELS	${PROJECT_SRC}/structures/*.cpp)
SET (GLOB PROJECT_ANTLR4_FILS	${PROJECT_SRC}/cmm/*.cpp)
SET (PROJECT_MAIN		${PROJECT_SRC}/main.cpp)
SET (PROJECT_CPP 		${PROJECT_MODELS} ${PROJECT_ANTLR4_FILS} ${PROJECT_MAIN})
include_directories(${ANTLR4_LIB_DIR})
include_directories(structures)

add_executable(cmm ${PROJECT_CPP})

