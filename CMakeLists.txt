cmake_minimum_required (VERSION 3.15)
set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_EXTENSIONS OFF)
set (CMAKE_EXPORT_COMPILE_COMMANDS ON) 

project (calculator)
add_executable (calculator main.cpp)

target_include_directories (calculator PRIVATE inc/)