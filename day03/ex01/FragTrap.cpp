#include "FragTrap.hpp"

FragTrap::FragTrap() : _name("FR4G-TP"), _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
                       _maxEnergyPoints(100), _level(1), _meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5)
{
    std::cout << "Default constructor called, " << _name << " ready to kill" << std::endl;
}

FragTrap::FragTrap(std::string name) : _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
                                       _maxEnergyPoints(100), _level(1), _meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5)
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
    this->_hitPoints = ft.getHitPoints();
    this->_maxHitPoints = ft.getMaxHitPoints();
    this->_energyPoints = ft.getEnergyPoints();
    this->_maxEnergyPoints = ft.getMaxEnergyPoints();
    this->_level = ft.getLevel();
    this->_name = ft.getName();
    this->_meleeAttackDamage = ft.getMeleeAttackDamage();
    this->_rangedAttackDamage = ft.getRangedAttackDamage();
    this->_armorDamageReduction = ft.getArmorDamageReduction();
    std::cout << "Assignation function called for a FR4G-TP" << std::endl;
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

void FragTrap::takeDamage(unsigned int amount)
{
    if (amount - this->_armorDamageReduction >= (unsigned int)this->_hitPoints)
    {
        this->_hitPoints = 0;
        std::cout << this->getName() << " is over, he has lost all of his life points" << std::endl;
    }
    else
    {
        this->_hitPoints = this->_hitPoints - (amount - this->_armorDamageReduction);
        std::cout << this->getName() << " lost " << amount - _armorDamageReduction
                  << " points of life, it is less than the " << amount
                  << " points of life he would have lost without his armor" << std::endl;
    }
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (amount + this->_hitPoints < 100)
    {
        this->_hitPoints = this->_hitPoints + amount;
        std::cout << this->getName() << " has changed some pieces, he get back " << amount << " points of life, he has from now on "
                  << this->_hitPoints << std::endl;
    }
    else
    {
        this->_hitPoints = 100;
        std::cout << this->getName() << " has all of his life points " << std::endl;
    }
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

void FragTrap::setName(std::string name)
{
    this->_name = name;
}

int FragTrap::getHitPoints() const
{
    return this->_hitPoints;
}

int FragTrap::getMaxHitPoints() const
{
    return this->_maxHitPoints;
}

int FragTrap::getEnergyPoints() const
{
    return this->_energyPoints;
}

int FragTrap::getMaxEnergyPoints() const
{
    return this->_maxEnergyPoints;
}

int FragTrap::getLevel() const
{
    return this->_level;
}

std::string FragTrap::getName() const
{
    return this->_name;
}

int FragTrap::getMeleeAttackDamage() const
{
    return this->_meleeAttackDamage;
}

int FragTrap::getRangedAttackDamage() const
{
    return this->_rangedAttackDamage;
}

int FragTrap::getArmorDamageReduction() const
{
    return this->_armorDamageReduction;
}
