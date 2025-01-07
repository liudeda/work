cmake_minimum_required(VERSION 3.20)
set(VARBOOL TRUE)
if(VARBOOL)
    message("VARBOOL is TRUE")
else()
    message("VARBOOL is FALSE")
endif()
if(NOT VARBOOL)
    message("VARBOOL is FALSE")
else()
    message("VARBOOL is TRUE")
endif()


if(1 LESS 2)
    message("1 LESS 2")
    
endif(1 LESS 2)


