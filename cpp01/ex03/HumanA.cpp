#include "HumanA.hpp"

/*
Initialization list
Works as doing this->element = element
Used to initialize const params
Weapon is a reference in order to be able to change the data from it independently of the 
class Human
*/

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon){}

HumanA::~HumanA(){}

void HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
