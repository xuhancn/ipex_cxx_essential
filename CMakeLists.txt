cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

set(PROJ_NAME "ipex_cxx_essential")
project (${PROJ_NAME})

set(PROJECT_ROOT_DIR ${PROJECT_SOURCE_DIR})


set(SOURCES_FILES ${PROJECT_ROOT_DIR}/src/main.cpp)
add_executable(${PROJ_NAME} ${SOURCES_FILES})
