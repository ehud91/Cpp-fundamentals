#include <iostream>
//#include "parent.h"
#include "child.h"

int main() {

    //Parent p1;
    //p1.print_var();

    Child child(33);
    child.print_var(); // Calls the method in child
    child.Parent::print_var(); // Calls the method in Parent,
                               // value in parent just contains junk or whatever
                               // in class initialization we did
    std::cout << "---------" << std::endl;
    child.show_values(); 
  
    return 0;
}
