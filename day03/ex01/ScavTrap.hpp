#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>

class ScavTrap
{
private:
    std::string _name;
    int _hitPoints;
    int _maxHitPoints;
    int _energyPoints;
    int _maxEnergyPoints;
    int _level;
    int _meleeAttackDamage;
    int _rangedAttackDamage;
    int _armorDamageReduction;

public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap(void);
    ScavTrap(ScavTrap const &ft);
    ScavTrap &operator=(ScavTrap const &sc);
    void meleeAttack(std::string const &target) const;
    void rangedAttack(std::string const &target) const;
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void challengeNewComer(int index);
    void setName(std::string name);
    int getMaxHitPoints() const;
    int getHitPoints() const;
    int getEnergyPoints() const;
    int getMaxEnergyPoints() const;
    int getLevel() const;
    std::string getName() const;
    int getMeleeAttackDamage() const;
    int getRangedAttackDamage() const;
    int getArmorDamageReduction() const;
};

#endif
