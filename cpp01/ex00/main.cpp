//
// Created by bgarrido42 on 6/6/22.
//

#include <iostream>
#include "Zombie.hpp"


int main(void){
	std::string str ="Zombete";
	Zombie z;

	z.newZombie(str);
	z.announce();

	//Zombie::randomChump(str);
}