#include "namespaces.hpp"
#include <iostream>

namespace paradise {
    void Test::say_something() const{
        std::cout << "Hello World!" << std::endl;
    }
}
