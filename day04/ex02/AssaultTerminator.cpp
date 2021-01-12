#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &at)
{
    *this = at;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &at)
{
    return (*this);
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I’ll be back ..." << std::endl;
}

ISpaceMarine *AssaultTerminator::clone() const
{
    return ((ISpaceMarine *)new AssaultTerminator());
}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. Purify it !" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attaque with chainfists *" << std::endl;
}
