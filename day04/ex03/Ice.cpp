#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const & cu)
{
    *this = cu;
}

Ice &Ice::operator=(Ice const & ic)
{
AMateria::operator=(ic);
return (*this);
}

Ice::~Ice()
{
}

Ice * Ice::clone() const
{
return (new Ice());
}