#ifndef HEADER_HPP
#define HEADER_HPP

#include <memory>

class Shape{
    public:
        Shape();
        ~Shape();

        void draw();

    private:
        struct DrawImpl; //forward declaration
        std::unique_ptr<DrawImpl> drawImpl_;
};

#endif