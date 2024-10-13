#include <iostream>

const double PI {3.14159265359};


class Cylinder {
    public:
        double volume() {
            return PI * base_radius * base_radius * height;
        }
    //private:
    public:
        // Member variables
        double base_radius {};
        double height {};
};

int main() {

    Cylinder cylinder1; // Objects

    std::cout << "volume : " << cylinder1.volume() << std::endl;
    std::cout << "base_radius : " << cylinder1.base_radius << std::endl;
    std::cout << "height : " << cylinder1.height << std::endl;

    // Change the member variables
    cylinder1.base_radius = 10;
    cylinder1.height = 3;

    std::cout << "base_radius : " << cylinder1.base_radius << std::endl;
    std::cout << "height : " << cylinder1.height << std::endl;
    std::cout << "volume : " << cylinder1.volume() << std::endl;


    return 0;
}
