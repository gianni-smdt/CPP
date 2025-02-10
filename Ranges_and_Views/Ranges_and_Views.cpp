#include <iostream>
#include <array>
#include <ranges>

auto main()-> int{
    std::array data = {0, 23, 6, 5, 3};

    for(const auto& e : data | std::views::take(2)){  //first 2 elements
        std::cout << e << " ";
    }
    std::cout << std::endl;

    for(const auto& e : data | std::views::reverse | std::views::take(2)){  //last 2 elements, but in false order
        std::cout << e << " ";
    }
    std::cout << std::endl;

    for(const auto& e : data | std::views::reverse | std::views::take(2) | std::views::reverse){  
        std::cout << e << " ";
    }
    std::cout << std::endl;

    for(const auto& e : data 
        | std::views::reverse 
        | std::views::take(3) 
        | std::views::filter([](const auto& e){ return e % 2 == 0; }) //you can use lambda expressions for filtering
        | std::views::reverse){                                       //here: even numbers of the last 3
        std::cout << e << " ";
    }
    std::cout << std::endl;

    auto save_view = std::views::reverse 
                    | std::views::take(3) 
                    | std::views::filter([](const auto& e){ return e % 2 == 0; }) 
                    | std::views::reverse;

    for(const auto& e : data | save_view){  //you can also save those operations in variables
        std::cout << e << " ";
    }
    std::cout << std::endl;

    return 0;
}