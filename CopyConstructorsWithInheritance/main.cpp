#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main() {

    /*
    Engineer eng1("Daniel Gray", 41, "Green Sky Oh Blue 33Str#75", 12);
    std::cout << "eng1 : " << eng1 << std::endl;

    std::cout << "------------------" << std::endl;

    Engineer eng2(eng1);
    std::cout << "eng2 : " << eng2 << std::endl;
    */

    CivilEngineer eng1("Daniel Gray", 41, "Green Sky Oh Blue 335St#75", 12, "Road Strength");

    Engineer eng2(eng1);
    std::cout << "eng1 : " << eng1 << std::endl;

    return 0;
}
