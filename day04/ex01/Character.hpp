#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"
class Character
{
private:
    std::string _name;
    int _ap;
    AWeapon *_weapon;

public:
    Character();
    Character(std::string name);
    Character(Character const &c);
    Character &operator=(Character const &c);
    ~Character();
    void recoverAP();
    void attack(Enemy *);
    void equip(AWeapon *);
    std::string getName() const;
    int getAP() const;
    AWeapon *getWeapon() const;
};

std::ostream &operator<<(std::ostream &o, Character const &c);

#endif