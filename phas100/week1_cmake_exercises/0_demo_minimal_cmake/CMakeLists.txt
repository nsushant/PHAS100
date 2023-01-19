# Set a minimum required version of CMake. Use at least version 3.16
# See: https://cmake.org/cmake/help/latest/command/cmake_minimum_required.html


# Declare a CMake project.
# The first (required) argument to this command is the project's name. The name of the project can be any valid string. It does not have to be the same string as the name of the main executable program to be built (although it is conventional/convenient to use the same string for them).
# The VERSION field is optional, but is conventional to populate it.
# Specify the programming languages that the project uses. The keyword for C++ projects is `CXX`. It is helpful to specify the list of languages used in the project, so that cmake does not spend time introspecting the system for the presence of the toolchains for every supported language (CUDA, fortran, C, Java etc).
# See: https://cmake.org/cmake/help/latest/command/project.html


# Declare that we'd like cmake to build an executable called 'hello_world'. In this case, `hello_world` is a cmake 'target' (or a cmake 'executable target' to be precise).
# See: https://cmake.org/cmake/help/latest/command/add_executable.html


# Targets (not variables) are the first-class citizens in modern CMake language. Hence, the relationships between various constituents (i.e. executables, source files, header files, internal libraries, other third-party code/files, system dependencies etc.) is to be described in a target-centric way within each `CMakeLists.txt` file.
# Here we tell CMake that the executable target `hello_world` depends on one C++ source file, viz `hello.cpp`.
# See: https://cmake.org/cmake/help/latest/command/target_sources.html
