#include "SuperTrap.hpp"
#include "ClapTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap("SUP3R-TP", 100, 100, 120, 120, 1, 60, 20, 5)
{
    std::cout << "SUP3R-TP default constructor called, SUP3R-TP ready to exterminate you" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5)
{
    std::cout << "SUP3R-TP[" << name << "] ready to exterminate you" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &sp)
{
    *this = sp;
    std::cout << "SUP3R-TP[Twin " << sp.getName() << "] created" << std::endl;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &sp)
{
    ClapTrap::operator=(sp);
    std::cout << "SUP3R-TP assignation called" << std::endl;
    return *this;
}

SuperTrap::~SuperTrap()
{
    std::cout << "SUP3R-TP[" << _name << "] folded on the battlefield" << std::endl;
}

void SuperTrap::rangedAttack(std::string const &target)
{
    FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
    NinjaTrap::meleeAttack(target);
}
