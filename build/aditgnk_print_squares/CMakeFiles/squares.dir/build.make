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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/aditya/catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aditya/catkin_ws/build

# Include any dependencies generated for this target.
include aditgnk_print_squares/CMakeFiles/squares.dir/depend.make

# Include the progress variables for this target.
include aditgnk_print_squares/CMakeFiles/squares.dir/progress.make

# Include the compile flags for this target's objects.
include aditgnk_print_squares/CMakeFiles/squares.dir/flags.make

aditgnk_print_squares/CMakeFiles/squares.dir/src/squares.cpp.o: aditgnk_print_squares/CMakeFiles/squares.dir/flags.make
aditgnk_print_squares/CMakeFiles/squares.dir/src/squares.cpp.o: /home/aditya/catkin_ws/src/aditgnk_print_squares/src/squares.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aditya/catkin_ws/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object aditgnk_print_squares/CMakeFiles/squares.dir/src/squares.cpp.o"
	cd /home/aditya/catkin_ws/build/aditgnk_print_squares && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/squares.dir/src/squares.cpp.o -c /home/aditya/catkin_ws/src/aditgnk_print_squares/src/squares.cpp

aditgnk_print_squares/CMakeFiles/squares.dir/src/squares.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/squares.dir/src/squares.cpp.i"
	cd /home/aditya/catkin_ws/build/aditgnk_print_squares && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/aditya/catkin_ws/src/aditgnk_print_squares/src/squares.cpp > CMakeFiles/squares.dir/src/squares.cpp.i

aditgnk_print_squares/CMakeFiles/squares.dir/src/squares.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/squares.dir/src/squares.cpp.s"
	cd /home/aditya/catkin_ws/build/aditgnk_print_squares && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/aditya/catkin_ws/src/aditgnk_print_squares/src/squares.cpp -o CMakeFiles/squares.dir/src/squares.cpp.s

aditgnk_print_squares/CMakeFiles/squares.dir/src/squares.cpp.o.requires:
.PHONY : aditgnk_print_squares/CMakeFiles/squares.dir/src/squares.cpp.o.requires

aditgnk_print_squares/CMakeFiles/squares.dir/src/squares.cpp.o.provides: aditgnk_print_squares/CMakeFiles/squares.dir/src/squares.cpp.o.requires
	$(MAKE) -f aditgnk_print_squares/CMakeFiles/squares.dir/build.make aditgnk_print_squares/CMakeFiles/squares.dir/src/squares.cpp.o.provides.build
.PHONY : aditgnk_print_squares/CMakeFiles/squares.dir/src/squares.cpp.o.provides

aditgnk_print_squares/CMakeFiles/squares.dir/src/squares.cpp.o.provides.build: aditgnk_print_squares/CMakeFiles/squares.dir/src/squares.cpp.o

# Object files for target squares
squares_OBJECTS = \
"CMakeFiles/squares.dir/src/squares.cpp.o"

# External object files for target squares
squares_EXTERNAL_OBJECTS =

/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: aditgnk_print_squares/CMakeFiles/squares.dir/src/squares.cpp.o
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: aditgnk_print_squares/CMakeFiles/squares.dir/build.make
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /opt/ros/indigo/lib/libcv_bridge.so
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.2.4.8
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.8
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.2.4.8
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.2.4.8
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.8
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libopencv_ocl.so.2.4.8
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.8
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.8
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.8
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.8
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.8
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libopencv_gpu.so.2.4.8
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.8
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.8
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.8
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libopencv_contrib.so.2.4.8
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.8
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /opt/ros/indigo/lib/libimage_transport.so
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /opt/ros/indigo/lib/libmessage_filters.so
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libtinyxml.so
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /opt/ros/indigo/lib/libclass_loader.so
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/libPocoFoundation.so
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libdl.so
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /opt/ros/indigo/lib/libroscpp.so
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /opt/ros/indigo/lib/librosconsole.so
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /opt/ros/indigo/lib/librosconsole_log4cxx.so
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /opt/ros/indigo/lib/librosconsole_backend_interface.so
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/liblog4cxx.so
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /opt/ros/indigo/lib/libxmlrpcpp.so
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /opt/ros/indigo/lib/libroslib.so
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /opt/ros/indigo/lib/libroscpp_serialization.so
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /opt/ros/indigo/lib/librostime.so
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /opt/ros/indigo/lib/libcpp_common.so
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares: aditgnk_print_squares/CMakeFiles/squares.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable /home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares"
	cd /home/aditya/catkin_ws/build/aditgnk_print_squares && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/squares.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
aditgnk_print_squares/CMakeFiles/squares.dir/build: /home/aditya/catkin_ws/devel/lib/aditgnk_print_squares/squares
.PHONY : aditgnk_print_squares/CMakeFiles/squares.dir/build

aditgnk_print_squares/CMakeFiles/squares.dir/requires: aditgnk_print_squares/CMakeFiles/squares.dir/src/squares.cpp.o.requires
.PHONY : aditgnk_print_squares/CMakeFiles/squares.dir/requires

aditgnk_print_squares/CMakeFiles/squares.dir/clean:
	cd /home/aditya/catkin_ws/build/aditgnk_print_squares && $(CMAKE_COMMAND) -P CMakeFiles/squares.dir/cmake_clean.cmake
.PHONY : aditgnk_print_squares/CMakeFiles/squares.dir/clean

aditgnk_print_squares/CMakeFiles/squares.dir/depend:
	cd /home/aditya/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aditya/catkin_ws/src /home/aditya/catkin_ws/src/aditgnk_print_squares /home/aditya/catkin_ws/build /home/aditya/catkin_ws/build/aditgnk_print_squares /home/aditya/catkin_ws/build/aditgnk_print_squares/CMakeFiles/squares.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : aditgnk_print_squares/CMakeFiles/squares.dir/depend

