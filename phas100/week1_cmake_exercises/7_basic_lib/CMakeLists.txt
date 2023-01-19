cmake_minimum_required(VERSION 3.21)

project(basic_library
  VERSION 0.0.1
  LANGUAGES CXX
)

# We are now going to separate a logical piece of functionality into its own self-contained unit (i.e. a library) that may be accessed from (i.e. linked to) the main application.
# As a good housekeeping practice, just as we instructed CMake to place the output executables under the `bin` sub-directory under the build tree, we ask CMake to place the generated library files to be placed under the `lib` sub-directory under the build tree
# Use set() to configure the pre-defined variable CMAKE_ARCHIVE_OUTPUT_DIRECTORY accordingly

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(src)
