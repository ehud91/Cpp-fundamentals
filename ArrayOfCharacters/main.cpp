#include <iostream>


int main() {

    // Declare array
    char messages [5] {'H','e','l','l','o'};

    // Print out the array through looping
    std::cout << "message : ";

    for (auto c : messages) {
        std::cout << c;
    }

    std::cout << std::endl;

    // Change characters in our array
    messages[1] = 'a';

    // Print out the array throug
    std::cout << "message : ";
    for (auto c : messages) {
        std::cout << c;
    }

    // Declare array
    char messages2 [5] {'H','e','l','l','o'};

    std::cout << "message : " << messages2 << std::endl;

    // Declare array - To fix it:
    char messages3 [6] {'H','e','l','l','o', '\0'};
    
    std::cout << "message : " << messages3 << std::endl;

    // If a character array is null terminated, it's called as C-String
    char messages4 [] {'H','e','l','l','o', '\0'};
    
    std::cout << "message : " << messages4 << std::endl;
    std::cout << "sizeof(message4) : " << sizeof(messages4) << std::endl;

    char messages5 [6] {'H','e','l','l','o','\0'};
    
    std::cout << "message : " << messages5 << std::endl;
    std::cout << "sizeof(message5) : " << sizeof(messages5) << std::endl;
    
    int numbers [] {1,2,3,4,5};
    std::cout << "numbers : " << numbers << std::endl;

    return 0;
}
