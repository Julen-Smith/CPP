//
// Created by bgarrido42 on 6/23/22.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

//inheritance??
class ScavTrap: public ClapTrap{
public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();

		void guardGate();
};


#endif //SCAVTRAP_HPP
