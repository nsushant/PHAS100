add_executable(hello_world)
target_sources(hello_world PRIVATE hello.cpp)

# Inform CMake that in order to build our target `hello_world`, we need to tell the compiler the location of the header file (which in this case, is located in the `include` sub-directory) using the command `target_include_directories()`
# see: https://cmake.org/cmake/help/latest/command/target_include_directories.html

target_compile_features(hello_world PUBLIC cxx_std_17)
set_target_properties(
  hello_world
  PROPERTIES CXX_STANDARD_REQUIRED ON CXX_EXTENSIONS OFF)
