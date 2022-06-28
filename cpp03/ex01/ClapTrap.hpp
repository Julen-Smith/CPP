//
// Created by bgarrido42 on 6/23/22.
//

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:
		std::string name;
		int hitPoint = 100;
		int attackDamage = 30;
		int energyPoint = 100;
};


#endif //CLAPTRAP_HPP
