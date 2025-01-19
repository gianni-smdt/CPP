#include <iostream>
#include <memory>

int main(){
    uint8_t x {42}; //x is on the stack

    const uint8_t cx = x; //cx is an independent copy of x

    uint8_t &rx = x; //rx is a reference of x

    rx = 23;

    std::cout << "x: " << static_cast<int>(x) //23
            << " cx: " << static_cast<int>(cx) //42
            << " rx: " << static_cast<int>(rx) //23
            << std::endl;

    uint8_t *px = &x;

    px[0] = 4;
    *px = 8;

    std::cout << "x: " << static_cast<int>(x) //8
            << " cx: " << static_cast<int>(cx) //42
            << " rx: " << static_cast<int>(rx) //8
            << " *px: " << static_cast<int>(*px) //8
            << " Address of px: " << static_cast<void*>(px)
            << std::endl;
}
