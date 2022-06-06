#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon Weapon)
{
	this->name = name;
	this->weapon = Weapon;
}

HumanA::~HumanA(){}

void HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
