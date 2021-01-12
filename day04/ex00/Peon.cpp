
#include "Peon.hpp"

Peon::Peon()
{
}

Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &pe)
{
    *this = pe;
    std::cout << "Zog zog." << std::endl;
}

Peon &Peon::operator=(Peon const &pe)
{
    Victim::operator=(pe);
    return (*this);
}

Peon::~Peon()
{
    std::cout << "Bleaurk..." << std::endl;
}

void Peon::getPolymorphed() const
{
    std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}
