#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
	{ 
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("rocket launcher");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		club.setType("machinegun");
		jim.attack();
	}
}
