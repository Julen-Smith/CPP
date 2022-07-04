//
// Created by bgarrido42 on 6/23/22.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	this->energyPoint = 50;
	this->hitPoint = 100;
	this->attackDamage = 20;
	std::cout << "Hi I'm scavTrap" << std::endl;
}
ScavTrap::~ScavTrap() {
	std::cout << "Beep, boop, buup. Goodbye to your moon" <<std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "YOU SHALL NOT PASS!!!!" << std::endl;
}