#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
Cure();
Cure(Cure const &cu);
Cure &operator=(Cure const &cu);
~Cure();
virtual Cure* clone() const;
};

#endif