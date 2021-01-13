#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
Ice();
Ice(Ice const &ic);
Ice &operator=(Ice const & ic);
~Ice();
virtual Ice* clone() const;
};

#endif