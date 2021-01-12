#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator
{
    AssaultTerminator();
    AssaultTerminator(AssaultTerminator const &at);
    AssaultTerminator &operator=(AssaultTerminator const &at);
    ~AssaultTerminator(){};

    ISpaceMarine *clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};
#endif