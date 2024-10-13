#include <iostream>
#include "constants.h"
#include "cylinder.h"
#include "cylinder.cpp"




int main() {

    Cylinder cylinder1(2, 3);
    std::cout << "base_radius : " << cylinder1.get_base_radius() << std::endl;
    std::cout << "height : " << cylinder1.get_height() << std::endl;
    
    std::cout << "volume : " << cylinder1.volume() << std::endl;

    cylinder1.set_base_radius(100);
    cylinder1.set_height(10);
    std::cout << "base_radius : " << cylinder1.get_base_radius() << std::endl;
    std::cout << "height : " << cylinder1.get_height() << std::endl;

    std::cout << "volume : " << cylinder1.volume() << std::endl;




    return 0;
}
