//
// Created by bgarrido42 on 6/28/22.
//

#ifndef CPP_FRAGTRAP_HPP
#define CPP_FRAGTRAP_HPP

#include "ClapTrap.hpp"


class FragTrap : public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		void highFiveGuys(void);
};


#endif //CPP_FRAGTRAP_HPP
