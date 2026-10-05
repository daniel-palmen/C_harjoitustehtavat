cmake_minimum_required(VERSION 3.10)

# Project name and language specification
project(MyProject C)

# Set C standard (C11)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Include the current directory so header files (lib.h) are found
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Define the executable and list source files
# (Including lib.h here allows IDEs like CLion or VS Code to display it in the file tree)
add_executable(my_program main.c lib.c lib.h)