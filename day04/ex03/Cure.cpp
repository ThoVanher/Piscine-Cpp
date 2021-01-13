#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const & cu)
{
    *this = cu;
}

Cure &Cure::operator=(Cure const & cu)
{
AMateria::operator=(cu);
return (*this);
}

Cure::~Cure()
{
}

Cure * Cure::clone() const
{
return (new Cure());
}