#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType()
{
    return this->_type;
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}