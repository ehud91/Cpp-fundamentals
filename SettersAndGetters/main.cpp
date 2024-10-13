#include <iostream>

const double PI {3.14159265359};


class Cylinder {
    public:
        // Constructors
        Cylinder() = default;

        
        Cylinder(double rad_param, double height_param) {
            base_radius = rad_param;
            height = height_param;
        }

        // Functions (methods)
        double volume() {
            return PI * base_radius * base_radius * height;
        }

        // Setter and getter methods
        double get_base_radius() {
            return base_radius;
        }

        double get_height() {
            return height;
        }

        void set_base_radius(double rad_param) {
            base_radius = rad_param;
        }

        void set_height(double height_param) {
            height = height_param;
        }

    private:
        // Member variables
        double base_radius {};
        double height {};
};

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
