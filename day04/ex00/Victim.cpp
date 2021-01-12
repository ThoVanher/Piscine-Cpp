#include "Victim.hpp"

Victim::Victim()
{
}

Victim::Victim(std::string name) : _name(name)
{
    std::cout << "A random victim called " << name << " just appeared !" << std::endl;
}

Victim::Victim(Victim const &vct)
{
    *this = vct;
    std::cout << "A random victim called " << vct.getName() << " just appeared !" << std::endl;
}

Victim &Victim::operator=(Victim const &vct)
{
    this->_name = vct.getName();
    return (*this);
}

Victim::~Victim()
{
    std::cout << "the victim " << this->getName() << " died for no apparent reasons!" << std::endl;
}

void Victim::getPolymorphed() const
{
    std::cout << this->getName() << " has been turned into in a cute little sheep!" << std::endl;
}

std::string Victim::getName(void) const
{
    return this->_name;
}

std::ostream &operator<<(std::ostream &o, Victim const &vct)
{
    o << "I am " << vct.getName() << ", and i like otters!" << std::endl;
    return o;
}