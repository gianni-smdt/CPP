//Rule of Three = Destructor + Copy Constructor + Copy Assignment Operator

#include <iostream>
#include <array>

struct ROT{
    std::array<float,3> values {0,0,0};

    ROT(){
        values = {0, 0, 0}; //Default Constructor
    }

    ROT(float x, float y, float z) { //Constructor
        values = {x, y, z};
    }

    ~ROT(){} //Destructor

    ROT(const ROT& o){ //Copy Constructor
        *this = o;
    }

    ROT& operator = (const ROT& o){ //Copy Assignment Operator
        values = o.values; 
        return *this;
    }

    void printArray(){
        for (const auto& v : values) {
            std::cout << v << " ";
        }
        std::cout << std::endl;
    }
};

auto main() -> int{
    ROT test1{2, 4, 6}; //Constructor
    
    ROT test2 = test1; //Copy Constructor
    
    ROT test3; 
    test3 = test1; //Copy Assignment

    std::cout << "test1: "; 
    test1.printArray();
    std::cout << "test2: "; 
    test2.printArray();
    std::cout << "test3: "; 
    test3.printArray();
    std::cout << std::endl;
}
