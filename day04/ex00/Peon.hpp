#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
public:
    Peon();
    Peon(std::string name);
    Peon(Peon const &pe);
    Peon &operator=(Peon const &pe);
    ~Peon();
    virtual void getPolymorphed() const;
};

#endif