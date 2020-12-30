#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{

public:
    NinjaTrap();
    NinjaTrap(std::string name);
    ~NinjaTrap(void);
    NinjaTrap(NinjaTrap const &ft);
    NinjaTrap &operator=(NinjaTrap const &ft);
    void meleeAttack(std::string const &target) const;
    void rangedAttack(std::string const &target) const;
    void ninjaShoebox(ClapTrap &clp) const;
    void ninjaShoebox(FragTrap &frg) const;
    void ninjaShoebox(ScavTrap &scv) const;
    void ninjaShoebox(NinjaTrap &nnj) const;
    void setRangedAttackDamage(int newdamage);
};

#endif