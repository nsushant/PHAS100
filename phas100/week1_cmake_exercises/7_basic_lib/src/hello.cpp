#include <iostream>
#include <string_view>

#include "common_header.h"
#include "greeting.h"

int main() {
    std::cout << "Hello World!" << '\n';

#ifdef HELLO_FROM_HEADER
    std::cout << "We are now able to process included header files in hello.cpp!" << '\n';
#else
    std::cout << "Try including the header file and suitably edit the relevant CMakeLists.txt" << '\n';
#endif  // DEBUG

    std::string_view name { "UCL" };
    greeting::say_hello(name);

    return 0;
}
