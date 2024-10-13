#include <iostream>

int max (int a, int b); // Function declaration
                        // signiture doesn't include return type

int min (int a, int b);

int inc_mult (int a, int b);

int main() {
    
    int x {5};
    int y {2};

    int result = max(x, y);
    std::cout << "max : " << result << std::endl;

    result = min(x, y);
    std::cout << "min : " << result << std::endl;

    result = inc_mult(x, y);
    std::cout << "inc_mult : " << result << std::endl;

    return 0;
}


// Function defeinition shows up after main
int max (int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
} 

// Function defeinition shows up after main
int min (int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
} 

int inc_mult (int a, int b) {
    return ((++a) * (++b));
}