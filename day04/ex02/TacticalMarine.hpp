#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine
{
    TacticalMarine();
    TacticalMarine(TacticalMarine const &tm);
    TacticalMarine &operator=(TacticalMarine const &tm);
    ~TacticalMarine(){};

    ISpaceMarine *clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};
#endif