#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

class FragTrap
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
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap(void);
    FragTrap(FragTrap const &ft);
    FragTrap &operator=(FragTrap const &ft);
    void meleeAttack(std::string const &target) const;
    void rangedAttack(std::string const &target) const;
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const &target);
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