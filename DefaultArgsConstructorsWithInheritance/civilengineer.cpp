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

CivilEngineer::~CivilEngineer() 
{
    
}