#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	Weapon Weapon;

	public:
		HumanB(std::string name);
		~HumanB();
		void setWeapon(class Weapon Weapon);
		void attack(void);

	private:
		std::string name;

};




#endif