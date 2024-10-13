#include <iostream>
#include "compare.h"    // Preprocessor
#include "operations.h"


int main() {

    int maximum = max(34, 56);
    std::cout << "maximum : " << maximum << std::endl;

    int minimum = min(146, 23);
    std::cout << "minimum : " << minimum << std::endl;

    int x {4};
    int y {5};

    int result = incr_mult(x, y);
    std::cout << "incr_mult : " << result << std::endl;


    return 0;
}
