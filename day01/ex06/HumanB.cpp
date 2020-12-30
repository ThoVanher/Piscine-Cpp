#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    std::cout << this->_name << " attacks with his " << this->_BWeapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &w)
{
    this->_BWeapon = &w;
}
