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
CMAKE_SOURCE_DIR = "/home/flidro/Desktop/DataStructures/Assignment3B - Dynamic Poly"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/flidro/Desktop/DataStructures/Assignment3B - Dynamic Poly/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Assignment3b___Poly.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Assignment3b___Poly.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Assignment3b___Poly.dir/flags.make

CMakeFiles/Assignment3b___Poly.dir/main.cpp.o: CMakeFiles/Assignment3b___Poly.dir/flags.make
CMakeFiles/Assignment3b___Poly.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/flidro/Desktop/DataStructures/Assignment3B - Dynamic Poly/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Assignment3b___Poly.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Assignment3b___Poly.dir/main.cpp.o -c "/home/flidro/Desktop/DataStructures/Assignment3B - Dynamic Poly/main.cpp"

CMakeFiles/Assignment3b___Poly.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment3b___Poly.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/flidro/Desktop/DataStructures/Assignment3B - Dynamic Poly/main.cpp" > CMakeFiles/Assignment3b___Poly.dir/main.cpp.i

CMakeFiles/Assignment3b___Poly.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment3b___Poly.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/flidro/Desktop/DataStructures/Assignment3B - Dynamic Poly/main.cpp" -o CMakeFiles/Assignment3b___Poly.dir/main.cpp.s

CMakeFiles/Assignment3b___Poly.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Assignment3b___Poly.dir/main.cpp.o.requires

CMakeFiles/Assignment3b___Poly.dir/main.cpp.o.provides: CMakeFiles/Assignment3b___Poly.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Assignment3b___Poly.dir/build.make CMakeFiles/Assignment3b___Poly.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Assignment3b___Poly.dir/main.cpp.o.provides

CMakeFiles/Assignment3b___Poly.dir/main.cpp.o.provides.build: CMakeFiles/Assignment3b___Poly.dir/main.cpp.o


CMakeFiles/Assignment3b___Poly.dir/EJDynamicPoly.cpp.o: CMakeFiles/Assignment3b___Poly.dir/flags.make
CMakeFiles/Assignment3b___Poly.dir/EJDynamicPoly.cpp.o: ../EJDynamicPoly.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/flidro/Desktop/DataStructures/Assignment3B - Dynamic Poly/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Assignment3b___Poly.dir/EJDynamicPoly.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Assignment3b___Poly.dir/EJDynamicPoly.cpp.o -c "/home/flidro/Desktop/DataStructures/Assignment3B - Dynamic Poly/EJDynamicPoly.cpp"

CMakeFiles/Assignment3b___Poly.dir/EJDynamicPoly.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment3b___Poly.dir/EJDynamicPoly.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/flidro/Desktop/DataStructures/Assignment3B - Dynamic Poly/EJDynamicPoly.cpp" > CMakeFiles/Assignment3b___Poly.dir/EJDynamicPoly.cpp.i

CMakeFiles/Assignment3b___Poly.dir/EJDynamicPoly.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment3b___Poly.dir/EJDynamicPoly.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/flidro/Desktop/DataStructures/Assignment3B - Dynamic Poly/EJDynamicPoly.cpp" -o CMakeFiles/Assignment3b___Poly.dir/EJDynamicPoly.cpp.s

CMakeFiles/Assignment3b___Poly.dir/EJDynamicPoly.cpp.o.requires:

.PHONY : CMakeFiles/Assignment3b___Poly.dir/EJDynamicPoly.cpp.o.requires

CMakeFiles/Assignment3b___Poly.dir/EJDynamicPoly.cpp.o.provides: CMakeFiles/Assignment3b___Poly.dir/EJDynamicPoly.cpp.o.requires
	$(MAKE) -f CMakeFiles/Assignment3b___Poly.dir/build.make CMakeFiles/Assignment3b___Poly.dir/EJDynamicPoly.cpp.o.provides.build
.PHONY : CMakeFiles/Assignment3b___Poly.dir/EJDynamicPoly.cpp.o.provides

CMakeFiles/Assignment3b___Poly.dir/EJDynamicPoly.cpp.o.provides.build: CMakeFiles/Assignment3b___Poly.dir/EJDynamicPoly.cpp.o


# Object files for target Assignment3b___Poly
Assignment3b___Poly_OBJECTS = \
"CMakeFiles/Assignment3b___Poly.dir/main.cpp.o" \
"CMakeFiles/Assignment3b___Poly.dir/EJDynamicPoly.cpp.o"

# External object files for target Assignment3b___Poly
Assignment3b___Poly_EXTERNAL_OBJECTS =

Assignment3b___Poly: CMakeFiles/Assignment3b___Poly.dir/main.cpp.o
Assignment3b___Poly: CMakeFiles/Assignment3b___Poly.dir/EJDynamicPoly.cpp.o
Assignment3b___Poly: CMakeFiles/Assignment3b___Poly.dir/build.make
Assignment3b___Poly: CMakeFiles/Assignment3b___Poly.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/flidro/Desktop/DataStructures/Assignment3B - Dynamic Poly/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Assignment3b___Poly"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Assignment3b___Poly.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Assignment3b___Poly.dir/build: Assignment3b___Poly

.PHONY : CMakeFiles/Assignment3b___Poly.dir/build

CMakeFiles/Assignment3b___Poly.dir/requires: CMakeFiles/Assignment3b___Poly.dir/main.cpp.o.requires
CMakeFiles/Assignment3b___Poly.dir/requires: CMakeFiles/Assignment3b___Poly.dir/EJDynamicPoly.cpp.o.requires

.PHONY : CMakeFiles/Assignment3b___Poly.dir/requires

CMakeFiles/Assignment3b___Poly.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Assignment3b___Poly.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Assignment3b___Poly.dir/clean

CMakeFiles/Assignment3b___Poly.dir/depend:
	cd "/home/flidro/Desktop/DataStructures/Assignment3B - Dynamic Poly/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/flidro/Desktop/DataStructures/Assignment3B - Dynamic Poly" "/home/flidro/Desktop/DataStructures/Assignment3B - Dynamic Poly" "/home/flidro/Desktop/DataStructures/Assignment3B - Dynamic Poly/cmake-build-debug" "/home/flidro/Desktop/DataStructures/Assignment3B - Dynamic Poly/cmake-build-debug" "/home/flidro/Desktop/DataStructures/Assignment3B - Dynamic Poly/cmake-build-debug/CMakeFiles/Assignment3b___Poly.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Assignment3b___Poly.dir/depend

