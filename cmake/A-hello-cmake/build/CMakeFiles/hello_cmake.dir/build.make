# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\work\cmake\A-hello-cmake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\work\cmake\A-hello-cmake\build

# Include any dependencies generated for this target.
include CMakeFiles/hello_cmake.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/hello_cmake.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/hello_cmake.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hello_cmake.dir/flags.make

CMakeFiles/hello_cmake.dir/main.cpp.obj: CMakeFiles/hello_cmake.dir/flags.make
CMakeFiles/hello_cmake.dir/main.cpp.obj: C:/work/cmake/A-hello-cmake/main.cpp
CMakeFiles/hello_cmake.dir/main.cpp.obj: CMakeFiles/hello_cmake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\work\cmake\A-hello-cmake\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hello_cmake.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hello_cmake.dir/main.cpp.obj -MF CMakeFiles\hello_cmake.dir\main.cpp.obj.d -o CMakeFiles\hello_cmake.dir\main.cpp.obj -c C:\work\cmake\A-hello-cmake\main.cpp

CMakeFiles/hello_cmake.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/hello_cmake.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\work\cmake\A-hello-cmake\main.cpp > CMakeFiles\hello_cmake.dir\main.cpp.i

CMakeFiles/hello_cmake.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/hello_cmake.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\work\cmake\A-hello-cmake\main.cpp -o CMakeFiles\hello_cmake.dir\main.cpp.s

# Object files for target hello_cmake
hello_cmake_OBJECTS = \
"CMakeFiles/hello_cmake.dir/main.cpp.obj"

# External object files for target hello_cmake
hello_cmake_EXTERNAL_OBJECTS =

hello_cmake.exe: CMakeFiles/hello_cmake.dir/main.cpp.obj
hello_cmake.exe: CMakeFiles/hello_cmake.dir/build.make
hello_cmake.exe: CMakeFiles/hello_cmake.dir/linkLibs.rsp
hello_cmake.exe: CMakeFiles/hello_cmake.dir/objects1.rsp
hello_cmake.exe: CMakeFiles/hello_cmake.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\work\cmake\A-hello-cmake\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hello_cmake.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\hello_cmake.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hello_cmake.dir/build: hello_cmake.exe
.PHONY : CMakeFiles/hello_cmake.dir/build

CMakeFiles/hello_cmake.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\hello_cmake.dir\cmake_clean.cmake
.PHONY : CMakeFiles/hello_cmake.dir/clean

CMakeFiles/hello_cmake.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\work\cmake\A-hello-cmake C:\work\cmake\A-hello-cmake C:\work\cmake\A-hello-cmake\build C:\work\cmake\A-hello-cmake\build C:\work\cmake\A-hello-cmake\build\CMakeFiles\hello_cmake.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/hello_cmake.dir/depend
