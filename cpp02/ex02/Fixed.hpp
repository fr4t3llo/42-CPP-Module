#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int fixed;
        static const int fracbits;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &f);
        Fixed &operator= (const Fixed &f);
        Fixed (const float a);
        Fixed (const int nb);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        
        bool operator> (const Fixed& f);
        bool operator< (const Fixed& f);
        bool operator>= (const Fixed& f); // operator overload
        bool operator<= (const Fixed& f);
        bool operator== (const Fixed& f);
        bool operator!= (const Fixed& f);
        Fixed operator+ (const Fixed& f);
        Fixed operator- (const Fixed& f);
        Fixed operator* (const Fixed& f);
        Fixed operator/ (const Fixed& f);
        Fixed operator-- (int);
        Fixed &operator-- (void);
        Fixed operator++ (int);
        Fixed &operator++ (void);

        static Fixed max(const Fixed &a, const Fixed &b);
        static Fixed min(const Fixed &a, const Fixed &b);
        static Fixed max(Fixed &a, Fixed &b);
        static Fixed min(Fixed &a, Fixed &b);
};

std::ostream& operator<< (std::ostream& out, const Fixed& fix);

#endif