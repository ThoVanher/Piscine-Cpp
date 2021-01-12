#include "AWeapon.hpp"
AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::AWeapon(AWeapon const &aw)
{
    *this = aw;
    std::cout << "Copy Weapon called" << std::endl;
}
AWeapon &AWeapon::operator=(AWeapon const &aw)
{
    this->_name = aw.getName();
    this->_apcost = aw.getAPCost();
    this->_damage = aw.getDamage();
    return *this;
}

AWeapon::~AWeapon()
{
    std::cout << "Arme destroyed" << std::endl;
}

std::string const AWeapon::getName() const
{
    return this->_name;
}

int AWeapon::getAPCost() const
{
    return this->_apcost;
}

int AWeapon::getDamage() const
{
    return this->_damage;
}