#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include <iostream>
#include "Zombie.hpp"
class ZombieEvent
{
private:
    std::string _type;

public:
    ZombieEvent();
    ~ZombieEvent();

    std::string setZombieType(std::string type);
    std::string getType() const;
    Zombie *newZombie(std::string name);
};
#endif