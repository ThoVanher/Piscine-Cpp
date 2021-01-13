#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"


class Character : public ICharacter
{
private:
    int _max_inventory = 4;
    std::string _name;
    AMateria *_inventory[4];

public:
    Character();
    Character(std::string name);
    Character(Character const &ca);
    Character &operator=(Character const &ca);
    ~Character();

    std::string const & getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};




#endif