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
CMAKE_SOURCE_DIR = /home/charbel/mpo500_ws/src/neo_relayboard_v2-2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/charbel/mpo500_ws/src/build/neo_relayboard_v2-2

# Include any dependencies generated for this target.
include CMakeFiles/neo_relayboard_v2-2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/neo_relayboard_v2-2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/neo_relayboard_v2-2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/neo_relayboard_v2-2.dir/flags.make

CMakeFiles/neo_relayboard_v2-2.dir/common/src/NeoRelayBoardNode.cpp.o: CMakeFiles/neo_relayboard_v2-2.dir/flags.make
CMakeFiles/neo_relayboard_v2-2.dir/common/src/NeoRelayBoardNode.cpp.o: /home/charbel/mpo500_ws/src/neo_relayboard_v2-2/common/src/NeoRelayBoardNode.cpp
CMakeFiles/neo_relayboard_v2-2.dir/common/src/NeoRelayBoardNode.cpp.o: CMakeFiles/neo_relayboard_v2-2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/charbel/mpo500_ws/src/build/neo_relayboard_v2-2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/neo_relayboard_v2-2.dir/common/src/NeoRelayBoardNode.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/neo_relayboard_v2-2.dir/common/src/NeoRelayBoardNode.cpp.o -MF CMakeFiles/neo_relayboard_v2-2.dir/common/src/NeoRelayBoardNode.cpp.o.d -o CMakeFiles/neo_relayboard_v2-2.dir/common/src/NeoRelayBoardNode.cpp.o -c /home/charbel/mpo500_ws/src/neo_relayboard_v2-2/common/src/NeoRelayBoardNode.cpp

CMakeFiles/neo_relayboard_v2-2.dir/common/src/NeoRelayBoardNode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/neo_relayboard_v2-2.dir/common/src/NeoRelayBoardNode.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/charbel/mpo500_ws/src/neo_relayboard_v2-2/common/src/NeoRelayBoardNode.cpp > CMakeFiles/neo_relayboard_v2-2.dir/common/src/NeoRelayBoardNode.cpp.i

CMakeFiles/neo_relayboard_v2-2.dir/common/src/NeoRelayBoardNode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/neo_relayboard_v2-2.dir/common/src/NeoRelayBoardNode.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/charbel/mpo500_ws/src/neo_relayboard_v2-2/common/src/NeoRelayBoardNode.cpp -o CMakeFiles/neo_relayboard_v2-2.dir/common/src/NeoRelayBoardNode.cpp.s

CMakeFiles/neo_relayboard_v2-2.dir/common/src/RelayBoardClient.cpp.o: CMakeFiles/neo_relayboard_v2-2.dir/flags.make
CMakeFiles/neo_relayboard_v2-2.dir/common/src/RelayBoardClient.cpp.o: /home/charbel/mpo500_ws/src/neo_relayboard_v2-2/common/src/RelayBoardClient.cpp
CMakeFiles/neo_relayboard_v2-2.dir/common/src/RelayBoardClient.cpp.o: CMakeFiles/neo_relayboard_v2-2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/charbel/mpo500_ws/src/build/neo_relayboard_v2-2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/neo_relayboard_v2-2.dir/common/src/RelayBoardClient.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/neo_relayboard_v2-2.dir/common/src/RelayBoardClient.cpp.o -MF CMakeFiles/neo_relayboard_v2-2.dir/common/src/RelayBoardClient.cpp.o.d -o CMakeFiles/neo_relayboard_v2-2.dir/common/src/RelayBoardClient.cpp.o -c /home/charbel/mpo500_ws/src/neo_relayboard_v2-2/common/src/RelayBoardClient.cpp

CMakeFiles/neo_relayboard_v2-2.dir/common/src/RelayBoardClient.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/neo_relayboard_v2-2.dir/common/src/RelayBoardClient.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/charbel/mpo500_ws/src/neo_relayboard_v2-2/common/src/RelayBoardClient.cpp > CMakeFiles/neo_relayboard_v2-2.dir/common/src/RelayBoardClient.cpp.i

CMakeFiles/neo_relayboard_v2-2.dir/common/src/RelayBoardClient.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/neo_relayboard_v2-2.dir/common/src/RelayBoardClient.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/charbel/mpo500_ws/src/neo_relayboard_v2-2/common/src/RelayBoardClient.cpp -o CMakeFiles/neo_relayboard_v2-2.dir/common/src/RelayBoardClient.cpp.s

CMakeFiles/neo_relayboard_v2-2.dir/common/src/SerialIO.cpp.o: CMakeFiles/neo_relayboard_v2-2.dir/flags.make
CMakeFiles/neo_relayboard_v2-2.dir/common/src/SerialIO.cpp.o: /home/charbel/mpo500_ws/src/neo_relayboard_v2-2/common/src/SerialIO.cpp
CMakeFiles/neo_relayboard_v2-2.dir/common/src/SerialIO.cpp.o: CMakeFiles/neo_relayboard_v2-2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/charbel/mpo500_ws/src/build/neo_relayboard_v2-2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/neo_relayboard_v2-2.dir/common/src/SerialIO.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/neo_relayboard_v2-2.dir/common/src/SerialIO.cpp.o -MF CMakeFiles/neo_relayboard_v2-2.dir/common/src/SerialIO.cpp.o.d -o CMakeFiles/neo_relayboard_v2-2.dir/common/src/SerialIO.cpp.o -c /home/charbel/mpo500_ws/src/neo_relayboard_v2-2/common/src/SerialIO.cpp

CMakeFiles/neo_relayboard_v2-2.dir/common/src/SerialIO.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/neo_relayboard_v2-2.dir/common/src/SerialIO.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/charbel/mpo500_ws/src/neo_relayboard_v2-2/common/src/SerialIO.cpp > CMakeFiles/neo_relayboard_v2-2.dir/common/src/SerialIO.cpp.i

CMakeFiles/neo_relayboard_v2-2.dir/common/src/SerialIO.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/neo_relayboard_v2-2.dir/common/src/SerialIO.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/charbel/mpo500_ws/src/neo_relayboard_v2-2/common/src/SerialIO.cpp -o CMakeFiles/neo_relayboard_v2-2.dir/common/src/SerialIO.cpp.s

CMakeFiles/neo_relayboard_v2-2.dir/common/src/StrUtil.cpp.o: CMakeFiles/neo_relayboard_v2-2.dir/flags.make
CMakeFiles/neo_relayboard_v2-2.dir/common/src/StrUtil.cpp.o: /home/charbel/mpo500_ws/src/neo_relayboard_v2-2/common/src/StrUtil.cpp
CMakeFiles/neo_relayboard_v2-2.dir/common/src/StrUtil.cpp.o: CMakeFiles/neo_relayboard_v2-2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/charbel/mpo500_ws/src/build/neo_relayboard_v2-2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/neo_relayboard_v2-2.dir/common/src/StrUtil.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/neo_relayboard_v2-2.dir/common/src/StrUtil.cpp.o -MF CMakeFiles/neo_relayboard_v2-2.dir/common/src/StrUtil.cpp.o.d -o CMakeFiles/neo_relayboard_v2-2.dir/common/src/StrUtil.cpp.o -c /home/charbel/mpo500_ws/src/neo_relayboard_v2-2/common/src/StrUtil.cpp

CMakeFiles/neo_relayboard_v2-2.dir/common/src/StrUtil.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/neo_relayboard_v2-2.dir/common/src/StrUtil.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/charbel/mpo500_ws/src/neo_relayboard_v2-2/common/src/StrUtil.cpp > CMakeFiles/neo_relayboard_v2-2.dir/common/src/StrUtil.cpp.i

CMakeFiles/neo_relayboard_v2-2.dir/common/src/StrUtil.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/neo_relayboard_v2-2.dir/common/src/StrUtil.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/charbel/mpo500_ws/src/neo_relayboard_v2-2/common/src/StrUtil.cpp -o CMakeFiles/neo_relayboard_v2-2.dir/common/src/StrUtil.cpp.s

# Object files for target neo_relayboard_v2-2
neo_relayboard_v2__2_OBJECTS = \
"CMakeFiles/neo_relayboard_v2-2.dir/common/src/NeoRelayBoardNode.cpp.o" \
"CMakeFiles/neo_relayboard_v2-2.dir/common/src/RelayBoardClient.cpp.o" \
"CMakeFiles/neo_relayboard_v2-2.dir/common/src/SerialIO.cpp.o" \
"CMakeFiles/neo_relayboard_v2-2.dir/common/src/StrUtil.cpp.o"

# External object files for target neo_relayboard_v2-2
neo_relayboard_v2__2_EXTERNAL_OBJECTS =

libneo_relayboard_v2-2.a: CMakeFiles/neo_relayboard_v2-2.dir/common/src/NeoRelayBoardNode.cpp.o
libneo_relayboard_v2-2.a: CMakeFiles/neo_relayboard_v2-2.dir/common/src/RelayBoardClient.cpp.o
libneo_relayboard_v2-2.a: CMakeFiles/neo_relayboard_v2-2.dir/common/src/SerialIO.cpp.o
libneo_relayboard_v2-2.a: CMakeFiles/neo_relayboard_v2-2.dir/common/src/StrUtil.cpp.o
libneo_relayboard_v2-2.a: CMakeFiles/neo_relayboard_v2-2.dir/build.make
libneo_relayboard_v2-2.a: CMakeFiles/neo_relayboard_v2-2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/charbel/mpo500_ws/src/build/neo_relayboard_v2-2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libneo_relayboard_v2-2.a"
	$(CMAKE_COMMAND) -P CMakeFiles/neo_relayboard_v2-2.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/neo_relayboard_v2-2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/neo_relayboard_v2-2.dir/build: libneo_relayboard_v2-2.a
.PHONY : CMakeFiles/neo_relayboard_v2-2.dir/build

CMakeFiles/neo_relayboard_v2-2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/neo_relayboard_v2-2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/neo_relayboard_v2-2.dir/clean

CMakeFiles/neo_relayboard_v2-2.dir/depend:
	cd /home/charbel/mpo500_ws/src/build/neo_relayboard_v2-2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/charbel/mpo500_ws/src/neo_relayboard_v2-2 /home/charbel/mpo500_ws/src/neo_relayboard_v2-2 /home/charbel/mpo500_ws/src/build/neo_relayboard_v2-2 /home/charbel/mpo500_ws/src/build/neo_relayboard_v2-2 /home/charbel/mpo500_ws/src/build/neo_relayboard_v2-2/CMakeFiles/neo_relayboard_v2-2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/neo_relayboard_v2-2.dir/depend
