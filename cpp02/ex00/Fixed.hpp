//
// Created by bgarrido42 on 6/9/22.
//

#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP

#include <iostream>

class Fixed {

public:
	Fixed();
	Fixed(Fixed const &other);
	~Fixed();
	Fixed &operator = (Fixed const &other);

	int getRawBits(void) const;
	void setRawBits(int const raw);


private:
	int value;
	static const int bits = 8;
};

std::ostream &operator <<(std::ostream & o, Fixed const & i);

#endif //CPP_FIXED_HPP
