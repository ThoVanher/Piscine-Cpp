#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{

public:
    PlasmaRifle();
    PlasmaRifle(PlasmaRifle const &pr);
    PlasmaRifle &operator=(PlasmaRifle const &pr);
    virtual ~PlasmaRifle();

    virtual void attack() const;
};

#endif