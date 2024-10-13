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

    // for loop : the good way
    for (unsigned int i{0} ; i < 10; ++i) {
        //Whatever we ant the loop to run
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    
    // Iterator declared outside the loop
    
    /*
    size_t i {0};

    for (i ; i < 10; ++i) {
        std::cout << i << " : I love C++" << std::endl;
    }

    std::cout << "Loop done!" << std::endl;
    std::cout << "i : " << i << std::endl;
    */

    // Leave out the iterator declaration part

    size_t i {0};

    for ( ; i < 10; ++i) {
        std::cout << i << " : I love C++" << std::endl;
    }

    std::cout << "Loop done!" << std::endl;
    std::cout << "i : " << i << std::endl;
    
    return 0;
}
