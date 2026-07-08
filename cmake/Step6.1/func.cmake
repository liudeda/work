function(my_func first_arg)
    message("first_arg: ${first_arg}")
    message("my_func: ${CMAKE_CURRENT_FUNCTION}")
    set(first_arg "first_arg_value" )
    message("first_arg: ${first_arg}")
    #打印有多少参数
    message("ARGC: ${ARGC}")
    #打印所有参数
    message("ARGV: ${ARGV}")

    
endfunction(my_func first_arg)

set(first_arg "first_arg" )
my_func("fdsaf" "fdasf")
