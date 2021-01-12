#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("PowerFist", 8, 50)
{
    // std::cout << "PowerFist created" << std::endl;
}

PowerFist::~PowerFist()
{
    // std::cout << "PowerFist destroyed" << std::endl;
}

PowerFist::PowerFist(PowerFist const &pf)
{
    *this = pf;
    // std::cout << "PowerFist copy created" << std::endl;
}

PowerFist &PowerFist::operator=(PowerFist const &pf)
{
    AWeapon::operator=(pf);
    return *this;
}

void PowerFist::attack() const
{
    std ::cout << "*Pschhhh SBAM! *" << std::endl;
}