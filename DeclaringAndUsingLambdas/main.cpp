#include <iostream>


int main() {

    /*
    Lambda function signature :
                                [capture list] (parameters) -> return type {
                                         // Function body
                                }
    */

   /*
   auto func = []() {
        std::cout << "Hello World!" << std::endl;
   };

    func();
    func();
   */

  /*
    auto result = [](int a, int b) {
        std::cout << "Hello World!" << std::endl;
        return a + b;
    }(10, 60);

    std::cout << "result : " << result << std::endl;
    */

   /*
    std::cout << "result : " << [](int a, int b) {
        std::cout << "Hello World!" << std::endl;
        return a + b;
    }(10, 60) << std::endl;
    */

   /*
    auto func1 = [](double a, double b) {
        //std::cout << "Hello World!" << std::endl;
        return a + b;
    };

    auto result1 = func1(23, 7);
    auto result2 = func1(9, 45);

    
    std::cout << "result1 : " << result1 << std::endl;
    std::cout << "result2 : " << result2 << std::endl;
    std::cout << "direct call  : " << func1(5, 2) << std::endl;
    */

    auto func3 = [] (double a, double b) -> int {
        return a + b;
    };

    auto func4 = [] (double a, double b) {
        return a + b;
    };

    double a {6.9};
    double b {3.5};

    auto result3 = func3(a, b);
    auto result4 = func4(a, b);

    std::cout << "result3 : " << result3 << std::endl;
    std::cout << "result4 : " << result4 << std::endl;
    std::cout << "sizeof(result3) : " << sizeof(result3) << std::endl; 
    std::cout << "sizeof(result4) : " << sizeof(result4) << std::endl;

    std::cout << "Done!" << std::endl;

    
    
    return 0;
}
