#include <iostream>

// Function that takes a string parameter, and doesn't
// give back the result explicitly

void enetr_bar(size_t age) {

    if ( age > 18) {
        std::cout << "You're " << age << " years old. Please proceed." << std::endl;
    } else {
        std::cout << "Sorry, you're too young for this. No offense!" << std::endl;
    }
}

int max( int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

// Function that doesn't take parameters and returns nothing
void say_hello() {
    std::cout << "Hello there" << std::endl;
    return; // You could omit this return statement for functions returnin void
}

// Function that takes no parameters and return something
int lucky_number() {
    return 99;
}

// Change to them are not visible outsize the function, what we
// have inside the function are actually COPIES of the aruments
// passed to the function
double increment_multyply( double a, double b) {

    std::cout << "Inside function , before increment : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    double result = ((++a) * (++b));

    std::cout << "Inside function , before increment : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    // Returning the result
    return result;
}

int main() {

    enetr_bar(22); // Function arguments
    enetr_bar(10); 

    for (size_t i {1} ; i < 20 ; ++i) {
        enetr_bar(i);
    }

    int x {22};
    int y {44};

    // Callin max
    int result = max(10, 20);
    std::cout << "max : " << result << std::endl;
    
    result = max(x, y);
    std::cout << "max : " << result << std::endl;
    
    // Calling say_hello
    say_hello();

    // Calling lucky_number
    int result1 {};
    result1 = lucky_number();
    std::cout << "Result : " << result1 << std::endl;

    std::cout << "================================" << std::endl;

    double h {3.00};
    double i {4.00};

    std::cout << "Outside function , before increment : " << std::endl;
    std::cout << "h : " << h << std::endl;
    std::cout << "i : " << i << std::endl;

    double incr_mult_result = increment_multyply(h, i);

    std::cout << "Outside function , before increment : " << std::endl;
    std::cout << "h : " << h << std::endl;
    std::cout << "i : " << i << std::endl;

    return 0;
}
