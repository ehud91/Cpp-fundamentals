#include <iostream>

int max (int a, int b) {
    std::cout << "(int, int) overloading called" << std::endl;
    return (a > b) ? a : b;
}

int max (double a, double b) {
    std::cout << "(double, double) overloading called" << std::endl;
    return (a > b) ? a : b;
}

double max (int a, double b) {
    std::cout << "(int, double) overloading called" << std::endl;
    return (a > b) ? a : b;
}

double max (double a, int b) {
    std::cout << "(double, int) overloading called" << std::endl;
    return (a > b) ? a : b;
}

double max (double a, int b, int c) {
    std::cout << "(double, int, int) overloading called" << std::endl;
    return (a > b) ? a : b;
}

std::string_view max (std::string_view a, std::string_view b) {
    std::cout << "(string_view, string_view) overload called" << std::endl;
    return (a > b) ? a : b;
}

int main() {

    int x {4};
    int y {9};
    double a {5.4};
    double b {7.4};

    // auto result = max(x, y);

    // auto result = max(a, b);

    // auto result = max(b, x, y);
    

    max("Hello", "World");
    
    return 0;
}
