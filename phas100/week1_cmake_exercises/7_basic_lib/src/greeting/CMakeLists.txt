# The `add_library()` instruction informs CMake that we are adding a library target (not a standalone executable target)
# See: https://cmake.org/cmake/help/latest/command/add_library.html

# Now, indicate to CMake, the C++ source code dependencies of this library target. 
# If the source files are not used directly anywhere, but are only used in building the library, they can be made PRIVATE
# See: https://cmake.org/cmake/help/latest/command/target_sources.html

# The header file (greeting.h) included in the library's C++ source code (greeting.cpp) is placed within the `include` sub-directory relative to the current CMakeLists.txt.
# Indicate to CMake this include dependency.
# If the header file is used both by the consuming target, and also directly included within our executable target (which consumes the library target), then it needs to be declared as PUBLIC
# See: https://cmake.org/cmake/help/latest/command/target_include_directories.html

target_compile_features(greeting PUBLIC cxx_std_17)
set_target_properties(
    greeting
    PROPERTIES CXX_STANDARD_REQUIRED ON CXX_EXTENSIONS OFF
)
