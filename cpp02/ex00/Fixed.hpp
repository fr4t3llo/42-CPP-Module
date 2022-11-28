#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{

    private:
        int                 fixed;
        static const int    fracbits = 8;
    public:
        Fixed();
        Fixed(const Fixed &f);
        ~Fixed();
        Fixed& operator= (const Fixed& obj);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif