#include <iostream>

#include "common_header.h"

int main() {
    std::cout << "Hello World!" << '\n';

#ifdef HELLO_FROM_HEADER
    std::cout << "We are now able to process included header files!" << '\n';
#else
    std::cout << "Try including the header file and suitably edit the relevant CMakeLists.txt" << '\n';
#endif

    return 0;
}
