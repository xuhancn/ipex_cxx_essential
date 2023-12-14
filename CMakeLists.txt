cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

set(PROJ_NAME "ipex_cxx_essential")
project (${PROJ_NAME})

set(CMAKE_VERBOSE_MAKEFILE ON)

set(PROJECT_ROOT_DIR ${PROJECT_SOURCE_DIR})

add_definitions("-D_GLIBCXX_USE_CXX11_ABI=0")

set(SOURCES_FILES ${PROJECT_ROOT_DIR}/src/main.cpp)
add_executable(${PROJ_NAME} ${SOURCES_FILES})