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
include eu0028/CMakeFiles/eu0028_LIB.dir/depend.make

# Include the progress variables for this target.
include eu0028/CMakeFiles/eu0028_LIB.dir/progress.make

# Include the compile flags for this target's objects.
include eu0028/CMakeFiles/eu0028_LIB.dir/flags.make

eu0028/CMakeFiles/eu0028_LIB.dir/eu0028.o: eu0028/CMakeFiles/eu0028_LIB.dir/flags.make
eu0028/CMakeFiles/eu0028_LIB.dir/eu0028.o: ../eu0028/eu0028.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object eu0028/CMakeFiles/eu0028_LIB.dir/eu0028.o"
	cd /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/eu0028 && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/eu0028_LIB.dir/eu0028.o -c /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/eu0028/eu0028.cpp

eu0028/CMakeFiles/eu0028_LIB.dir/eu0028.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eu0028_LIB.dir/eu0028.i"
	cd /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/eu0028 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/eu0028/eu0028.cpp > CMakeFiles/eu0028_LIB.dir/eu0028.i

eu0028/CMakeFiles/eu0028_LIB.dir/eu0028.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eu0028_LIB.dir/eu0028.s"
	cd /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/eu0028 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/eu0028/eu0028.cpp -o CMakeFiles/eu0028_LIB.dir/eu0028.s

eu0028/CMakeFiles/eu0028_LIB.dir/eu0028.o.requires:
.PHONY : eu0028/CMakeFiles/eu0028_LIB.dir/eu0028.o.requires

eu0028/CMakeFiles/eu0028_LIB.dir/eu0028.o.provides: eu0028/CMakeFiles/eu0028_LIB.dir/eu0028.o.requires
	$(MAKE) -f eu0028/CMakeFiles/eu0028_LIB.dir/build.make eu0028/CMakeFiles/eu0028_LIB.dir/eu0028.o.provides.build
.PHONY : eu0028/CMakeFiles/eu0028_LIB.dir/eu0028.o.provides

eu0028/CMakeFiles/eu0028_LIB.dir/eu0028.o.provides.build: eu0028/CMakeFiles/eu0028_LIB.dir/eu0028.o

eu0028/CMakeFiles/eu0028_LIB.dir/main.o: eu0028/CMakeFiles/eu0028_LIB.dir/flags.make
eu0028/CMakeFiles/eu0028_LIB.dir/main.o: ../eu0028/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object eu0028/CMakeFiles/eu0028_LIB.dir/main.o"
	cd /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/eu0028 && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/eu0028_LIB.dir/main.o -c /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/eu0028/main.cpp

eu0028/CMakeFiles/eu0028_LIB.dir/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eu0028_LIB.dir/main.i"
	cd /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/eu0028 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/eu0028/main.cpp > CMakeFiles/eu0028_LIB.dir/main.i

eu0028/CMakeFiles/eu0028_LIB.dir/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eu0028_LIB.dir/main.s"
	cd /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/eu0028 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/eu0028/main.cpp -o CMakeFiles/eu0028_LIB.dir/main.s

eu0028/CMakeFiles/eu0028_LIB.dir/main.o.requires:
.PHONY : eu0028/CMakeFiles/eu0028_LIB.dir/main.o.requires

eu0028/CMakeFiles/eu0028_LIB.dir/main.o.provides: eu0028/CMakeFiles/eu0028_LIB.dir/main.o.requires
	$(MAKE) -f eu0028/CMakeFiles/eu0028_LIB.dir/build.make eu0028/CMakeFiles/eu0028_LIB.dir/main.o.provides.build
.PHONY : eu0028/CMakeFiles/eu0028_LIB.dir/main.o.provides

eu0028/CMakeFiles/eu0028_LIB.dir/main.o.provides.build: eu0028/CMakeFiles/eu0028_LIB.dir/main.o

# Object files for target eu0028_LIB
eu0028_LIB_OBJECTS = \
"CMakeFiles/eu0028_LIB.dir/eu0028.o" \
"CMakeFiles/eu0028_LIB.dir/main.o"

# External object files for target eu0028_LIB
eu0028_LIB_EXTERNAL_OBJECTS =

libs/libeu0028_LIB.a: eu0028/CMakeFiles/eu0028_LIB.dir/eu0028.o
libs/libeu0028_LIB.a: eu0028/CMakeFiles/eu0028_LIB.dir/main.o
libs/libeu0028_LIB.a: eu0028/CMakeFiles/eu0028_LIB.dir/build.make
libs/libeu0028_LIB.a: eu0028/CMakeFiles/eu0028_LIB.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library ../libs/libeu0028_LIB.a"
	cd /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/eu0028 && $(CMAKE_COMMAND) -P CMakeFiles/eu0028_LIB.dir/cmake_clean_target.cmake
	cd /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/eu0028 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/eu0028_LIB.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
eu0028/CMakeFiles/eu0028_LIB.dir/build: libs/libeu0028_LIB.a
.PHONY : eu0028/CMakeFiles/eu0028_LIB.dir/build

eu0028/CMakeFiles/eu0028_LIB.dir/requires: eu0028/CMakeFiles/eu0028_LIB.dir/eu0028.o.requires
eu0028/CMakeFiles/eu0028_LIB.dir/requires: eu0028/CMakeFiles/eu0028_LIB.dir/main.o.requires
.PHONY : eu0028/CMakeFiles/eu0028_LIB.dir/requires

eu0028/CMakeFiles/eu0028_LIB.dir/clean:
	cd /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/eu0028 && $(CMAKE_COMMAND) -P CMakeFiles/eu0028_LIB.dir/cmake_clean.cmake
.PHONY : eu0028/CMakeFiles/eu0028_LIB.dir/clean

eu0028/CMakeFiles/eu0028_LIB.dir/depend:
	cd /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/eu0028 /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/eu0028 /home/melquiades/aLab/99_Personal/01_EulerProject/eulerProject/bin_old/eu0028/CMakeFiles/eu0028_LIB.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : eu0028/CMakeFiles/eu0028_LIB.dir/depend
