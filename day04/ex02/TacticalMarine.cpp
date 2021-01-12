#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &tm)
{
    *this = tm;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &tm)
{
    return (*this);
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh ..." << std::endl;
}

ISpaceMarine *TacticalMarine::clone() const
{
    return ((ISpaceMarine *)new TacticalMarine());
}

void TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with chainsword *" << std::endl;
}