cmake_minimum_required(VERSION 3.16)

project(minimal_helloworld
  VERSION 0.0.1
  LANGUAGES CXX
)

# Note that CMake reflects the source tree hierarchy in its build folder. Our aim is to now to instruct CMake to place all the binary executables within a `bin/` subdirectory within the build directory. Use the `set()` command, and the pre-defined variables CMAKE_RUNTIME_OUTPUT_DIRECTORY and CMAKE_BINARY_DIR   
# hints:
# https://cmake.org/cmake/help/latest/command/set.html
# https://cmake.org/cmake/help/latest/variable/CMAKE_RUNTIME_OUTPUT_DIRECTORY.html
# https://cmake.org/cmake/help/latest/variable/CMAKE_BINARY_DIR.html

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_subdirectory(src)
