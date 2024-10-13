#include "feline.h"

Feline::Feline(std::string_view m_fur_style, std::string_view description)
        : Animal(description), m_fur_style(m_fur_style)
{

}

Feline::~Feline()
{
    
}