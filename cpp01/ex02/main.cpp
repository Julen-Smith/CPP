//
// Created by bgarrido42 on 6/6/22.
//

#include <iostream>


int main(void){
	std::string	brain = "HI THIS IS BRAIN";
	std::string *brainPTR = &brain;
	std::string &brainREF = brain;

	std::cout << brainPTR << std::endl;
	std::cout << &brainREF << std::endl;
	std::cout << *brainPTR << std::endl;
	std::cout << brainREF << std::endl;
}