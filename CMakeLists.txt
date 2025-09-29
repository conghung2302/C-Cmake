# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Project name and programming language
project(App C)

# Set C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Always generate compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Better approach than file(GLOB)
set(SOURCES
    src/main.c
    src/foo.c
    src/bar.c
    src/calculator.c
)

# Include directories
target_include_directories(App PUBLIC include)

# Create the executable
add_executable(App ${SOURCES})
