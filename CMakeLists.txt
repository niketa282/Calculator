cmake_minimum_required (VERSION 3.14)
project (SimpleCalculator VERSION 0.1 LANGUAGES CXX)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_EXTENSIONS OFF)
set (CMAKE_EXPORT_COMPILE_COMMANDS ON) 

add_library (calculator STATIC calculator.cpp)
target_include_directories (calculator PUBLIC inc/)

add_subdirectory(googletest-release-1.12.1)

add_executable (test-calculator test-calculator.cpp)
target_link_libraries (test-calculator PRIVATE calculator gtest gtest_main)


