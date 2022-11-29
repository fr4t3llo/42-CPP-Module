#include "Fixed.hpp"

Fixed::Fixed()
{
    fixed = 0;
}

Fixed::Fixed(const Fixed &f)
{
    *this = f;
}

Fixed &Fixed::operator= (const Fixed &f)
{
    if (this == &f)
        return *this;
    fixed = f.getRawBits();
    return *this;
}

Fixed::~Fixed(){}

int Fixed::getRawBits() const
{
    return (fixed);
}

void Fixed::setRawBits(int const raw)
{
    fixed = raw;
}

Fixed::Fixed(const int a)
{
    fixed = (int)(roundf(a * 256));
}

float Fixed::toFloat() const
{
    return ((double)this->fixed / (double)256);
}

Fixed::Fixed(const float nb)
{
    fixed = (int)(roundf(nb * 256));
    toFloat();
}

int Fixed::toInt() const
{
    return ((int)this->fixed / (int)256);
}

Fixed Fixed::operator*(const Fixed &t)
{
    Fixed tic(this->toFloat() * t.toFloat());
        return tic;
}

Fixed Fixed::operator++(void)
{
    this->fixed++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tic;
    tic = *this;

    this->fixed++;
    return *this;
}

Fixed Fixed::operator--(void)
{
    this->fixed--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tic;
    tic = *this;

    this->fixed--;
    return *this;
}

Fixed Fixed::max(const Fixed &a, const Fixed &b)
{
    return (((Fixed)a > (Fixed)b) ? a : b);
}

Fixed Fixed::max(Fixed &a, Fixed &b)
{
    return ((a.fixed > b.fixed) ? a : b);
}

Fixed Fixed::min(const Fixed &a, const Fixed &b)
{
    return ((a.fixed <= b.fixed) ? a : b);
}

Fixed Fixed::min(Fixed &a, Fixed &b)
{
    return ((a.fixed <= b.fixed) ? a : b);
}

bool Fixed::operator> (const Fixed &f)
{
    if (this->fixed > f.fixed)
        return true;
    return false;
}

bool Fixed::operator>= (const Fixed &f)
{
    if (this->fixed >= f.fixed)
        return true;
    return false;
}

bool Fixed::operator< (const Fixed &f)
{
    if (this->fixed < f.fixed)
        return true;
    return false;
}

bool Fixed::operator<= (const Fixed &f)
{
    if (this->fixed <= f.fixed)
        return true;
    return false;
}

bool Fixed::operator== (const Fixed &f)
{
    if (this->fixed == f.fixed)
        return true;
    return false;
}

bool Fixed::operator!= (const Fixed &f)
{
    if (this->fixed != f.fixed)
        return true;
    return false;
}

Fixed Fixed::operator+ (const Fixed &f)
{
    this->fixed += f.fixed;
    return *this;
}

Fixed Fixed::operator- (const Fixed &f)
{
    this->fixed -= f.fixed;
    return *this;
}

Fixed Fixed::operator/(const Fixed &f)
{
    Fixed tic (this->toFloat() / f.toFloat());
        return tic;
}



