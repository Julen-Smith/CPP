//
// Created by bgarrido42 on 6/6/22.
//

#include <iostream>
#include "Zombie.hpp"


int main(void){
	Zombie *z;


	z = newZombie("Peter");
	z->announce();
//	z->~Zombie();
//	z->announce();
	delete(z);
	randomChump("Griffin");
	return (0);
}