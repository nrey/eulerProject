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
include CMakeFiles/euler.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/euler.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/euler.dir/flags.make

CMakeFiles/euler.dir/NaiveInfinitePrecition.o: CMakeFiles/euler.dir/flags.make
CMakeFiles/euler.dir/NaiveInfinitePrecition.o: ../NaiveInfinitePrecition.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/euler.dir/NaiveInfinitePrecition.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/euler.dir/NaiveInfinitePrecition.o -c /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/NaiveInfinitePrecition.cpp

CMakeFiles/euler.dir/NaiveInfinitePrecition.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/euler.dir/NaiveInfinitePrecition.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/NaiveInfinitePrecition.cpp > CMakeFiles/euler.dir/NaiveInfinitePrecition.i

CMakeFiles/euler.dir/NaiveInfinitePrecition.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/euler.dir/NaiveInfinitePrecition.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/NaiveInfinitePrecition.cpp -o CMakeFiles/euler.dir/NaiveInfinitePrecition.s

CMakeFiles/euler.dir/NaiveInfinitePrecition.o.requires:
.PHONY : CMakeFiles/euler.dir/NaiveInfinitePrecition.o.requires

CMakeFiles/euler.dir/NaiveInfinitePrecition.o.provides: CMakeFiles/euler.dir/NaiveInfinitePrecition.o.requires
	$(MAKE) -f CMakeFiles/euler.dir/build.make CMakeFiles/euler.dir/NaiveInfinitePrecition.o.provides.build
.PHONY : CMakeFiles/euler.dir/NaiveInfinitePrecition.o.provides

CMakeFiles/euler.dir/NaiveInfinitePrecition.o.provides.build: CMakeFiles/euler.dir/NaiveInfinitePrecition.o

CMakeFiles/euler.dir/euler.o: CMakeFiles/euler.dir/flags.make
CMakeFiles/euler.dir/euler.o: ../euler.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/euler.dir/euler.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/euler.dir/euler.o -c /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/euler.cpp

CMakeFiles/euler.dir/euler.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/euler.dir/euler.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/euler.cpp > CMakeFiles/euler.dir/euler.i

CMakeFiles/euler.dir/euler.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/euler.dir/euler.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/euler.cpp -o CMakeFiles/euler.dir/euler.s

CMakeFiles/euler.dir/euler.o.requires:
.PHONY : CMakeFiles/euler.dir/euler.o.requires

CMakeFiles/euler.dir/euler.o.provides: CMakeFiles/euler.dir/euler.o.requires
	$(MAKE) -f CMakeFiles/euler.dir/build.make CMakeFiles/euler.dir/euler.o.provides.build
.PHONY : CMakeFiles/euler.dir/euler.o.provides

CMakeFiles/euler.dir/euler.o.provides.build: CMakeFiles/euler.dir/euler.o

# Object files for target euler
euler_OBJECTS = \
"CMakeFiles/euler.dir/NaiveInfinitePrecition.o" \
"CMakeFiles/euler.dir/euler.o"

# External object files for target euler
euler_EXTERNAL_OBJECTS =

libs/libeuler.a: CMakeFiles/euler.dir/NaiveInfinitePrecition.o
libs/libeuler.a: CMakeFiles/euler.dir/euler.o
libs/libeuler.a: CMakeFiles/euler.dir/build.make
libs/libeuler.a: CMakeFiles/euler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libs/libeuler.a"
	$(CMAKE_COMMAND) -P CMakeFiles/euler.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/euler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/euler.dir/build: libs/libeuler.a
.PHONY : CMakeFiles/euler.dir/build

CMakeFiles/euler.dir/requires: CMakeFiles/euler.dir/NaiveInfinitePrecition.o.requires
CMakeFiles/euler.dir/requires: CMakeFiles/euler.dir/euler.o.requires
.PHONY : CMakeFiles/euler.dir/requires

CMakeFiles/euler.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/euler.dir/cmake_clean.cmake
.PHONY : CMakeFiles/euler.dir/clean

CMakeFiles/euler.dir/depend:
	cd /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/CMakeFiles/euler.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/euler.dir/depend
