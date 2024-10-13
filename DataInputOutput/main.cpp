#include <iostream>
#include <string>


int main() {

    /*
    // Printing data
    std::cout << "Hello C++20 " << std::endl;

    int age {21};
    std::cout << "Age : " << age << std::endl;

    std::cerr << "Error message : Something is wrong" << age << std::endl;
    std::cerr << "Log message : Something happend" << age << std::endl;

    */

    //
    int age1;
    std::string name;

    std::cout << "Please type your name and your age: " << std::endl;

    std::cin >> name;
    std::cin >> age1;

    std::cout << "Hello, " << name << ", you are :" << age1 << " Years old!" << std::endl;

    
    return 0;
}