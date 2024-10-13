#include <iostream>
#include "person.h"
#include "player.h"
#include "nurse.h"
#include "engineer.h"

int main() {

    Person person1("Daniel Gray", 27, "Blue Sky St 233 #56");
    std::cout << "person1 : " << person1 << std::endl;

    std::cout << "-----------------" << std::endl;

    Player player;
    player.m_full_name = "Samuel Jackson";
    // player.m_age = 55;  Compiler error
    // player.m_address = "34234"; Compiler error

    std::cout << "-----------------" << std::endl;

    Nurse nurse1;
    // nurse1.m_full_name = "Davy Jhones"; Compiler error
    // nurse1.m_age = 51;   Compiler error

    std::cout << "-----------------" << std::endl;

    Engineer engineer1;
    //engineer1.m_full_name = "Oliver Godson"; Comoiler error
    //engineer1.m_age = 55; Compiler error
    //engineer1.m_address = "dsadasdasd"; Compiler error

    return 0;
}
