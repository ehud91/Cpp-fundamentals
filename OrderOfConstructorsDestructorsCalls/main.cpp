#include <iostream>
#include <string_view>


class Dog {
    public:
        Dog() = default;
        Dog(std::string_view name_param, std::string_view breed_param, int p_age_param);
        ~Dog();

    private: 
        std::string name;
        std::string breed;
        int * p_age {nullptr};

};

Dog::Dog(std::string_view name_param, std::string_view breed_param, int age_param) {
    name = name_param;
    breed = breed_param;
    p_age = new int;
    * p_age = age_param;
    std::cout << "Dog constructor called for : " << name << std::endl;
}

Dog::~Dog() {
    delete p_age;
    std::cout << "Dog destructor called for : " << name << std::endl;
}

/*
void some_func() {
    Dog my_Dog("Fluffy", "Shepherd", 2);
}
*/

void some_func() {
    Dog * p_dog = new Dog("Fluffy", "Shepherd", 2);

    delete p_dog; // Causes for the destructor of Dog to be called
}


int main() {

    Dog dog1("Doggyy1", "Shepherd", 2);
    Dog dog2("Doggyy2", "Shepherd", 3);
    Dog dog3("Doggyy3", "Shepherd", 5);
    Dog dog4("Doggyy4", "Shepherd", 1);


    std::cout << "Done!" << std::endl;
    return 0;
}
