#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder {
    public:
        // Constructors
        Cylinder() = default;

        
        Cylinder(double rad_param, double height_param);

        // Functions (methods)
        double volume();

        // Setter and getter methods
        double get_base_radius();

        double get_height();

        void set_base_radius(double rad_param);

        void set_height(double height_param);

    private:
        // Member variables
        double base_radius {};
        double height {};
};

#endif