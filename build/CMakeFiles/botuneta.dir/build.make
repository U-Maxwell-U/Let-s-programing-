# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/itmaxwell/Univercity/AIZU

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/itmaxwell/Univercity/AIZU/build

# Include any dependencies generated for this target.
include CMakeFiles/botuneta.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/botuneta.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/botuneta.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/botuneta.dir/flags.make

CMakeFiles/botuneta.dir/src/botuneta.cpp.o: CMakeFiles/botuneta.dir/flags.make
CMakeFiles/botuneta.dir/src/botuneta.cpp.o: ../src/botuneta.cpp
CMakeFiles/botuneta.dir/src/botuneta.cpp.o: CMakeFiles/botuneta.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/itmaxwell/Univercity/AIZU/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/botuneta.dir/src/botuneta.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/botuneta.dir/src/botuneta.cpp.o -MF CMakeFiles/botuneta.dir/src/botuneta.cpp.o.d -o CMakeFiles/botuneta.dir/src/botuneta.cpp.o -c /home/itmaxwell/Univercity/AIZU/src/botuneta.cpp

CMakeFiles/botuneta.dir/src/botuneta.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/botuneta.dir/src/botuneta.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/itmaxwell/Univercity/AIZU/src/botuneta.cpp > CMakeFiles/botuneta.dir/src/botuneta.cpp.i

CMakeFiles/botuneta.dir/src/botuneta.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/botuneta.dir/src/botuneta.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/itmaxwell/Univercity/AIZU/src/botuneta.cpp -o CMakeFiles/botuneta.dir/src/botuneta.cpp.s

# Object files for target botuneta
botuneta_OBJECTS = \
"CMakeFiles/botuneta.dir/src/botuneta.cpp.o"

# External object files for target botuneta
botuneta_EXTERNAL_OBJECTS =

botuneta: CMakeFiles/botuneta.dir/src/botuneta.cpp.o
botuneta: CMakeFiles/botuneta.dir/build.make
botuneta: CMakeFiles/botuneta.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/itmaxwell/Univercity/AIZU/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable botuneta"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/botuneta.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/botuneta.dir/build: botuneta
.PHONY : CMakeFiles/botuneta.dir/build

CMakeFiles/botuneta.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/botuneta.dir/cmake_clean.cmake
.PHONY : CMakeFiles/botuneta.dir/clean

CMakeFiles/botuneta.dir/depend:
	cd /home/itmaxwell/Univercity/AIZU/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/itmaxwell/Univercity/AIZU /home/itmaxwell/Univercity/AIZU /home/itmaxwell/Univercity/AIZU/build /home/itmaxwell/Univercity/AIZU/build /home/itmaxwell/Univercity/AIZU/build/CMakeFiles/botuneta.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/botuneta.dir/depend
