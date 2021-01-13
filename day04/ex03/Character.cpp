#include "Character.hpp"

Character::Character()
{
    int i = -1;
    while (++i < 4)
    _inventory[i]= NULL;
}

Character::Character(std::string name) :  _name(name)
{
    int i = -1;
    while (++i < 4)
    _inventory[i]= NULL;
}

Character::Character(Character const &ca)
{
    *this = ca;
}

Character & Character::operator=(Character const &ca)
{
    int i = -1;
    if (this != &ca)
    {
        while ( ++i < 4)
        {
            if (this->_inventory[i])
            {
                delete (_inventory[i]);
            }
                _inventory[i] = ca._inventory[i]->clone();
        }
    }
    this->_name = ca._name;
}


Character::~Character()
{
    int i = -1;
    while (++i < 4)
    {
        if (this->_inventory[i])
    delete(this->_inventory[i]);
    }
}

std::string const & Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria * m)
{
    int i = -1;
    if (!m)
    return;
    while (++i < 4)
    {
        if (!this->_inventory[i])
        {
        _inventory[i] = m;
        break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > _max_inventory)
    return;
    this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL)
    this->_inventory[idx]->use(target);
}