#include <iostream>

template <typename... Args> //variadic template
void vafunc(Args... a) { 
    auto z{0u};
    ((std::cout << a << ((sizeof...(a) != ++z) ? "," : " ")), ...) << std::endl; //fault expression
}

int main() {
    vafunc("One", 2, 3.0f, "Four");
    return 0;
}