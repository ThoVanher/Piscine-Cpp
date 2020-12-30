#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed
{
    private:
        int _n;
        static const int _bits = 8;

    public:
        Fixed(void);
        ~Fixed(void);
        Fixed(Fixed const & f);
        Fixed(const int value);
        Fixed(const float value);
        Fixed & operator=(Fixed const & f); 
        int getRawBits(void) const;
        void setRawBits(int const n);
        int toInt(void) const;
        float toFloat(void) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &f);

#endif