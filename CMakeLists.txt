cmake_minimum_required(VERSION 4.3)
project(CCrashCourse C)

set(CMAKE_C_STANDARD 11)

foreach(target
        1.3-basics-io
        2.1-variables-data-types
        2.2-operators
        3.1-logic
        3.2-loops
        4.1-arrays
        4.2-strings
        5.1-functions
        5.1.1-recursion
        6.1-pointers
        6.2-structs
        6.3-memory
)
    add_executable(${target} ${target}.c)
endforeach()

add_executable(5.2-libraries-main 5.2-libraries-main.c 5.2-libraries.c)