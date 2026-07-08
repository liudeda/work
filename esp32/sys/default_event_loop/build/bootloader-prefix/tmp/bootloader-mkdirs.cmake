# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/zhilang110/esp/v5.0/esp-idf/components/bootloader/subproject"
  "C:/Code/idf5sys/hello_world/build/bootloader"
  "C:/Code/idf5sys/hello_world/build/bootloader-prefix"
  "C:/Code/idf5sys/hello_world/build/bootloader-prefix/tmp"
  "C:/Code/idf5sys/hello_world/build/bootloader-prefix/src/bootloader-stamp"
  "C:/Code/idf5sys/hello_world/build/bootloader-prefix/src"
  "C:/Code/idf5sys/hello_world/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Code/idf5sys/hello_world/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Code/idf5sys/hello_world/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
