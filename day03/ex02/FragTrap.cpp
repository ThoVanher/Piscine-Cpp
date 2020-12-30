#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FR4G-TP", 100, 100, 100, 100, 1, 30, 20, 5)
{
    std::cout << "Default constructor called, " << _name << " ready to kill" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
    std::cout << "FR4G-TP[" << name << "] ready to kill" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FR4G-TP[" << this->getName() << "] has gone" << std::endl;
}

FragTrap::FragTrap(FragTrap const &ft)
{
    *this = ft;
    std::cout << "FR4G-TP[twin " << ft.getName() << "] created" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &ft)
{
    std::cout << "FR4G-TP assignation called" << std::endl;
    ClapTrap::operator=(ft);
    return *this;
}

void FragTrap::rangedAttack(std::string const &target) const
{
    std::cout << "FR4G-TP " << this->getName() << " attack " << target << " with Aya Nakamura's sound causing "
              << getRangedAttackDamage() << " points of damages !" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target) const
{
    std::cout << "FR4G-TP " << this->getName() << " attack " << target << " whith a mawashi geri kick causing "
              << getMeleeAttackDamage() << " points of damages !" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    int index;
    index = rand() % 5;
    std::string attack[5] = {"short circuit", "malware", "flying bolt", "blinding flash", "ultrasound"};
    if (this->_energyPoints < 25)
        std::cout << this->getName() << " hasn't enough energy to launch an attack" << std::endl;
    else
    {
        this->_energyPoints = this->_energyPoints - 25;
        std::cout << "FR4G-TP " << this->getName() << " launch an attack " << attack[index]
                  << " against " << target
                  << ", this one cost him 25 energy points, he has from now on "
                  << this->_energyPoints << std::endl;
    }
}
