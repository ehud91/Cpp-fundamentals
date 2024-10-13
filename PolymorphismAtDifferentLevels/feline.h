#ifndef FELINE_H
#define FELINE_H
#include "animal.h"

class Feline : public Animal
{
    public:
        Feline() = default;
        Feline(std::string_view fur_style, std::string_view description);
        ~Feline();

        virtual void run() const {
            std::cout << "Feline " << m_description << " is runnin" << std::endl;
        }

        std::string m_fur_style;
};

#endif //FELINE_H