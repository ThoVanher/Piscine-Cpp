#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
class Fixed
{
    private:
        int _n;
        static const int _bits = 8;

    public:
        Fixed(void);
        ~Fixed(void);
        Fixed(Fixed const & f);
        Fixed & operator=(Fixed const & f); 
        int getRawBits(void) const;
        void setRawBits(int const n);
};


#endif