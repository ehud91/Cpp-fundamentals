#include <iostream>
#include <memory>
#include "shape.h"
#include "oval.h"
#include "circle.h"


int main() {

    Circle circle1(7.2, "Circle1");
    Oval oval1(13.3, 1.2, "Circle1");
    Circle circle2(7.2, "Circle2");
    Oval oval2(31.3, 15.2, "Oval2");
    Circle circle3(12.2, "Circle3");
    Oval oval3(53.3, 9.2, "Oval3");

    // Raw pointers
    Shape * shapes3[] {&circle1, &oval1, &circle2, &oval2, &circle3, &oval3};

    for (Shape * shape_ptr : shapes3) {
        std::cout << "Inside array , sizeof(*shape_ptr) : " << sizeof(* shape_ptr) << std::endl;
        shape_ptr->draw();
        std::cout << std::endl;
    }


    return 0;
}
