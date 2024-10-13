#include "person.h"
#include "engineer.h"
#include <iostream>

Engineer::Engineer()
{
}

std::ostream& operator<<(std::ostream& out, const Engineer& operand) {
    out << "Engineer [ Full name : " << operand.get_full_name() << std::endl;
                //", age : " << oprand.get_age() <<
                //", address : " << oprand.get_address() <<
                //", contract_count : " << operand.contract_count << "]";
    return out;
}


Engineer::~Engineer()
{
}

