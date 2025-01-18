#include <vector>
#include <iostream>
#include <algorithm>

auto main() -> int{
    std::vector vec {10,12,12,13, 18, 19, 6};

    auto max = vec.front();

    std::for_each(std::begin(vec), std::end(vec),[&max](const int& e){ 
        max = std::max(e,max);
    }); 

    std::cout << max << std::endl;
}
