cmake_minimum_required(VERSION 3.10)

project(modern_cpp_challenge)

add_executable(problem_1 1/main.cpp)
add_executable(problem_2 2/main.cpp)
add_executable(problem_3 3/main.cpp)

set_target_properties(problem_1 problem_2 problem_3 PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
        )
