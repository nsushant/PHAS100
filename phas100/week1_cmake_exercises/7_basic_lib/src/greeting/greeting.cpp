#include "greeting.h"

#include <iostream>
#include <string_view>

namespace greeting {
void say_hello(std::string_view name) {
    std::cout << "Hello " << name << " from the greeting library\n";
}
}  // namespace greeting
