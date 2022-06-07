//
// Created by bgarrido42 on 6/6/22.
//

#include "Zombie.hpp"

	
Zombie::Zombie() {}

Zombie::Zombie(std::string name) 
{
	this->name = name;
}
	
Zombie::~Zombie()
{
	std::cout << this->name << " is dead." << std::endl;
}

void	Zombie::announce() 
{
	std::cout << this->name << " BraiiiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::get_name()
{
	return (this->name);
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}


