#include "Fixed.hpp"

//Constructor
Fixed::Fixed():_value(0){
	std::cout<<"Default constructor called\n";
}
Fixed::Fixed(const Fixed &fixed){
	std::cout<<"Copy constructor called\n";
	_value = fixed.getRawBits();
}

//Destructor
Fixed::~Fixed(){
	std::cout<<"Destructor called\n";
}

//member function
int Fixed::getRawBits() const {
	std::cout<<"getRawBits member function called\n";
	return _value;
}
void Fixed::setRawBits(int const raw){
	_value=raw;
}

//operator overloading
void Fixed::operator =(const Fixed &fixed){
	std::cout<<"Copy assignment operator called\n";
	_value = fixed.getRawBits();
}

const int Fixed::_fractionalBits = 0;