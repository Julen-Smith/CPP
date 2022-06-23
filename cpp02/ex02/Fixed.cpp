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

/**
 * Overloading operators logic get it from this page
 * https://www.tutorialspoint.com/cplusplus/cpp_overloading.htm
 * */
Fixed Fixed::operator+(const Fixed &other){
	Fixed c;
	c.value = this->value + other.value;
	return c;
}

Fixed Fixed::operator-(const Fixed &other){
	Fixed c;
	c.value = this->value - other.value;
	return c;
}

Fixed Fixed::operator*(const Fixed &other){
	Fixed c(this->toFloat() * other.toFloat());
	return c;
}

Fixed Fixed::operator/(const Fixed &other){
	Fixed c;
	c.value = (this->toFloat() / other.toFloat( ));
	return c;
}

//Comparision operators
bool Fixed::operator>(const Fixed &other) const{
	if (this->toFloat() > other.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator<(const Fixed &other) const{
	if (this->toFloat() < other.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator>=(const Fixed &other) const{
	if (this->toFloat() >= other.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator<=(const Fixed &other) const{
	if (this->toFloat() <= other.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator==(const Fixed &other) const{
	if (this->toFloat() == other.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator!=(const Fixed &other) const{
	if (this->toFloat() != other.toFloat())
		return (true);
	else
		return (false);
}

//pre-increment, post-increment, pre-decrement and post-decrement operators
//pre-increment
Fixed Fixed::operator++() {
	this->value += 1;
	return (this->toFloat());
}

//post-increment
Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

//Pre-decrement
Fixed Fixed::operator--() {
	this->value -= 1;
	return (this->toFloat());
}

//Post-decrement
Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

//Min
Fixed const Fixed::min(const Fixed &a, const Fixed &b){
	if(a < b)
		return a;
	else
		return b;
}
//Max
Fixed const Fixed::max(const Fixed &a, const Fixed &b){
	if (a > b)
		return a;
	else
		return b;
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