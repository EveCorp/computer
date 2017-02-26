cmake_minimum_required (VERSION 2.6)

# Daemon project
project (computer)

# Daemon version information
set (computer_VERSION_MAJOR 0)
set (computer_VERSION_MINOR 0)

# Daemon source directory
set (COMPUTER_SOURCE_DIR "${PROJECT_SOURCE_DIR}/src/computer")

# Set output directories
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_BINARY_DIR}/bin/DEBUG)
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY_DEBUG ${CMAKE_BINARY_DIR}/bin/DEBUG)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

configure_file (
	"${COMPUTER_SOURCE_DIR}/Version.h.in"
	"${COMPUTER_SOURCE_DIR}/Version.h"
	)

include_directories ("${PROJECT_SOURCE_DIR}")

set (
	${CMAKE_CXX_FLAGS}
	"${CMAKE_CXX_FLAGS} -Wall -Werror -pedantic -std=c++14 -O0 -fstack-protector-strong"
    )

add_subdirectory ("${COMPUTER_SOURCE_DIR}")
