#include "header.hpp"
#include <iostream>

struct Shape::DrawImpl{
    DrawImpl() { std::cout << "[[[[\n"; };
    ~DrawImpl() { std::cout << "]]]]\n"; };

    void draw(){
        std::cout << "*" << std::endl;
    }
};

Shape::Shape() : drawImpl_{std::make_unique<Shape::DrawImpl>()}{}

Shape::~Shape(){}

void Shape::draw(){
    drawImpl_->draw();
}