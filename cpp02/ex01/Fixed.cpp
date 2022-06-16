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
/**
 * parametric constructor with int
 *
 * In order to be able to safe correctly the value we must leftshift it this way
 * https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
*/
Fixed::Fixed(const int value) : value(value << Fixed::bits) {
	return;
}

/**
 * parametric constructor with float
 *
 * In order to be able to save correctly the value we must left shift it
 * https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
 * */

Fixed::Fixed(float const value) : value(roundf(value * (1 << Fixed::bits))){}

//Destructor
Fixed::~Fixed(){}

//Assignation operator overload
//Basically asigning to the Fixed number we are calling the value of other (Copy it)
Fixed &Fixed::operator=(Fixed const &other)
{
	this->value = other.getRawBits();
	return (*this);
}
//ostream operator in order to be able to print whatever we want by trying to print directly de Fixed object
std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return (out);
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

/**
 * This formula is used to translate from binary to integer N = N/(2^x)
 * where N is the value of Fixed and x is the value of the bits shift
 * https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
 * https://www.geeksforgeeks.org/left-shift-right-shift-operators-c-cpp/
 * */
int Fixed::toInt() const {
	return (this->value >> Fixed::bits);
}

/**
 * First we must get the left shift value of 1 in the bits asigned to fixed
 * The formula of tit is N = N * (2^x)
 * Where N is the value we want to shift and x is the number <<of the bits to shift
 * https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
 * https://www.geeksforgeeks.org/left-shift-right-shift-operators-c-cpp/
 * */
float Fixed::toFloat() const {
	return((float) this->value / (float ) (1 << Fixed::bits));
}