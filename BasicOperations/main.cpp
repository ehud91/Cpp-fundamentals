#include <iostream>


int main() {
    
    // Addition
    int number1 {2};
    int number2 {7};
    int result = number1 + number2;

    std::cout << "Result : " << number1 << " + " << number2 << " = " << result << std::endl;
    
    // Substraction
    result = number2 - number1;
    std::cout << "Result : " << number2 << " - " << number1 << " = " << result << std::endl;
    
    result = number1 - number2;
    std::cout << "Result : " << number1 << " - " << number2 << " = " << result << std::endl;
    
    // Multiplication
    result = number1 * number2;
    std::cout << "Result : " << number1 << " * " << number2 << " = " << result << std::endl;
    
    // Division
    result = number2 / number1;
    std::cout << "Result : " << number2 << " / " << number1 << " = " << result << std::endl;
    
    // Modulus
    result = number2 % number1;
    std::cout << "Result : " << number2 << " % " << number1 << " = " << result << std::endl;
    
    
    return 0;
}