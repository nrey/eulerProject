# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nicorv/aData/9_eulerProject/eulerProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nicorv/aData/9_eulerProject/eulerProject/bin_all

# Include any dependencies generated for this target.
include eu0002/CMakeFiles/eu0002.dir/depend.make

# Include the progress variables for this target.
include eu0002/CMakeFiles/eu0002.dir/progress.make

# Include the compile flags for this target's objects.
include eu0002/CMakeFiles/eu0002.dir/flags.make

eu0002/CMakeFiles/eu0002.dir/main.o: eu0002/CMakeFiles/eu0002.dir/flags.make
eu0002/CMakeFiles/eu0002.dir/main.o: ../eu0002/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nicorv/aData/9_eulerProject/eulerProject/bin_all/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object eu0002/CMakeFiles/eu0002.dir/main.o"
	cd /home/nicorv/aData/9_eulerProject/eulerProject/bin_all/eu0002 && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/eu0002.dir/main.o -c /home/nicorv/aData/9_eulerProject/eulerProject/eu0002/main.cpp

eu0002/CMakeFiles/eu0002.dir/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eu0002.dir/main.i"
	cd /home/nicorv/aData/9_eulerProject/eulerProject/bin_all/eu0002 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nicorv/aData/9_eulerProject/eulerProject/eu0002/main.cpp > CMakeFiles/eu0002.dir/main.i

eu0002/CMakeFiles/eu0002.dir/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eu0002.dir/main.s"
	cd /home/nicorv/aData/9_eulerProject/eulerProject/bin_all/eu0002 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nicorv/aData/9_eulerProject/eulerProject/eu0002/main.cpp -o CMakeFiles/eu0002.dir/main.s

eu0002/CMakeFiles/eu0002.dir/main.o.requires:
.PHONY : eu0002/CMakeFiles/eu0002.dir/main.o.requires

eu0002/CMakeFiles/eu0002.dir/main.o.provides: eu0002/CMakeFiles/eu0002.dir/main.o.requires
	$(MAKE) -f eu0002/CMakeFiles/eu0002.dir/build.make eu0002/CMakeFiles/eu0002.dir/main.o.provides.build
.PHONY : eu0002/CMakeFiles/eu0002.dir/main.o.provides

eu0002/CMakeFiles/eu0002.dir/main.o.provides.build: eu0002/CMakeFiles/eu0002.dir/main.o

# Object files for target eu0002
eu0002_OBJECTS = \
"CMakeFiles/eu0002.dir/main.o"

# External object files for target eu0002
eu0002_EXTERNAL_OBJECTS =

exe/eu0002: eu0002/CMakeFiles/eu0002.dir/main.o
exe/eu0002: libs/libeuler.a
exe/eu0002: libs/libeu0002_LIB.a
exe/eu0002: eu0002/CMakeFiles/eu0002.dir/build.make
exe/eu0002: eu0002/CMakeFiles/eu0002.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../exe/eu0002"
	cd /home/nicorv/aData/9_eulerProject/eulerProject/bin_all/eu0002 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/eu0002.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
eu0002/CMakeFiles/eu0002.dir/build: exe/eu0002
.PHONY : eu0002/CMakeFiles/eu0002.dir/build

eu0002/CMakeFiles/eu0002.dir/requires: eu0002/CMakeFiles/eu0002.dir/main.o.requires
.PHONY : eu0002/CMakeFiles/eu0002.dir/requires

eu0002/CMakeFiles/eu0002.dir/clean:
	cd /home/nicorv/aData/9_eulerProject/eulerProject/bin_all/eu0002 && $(CMAKE_COMMAND) -P CMakeFiles/eu0002.dir/cmake_clean.cmake
.PHONY : eu0002/CMakeFiles/eu0002.dir/clean

eu0002/CMakeFiles/eu0002.dir/depend:
	cd /home/nicorv/aData/9_eulerProject/eulerProject/bin_all && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nicorv/aData/9_eulerProject/eulerProject /home/nicorv/aData/9_eulerProject/eulerProject/eu0002 /home/nicorv/aData/9_eulerProject/eulerProject/bin_all /home/nicorv/aData/9_eulerProject/eulerProject/bin_all/eu0002 /home/nicorv/aData/9_eulerProject/eulerProject/bin_all/eu0002/CMakeFiles/eu0002.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : eu0002/CMakeFiles/eu0002.dir/depend

