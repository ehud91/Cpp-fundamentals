#include <iostream>
#include "ellipse.h"
#include "shape.h"

int main() {

    Shape shape1("shape1");
    std::cout << "Shape count : " << Shape::m_count << std::endl; // 1

    Shape shape2("shape2");
    std::cout << "Shape count : " << Shape::m_count << std::endl; // 2

    Shape shape3("shape3");
    std::cout << "Shape count : " << Shape::m_count << std::endl; // 3

    std::cout << "**************************************" << std::endl;

    // Ellipse 
    Ellipse ellipse1(10, 12, "ellipse1");
    std::cout << "Shape count : " << Shape::m_count << std::endl; // 4
    std::cout << "Ellipse count : " << Ellipse::m_count << std::endl; // 4

    
    std::cout << "**************************************" << std::endl;


    // Shape polymorphism
    Shape * shapes[] {&shape1, &ellipse1};
    for (auto &s : shapes) {
        std::cout << "count : " << s->get_count() << std::endl;
    }

    return 0;
}
