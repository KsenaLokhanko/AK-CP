cmake_minimum_required(VERSION 3.5)
project(calculator)

set(SOURCES calculator.cpp)
set(HEADER_FILES calculator.h)

add_library(calculator_library STATIC calculator.cpp calculator.h)
add_executable(calculator_app main.cpp)

target_link_libraries(calculator_app calculator_library)
