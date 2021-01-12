#include "AMateria.hpp"

Amateria::Amateria() : _xp(0), _type("")
{
}

AMateria::Amateria(std::string const &type) : _xp(0), _type(type)
{
}

AMateria::AMateria(Amateria const & am)
{
*this = am;
}

AMateria &AMateria::operator=(AMateria const &am)
{
this->_xp = am.getXP();
this->_type = am.getType();
return *this;
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
return (this->_type);
}

unsigned int AMateria::getXP() const
{
    return (this->_xp);
}

virtual void AMateria::use(ICharacter& target)
{
    if (this->getType().compare("Ice") == 0)
    std::cout<<"*shoots an ice bolt at " << target.getName() << " *" << std::endl;
    if (this->getType().compare("Cure") == 0)
    std::cout<<"* heals "<< target.getName() << "’s wounds *" << std::endl;
    _xp += 10;
}

