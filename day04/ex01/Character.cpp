#include "Character.hpp"

Character::Character() : _name("Character"), _ap(40), _weapon(NULL)
{
    //std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name), _ap(40), _weapon(NULL)
{
    // std::cout << "Character [ " << name << " ] is born" << std::endl;
}

Character::Character(Character const &c)
{
    *this = c;
    std::cout << "Charactere [Twin " << c.getName() << "] created" << std::endl;
}

Character &Character::operator=(Character const &c)
{
    this->_name = c.getName();
    this->_ap = c.getAP();
    this->_weapon = c.getWeapon();
    return *this;
}

Character::~Character()
{
    std::cout << "Character[ " << this->getName() << " ] just died" << std::endl;
}

void Character::recoverAP()
{
    if (this->_ap + 10 <= 40)
        this->_ap += 10;
    else
        this->_ap = 40;
}

void Character::attack(Enemy *en)
{
    if (en && _weapon != 0 && _ap >= _weapon->getAPCost())
    {
        std::cout << _name << " has attack " << en->getType() << " with " << _weapon->getName() << std::endl;
        _weapon->attack();
        en->takeDamage(_weapon->getDamage());
        if (en->getHP() == 0)
            delete (en);
        _ap -= _weapon->getAPCost();
    }
    else if (_weapon != 0 && _ap < _weapon->getAPCost())
        std::cout << "Character doesn't have enough AP to lauchn an attack" << std::endl;
}

void Character::equip(AWeapon *weapon)
{
    this->_weapon = weapon;
}

std::string Character::getName() const
{
    return this->_name;
}

int Character::getAP() const
{
    return this->_ap;
}

AWeapon *Character::getWeapon() const
{
    return this->_weapon;
}

std::ostream &operator<<(std::ostream &o, Character const &c)
{
    if (c.getWeapon() != 0)
        o << c.getName() << " has " << c.getAP() << " AP and carries a " << (c.getWeapon())->getName() << std::endl;
    else
        o << c.getName() << " has " << c.getAP() << " AP and is unarmed" << std::endl;
    return o;
}