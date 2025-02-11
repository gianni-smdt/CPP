#include <type_traits>

template <typename T>
struct Data{
    T value;
    Data() = delete;
    Data(const T& i) : value {i} {
        static_assert(std::is_integral<T>::value, "Integral type is required.");
        static_assert(!std::is_same<T,char>::value, "Char isn't allowed.");
    }
};

auto main() -> int{
    Data<int> a {42}; //ok
    Data<char> b {42}; //char not allowed
    Data<float> c {42}; //not integral
}