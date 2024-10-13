#include <iostream>


int main() {

    // Verbose nullptr check
    std::cout << std::endl;
    std::cout << "Verbose nullptr check : " << std::endl;

    // Example 1 :
    int * p_number {}; // Initialized to nullptr

    if (!(p_number == nullptr)) {
        std::cout << "p_number points to a VALID address : " << p_number << std::endl;
    } else {
        std::cout << "p_number points to an INVALID address." << std::endl;
    }


    // Example 2 :
    int * p_number1 {}; // Initialized to nullptr
    p_number1 = new int(7);

    if (!(p_number1 == nullptr)) {
        std::cout << "p_number1 points to a VALID address : " << p_number << std::endl;
        std::cout << "p_number1 : " << * p_number1 << std::endl;
    } else {
        std::cout << "p_number1 points to an INVALID address." << std::endl;
    }

    delete p_number1;
    p_number1 = nullptr;

    // It is OK call delete on a nullptr
    // Calling delete on a nullptr is OK
    int * p_number1 {};
    delete p_number1;       // This won't cause any problem
                            // if p_number1 contains nullptr

    return 0;
}
