add_library(Fraction Fraction.cpp FractionException.cpp)
target_include_directories(Fraction PUBLIC ${CMAKE_SOURCE_DIR}/include)

add_executable(fractionAnalyser FractionAnalyser.cpp)
target_link_libraries(fractionAnalyser Fraction)