#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
class HumanA
{
private:
    std::string _name;
    Weapon &_AWeapon;

public:
    HumanA(std::string name, Weapon &w);
    ~HumanA();
    void attack();
};

#endif
