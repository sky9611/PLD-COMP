cmake_minimum_required(VERSION 3.5)
project(PLD-COMP)

set(CMAKE_CXX_STANDARD 11)

SET (PROJECT_SRC ${CMAKE_CURRENT_SOURCE_DIR}/src)
file (GLOB PROJECT_MODELS
        ${PROJECT_SRC}/structure/*.cpp
        ${PROJECT_SRC}/structure/Statements/*.cpp
        ${PROJECT_SRC}/structure/Statements/Expressions/*.cpp
        ${PROJECT_SRC}/ir/*.cpp
        )
file (GLOB PROJECT_ANTLR4_FILES	${PROJECT_SRC}/antlr/*.cpp)
file (GLOB PROJECT_EXCEPTION	${PROJECT_SRC}/Exception/*.cpp)
SET (PROJECT_MAIN		${PROJECT_SRC}/main.cpp)
SET (PROJECT_CPP 		${PROJECT_MAIN} ${PROJECT_MODELS} ${PROJECT_EXCEPTION} ${PROJECT_ANTLR4_FILES})

#traitement des flags et propriétés de fichier
foreach( src_file ${PROJECT_CPP} )
    set_source_files_properties(
            ${src_file}
            PROPERTIES
            GENERATED TRUE
    )
endforeach( src_file ${PROJECT_CPP} )

if(APPLE)
    # MAC ========================================================================================================= MAC
    message("Detect : MAC")
    include_directories(
            ${CMAKE_CURRENT_SOURCE_DIR}/libraries/macOS/antlr4-cpp-runtime-4/antlr4-runtime
            ${CMAKE_CURRENT_SOURCE_DIR}/libraries/macOS/antlr4-cpp-runtime-4/antlr4-runtime/misc
            ${CMAKE_CURRENT_SOURCE_DIR}/libraries/macOS/antlr4-cpp-runtime-4/antlr4-runtime/atn
            ${CMAKE_CURRENT_SOURCE_DIR}/libraries/macOS/antlr4-cpp-runtime-4/antlr4-runtime/dfa
            ${CMAKE_CURRENT_SOURCE_DIR}/libraries/macOS/antlr4-cpp-runtime-4/antlr4-runtime/tree
            ${CMAKE_CURRENT_SOURCE_DIR}/libraries/macOS/antlr4-cpp-runtime-4/antlr4-runtime/support
    )
    SET(LIBANTLR4 ${CMAKE_CURRENT_SOURCE_DIR}/libraries/macOS/antlr4-cpp-runtime-4/lib/libantlr4-runtime.a)
elseif(CYGWIN)
    # WINDOWS ================================================================================================= WINDOWS
    message("Detect : WINDOWS")
    include_directories(
            ${CMAKE_CURRENT_SOURCE_DIR}/libraries/antlr4-runtime
            ${CMAKE_CURRENT_SOURCE_DIR}/libraries/antlr4-runtime/misc
            ${CMAKE_CURRENT_SOURCE_DIR}/libraries/antlr4-runtime/atn
            ${CMAKE_CURRENT_SOURCE_DIR}/libraries/antlr4-runtime/dfa
            ${CMAKE_CURRENT_SOURCE_DIR}/libraries/antlr4-runtime/tree
            ${CMAKE_CURRENT_SOURCE_DIR}/libraries/antlr4-runtime/support
    )
    SET(LIBANTLR4 ${CMAKE_CURRENT_SOURCE_DIR}/libraries/windows/libantlr4-runtime.dll.a)
    #target_include_directories(cmm PUBLIC antlr4-runtime ${CMAKE_CURRENT_SOURCE_DIR})
    #target_link_libraries(cmm ${CMAKE_CURRENT_SOURCE_DIR}/lib/libantlr4-runtime.dll.a)
    #target_link_libraries(cmm "D:/documents/INSA/4IF/PLD COMP/git/PLD-COMP/liblibantlr4-runtime.dll.a")

elseif(UNIX)
    # LINUX ===================================================================================================== LINUX
    message("Detect : LINUX")
    #[[
    include_directories(
            ${CMAKE_CURRENT_SOURCE_DIR}/libraries/antlr4-runtime
            ${CMAKE_CURRENT_SOURCE_DIR}/libraries/antlr4-runtime/misc
            ${CMAKE_CURRENT_SOURCE_DIR}/libraries/antlr4-runtime/atn
            ${CMAKE_CURRENT_SOURCE_DIR}/libraries/antlr4-runtime/dfa
            ${CMAKE_CURRENT_SOURCE_DIR}/libraries/antlr4-runtime/tree
            ${CMAKE_CURRENT_SOURCE_DIR}/libraries/antlr4-runtime/support
    )]]
    SET(LIBANTLR4 ${CMAKE_CURRENT_SOURCE_DIR}/libraries/linux/libantlr4-runtime.a)

endif()


include_directories(${CMAKE_CURRENT_SOURCE_DIR}/libraries/antlr4-runtime) # For compiler

#msvc flags
if (NOT CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    set (flags_1 "-Wno-overloaded-virtual")
else()
    set (flags_1 "-MP /wd4251")
endif()
foreach( src_file ${PROJECT_CPP} )
    set_source_files_properties(
            ${src_file}
            PROPERTIES
            COMPILE_FLAGS "${COMPILE_FLAGS} ${flags_1}"
    )
endforeach( src_file ${PROJECT_CPP} )

add_executable(cmm ${PROJECT_CPP})
if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    target_compile_options(cmm PRIVATE "/MT$<$<CONFIG:Debug>:d>")
endif()

#target_include_directories(cmm PUBLIC antlr4-runtime ${CMAKE_CURRENT_SOURCE_DIR})
if(DEFINED LIBANTLR4)
    message("Detect : Lib Antlr4 Runtime : ${LIBANTLR4}")
    target_link_libraries(cmm ${LIBANTLR4}) # For linkEditor
endif()
