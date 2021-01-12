#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
class AWeapon
{
private:
    std::string _name;
    int _apcost;
    int _damage;

public:
    AWeapon();
    AWeapon(std::string const &name, int apcost, int damage);
    AWeapon(AWeapon const &aw);
    AWeapon &operator=(AWeapon const &aw);
    virtual ~AWeapon();
    std::string const getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;
};

#endif