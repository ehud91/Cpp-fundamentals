#include "person.h"
#include "engineer.h"
#include "civilengineer.h"
#include <iostream>

CivilEngineer::CivilEngineer()
{
    std::cout << "Default constructor called for CivilEngineer called..." << std::endl;
}

std::ostream& operator<<(std::ostream& out, const CivilEngineer& operand) {
    out << "CivilEngineer [ Full name : " << operand.get_full_name() <<
            ", age : " << operand.get_age() <<
            ", address : " << operand.get_address() <<
            ", speciality : " << operand.m_speciality << "]";
    return out;
}

CivilEngineer::CivilEngineer(std::string_view fullname, int age,
        std::string_view address, int contract_count, std::string_view speciality) :
        Engineer(fullname, age, address, contract_count), m_speciality(speciality)
        {
            std::cout << "Custom constructor called for CivilEngineer ..." << std::endl;
        }

CivilEngineer::~CivilEngineer() 
{
    
}