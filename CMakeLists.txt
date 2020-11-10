cmake_minimum_required(VERSION 3.10)

project(modern_cpp_challenge)

add_executable(problem_1 1/main.cpp)
add_executable(problem_2 2/main.cpp)
add_executable(problem_3 3/main.cpp)
add_executable(problem_4 4/main.cpp)
add_executable(problem_5 5/main.cpp)
add_executable(problem_6 6/main.cpp)
add_executable(problem_7 7/main.cpp)
add_executable(problem_8 8/main.cpp)
add_executable(problem_9 9/main.cpp)
add_executable(problem_10 10/main.cpp)
add_executable(problem_11 11/main.cpp)
add_executable(problem_12 12/main.cpp)

set_target_properties(
        problem_1
        problem_2
        problem_3
        problem_4
        problem_5
        problem_6
        problem_7
        problem_8
        problem_9
        problem_10
        problem_11
        problem_12
        PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
)
