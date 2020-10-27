cmake_minimum_required(VERSION 3.10)

project(problem_1)

add_executable(problem_1 main.cpp)

set_target_properties(problem_1 PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
        )

if (MSVC)
    target_compile_options(problem_1 PRIVATE
            /W4
            )
else ()
    target_compile_options(problem_1 PRIVATE
            -Wall -Wextra -pedantic -Werror
            )
endif ()
