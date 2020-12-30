#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap(void);
    FragTrap(FragTrap const &ft);
    FragTrap &operator=(FragTrap const &ft);
    void meleeAttack(std::string const &target) const;
    void rangedAttack(std::string const &target) const;
    void vaulthunter_dot_exe(std::string const &target);
};

#endif