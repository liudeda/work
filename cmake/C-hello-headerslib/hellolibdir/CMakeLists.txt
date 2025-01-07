# 生成lib
add_library(hellolib STATIC hello.cpp)
target_include_directories(hellolib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})