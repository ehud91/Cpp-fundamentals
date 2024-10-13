#include <iostream>


int main() {

    /*
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    */

    // While loop
    /*
    const size_t COUNT {10};
    size_t i {0};

    while (i < COUNT) { // Test
        std::cout << i << " : I love C++" << std::endl;

        ++i; // Incrementation
    }

    std::cout << "Loop done!" << std::endl;
    */

    // Do while loop

    const int COUNT {10};
    size_t i {0}; // Iterator declaration

    do {
        std::cout << i << " : I love C++" << std::endl;
        ++i; 
    } while (i < COUNT);

    std::cout << "Loop done!" << std::endl;
    
    return 0;
}
