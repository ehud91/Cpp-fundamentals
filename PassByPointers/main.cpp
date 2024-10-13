#include <iostream>

void say_age (int * age); // Declaration


int main() {

    int age {23};
    std::cout << "age (before call) : " << age << " & age : " << & age << std::endl;
    say_age(& age);
    std::cout << "age (after call) : " << age << " & age : " << & age << std::endl;
    
    return 0;
}

void say_age (int * age) {
    ++( * age);
    std::cout << "Hello , you are " << * age << " years old! & age : " << & age << std::endl;
}