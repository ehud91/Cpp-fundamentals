#include <iostream>
#include <string>

template <typename T>

T maximum (T a, T b) {
    return (a > b) ? a : b;
}

template <typename T>
T multiply (T a, T b) {
    return a * b;
}

/*
int maximum (int a, int b) {
    return (a > b) ? a : b;
}

std::string maximum(const std::string& a, const std::string& b) {
    return (a > b) ? a : b;
}

long long int maximum (long long int a, long long int b) {
    return (a > b) ? a : b;
}
*/

int main() {

    /*
    int x {5};
    int y {7};

    int result = maximum(x, y);
    */

    /*
    long long int x {5};
    long long int y {7};

    int result = maximum(x, y);
    */

    /*
    std::string x {"Hello"};
    std::string y {"World!"};

    auto result = maximum(x, y);
    std::cout << "result : " << result << std::endl;
    */

    /*
    int x {5}; 
    int y {7};


    auto result = multiply(x, y);
    */
    int x {5}; 
    int y {7};

    int * p_x {&x};
    int * p_y {&y};


    auto result = maximum(p_x, p_y);

    std::cout << "result : " << * result << std::endl;
    return 0;
}