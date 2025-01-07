cmake_minimum_required(VERSION 3.20)
set(LISTVALUE a1 a2 a3)
message("LISTVALUE: ${LISTVALUE}") 
list(APPEND LISTVALUE a4)
message("LISTVALUE: ${LISTVALUE}")
list(LENGTH LISTVALUE LENGTH)
message("LISTVALUE: ${LENGTH}")
list(FIND LISTVALUE a1 INDEX)
message("INDEX: ${INDEX}")
list(REMOVE_ITEM LISTVALUE a1)
message("LISTVALUE: ${LISTVALUE}")
list(INSERT LISTVALUE 0 a1)
message("LISTVALUE: ${LISTVALUE}")
list(REVERSE LISTVALUE)
message("LISTVALUE: ${LISTVALUE}")
list(SORT LISTVALUE)
message("LISTVALUE: ${LISTVALUE}")


#执行方法
# cmake.exe  -P .\list.cmake
execute_process(COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_LIST_FILE})
#输出结果
# LISTVALUE: a1;a2;a3
# LISTVALUE: a1;a2;a3;a4
# LISTVALUE: 4
# INDEX: 0
# LISTVALUE: a1;a2;a3;a4
# LISTVALUE: a1;a2;a3;a1;a4
# LISTVALUE: 