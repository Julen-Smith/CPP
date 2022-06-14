//
// Created by bgarrido42 on 6/9/22.
//

#include "Fixed.hpp"

//Constructor
Fixed::Fixed()
{
	std::cout << "Default constructor" << std::endl;
	this->value = 0;
}

//Copy constructor
Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor" << std::endl;
	this->value = other.getRawBits();
}

//Destructor
Fixed::~Fixed(){
	std::cout << "Destructor" << std::endl;
}

//Assignation operator overload
//Basically asigning to the Fixed number we are calling the value of other (Copy it)
//Object B = Object A
Fixed &Fixed::operator=(Fixed const &other)
{
	std::cout << "Operator" << std::endl;

	if (this != &other)
		this->value = other.getRawBits();
	return (*this);
}

//getter
int Fixed::getRawBits(void) const
{
	std::cout << "This is the value" << std::endl;
	return (this->value);
}
//setter
void Fixed::setRawBits(int const raw)
{
	std::cout << "Setter" << std::endl;
	this->value = raw;
}