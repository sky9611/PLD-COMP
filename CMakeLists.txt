cmake_minimum_required(VERSION 3.5)
project(PLD-COMP)

set(CMAKE_CXX_STANDARD 11)

SET (PROJECT_SRC ${CMAKE_CURRENT_SOURCE_DIR}/src)
file (GLOB PROJECT_MODELS
        ${PROJECT_SRC}/structure/*.cpp
        ${PROJECT_SRC}/structure/function/*.cpp
        ${PROJECT_SRC}/structure/Statments/*.cpp
        ${PROJECT_SRC}/structure/Statments/Expressions/*.cpp
        )
file (GLOB PROJECT_ANTLR4_FILES	${PROJECT_SRC}/antlr/*.cpp)
file (GLOB PROJECT_EXCEPTION	${PROJECT_SRC}/Exception/*.cpp)
SET (PROJECT_MAIN		${PROJECT_SRC}/main.cpp)
SET (PROJECT_CPP 		${PROJECT_MAIN} ${PROJECT_MODELS} ${PROJECT_EXCEPTION} ${PROJECT_ANTLR4_FILES})

include_directories(src)


if(APPLE)
    # MAC ========================================================================================================= MAC
    message("Detect : MAC")
    include_directories(/Library/antlr4-cpp-runtime-4/antlr4-runtime)
    link_directories(/Library/antlr4-cpp-runtime-4/lib)
    link_directories(/Library/antlr4-cpp-runtime-4/lib/libantlr4-runtime)
elseif(WIN32)
    # WINDOWS ================================================================================================= WINDOWS
    SET(LIBANTLR4 ${CMAKE_CURRENT_SOURCE_DIR}/lib/libantlr4-runtime.dll.a)
    message("Detect : WINDOWS")
    #target_include_directories(cmm PUBLIC antlr4-runtime ${CMAKE_CURRENT_SOURCE_DIR})
    #target_link_libraries(cmm ${CMAKE_CURRENT_SOURCE_DIR}/lib/libantlr4-runtime.dll.a)
    #target_link_libraries(cmm "D:/documents/INSA/4IF/PLD COMP/git/PLD-COMP/liblibantlr4-runtime.dll.a")

elseif(UNIX)
    # LINUX ===================================================================================================== LINUX
    message("Detect : LINUX")
    SET(LIBANTLR4 ${CMAKE_CURRENT_SOURCE_DIR}/lib/libantlr4-runtime.a)

endif()

include_directories(antlr4-runtime) # For compiler

add_executable(cmm ${PROJECT_CPP})


target_include_directories(cmm PUBLIC antlr4-runtime ${CMAKE_CURRENT_SOURCE_DIR})


if(DEFINED LIBANTLR4)
    message("Detect : Lib Antlr4 Runtime : ${LIBANTLR4}")
    target_link_libraries (cmm ${LIBANTLR4}) # For linkEditor
endif()
