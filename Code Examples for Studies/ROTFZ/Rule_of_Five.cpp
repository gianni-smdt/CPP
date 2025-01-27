//Rule of Three = Destructor + Copy Constructor + Copy Assignment Operator + Move Constructor + Move Assignment Operator

#include <iostream>
#include <array>

struct ROF{
    std::array<float,3> values {0,0,0};

    ROF(){
        values = {0, 0, 0}; //Default Constructor
    }

    ROF(float x, float y, float z) { //Constructor
        values = {x, y, z};
    }

    ~ROF(){} //Destructor

    ROF(const ROF& o){ //Copy Constructor
        *this = o;
    }

    ROF& operator = (const ROF& o){ //Copy Assignment Operator
        values = o.values; 
        return *this;
    }

    ROF(ROF&& o) { //Move Constructor
        *this = o;
        //o.values = {0, 0, 0};
    }

    ROF& operator = (ROF&& o){ //Move Assignment Operator
        if (this != &o){
            values = std::move(o.values);
            //o.values = {0, 0, 0};
        }
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
    ROF test1{2, 4, 6}; //Constructor
    
    ROF test2 = test1; //Copy Constructor
    
    ROF test3; 
    test3 = test1; //Copy Assignment
    
    ROF test4 = std::move(test1); //Move Constructor
    
    ROF test5; 
    test5 = std::move(test1); //Move Assignment

    std::cout << "test1: "; 
    test1.printArray();
    std::cout << "test2: "; 
    test2.printArray();
    std::cout << "test3: "; 
    test3.printArray();
    std::cout << "test4: "; 
    test4.printArray();
    std::cout << "test5: "; 
    test5.printArray();
    std::cout << std::endl;
}
