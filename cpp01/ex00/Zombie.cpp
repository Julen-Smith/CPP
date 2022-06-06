//
// Created by bgarrido42 on 6/6/22.
//

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
}
Zombie::Zombie() {}
Zombie::~Zombie(){}

void	Zombie::announce() {
	std::cout << this->name << " BraiiiiiiiiinnnzzzZ..." << std::endl;
}

