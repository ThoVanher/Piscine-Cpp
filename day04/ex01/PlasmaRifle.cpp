#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("PlasmaRifle", 5, 21)
{
    //std::cout << "PlasmaRifle created" << std::endl;
}

PlasmaRifle::~PlasmaRifle()
{
    // std::cout << "PlasmaRifle destroyed" << std::endl;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &pr)
{
    *this = pr;
    //std::cout << "PlasmaRiflle copy created" << std::endl;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &pr)
{
    AWeapon::operator=(pr);
    return *this;
}

void PlasmaRifle::attack() const
{
    std ::cout << "* Piouuu Piouuu Piouuu *" << std::endl;
}