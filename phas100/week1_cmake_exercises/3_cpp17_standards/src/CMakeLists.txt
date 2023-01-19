add_executable(hello_world)
target_sources(hello_world PRIVATE hello.cpp)

# We wish to ensure that the `hello_world` target conforms to the C++17 standard. One way to achieve this in CMake is through the `target_compile_features()` command which can be used to set some pre-defined properties/behaviour/characteristics to follow for compiling targets.
# See:
# https://cmake.org/cmake/help/latest/command/target_compile_features.html
# cxx_std_17 in https://cmake.org/cmake/help/latest/prop_gbl/CMAKE_CXX_KNOWN_FEATURES.html

# While `target_compile_features()` encourages the use of C++17  standards, it does not enforce this. The built-in boolean [`CXX_STANDARD_REQUIRED`](https://cmake.org/cmake/help/latest/prop_tgt/CXX_STANDARD_REQUIRED.html) property can be set to `True/ON` to enforce this. Another useful thing to do to ensure wide platform and target portability of our project is to disable compiler extensions. Various C++ compilers take liberties to enable compiler-specific extensions by default unless explicitly directed not to do so. The built-in boolean property [`CXX_EXTENSIONS`](https://cmake.org/cmake/help/latest/prop_tgt/CXX_EXTENSIONS.html) can be set to `False/Off` to disable these compiler extensions. The `set_target_properties()` command allows us to set multiple properties on targets within a single invocation like so:
# see:  set_target_properties() command https://cmake.org/cmake/help/latest/command/set_target_properties.html, on how to set CXX_STANDARD_REQUIRED and CXX_EXTENSIONS boolean flags for our executable
