#include "HumanB.hpp"

	HumanB::HumanB(std::string name){
		this->name = name;
	}

	HumanB::~HumanB(){}

	void HumanB::attack(void)
	{
		if (this->Weapon.getType() == "")
			std::cout << this->name << " attacks with his COCK" << std::endl;
		else
			std::cout << this->name << " attacks with his " << this->Weapon.getType() << std::endl;
	}

	void HumanB::setWeapon(class Weapon Weapon)
	{
		this->Weapon = Weapon;
	}