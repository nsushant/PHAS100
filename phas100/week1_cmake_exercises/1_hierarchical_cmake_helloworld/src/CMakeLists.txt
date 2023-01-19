# Within this 'leaf' `CMakeLists.txt` file, we describe how the `hello_world` executable is to be built. This is considered best practice, i.e. to have a `CMakeLists.txt` as close to the relevant source files for each modular functionality within the project.  
# This file can see and use all the properties, variables, functions and macros defined at any `CMakeLists.txt` in its parent scope (in this case, all definitions from the top-level `CMakeLists.txt` file are visible here i.e. they are in the 'scope' of this leaf file).

add_executable(hello_world)

target_sources(hello_world PRIVATE hello.cpp)
