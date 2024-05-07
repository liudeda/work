
# componet standalone mode
if(NOT CONFIG_IOT_SOLUTION_EMBED)
    set(COMPONENT_SRCS "xl9555.c")
    set(COMPONENT_ADD_INCLUDEDIRS ". include")

else()
    if(CONFIG_IOT_XL9555_ENABLE)
        set(COMPONENT_SRCS "xl9555.c")
        set(COMPONENT_ADD_INCLUDEDIRS ". include")
    else()
        set(COMPONENT_SRCS "")
        set(COMPONENT_ADD_INCLUDEDIRS "")
        message(STATUS "Building empty xl9555 component due to configuration")
    endif()
endif()

# requirements can't depend on config
set(COMPONENT_REQUIRES i2c_bus)

register_component()
