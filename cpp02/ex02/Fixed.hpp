//
// Created by bgarrido42 on 6/9/22.
//

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int value;
	static const int bits = 8;
public:
	Fixed();
	Fixed(Fixed const &other);
	Fixed(int const value);
	Fixed(float const value);
	~Fixed();

	Fixed &operator = (Fixed const &other);

	//Arithmetic operators
	Fixed operator+(const Fixed &other);
	Fixed operator-(const Fixed &other);
	Fixed operator*(const Fixed &other);
	Fixed operator/(const Fixed &other);

	//Comparision operators
	bool operator>(const Fixed &other) const;
	bool operator<(const Fixed &other) const;
	bool operator>=(const Fixed &other) const;
	bool operator<=(const Fixed &other) const;
	bool operator==(const Fixed &other) const;
	bool operator!=(const Fixed &other) const;

	//pre-increment, post-increment, pre-decrement and post-decrement operators
	Fixed operator++();
	Fixed operator++(int);
	Fixed operator--();
	Fixed operator--(int);

	//static member functions
	static const Fixed min(Fixed const &a, Fixed const &b);
	static const Fixed max(Fixed const &a, Fixed const &b);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void) const;
	int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif //CPP_FIXED_HPP
