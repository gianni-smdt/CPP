//CRTP - Curiously Recursive Template Pattern

#include <iostream>
#include <memory>
#include <vector>
#include <variant>

template <typename Derived>
struct Shape{
    void draw() const { //no virtual necessary because of Derived
        static_cast<const Derived&>(*this).draw();
    };
};

struct Quad : Shape<Quad>{
    void draw() const{
        std::cout << "[]" << std::endl;
    };
};

struct Circle : Shape<Circle>{
    int radius {0};
    void draw() const {
        std::cout << "()" << std::endl;
    };
};

int main(){
    Circle circle;
    circle.draw();

    Quad quad;
    quad.draw();

    using ShapeVariant = std::variant<Quad, Circle>;
    std::vector<ShapeVariant> shapes;

    shapes.emplace_back(Quad{});
    shapes.emplace_back(Circle{});
    shapes.emplace_back(Quad{});

    for (const auto &e : shapes){
        std::visit([](const auto &val){
            val.draw();
        }, e);
    }
    return 0;
}
