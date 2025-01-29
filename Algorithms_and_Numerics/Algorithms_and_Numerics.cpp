#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>

auto main() -> int {
    std::array data{3, 2, 55, 6, 7};

    auto sum_forloop{0};        
    for(const auto &e : data){ //for loop
        sum_forloop += e;
    }
    std::cout << "Sum (for loop): " << sum_forloop << std::endl;


    auto sum_lambda{0};
    std::for_each(std::begin(data), std::end(data), [&sum_lambda] (const auto &x) { //lambda expression, std::for_each from <algorithm>
        sum_lambda += x;
    });
    std::cout << "Sum (lambda expression): " << sum_lambda << std::endl;


    auto sum_accumulate = std::accumulate(std::begin(data), std::end(data), float(0)); //std::accumulate from <numeric>
    std::cout << "Sum (accumulate): " << sum_accumulate << std::endl;


    auto sum_reduce = std::reduce(std::begin(data), std::end(data), float(0), std::plus<>{}); //std::reduce from <numeric>
    std::cout << "Sum (reduce): " << sum_reduce << std::endl;

    //
}