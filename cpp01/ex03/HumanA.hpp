#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	Weapon weapon;

	public:
		HumanA(std::string name, Weapon Weapon );
		~HumanA();
		void attack(void);
	private:
		std::string name;
};


#endif