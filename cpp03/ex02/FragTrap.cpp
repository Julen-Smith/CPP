//
// Created by bgarrido42 on 6/28/22.
//

#include "FragTrap.hpp"

FragTrap::FragTrap() {}
FragTrap::FragTrap(std::string name) : ClapTrap(name){
	this->attackDamage = 30;
	this->hitPoint = 100;
	this->energyPoint = 100;
	std::cout << "Hi! I FragTrap" << std::endl;
}
FragTrap::~FragTrap() {
	std::cout << "FragTrap destroyed!" << std::endl;
}

void FragTrap::highFiveGuys() {
	std::cout << "Hi five guys!" << std::endl;
}