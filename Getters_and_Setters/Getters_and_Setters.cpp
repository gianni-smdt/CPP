#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    std::string schoolClass;
    float average;

public:
    //Constructor
    Student(std::string n, int ag, std::string c, float av)
        : name(n), age(ag), schoolClass(c), average(av) {}

    //Getter methods
    std::string getName() const { return name;}
    int getAge() const { return age; }
    std::string getClass() const { return schoolClass; }
    float getAverage() const { return average; }

    //Setter methods
    void setName(const std::string& n) { name = n;}
    void setAge(int ag) { age = ag; }
    void setClass(const std::string& c) { schoolClass = c; }
    void setAverage(float av) { average = av; }

    //Method to show the information
    void show() const {
        std::cout << "Name: " << name << "\n"
                  << "Age: " << age << "\n"
                  << "Class: " << schoolClass << "\n"
                  << "Average: " << average << "\n";
    }
};

auto main() -> int{
    Student student1("Max", 16, "10B", 2.5);
    Student student2("Hayley", 15, "9A", 1.8);

    student1.show();
    std::cout << "\n";
    student2.show();

    //student1.setAverage(2.0);
    //std::cout << "\n";
    //student1.show();

    return 0;
}
