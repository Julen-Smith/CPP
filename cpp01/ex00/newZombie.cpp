//
// Created by bgarrido42 on 6/6/22.
//
#include "Zombie.hpp"

Zombie *Zombie::newZombie(std::string name) {
	Zombie *z = new Zombie(name);

	//z.announce();
	return (z);
}