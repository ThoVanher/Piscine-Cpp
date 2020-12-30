#ifndef ZOMBIE_HORDE_HPP
#define ZOMBIE_HORDE_HPP

#include "Zombie.hpp"
class ZombieHorde
{
private:
    int _n;
    Zombie *_horde;

public:
    ZombieHorde(int N);
    ~ZombieHorde();
    void announce();
};

#endif