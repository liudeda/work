

set(srcs "")
set(include_dirs "")
file(GLOB APP_SCR ./*.c)
list(APPEND srcs "${APP_SCR}")

list(APPEND include_dirs ./include)


idf_component_register(SRCS  "${srcs}"
                       INCLUDE_DIRS "${include_dirs}"
                       REQUIRES xl9555 
                                button 
                               
                       )
target_compile_options(${COMPONENT_LIB} PRIVATE -Wno-format)