//
// Created by bgarrido42 on 6/9/22.
//

#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP

#include <iostream>

class Fixed {
private:
	int value;
	static const int bits = 8;
public:
	Fixed();
	Fixed(Fixed const &other);
	~Fixed();
	Fixed &operator = (Fixed const &other);

	int getRawBits(void) const;
	void setRawBits(int const raw);

};


#endif //CPP_FIXED_HPP
