#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
}

Zombie::~Zombie()
{
    if (this->_where == 1)
        std::cout << "Zombie Killer called : sa copie mort sur la stack ! snif" << std::endl;
    if (this->_where == 2)
        std::cout << "Zombie Killer called : Un zombie mort sur la heap! snif" << std::endl;
}

void Zombie::announce() const
{
    std::cout << "< " << this->getName() << " (" << this->getType() << ") >  "
              << "chuubakaaaaaa" << std::endl;
}

std::string Zombie::getName() const
{
    return _name;
}
std::string Zombie::getType() const
{
    return _type;
}

void Zombie::setWhere(int where)
{
    this->_where = where;
}

Zombie Zombie::randomChump()
{
    std::string names[5] = {"Brandon", "Dylan", "Jason", "Bryan", "Preston"};
    int index;
    index = rand() % 5;
    Zombie myZombie(names[index], "LaCrèmeDesZombies");
    myZombie.announce();
    myZombie.setWhere(1);
    return (myZombie);
}