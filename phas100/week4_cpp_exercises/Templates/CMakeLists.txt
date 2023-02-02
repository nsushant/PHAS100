cmake_minimum_required(VERSION 3.16)
project(templates
  VERSION 0.0.1
  LANGUAGES CXX
)

add_definitions(-std=c++11)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(source)
