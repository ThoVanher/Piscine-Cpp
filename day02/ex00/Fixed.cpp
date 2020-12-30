#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0)
{
    std::cout << "Default constructor called" << std::endl;
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