#include "person.h"
#include "engineer.h"
#include <iostream>

Engineer::Engineer()
{
    std::cout << "Default constructor for Engineer called..." << std::endl;
}

Engineer::Engineer(std::string_view full_name, int age,
    std::string_view address, int contract_count_param) :
    Person(full_name, age, address), contract_count(contract_count_param)
    {
        std::cout << "Custom constructor called for CivilEnginner ... " << std::endl;
    }

std::ostream& operator<<(std::ostream& out, const Engineer& operand) {
    out << "Engineer [ Full name : " << operand.get_full_name() << 
                //", age : " << oprand.get_age() <<
                //", address : " << oprand.get_address() <<
                ", contract_count : " << operand.contract_count << "]";
    return out;
}

/*
// BAD
Engineer::Engineer(const Engineer& source)
    : contract_count(source.contract_count)
{
    std::cout << "Custom constructor for Engineer called... " << std::endl;
}
*/

/*
Engineer::Engineer(const Engineer& source)
    : Person(source.m_full_name, source.m_age, source.get_address())
    , contract_count(source.contract_count)
{
    std::cout << "Custom constructor for Engineer called... " << std::endl;
}
*/

Engineer::Engineer(const Engineer& source)
    : Person(source)
    , contract_count(source.contract_count)
{
    std::cout << "Custom constructor for Engineer called... " << std::endl;
}


Engineer::~Engineer()
{
}

