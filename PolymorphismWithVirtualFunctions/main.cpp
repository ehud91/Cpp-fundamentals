#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

/*
void draw_circle(const Circle& circle) {
    circle.draw();
}

void draw_oval(const Oval& oval) {
    oval.draw();
}
*/

void draw_shape(Shape * s) 
{

}

void draw_shape_v1(const Shape s_r) {
    s_r.draw();
}

int main() {

    Shape shape1("Shape1");
    //shape1.draw();

    Oval oval1(2.0, 3.5, "Oval1");
    //oval1.draw();

    Circle circle1(3.3, "Circle1");
    //circle1.draw();


    // Base pointers
    Shape * shape_ptr = &shape1;
    //shape_ptr->draw();  // Shape::draw

    shape_ptr = &oval1;
    //hape_ptr->draw(); // Draw a oval

    shape_ptr = &circle1;
    //shape_ptr->draw();

    //draw_shape(&oval1);
    /*
    // Base references
    Shape& shape_ref = shape1;
    //shape1.draw();

    Shape& shape_ref = circl1;
    //shape1.draw();
    

    //Drawing shapes
    draw_circle(circl1);
    draw_oval(oval1);
    draaw_shape(shaper1);
    */
   //draw_shape_v1(oval1);
   //draw_shape_v1(circl1);

   // Raw pointers
   //shape_ptr = &oval1;
   //shape_ptr->draw();

   //shape_ptr = &oval1;
   //shape_ptr->get_x_rad(); // Compile error

    // Shapes stored in collections
    Shape* shape_collection[]{&shape1, &oval1, &circle1};

    for (Shape* s_ptr : shape_collection) {
        s_ptr->draw();
    }

    return 0;
}
