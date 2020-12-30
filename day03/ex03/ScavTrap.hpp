#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap(void);
    ScavTrap(ScavTrap const &ft);
    ScavTrap &operator=(ScavTrap const &ft);
    void meleeAttack(std::string const &target) const;
    void rangedAttack(std::string const &target) const;
    void challengeNewComer(int index);
};

#endif
