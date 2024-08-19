#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

//Constructor
Fixed::Fixed():_value(0)
{
	std::cout<<"Default constructor called\n";
}
Fixed::Fixed(const Fixed &fixed)
{
	std::cout<<"Copy constructor called\n";
	_value = fixed._value;
}
Fixed::Fixed(const int nParam)
{
	std::cout<<"Int constructor called\n";
	_value = nParam<<_fractionalBits;
}
Fixed::Fixed(const float fParam)
{
	std::cout<<"Float constructor called\n";
	_value = roundf(fParam * (1<<_fractionalBits));
}

//Destructor
Fixed::~Fixed()
{
	std::cout<<"Destructor called\n";
}

//member function
int Fixed::getRawBits() const
{
	return (_value);
}
void Fixed::setRawBits(int const raw)
{
	_value=raw;
}
float	Fixed::toFloat(void) const
{
	return ((static_cast<float>(_value)) / (1<<_fractionalBits));
}
int		Fixed::toInt(void) const
{
	return (_value>>_fractionalBits);
}

//operator overloading
void Fixed::operator =(const Fixed &fixed)
{
	std::cout<<"Copy assignment operator called\n";
	_value = fixed.getRawBits();
}
std::ostream&	operator<<(std::ostream &os, const Fixed &fixed)
{
	os<<fixed.toFloat();
	return (os);
}