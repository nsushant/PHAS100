cmake_minimum_required(VERSION 3.16)

project(minimal_helloworld
  VERSION 0.0.1
  LANGUAGES CXX
)

# Until now, we have set certain high-level description of the project, but have not provided instructions on building the "hello_world" executable program from the source! This is intentional. The task of describing the build of each logical/modular project unit is delegated to nested/leaf `CMakeLists.txt` that reflects the project's hierarchy. In this case, we wish to 'hand-off' control to `src/CMakeLists.txt` for building the `hello_world` executable. This is achieved by using the `add_subdirectory()` command.
# Next, process the `CMakeLists.txt` file in the `src/` subdirectory
# See: https://cmake.org/cmake/help/latest/command/add_subdirectory.html
