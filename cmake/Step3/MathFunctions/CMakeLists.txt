
add_library(MathFunctions MathFunctions.cxx)
target_include_directories(MathFunctions
                           INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
                           )

# 选项：是否使用自定义的数学函数实现
# option(USE_MYMATH "Use tutorial provided math implementation" ON)
set(USE_MYMATH  1)
#打印USE_MYMATH选项的值
message(STATUS "USE_MYMATH=${USE_MYMATH}")

# 如果选择使用自定义的数学函数实现
if (USE_MYMATH)
  target_compile_definitions(MathFunctions PRIVATE "USE_MYMATH")# 定义USE_MYMATH宏
  add_library(SqrtLibrary STATIC mysqrt.cxx)
  target_link_libraries(MathFunctions PRIVATE SqrtLibrary)
endif()