#include <iostream>
#include <array>

//Rule of Three
class FloatDataROT{
    float m_value { 0 };

    public:
        FloatDataROT() : m_value{ 0.0 } {}; //Constructor

        ~FloatDataROT() {} //Destructor

        FloatDataROT(const FloatDataROT& other){ //Copy Constructor
            *this = other; 
        }

        FloatDataROT& operator = (const FloatDataROT& other){ //Copy-Assign-Operator (Operator Overload)
            m_value = other.m_value; 
            return *this; 
        }

        const float& value() const { 
            return m_value;
        }
};

//Rule of Five
struct Vec3{

    std::array<float,3> values_ {0,0,0};

    Vec3() : values_ {0,0,0} {} //Default Constructor

    Vec3(float x, float y, float z) : values_ {x,y,z} {}

    ~Vec3() {} //Destructor 

    Vec3& operator = (const Vec3& o){ //Copy Assign 
        values_ = o.values_; 
        return *this;
    }

    Vec3(const Vec3& o){ //Copy Constructor
        *this = o; 
    }

    Vec3& operator = (Vec3 &&o){ //Move Assign Operator
        std::swap(o.values_, this->values_); 
        return *this;
    }

    Vec3 (Vec3 &&o){ //Move Constructor
        *this = o;
    }

    const float& x() const{
        return values_ [0];
    }
};

//Rule of Zero
struct Vec3x { 
    std::array<float,3> values_ {0,0,0};
};

//Main
int main(){
    //ROT
    FloatDataROT data_1, data_2;
    data_1 = data_2;
    std::cout << "Wert: " << data_2.value() << std::endl;

    //ROF
    Vec3 vec3_1 {1,0,2};
    Vec3 vec3_2 = vec3_1;
    std::cout << "Wert vec3_2.x: " << vec3_2.x() << std::endl;
    std::cout << "Wert vec3_1.x: " << vec3_1.x() << std::endl;
}
