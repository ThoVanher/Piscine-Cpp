#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
    PowerFist();
    PowerFist(PowerFist const &pr);
    PowerFist &operator=(PowerFist const &pr);
    virtual ~PowerFist();

    virtual void attack() const;
};

#endif