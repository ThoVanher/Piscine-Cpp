#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &spm)
{
    std::cout << "SuperMutant copy called" << std::endl;
    *this = spm;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &spm)
{
    Enemy::operator=(spm);
    std::cout << "Supermutant Assignation called" << std::endl;
    return *this;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh ..." << std::endl;
}

void SuperMutant::takeDamage(int amount)
{
    if (this->getHP() > 0 && this->getHP() < amount - 3 && amount >= 3)
    {
        this->setHP(0);
    }
    else if (this->getHP() > 0 && this->getHP() >= amount - 3 && amount >= 3)
    {
        this->setHP(this->getHP() - amount + 3);
    }
}
