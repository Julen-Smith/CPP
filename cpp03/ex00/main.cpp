//
// Created by bgarrido42 on 6/9/22.
//

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap("Clapie");

	clap.attack("Chappie");
	clap.takeDamage(12);
	clap.beRepaired(24);
	return 0;
}