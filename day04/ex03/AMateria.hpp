#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria
{ 
    private:
      unsigned int _xp;
      std::string _type;

public:
    AMateria();
      AMateria(std::string const & type);
      AMateria(Amateria const & am);
      AMateria &operator=(Amateria const &am);
        ~AMateria();
      std::string const & getType() const; //Returns the materia type
unsigned int getXP() const; //Returns the Materia's XP
virtual AMateria* clone() const = 0;
virtual void use(ICharacter& target);
};

#endif