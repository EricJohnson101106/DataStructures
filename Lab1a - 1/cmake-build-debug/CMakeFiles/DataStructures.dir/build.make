# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /home/flidro/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/181.5087.36/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/flidro/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/181.5087.36/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/flidro/Desktop/DataStructures/Lab1a - 1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/flidro/Desktop/DataStructures/Lab1a - 1/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/DataStructures.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DataStructures.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DataStructures.dir/flags.make

CMakeFiles/DataStructures.dir/Lab1A-1.cpp.o: CMakeFiles/DataStructures.dir/flags.make
CMakeFiles/DataStructures.dir/Lab1A-1.cpp.o: ../Lab1A-1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/flidro/Desktop/DataStructures/Lab1a - 1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DataStructures.dir/Lab1A-1.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DataStructures.dir/Lab1A-1.cpp.o -c "/home/flidro/Desktop/DataStructures/Lab1a - 1/Lab1A-1.cpp"

CMakeFiles/DataStructures.dir/Lab1A-1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DataStructures.dir/Lab1A-1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/flidro/Desktop/DataStructures/Lab1a - 1/Lab1A-1.cpp" > CMakeFiles/DataStructures.dir/Lab1A-1.cpp.i

CMakeFiles/DataStructures.dir/Lab1A-1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DataStructures.dir/Lab1A-1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/flidro/Desktop/DataStructures/Lab1a - 1/Lab1A-1.cpp" -o CMakeFiles/DataStructures.dir/Lab1A-1.cpp.s

CMakeFiles/DataStructures.dir/Lab1A-1.cpp.o.requires:

.PHONY : CMakeFiles/DataStructures.dir/Lab1A-1.cpp.o.requires

CMakeFiles/DataStructures.dir/Lab1A-1.cpp.o.provides: CMakeFiles/DataStructures.dir/Lab1A-1.cpp.o.requires
	$(MAKE) -f CMakeFiles/DataStructures.dir/build.make CMakeFiles/DataStructures.dir/Lab1A-1.cpp.o.provides.build
.PHONY : CMakeFiles/DataStructures.dir/Lab1A-1.cpp.o.provides

CMakeFiles/DataStructures.dir/Lab1A-1.cpp.o.provides.build: CMakeFiles/DataStructures.dir/Lab1A-1.cpp.o


# Object files for target DataStructures
DataStructures_OBJECTS = \
"CMakeFiles/DataStructures.dir/Lab1A-1.cpp.o"

# External object files for target DataStructures
DataStructures_EXTERNAL_OBJECTS =

DataStructures: CMakeFiles/DataStructures.dir/Lab1A-1.cpp.o
DataStructures: CMakeFiles/DataStructures.dir/build.make
DataStructures: CMakeFiles/DataStructures.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/flidro/Desktop/DataStructures/Lab1a - 1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DataStructures"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DataStructures.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DataStructures.dir/build: DataStructures

.PHONY : CMakeFiles/DataStructures.dir/build

CMakeFiles/DataStructures.dir/requires: CMakeFiles/DataStructures.dir/Lab1A-1.cpp.o.requires

.PHONY : CMakeFiles/DataStructures.dir/requires

CMakeFiles/DataStructures.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DataStructures.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DataStructures.dir/clean

CMakeFiles/DataStructures.dir/depend:
	cd "/home/flidro/Desktop/DataStructures/Lab1a - 1/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/flidro/Desktop/DataStructures/Lab1a - 1" "/home/flidro/Desktop/DataStructures/Lab1a - 1" "/home/flidro/Desktop/DataStructures/Lab1a - 1/cmake-build-debug" "/home/flidro/Desktop/DataStructures/Lab1a - 1/cmake-build-debug" "/home/flidro/Desktop/DataStructures/Lab1a - 1/cmake-build-debug/CMakeFiles/DataStructures.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/DataStructures.dir/depend
