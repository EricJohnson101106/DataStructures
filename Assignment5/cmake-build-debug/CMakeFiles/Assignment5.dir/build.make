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
CMAKE_SOURCE_DIR = /home/flidro/Desktop/DataStructures/Assignment5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/flidro/Desktop/DataStructures/Assignment5/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Assignment5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Assignment5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Assignment5.dir/flags.make

CMakeFiles/Assignment5.dir/main.cpp.o: CMakeFiles/Assignment5.dir/flags.make
CMakeFiles/Assignment5.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/flidro/Desktop/DataStructures/Assignment5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Assignment5.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Assignment5.dir/main.cpp.o -c /home/flidro/Desktop/DataStructures/Assignment5/main.cpp

CMakeFiles/Assignment5.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment5.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/flidro/Desktop/DataStructures/Assignment5/main.cpp > CMakeFiles/Assignment5.dir/main.cpp.i

CMakeFiles/Assignment5.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment5.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/flidro/Desktop/DataStructures/Assignment5/main.cpp -o CMakeFiles/Assignment5.dir/main.cpp.s

CMakeFiles/Assignment5.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Assignment5.dir/main.cpp.o.requires

CMakeFiles/Assignment5.dir/main.cpp.o.provides: CMakeFiles/Assignment5.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Assignment5.dir/build.make CMakeFiles/Assignment5.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Assignment5.dir/main.cpp.o.provides

CMakeFiles/Assignment5.dir/main.cpp.o.provides.build: CMakeFiles/Assignment5.dir/main.cpp.o


CMakeFiles/Assignment5.dir/node.cpp.o: CMakeFiles/Assignment5.dir/flags.make
CMakeFiles/Assignment5.dir/node.cpp.o: ../node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/flidro/Desktop/DataStructures/Assignment5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Assignment5.dir/node.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Assignment5.dir/node.cpp.o -c /home/flidro/Desktop/DataStructures/Assignment5/node.cpp

CMakeFiles/Assignment5.dir/node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment5.dir/node.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/flidro/Desktop/DataStructures/Assignment5/node.cpp > CMakeFiles/Assignment5.dir/node.cpp.i

CMakeFiles/Assignment5.dir/node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment5.dir/node.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/flidro/Desktop/DataStructures/Assignment5/node.cpp -o CMakeFiles/Assignment5.dir/node.cpp.s

CMakeFiles/Assignment5.dir/node.cpp.o.requires:

.PHONY : CMakeFiles/Assignment5.dir/node.cpp.o.requires

CMakeFiles/Assignment5.dir/node.cpp.o.provides: CMakeFiles/Assignment5.dir/node.cpp.o.requires
	$(MAKE) -f CMakeFiles/Assignment5.dir/build.make CMakeFiles/Assignment5.dir/node.cpp.o.provides.build
.PHONY : CMakeFiles/Assignment5.dir/node.cpp.o.provides

CMakeFiles/Assignment5.dir/node.cpp.o.provides.build: CMakeFiles/Assignment5.dir/node.cpp.o


# Object files for target Assignment5
Assignment5_OBJECTS = \
"CMakeFiles/Assignment5.dir/main.cpp.o" \
"CMakeFiles/Assignment5.dir/node.cpp.o"

# External object files for target Assignment5
Assignment5_EXTERNAL_OBJECTS =

Assignment5: CMakeFiles/Assignment5.dir/main.cpp.o
Assignment5: CMakeFiles/Assignment5.dir/node.cpp.o
Assignment5: CMakeFiles/Assignment5.dir/build.make
Assignment5: CMakeFiles/Assignment5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/flidro/Desktop/DataStructures/Assignment5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Assignment5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Assignment5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Assignment5.dir/build: Assignment5

.PHONY : CMakeFiles/Assignment5.dir/build

CMakeFiles/Assignment5.dir/requires: CMakeFiles/Assignment5.dir/main.cpp.o.requires
CMakeFiles/Assignment5.dir/requires: CMakeFiles/Assignment5.dir/node.cpp.o.requires

.PHONY : CMakeFiles/Assignment5.dir/requires

CMakeFiles/Assignment5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Assignment5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Assignment5.dir/clean

CMakeFiles/Assignment5.dir/depend:
	cd /home/flidro/Desktop/DataStructures/Assignment5/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/flidro/Desktop/DataStructures/Assignment5 /home/flidro/Desktop/DataStructures/Assignment5 /home/flidro/Desktop/DataStructures/Assignment5/cmake-build-debug /home/flidro/Desktop/DataStructures/Assignment5/cmake-build-debug /home/flidro/Desktop/DataStructures/Assignment5/cmake-build-debug/CMakeFiles/Assignment5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Assignment5.dir/depend

