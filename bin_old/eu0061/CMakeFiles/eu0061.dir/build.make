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

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old

# Include any dependencies generated for this target.
include eu0061/CMakeFiles/eu0061.dir/depend.make

# Include the progress variables for this target.
include eu0061/CMakeFiles/eu0061.dir/progress.make

# Include the compile flags for this target's objects.
include eu0061/CMakeFiles/eu0061.dir/flags.make

eu0061/CMakeFiles/eu0061.dir/main.o: eu0061/CMakeFiles/eu0061.dir/flags.make
eu0061/CMakeFiles/eu0061.dir/main.o: ../eu0061/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object eu0061/CMakeFiles/eu0061.dir/main.o"
	cd /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/eu0061 && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/eu0061.dir/main.o -c /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/eu0061/main.cpp

eu0061/CMakeFiles/eu0061.dir/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eu0061.dir/main.i"
	cd /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/eu0061 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/eu0061/main.cpp > CMakeFiles/eu0061.dir/main.i

eu0061/CMakeFiles/eu0061.dir/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eu0061.dir/main.s"
	cd /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/eu0061 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/eu0061/main.cpp -o CMakeFiles/eu0061.dir/main.s

eu0061/CMakeFiles/eu0061.dir/main.o.requires:
.PHONY : eu0061/CMakeFiles/eu0061.dir/main.o.requires

eu0061/CMakeFiles/eu0061.dir/main.o.provides: eu0061/CMakeFiles/eu0061.dir/main.o.requires
	$(MAKE) -f eu0061/CMakeFiles/eu0061.dir/build.make eu0061/CMakeFiles/eu0061.dir/main.o.provides.build
.PHONY : eu0061/CMakeFiles/eu0061.dir/main.o.provides

eu0061/CMakeFiles/eu0061.dir/main.o.provides.build: eu0061/CMakeFiles/eu0061.dir/main.o

# Object files for target eu0061
eu0061_OBJECTS = \
"CMakeFiles/eu0061.dir/main.o"

# External object files for target eu0061
eu0061_EXTERNAL_OBJECTS =

exe/eu0061: eu0061/CMakeFiles/eu0061.dir/main.o
exe/eu0061: eu0061/CMakeFiles/eu0061.dir/build.make
exe/eu0061: libs/libeu0061_LIB.a
exe/eu0061: libs/libeuler.a
exe/eu0061: eu0061/CMakeFiles/eu0061.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../exe/eu0061"
	cd /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/eu0061 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/eu0061.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
eu0061/CMakeFiles/eu0061.dir/build: exe/eu0061
.PHONY : eu0061/CMakeFiles/eu0061.dir/build

eu0061/CMakeFiles/eu0061.dir/requires: eu0061/CMakeFiles/eu0061.dir/main.o.requires
.PHONY : eu0061/CMakeFiles/eu0061.dir/requires

eu0061/CMakeFiles/eu0061.dir/clean:
	cd /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/eu0061 && $(CMAKE_COMMAND) -P CMakeFiles/eu0061.dir/cmake_clean.cmake
.PHONY : eu0061/CMakeFiles/eu0061.dir/clean

eu0061/CMakeFiles/eu0061.dir/depend:
	cd /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/eu0061 /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/eu0061 /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/eu0061/CMakeFiles/eu0061.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : eu0061/CMakeFiles/eu0061.dir/depend

