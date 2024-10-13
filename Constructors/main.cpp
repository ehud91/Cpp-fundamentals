#include <iostream>

const double PI {3.14159265359};


class Cylinder {
    public:
        // Constructors
        //Cylinder() {}

        Cylinder() {
            base_radius = 2.0;
            height = 2.0;
        }

        Cylinder(double rad_param, double height_param) {
            base_radius = rad_param;
            height = height_param;
        }

        // Functions (methods)
        double volume() {
            return PI * base_radius * base_radius * height;
        }

    private:
        // Member variables
        double base_radius {};
        double height {};
};

int main() {

    //Cylinder cylinder1; 
    Cylinder cylinder1(10, 4); // Objects

    std::cout << "volume : " << cylinder1.volume() << std::endl;



    return 0;
}
