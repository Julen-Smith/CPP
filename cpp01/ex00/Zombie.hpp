
//
// Created by bgarrido42 on 6/6/22.
//

#ifndef CPP_ZOMBIE_HPP
#define CPP_ZOMBIE_HPP

#include <iostream>

class Zombie{

public:
	Zombie(std::string name);
	Zombie();
	~Zombie();
	void announce(void);
	Zombie* newZombie(std::string name);
	void randomChump(std::string name);

private:
	std::string name;
};

#endif
