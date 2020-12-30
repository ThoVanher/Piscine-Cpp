#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->_n = value << Fixed::_bits; 
}

Fixed::Fixed(const float value)
{
    std::cout << "float constructor called" << std::endl;
    this->_n = (int) roundf(value * (1 << Fixed::_bits)); 
    //roundf renvoi un arrondi entier au plus proche mais le type de retour est du même type que
    //le paramètre d'entrée (ici le float) d'ou le cast en int 
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor Called" << std::endl;
}

Fixed::Fixed(Fixed const & f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
    return ;
}

Fixed & Fixed::operator=(Fixed const & f)
{
    std::cout << "Asignation operator called" << std::endl;
    this->_n = f.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits function called" << std::endl;
    return (this->_n);
}

void Fixed::setRawBits(int const n)
{
    this->_n = n;
}

int Fixed::toInt(void) const
{
    return this->_n >> Fixed::_bits;
}

float Fixed::toFloat(void) const
{
    return this->_n / (float)(1 << Fixed::_bits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &f)
{
	o << f.toFloat();
	return o;
}