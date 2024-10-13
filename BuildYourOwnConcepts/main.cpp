#include <iostream>
#include <concepts>


// Syntax1

template <typename T>
concept MyIntegral = std::is_integral_v<T>;

/*
// Syntax2
template <typename T>
requires MyIntegral<T>
T add (T a, T b) {
    return a + b;
};
*/

/*
template <typename T>
T add (T a, T b) requires MyIntegral<T>{
    return a + b;
};
*/

/*
template <typename T>
MyItegral auto add (MyIntegral auto a, MyIntegral auto b) {
    return a + b;
};
*/

/*
template <typename T>
concept Multipliable = requires (T a, T b) {
    a * b;
};
*/

/*
template <typename T>
requires Multipliable<T> 
T add (T a, T b) {
    return a + b;
};
*/

template <typename T>
concept Incrementable = requires (T a) {
    a+=1;
    ++a;
    a++;
}

template <typename T>
requires Incrementable<T>
T add (T a, T b) {
    return a + b;
}



int main() {

    /*
    int x {6};
    int y {7};

    add(x, y);
    */

    double x {6};
    double y {7};

    add(x, y);

    return 0;
}
