#include <iostream>


int main() {

    // Decalare an array of ints
    int scores [10];

    // Read data
    //std::cout << " scores [0] : " << scores[0] << std::endl; 
    
    // Read with a loop
    for (size_t i {0} ; i < 10; ++i) {
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }

    // Write data into an array
    scores [0] = 20;
    scores [1] = 21;
    scores [2] = 22;

    for (size_t i {0} ; i < 10; ++i) {
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }

    for (size_t i {0} ; i < 10; ++i) {
        scores[i] = i * 10;
    }

    // print the data out
    for (size_t i {0} ; i < 10; ++i) {
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }


    // Omit the size of the array at declaration
    int class_size[] {10, 12, 15, 11, 18, 17};

    // Will print this with a range based for loop

    for (auto value : class_size) {
        std::cout << "value : " << value << std::endl;
    }

    // Read only arrays
    const int birds[] {10, 12, 15, 11, 18, 17};

    // birds[2] = 8;

    //Sum up scores array, store result in sum
    int scores2 [] {2, 5, 8, 2, 5, 6, 9};
    int sum {0};

    for (int element : scores2) {
        sum += element;
    }

    std::cout << "Score sum: " << sum << std::endl;

    return 0;
}
