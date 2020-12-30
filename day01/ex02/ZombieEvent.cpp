#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

std::string ZombieEvent::getType() const
{
    return _type;
}

std::string ZombieEvent::setZombieType(std::string type)
{
    this->_type = type;
    return (this->_type);
}

Zombie *ZombieEvent::newZombie(std::string name)
{
    Zombie *bornedZombie = new Zombie(name, this->_type);
    bornedZombie->setWhere(2);
    return (bornedZombie);
}