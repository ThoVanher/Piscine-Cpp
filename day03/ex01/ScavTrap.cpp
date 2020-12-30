#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _name("SC4V-TP"), _hitPoints(100), _maxHitPoints(100), _energyPoints(50),
                       _maxEnergyPoints(50), _level(1), _meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3)
{
    std::cout << "Default constructor called, " << _name << " ready to challenge you" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(50),
                                       _maxEnergyPoints(50), _level(1), _meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3)
{
    std::cout << "SC4V-TP[" << name << "] ready to challenge you" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "SC4V-TP[" << this->getName() << "] quit his job" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &ft)
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
    std::cout << "Assignation function called for a SC4V-TP" << std::endl;
    return *this;
}

ScavTrap::ScavTrap(ScavTrap const &ft)
{
    *this = ft;
    std::cout << "ScavTrap [twin " << ft.getName() << "] created" << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target) const
{
    std::cout << "SC4V-TP " << this->getName() << " paralyse " << target << " with ultrasound causing "
              << this->_rangedAttackDamage << " points of damages !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target) const
{
    std::cout << "SC4V-TP " << this->getName() << " tackle  " << target << " causing "
              << this->_meleeAttackDamage << " points of damages !" << std::endl;
}

void ScavTrap::challengeNewComer(int index)
{
    std::string cmd;
    std::cout << "SC4V-TP[" << this->getName() << "] : Hey new comer, I'll challenge you with one of my 3 entry test, if you fail you'll go back to where you're coming" << std::endl
              << std::endl;
    if (index == 0)
    {
        std::cout << "Math quiz : what is the square root of 381 ? " << std::endl;
        std::cin >> cmd;
        if (cmd.compare("19") == 0)
            std::cout << "Congrat's, come in" << std::endl;
        else
            std::cout << "answer was '19', you're an idiot, get back, ciao ! " << std::endl;
    }
    if (index == 1)
    {
        std::cout << "write correctly the word 'aurnitor1ke' in a good french" << std::endl;
        std::cin >> cmd;
        if (cmd.compare("ornithorynque") == 0)
            std::cout << "Well done !! Come in ! " << std::endl;
        else
            std::cout << "wrong, return to your mother skirts and learn french !" << std::endl;
    }
    if (index == 2)
    {
        std::cout << "I don't why but you seem to be a good guy, the easiest test for you" << std::endl;
        std::cout << "what is my name ?" << std::endl;
        std::cin >> cmd;
        if (cmd.compare(this->getName()) == 0)
            std::cout << "Like i said, easy ! come in ! " << std::endl;
        else
            std::cout << "I was wrong you're not the guy i thought, go back to read the main" << std::endl;
    }
    std::cout << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
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

void ScavTrap::beRepaired(unsigned int amount)
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

void ScavTrap::setName(std::string name)
{
    this->_name = name;
}
int ScavTrap::getHitPoints() const
{
    return this->_hitPoints;
}

int ScavTrap::getMaxHitPoints() const
{
    return this->_maxHitPoints;
}

int ScavTrap::getEnergyPoints() const
{
    return this->_energyPoints;
}

int ScavTrap::getMaxEnergyPoints() const
{
    return this->_maxEnergyPoints;
}

int ScavTrap::getLevel() const
{
    return this->_level;
}

std::string ScavTrap::getName() const
{
    return this->_name;
}

int ScavTrap::getMeleeAttackDamage() const
{
    return this->_meleeAttackDamage;
}

int ScavTrap::getRangedAttackDamage() const
{
    return this->_rangedAttackDamage;
}

int ScavTrap::getArmorDamageReduction() const
{
    return this->_armorDamageReduction;
}
