#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("CL4P-TP"), _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(0),
                       _meleeAttackDamage(50), _rangedAttackDamage(50), _armorDamageReduction(15)
{
    std::cout << "A CL4P-TP is born" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(0),
                                       _meleeAttackDamage(50), _rangedAttackDamage(50), _armorDamageReduction(15)
{
    std::cout << "A CL4P-TP[" << name << "] is born" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int HP, int mHP, int EP, int mEP, int level, int MAD, int RAD, int ADR)
    : _name(name), _hitPoints(HP), _maxHitPoints(mHP), _energyPoints(EP), _maxEnergyPoints(mEP), _level(level),
      _meleeAttackDamage(MAD), _rangedAttackDamage(RAD), _armorDamageReduction(ADR)
{
    std::cout << "A CL4P-TP named " << name << " is born, but which type is he ? " << std::endl;
}

ClapTrap::~ClapTrap()
{
    if (this->getLevel() == 1)
        std::cout << this->getName() << "'s mother passed away" << std::endl;
    else
        std::cout << "CL4P-TP[" << this->getName() << "] passed away" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &ft)
{
    *this = ft;
    std::cout << "CL4P-TP [twin " << ft.getName() << "] created" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &ft)
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
    std::cout << "CL4P-TP assignation called" << std::endl;
    return *this;
}

void ClapTrap::rangedAttack(std::string const &target) const
{
    std::cout << "CL4P-TP " << this->getName() << " attack " << target << " with rangedAttack causing "
              << getRangedAttackDamage() << " points of damages !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target) const
{
    std::cout << "CL4P-TP " << this->getName() << " attack " << target << " with melleeAttack causing "
              << getMeleeAttackDamage() << " points of damages !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
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

void ClapTrap::beRepaired(unsigned int amount)
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

void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

int ClapTrap::getHitPoints() const
{
    return this->_hitPoints;
}

int ClapTrap::getMaxHitPoints() const
{
    return this->_maxHitPoints;
}

int ClapTrap::getEnergyPoints() const
{
    return this->_energyPoints;
}

int ClapTrap::getMaxEnergyPoints() const
{
    return this->_maxEnergyPoints;
}

int ClapTrap::getLevel() const
{
    return this->_level;
}

std::string ClapTrap::getName() const
{
    return this->_name;
}

int ClapTrap::getMeleeAttackDamage() const
{
    return this->_meleeAttackDamage;
}

int ClapTrap::getRangedAttackDamage() const
{
    return this->_rangedAttackDamage;
}

int ClapTrap::getArmorDamageReduction() const
{
    return this->_armorDamageReduction;
}
