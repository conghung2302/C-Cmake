# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Project name and programming language
project(App C)

# Set the include directory where the headers are located
include_directories(include)

# Add the executable and all source files
file(GLOB SOURCES "src/*.c")

# Create the executable with all source files
add_executable(App ${SOURCES})
