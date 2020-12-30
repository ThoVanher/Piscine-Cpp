#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << "Zombie Killer called : " << this->_name << " has gone !snif " << std::endl;
}

void Zombie::announce() const
{
    std::cout << "< " << this->getName() << " (" << this->getType() << ") >  ";
    if (this->getType().compare("laCrèmeDesZombies") == 0)
        std::cout << "chuubakaaaaaa" << std::endl;
    else if (this->getType().compare("lesZombiesCoinCoin") == 0)
        std::cout << "coooiincoooooiiin" << std::endl;
    else if (this->getType().compare("lesZombiesDuTurfu") == 0)
        std::cout << "Braaaainnss" << std::endl;
}

std::string Zombie::getName() const
{
    return _name;
}
std::string Zombie::getType() const
{
    return _type;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}

void Zombie::setType(std::string type)
{
    this->_type = type;
}

void Zombie::setWhere(int where)
{
    this->_where = where;
}

void Zombie::randomChump()
{
    int index;
    int index2;
    std::string names[5] = {"Brandon", "Dylan", "Jason", "Bryan", "Preston"};
    std::string types[3] = {"laCrèmeDesZombies", "lesZombiesCoinCoin", "lesZombiesDuTurfu"};
    index = rand() % 5;
    index2 = rand() % 3;
    this->setName(names[index]);
    this->setType(types[index2]);
}