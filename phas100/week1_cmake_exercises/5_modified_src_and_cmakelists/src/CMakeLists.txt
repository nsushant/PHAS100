add_executable(hello_world)

# We have renamed the file `hello.cpp` to `greet.cpp`. Modify the `target_sources()` command to reflect this changed dependency of the `hello_world` target
target_sources(hello_world PRIVATE hello.cpp)

target_compile_features(hello_world PUBLIC cxx_std_17)
set_target_properties(hello_world PROPERTIES CXX_STANDARD_REQUIRED ON CXX_EXTENSIONS OFF)
