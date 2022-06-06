//
// Created by bgarrido42 on 6/6/22.
//
#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
	
	Zombie *z = new Zombie();
	z->set_name(name);
	return (z);
}