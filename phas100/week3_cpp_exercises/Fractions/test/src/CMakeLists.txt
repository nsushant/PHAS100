add_executable(test_ex)
target_sources(test_ex PRIVATE test_fractions.cpp)
target_include_directories(test_ex PRIVATE ../include)
target_link_libraries(test_ex PUBLIC Fraction)

add_test(NAME test_fraction COMMAND $<TARGET_FILE:test_ex> [ex1])
add_test(NAME test_exception COMMAND $<TARGET_FILE:test_ex> [ex3])