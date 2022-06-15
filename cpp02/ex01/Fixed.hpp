//
// Created by bgarrido42 on 6/9/22.
//

#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP

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

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void) const;
	int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif //CPP_FIXED_HPP
