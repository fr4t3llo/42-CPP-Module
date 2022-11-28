#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int                 fixed;
        static const int    fracbits;
    public:
        Fixed();
        Fixed(const int num);
        Fixed(const float float_num);
        Fixed(const Fixed &f);
        ~Fixed();
        Fixed& operator= (const Fixed& obj);
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream& operator<< (std::ostream& out, const Fixed& fix);

#endif