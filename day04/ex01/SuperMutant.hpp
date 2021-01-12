#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"
class SuperMutant : public Enemy
{

public:
    SuperMutant();
    SuperMutant(SuperMutant const &sp);
    SuperMutant &operator=(SuperMutant const &sp);
    virtual ~SuperMutant();
    virtual void takeDamage(int amount);
};

#endif