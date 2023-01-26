add_library(StudentLaptop Student.cpp Laptop.cpp)
target_include_directories(StudentLaptop PUBLIC ${CMAKE_SOURCE_DIR}/include)

add_executable(SLManagement StudentLaptopManagement.cpp)
target_link_libraries(SLManagement StudentLaptop)