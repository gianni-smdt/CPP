#include "namespaces.hpp"
#include <iostream>

namespace helloworld{
    void Test::say_something() const{
        std::cout << "Hello World!" << std::endl;
    }
}
