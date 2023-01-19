add_executable(say_hello)
target_sources(say_hello PRIVATE hello.cpp)
target_include_directories(say_hello PRIVATE include)

# For modular code organisation, it is good practice to separate the library code from the application code. Hence, we place all the relevant source files of the `greeting` 'library' under the `greeting` sub-directory within the `src/` tree.
# It is therefore, appropriate to define the build description of the `greeting` library in a separate CMakeLists.txt placed within the greeting subfolder.
# Add the instruction to process the CMakeLists.txt from the `greeting` sub-directory

# After the `greeting` library has been built, it is required to inform CMake that our `say_hello` executable depends on it
# Add the instruction to achieve this
# See: https://cmake.org/cmake/help/latest/command/target_link_libraries.html

target_compile_features(say_hello PUBLIC cxx_std_17)
set_target_properties(
    say_hello
    PROPERTIES CXX_STANDARD_REQUIRED ON CXX_EXTENSIONS OFF
)
