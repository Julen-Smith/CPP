//
// Created by bgarrido42 on 6/9/22.
//

#include "Fixed.hpp"

//Constructor
Fixed::Fixed()
{
	this->value = 0;
}

//Copy constructor
Fixed::Fixed(Fixed const &other)
{
	this->value = other.getRawBits();
}

//parametric constructor with float

Fixed::Fixed(const int value) {}

//parametric constructor with int
Fixed::Fixed(int const value) {}

//Destructor
Fixed::~Fixed(){}

//Assignation operator overload
//Basically asigning to the Fixed number we are calling the value of other (Copy it)
Fixed &Fixed::operator=(Fixed const &other)
{
	this->value = other.getRawBits();
	return (*this);
}

//getter
int Fixed::getRawBits(void) const
{
	return (this->value);
}
//setter
void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

int Fixed::toInt() const {}

float Fixed::toFloat() const {}