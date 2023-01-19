#include <iostream>
#include <string_view>

int main() {
    std::cout << "Hello World!" << '\n';

    std::string_view course_greeting { "Welcome to PHAS0100" };
    std::cout << course_greeting << '\n';

    return 0;
}
