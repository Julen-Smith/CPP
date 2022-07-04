//
// Created by bgarrido42 on 6/23/22.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "Hi you created me but...\nI dont know my own name" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	this->name = name;
	std::cout << "Hi! I'm " << name << "! ^^" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << this->name << " has activated the autodestruction protocol!" << std::endl;
	std::cout <<"3!" << std::endl;
	std::cout <<"2!" << std::endl;
	std::cout <<"1!" << std::endl;
	std::cout <<"BOOM!" << std::endl;
	std::cout << "We will miss you " << this->name << " T-T" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->name << " repairs " << amount << " points of damage!" << std::endl;
	std::cout << "Now it has " << this->hitPoint << " points of life!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount) {
	this->energyPoint -= amount;
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
}