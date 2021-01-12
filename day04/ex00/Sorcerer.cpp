#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
    std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &srcr)
{
    *this = srcr;
    std::cout << srcr.getName() << ", " << srcr.getTitle() << ", is born!" << std::endl;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &srcr)
{
    this->_name = srcr.getName();
    this->_title = srcr.getTitle();
    return *this;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::getName() const
{
    return this->_name;
}

std::string Sorcerer::getTitle() const
{
    return this->_title;
}

void Sorcerer::polymorph(Victim const &vc) const
{
    vc.getPolymorphed();
}

std::ostream &operator<<(std::ostream &o, Sorcerer const &srcr)
{
    o << "I am " << srcr.getName() << ", " << srcr.getTitle() << ", and i like ponies !" << std::endl;
    return o;
}
