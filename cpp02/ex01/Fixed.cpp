#include "Fixed.hpp"

const int Fixed::fracbits = 8;


Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float float_num)
{
    std::cout << "Float constructor called" << std::endl;
    fixed = roundf(float_num * (1 << this->fracbits));
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    fixed = num << fracbits;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed& Fixed::operator= (const Fixed& obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed = obj.fixed;
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<< (std::ostream& out, const Fixed& fix)
{
    out << fix.toFloat();
    return out;
}

float Fixed::toFloat( void ) const
{
    return ( (float)this->fixed / (1 << this->fracbits));
}

int Fixed::toInt( void ) const
{
    return (this->fixed >> this->fracbits);
}