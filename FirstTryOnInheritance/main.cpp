#include <iostream>
#include "player.h"


int main() {

    Player p1("basketball");
    p1.set_first_name("Jhon");
    p1.set_last_name("Snow");
    std::cout << "player : " << p1 << std::endl;
    return 0;
}
