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
include eu0035/CMakeFiles/eu0035.dir/depend.make

# Include the progress variables for this target.
include eu0035/CMakeFiles/eu0035.dir/progress.make

# Include the compile flags for this target's objects.
include eu0035/CMakeFiles/eu0035.dir/flags.make

eu0035/CMakeFiles/eu0035.dir/main.o: eu0035/CMakeFiles/eu0035.dir/flags.make
eu0035/CMakeFiles/eu0035.dir/main.o: ../eu0035/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object eu0035/CMakeFiles/eu0035.dir/main.o"
	cd /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/eu0035 && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/eu0035.dir/main.o -c /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/eu0035/main.cpp

eu0035/CMakeFiles/eu0035.dir/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eu0035.dir/main.i"
	cd /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/eu0035 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/eu0035/main.cpp > CMakeFiles/eu0035.dir/main.i

eu0035/CMakeFiles/eu0035.dir/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eu0035.dir/main.s"
	cd /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/eu0035 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/eu0035/main.cpp -o CMakeFiles/eu0035.dir/main.s

eu0035/CMakeFiles/eu0035.dir/main.o.requires:
.PHONY : eu0035/CMakeFiles/eu0035.dir/main.o.requires

eu0035/CMakeFiles/eu0035.dir/main.o.provides: eu0035/CMakeFiles/eu0035.dir/main.o.requires
	$(MAKE) -f eu0035/CMakeFiles/eu0035.dir/build.make eu0035/CMakeFiles/eu0035.dir/main.o.provides.build
.PHONY : eu0035/CMakeFiles/eu0035.dir/main.o.provides

eu0035/CMakeFiles/eu0035.dir/main.o.provides.build: eu0035/CMakeFiles/eu0035.dir/main.o

# Object files for target eu0035
eu0035_OBJECTS = \
"CMakeFiles/eu0035.dir/main.o"

# External object files for target eu0035
eu0035_EXTERNAL_OBJECTS =

exe/eu0035: eu0035/CMakeFiles/eu0035.dir/main.o
exe/eu0035: eu0035/CMakeFiles/eu0035.dir/build.make
exe/eu0035: libs/libeu0035_LIB.a
exe/eu0035: libs/libeuler.a
exe/eu0035: eu0035/CMakeFiles/eu0035.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../exe/eu0035"
	cd /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/eu0035 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/eu0035.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
eu0035/CMakeFiles/eu0035.dir/build: exe/eu0035
.PHONY : eu0035/CMakeFiles/eu0035.dir/build

eu0035/CMakeFiles/eu0035.dir/requires: eu0035/CMakeFiles/eu0035.dir/main.o.requires
.PHONY : eu0035/CMakeFiles/eu0035.dir/requires

eu0035/CMakeFiles/eu0035.dir/clean:
	cd /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/eu0035 && $(CMAKE_COMMAND) -P CMakeFiles/eu0035.dir/cmake_clean.cmake
.PHONY : eu0035/CMakeFiles/eu0035.dir/clean

eu0035/CMakeFiles/eu0035.dir/depend:
	cd /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/eu0035 /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/eu0035 /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/eu0035/CMakeFiles/eu0035.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : eu0035/CMakeFiles/eu0035.dir/depend

