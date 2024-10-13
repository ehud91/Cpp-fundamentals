#include <iostream>

// template <typename T> T maximum(T a, T b); // Declaration
template <typename T> const T& maximum(const T& a, const T& b); // Declaration


int main() {

    double a {23.5};
    double b {51.2};

    std::cout << "Out - &a: " << &a << std::endl;
    auto result = maximum(a, b);
    std::cout << "Out - &a: " << &a << std::endl;
    
    return 0;
}


// Definition
/*
template <typename T> T maximum(T a, T b) {
    std::cout << "In - &a: " << &a << std::endl;
    return (a > b) ? a : b;
}
*/

template <typename T> const T& maximum(const T& a, const T& b) {
    std::cout << "In - &a: " << &a << std::endl;
    return (a > b) ? a : b;
}