
cmake_minimum_required(VERSION 3.10)
project (hello_headers)
add_subdirectory(hellolibdir)
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC hellolib)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/hellolibdir)
