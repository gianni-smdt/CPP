#include <iostream>
#include <memory>
#include <vector>

struct Shape{ 
    virtual void draw() const = 0; //pure virtual
    virtual ~Shape() = default;
};

struct Square : Shape {
    virtual void draw() const override final{
        std::cout << "[ ]" << std::endl;
    }
};

int main()
{
    std::unique_ptr<Shape> s = std::make_unique<Square>();
    //Shape* s = new Square();  //also possible

    s->draw();

    std::vector<std::unique_ptr<Shape>> shapes; 
    shapes.push_back(std::make_unique<Square>());
}
