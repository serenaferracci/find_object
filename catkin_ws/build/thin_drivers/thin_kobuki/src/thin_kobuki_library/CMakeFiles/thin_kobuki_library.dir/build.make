# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/serena/catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/serena/catkin_ws/build

# Include any dependencies generated for this target.
include thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/depend.make

# Include the progress variables for this target.
include thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/progress.make

# Include the compile flags for this target's objects.
include thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/flags.make

thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_robot.cpp.o: thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/flags.make
thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_robot.cpp.o: /home/serena/catkin_ws/src/thin_drivers/thin_kobuki/src/thin_kobuki_library/kobuki_robot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/serena/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_robot.cpp.o"
	cd /home/serena/catkin_ws/build/thin_drivers/thin_kobuki/src/thin_kobuki_library && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/thin_kobuki_library.dir/kobuki_robot.cpp.o -c /home/serena/catkin_ws/src/thin_drivers/thin_kobuki/src/thin_kobuki_library/kobuki_robot.cpp

thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_robot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/thin_kobuki_library.dir/kobuki_robot.cpp.i"
	cd /home/serena/catkin_ws/build/thin_drivers/thin_kobuki/src/thin_kobuki_library && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/serena/catkin_ws/src/thin_drivers/thin_kobuki/src/thin_kobuki_library/kobuki_robot.cpp > CMakeFiles/thin_kobuki_library.dir/kobuki_robot.cpp.i

thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_robot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/thin_kobuki_library.dir/kobuki_robot.cpp.s"
	cd /home/serena/catkin_ws/build/thin_drivers/thin_kobuki/src/thin_kobuki_library && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/serena/catkin_ws/src/thin_drivers/thin_kobuki/src/thin_kobuki_library/kobuki_robot.cpp -o CMakeFiles/thin_kobuki_library.dir/kobuki_robot.cpp.s

thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_robot.cpp.o.requires:

.PHONY : thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_robot.cpp.o.requires

thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_robot.cpp.o.provides: thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_robot.cpp.o.requires
	$(MAKE) -f thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/build.make thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_robot.cpp.o.provides.build
.PHONY : thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_robot.cpp.o.provides

thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_robot.cpp.o.provides.build: thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_robot.cpp.o


thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_protocol.cpp.o: thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/flags.make
thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_protocol.cpp.o: /home/serena/catkin_ws/src/thin_drivers/thin_kobuki/src/thin_kobuki_library/kobuki_protocol.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/serena/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_protocol.cpp.o"
	cd /home/serena/catkin_ws/build/thin_drivers/thin_kobuki/src/thin_kobuki_library && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/thin_kobuki_library.dir/kobuki_protocol.cpp.o -c /home/serena/catkin_ws/src/thin_drivers/thin_kobuki/src/thin_kobuki_library/kobuki_protocol.cpp

thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_protocol.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/thin_kobuki_library.dir/kobuki_protocol.cpp.i"
	cd /home/serena/catkin_ws/build/thin_drivers/thin_kobuki/src/thin_kobuki_library && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/serena/catkin_ws/src/thin_drivers/thin_kobuki/src/thin_kobuki_library/kobuki_protocol.cpp > CMakeFiles/thin_kobuki_library.dir/kobuki_protocol.cpp.i

thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_protocol.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/thin_kobuki_library.dir/kobuki_protocol.cpp.s"
	cd /home/serena/catkin_ws/build/thin_drivers/thin_kobuki/src/thin_kobuki_library && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/serena/catkin_ws/src/thin_drivers/thin_kobuki/src/thin_kobuki_library/kobuki_protocol.cpp -o CMakeFiles/thin_kobuki_library.dir/kobuki_protocol.cpp.s

thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_protocol.cpp.o.requires:

.PHONY : thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_protocol.cpp.o.requires

thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_protocol.cpp.o.provides: thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_protocol.cpp.o.requires
	$(MAKE) -f thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/build.make thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_protocol.cpp.o.provides.build
.PHONY : thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_protocol.cpp.o.provides

thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_protocol.cpp.o.provides.build: thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_protocol.cpp.o


thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/serial.c.o: thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/flags.make
thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/serial.c.o: /home/serena/catkin_ws/src/thin_drivers/thin_kobuki/src/thin_kobuki_library/serial.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/serena/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/serial.c.o"
	cd /home/serena/catkin_ws/build/thin_drivers/thin_kobuki/src/thin_kobuki_library && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/thin_kobuki_library.dir/serial.c.o   -c /home/serena/catkin_ws/src/thin_drivers/thin_kobuki/src/thin_kobuki_library/serial.c

thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/serial.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/thin_kobuki_library.dir/serial.c.i"
	cd /home/serena/catkin_ws/build/thin_drivers/thin_kobuki/src/thin_kobuki_library && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/serena/catkin_ws/src/thin_drivers/thin_kobuki/src/thin_kobuki_library/serial.c > CMakeFiles/thin_kobuki_library.dir/serial.c.i

thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/serial.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/thin_kobuki_library.dir/serial.c.s"
	cd /home/serena/catkin_ws/build/thin_drivers/thin_kobuki/src/thin_kobuki_library && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/serena/catkin_ws/src/thin_drivers/thin_kobuki/src/thin_kobuki_library/serial.c -o CMakeFiles/thin_kobuki_library.dir/serial.c.s

thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/serial.c.o.requires:

.PHONY : thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/serial.c.o.requires

thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/serial.c.o.provides: thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/serial.c.o.requires
	$(MAKE) -f thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/build.make thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/serial.c.o.provides.build
.PHONY : thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/serial.c.o.provides

thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/serial.c.o.provides.build: thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/serial.c.o


# Object files for target thin_kobuki_library
thin_kobuki_library_OBJECTS = \
"CMakeFiles/thin_kobuki_library.dir/kobuki_robot.cpp.o" \
"CMakeFiles/thin_kobuki_library.dir/kobuki_protocol.cpp.o" \
"CMakeFiles/thin_kobuki_library.dir/serial.c.o"

# External object files for target thin_kobuki_library
thin_kobuki_library_EXTERNAL_OBJECTS =

/home/serena/catkin_ws/devel/lib/libthin_kobuki_library.so: thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_robot.cpp.o
/home/serena/catkin_ws/devel/lib/libthin_kobuki_library.so: thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_protocol.cpp.o
/home/serena/catkin_ws/devel/lib/libthin_kobuki_library.so: thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/serial.c.o
/home/serena/catkin_ws/devel/lib/libthin_kobuki_library.so: thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/build.make
/home/serena/catkin_ws/devel/lib/libthin_kobuki_library.so: thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/serena/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared library /home/serena/catkin_ws/devel/lib/libthin_kobuki_library.so"
	cd /home/serena/catkin_ws/build/thin_drivers/thin_kobuki/src/thin_kobuki_library && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/thin_kobuki_library.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/build: /home/serena/catkin_ws/devel/lib/libthin_kobuki_library.so

.PHONY : thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/build

thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/requires: thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_robot.cpp.o.requires
thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/requires: thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/kobuki_protocol.cpp.o.requires
thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/requires: thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/serial.c.o.requires

.PHONY : thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/requires

thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/clean:
	cd /home/serena/catkin_ws/build/thin_drivers/thin_kobuki/src/thin_kobuki_library && $(CMAKE_COMMAND) -P CMakeFiles/thin_kobuki_library.dir/cmake_clean.cmake
.PHONY : thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/clean

thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/depend:
	cd /home/serena/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/serena/catkin_ws/src /home/serena/catkin_ws/src/thin_drivers/thin_kobuki/src/thin_kobuki_library /home/serena/catkin_ws/build /home/serena/catkin_ws/build/thin_drivers/thin_kobuki/src/thin_kobuki_library /home/serena/catkin_ws/build/thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : thin_drivers/thin_kobuki/src/thin_kobuki_library/CMakeFiles/thin_kobuki_library.dir/depend
