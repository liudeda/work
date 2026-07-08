cmake_minimum_required(VERSION 3.10)
project(MyProject)
add_subdirectory(fun)
set(SOURCE_SELECTION 1.1)

# 设置头文件搜索路径
if(SOURCE_SELECTION EQUAL 1.1) # 用法：cmake -DSOURCE_SELECTION=0
    add_executable(MyProject 3.cpp)
elseif(SOURCE_SELECTION EQUAL 2)
    add_executable(MyProject 2.cpp)
else()
    message(FATAL_ERROR "Invalid value for SOURCE_SELECTION. Expected 0 (main) or 1 (class)")
endif()

target_link_libraries(MyProject PRIVATE mathfun)
target_include_directories(MyProject PUBLIC fun)