#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	/*
	Due to the option of not havinng a Weapon this Human has a pointer of it
	This is 'cause a pointer could be null but a reference would never be null
	If the pointer is up here it gets the data from a random object initialized
	with a previous object in the main whit out even need to do any set.
	*/
		

	public:
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon &weapon);
		void attack(void);

	private:
		std::string name;
		Weapon *weapon;
};




#endif