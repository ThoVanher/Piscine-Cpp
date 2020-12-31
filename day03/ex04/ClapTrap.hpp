#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{

protected:
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
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(std::string name, int HP, int mHP, int EP, int mEP, int level, int MAD, int RAD, int ADR);
    ~ClapTrap(void);
    ClapTrap(ClapTrap const &ft);
    ClapTrap &operator=(ClapTrap const &ft);
    void meleeAttack(std::string const &target) const;
    void rangedAttack(std::string const &target) const;
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
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
