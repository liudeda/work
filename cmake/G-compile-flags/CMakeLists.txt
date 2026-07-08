cmake_minimum_required(VERSION 3.15)
# set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DEX2" CACHE STRING "Set C++ Compiler Flags" FORCE)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DEX2" )
project (compile_flags)
add_executable(cmake_examples_compile_flags main.cpp)
target_compile_definitions(cmake_examples_compile_flags PRIVATE EX3 ) # 局部定义   
add_definitions(-DEX4)#全局定义