#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <tuple>

auto main() -> int{
    auto t = std::make_tuple("Test", 42.0f, true);

    std::vector<std::tuple<std::string, float, bool>> dataset;

    dataset.emplace_back(std::make_tuple("Test2", 23.f, false));

    std::cout << "Daten: " << dataset.size() << std::endl;

    for(const auto& e : dataset){
        std::cout << std::get<0>(e) << std::endl;
    }

    for(const auto& [text, value, flag] : dataset){
        std::cout << text << " " << value << " " << flag << std::endl;
    }

    std::array<int, 3> vec {1, 2, 3};
    const auto& [x, y, z] = vec;
    std::cout << "x: " << x << std::endl;
}