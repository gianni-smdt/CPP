#include "header.hpp"

int main(){
    Shape x;
    x.draw();
}

/*
    Output:
        [[[[    - constructor DrawImpl()
        *       - method draw()
        ]]]]    - destructor ~DrawImpl()
*/