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
include eu0001/CMakeFiles/eu0001_LIB.dir/depend.make

# Include the progress variables for this target.
include eu0001/CMakeFiles/eu0001_LIB.dir/progress.make

# Include the compile flags for this target's objects.
include eu0001/CMakeFiles/eu0001_LIB.dir/flags.make

eu0001/CMakeFiles/eu0001_LIB.dir/eu0001.o: eu0001/CMakeFiles/eu0001_LIB.dir/flags.make
eu0001/CMakeFiles/eu0001_LIB.dir/eu0001.o: ../eu0001/eu0001.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nicorv/aData/9_eulerProject/eulerProject/bin_all/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object eu0001/CMakeFiles/eu0001_LIB.dir/eu0001.o"
	cd /home/nicorv/aData/9_eulerProject/eulerProject/bin_all/eu0001 && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/eu0001_LIB.dir/eu0001.o -c /home/nicorv/aData/9_eulerProject/eulerProject/eu0001/eu0001.cpp

eu0001/CMakeFiles/eu0001_LIB.dir/eu0001.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eu0001_LIB.dir/eu0001.i"
	cd /home/nicorv/aData/9_eulerProject/eulerProject/bin_all/eu0001 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nicorv/aData/9_eulerProject/eulerProject/eu0001/eu0001.cpp > CMakeFiles/eu0001_LIB.dir/eu0001.i

eu0001/CMakeFiles/eu0001_LIB.dir/eu0001.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eu0001_LIB.dir/eu0001.s"
	cd /home/nicorv/aData/9_eulerProject/eulerProject/bin_all/eu0001 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nicorv/aData/9_eulerProject/eulerProject/eu0001/eu0001.cpp -o CMakeFiles/eu0001_LIB.dir/eu0001.s

eu0001/CMakeFiles/eu0001_LIB.dir/eu0001.o.requires:
.PHONY : eu0001/CMakeFiles/eu0001_LIB.dir/eu0001.o.requires

eu0001/CMakeFiles/eu0001_LIB.dir/eu0001.o.provides: eu0001/CMakeFiles/eu0001_LIB.dir/eu0001.o.requires
	$(MAKE) -f eu0001/CMakeFiles/eu0001_LIB.dir/build.make eu0001/CMakeFiles/eu0001_LIB.dir/eu0001.o.provides.build
.PHONY : eu0001/CMakeFiles/eu0001_LIB.dir/eu0001.o.provides

eu0001/CMakeFiles/eu0001_LIB.dir/eu0001.o.provides.build: eu0001/CMakeFiles/eu0001_LIB.dir/eu0001.o

eu0001/CMakeFiles/eu0001_LIB.dir/main.o: eu0001/CMakeFiles/eu0001_LIB.dir/flags.make
eu0001/CMakeFiles/eu0001_LIB.dir/main.o: ../eu0001/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/nicorv/aData/9_eulerProject/eulerProject/bin_all/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object eu0001/CMakeFiles/eu0001_LIB.dir/main.o"
	cd /home/nicorv/aData/9_eulerProject/eulerProject/bin_all/eu0001 && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/eu0001_LIB.dir/main.o -c /home/nicorv/aData/9_eulerProject/eulerProject/eu0001/main.cpp

eu0001/CMakeFiles/eu0001_LIB.dir/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eu0001_LIB.dir/main.i"
	cd /home/nicorv/aData/9_eulerProject/eulerProject/bin_all/eu0001 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/nicorv/aData/9_eulerProject/eulerProject/eu0001/main.cpp > CMakeFiles/eu0001_LIB.dir/main.i

eu0001/CMakeFiles/eu0001_LIB.dir/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eu0001_LIB.dir/main.s"
	cd /home/nicorv/aData/9_eulerProject/eulerProject/bin_all/eu0001 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/nicorv/aData/9_eulerProject/eulerProject/eu0001/main.cpp -o CMakeFiles/eu0001_LIB.dir/main.s

eu0001/CMakeFiles/eu0001_LIB.dir/main.o.requires:
.PHONY : eu0001/CMakeFiles/eu0001_LIB.dir/main.o.requires

eu0001/CMakeFiles/eu0001_LIB.dir/main.o.provides: eu0001/CMakeFiles/eu0001_LIB.dir/main.o.requires
	$(MAKE) -f eu0001/CMakeFiles/eu0001_LIB.dir/build.make eu0001/CMakeFiles/eu0001_LIB.dir/main.o.provides.build
.PHONY : eu0001/CMakeFiles/eu0001_LIB.dir/main.o.provides

eu0001/CMakeFiles/eu0001_LIB.dir/main.o.provides.build: eu0001/CMakeFiles/eu0001_LIB.dir/main.o

# Object files for target eu0001_LIB
eu0001_LIB_OBJECTS = \
"CMakeFiles/eu0001_LIB.dir/eu0001.o" \
"CMakeFiles/eu0001_LIB.dir/main.o"

# External object files for target eu0001_LIB
eu0001_LIB_EXTERNAL_OBJECTS =

libs/libeu0001_LIB.a: eu0001/CMakeFiles/eu0001_LIB.dir/eu0001.o
libs/libeu0001_LIB.a: eu0001/CMakeFiles/eu0001_LIB.dir/main.o
libs/libeu0001_LIB.a: eu0001/CMakeFiles/eu0001_LIB.dir/build.make
libs/libeu0001_LIB.a: eu0001/CMakeFiles/eu0001_LIB.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library ../libs/libeu0001_LIB.a"
	cd /home/nicorv/aData/9_eulerProject/eulerProject/bin_all/eu0001 && $(CMAKE_COMMAND) -P CMakeFiles/eu0001_LIB.dir/cmake_clean_target.cmake
	cd /home/nicorv/aData/9_eulerProject/eulerProject/bin_all/eu0001 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/eu0001_LIB.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
eu0001/CMakeFiles/eu0001_LIB.dir/build: libs/libeu0001_LIB.a
.PHONY : eu0001/CMakeFiles/eu0001_LIB.dir/build

eu0001/CMakeFiles/eu0001_LIB.dir/requires: eu0001/CMakeFiles/eu0001_LIB.dir/eu0001.o.requires
eu0001/CMakeFiles/eu0001_LIB.dir/requires: eu0001/CMakeFiles/eu0001_LIB.dir/main.o.requires
.PHONY : eu0001/CMakeFiles/eu0001_LIB.dir/requires

eu0001/CMakeFiles/eu0001_LIB.dir/clean:
	cd /home/nicorv/aData/9_eulerProject/eulerProject/bin_all/eu0001 && $(CMAKE_COMMAND) -P CMakeFiles/eu0001_LIB.dir/cmake_clean.cmake
.PHONY : eu0001/CMakeFiles/eu0001_LIB.dir/clean

eu0001/CMakeFiles/eu0001_LIB.dir/depend:
	cd /home/nicorv/aData/9_eulerProject/eulerProject/bin_all && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nicorv/aData/9_eulerProject/eulerProject /home/nicorv/aData/9_eulerProject/eulerProject/eu0001 /home/nicorv/aData/9_eulerProject/eulerProject/bin_all /home/nicorv/aData/9_eulerProject/eulerProject/bin_all/eu0001 /home/nicorv/aData/9_eulerProject/eulerProject/bin_all/eu0001/CMakeFiles/eu0001_LIB.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : eu0001/CMakeFiles/eu0001_LIB.dir/depend

