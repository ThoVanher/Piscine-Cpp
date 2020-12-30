#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &club) : _name(name), _AWeapon(club)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << this->_name << " attacks with his " << this->_AWeapon.getType() << std::endl;
}
