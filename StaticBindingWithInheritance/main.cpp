#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

void draw_circle(const Circle& circle) {
    circle.draw();
}

void draw_oval(const Oval& oval) {
    oval.draw();
}

int main() {

    Shape shape1("Shape1");
    //shape1.draw();

    Oval oval1(2.0, 3.5, "Oval1");
    //oval1.draw();

    Circle circl1(3.3, "Circle1");
    //circl1.draw();


    // Base pointers
    Shape * shape_ptr = &shape1;
    //shape_ptr->draw();

    shape_ptr = &oval1;
    //hape_ptr->draw(); // Draw a oval

    shape_ptr = &circl1;
    //shape_ptr->draw();

    // Base references

    Shape& shape_ref = shape1;
    //shape1.draw();

    Shape& shape_ref = circl1;
    //shape1.draw();

    //Drawing shapes
    draw_circle(circl1);
    draw_oval(oval1);

    return 0;
}
