//
// Created by bgarrido42 on 6/8/22.
//

#include "Karen.hpp"

Karen::Karen(){}

void Karen::complain(std::string level) {
	int i = 0;
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	//As long as it's a function array it must be declared as another function [type name (params)]
	//Also 'cause it's an array of member class functions it must have the class cast (I don't really know the nomenclature)
	void (Karen::*func[4]) ( void )= {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	while (i < 4)
	{
		if (str[i] == level)
			(this->*func[i])();
		i++;
	}
}

void Karen::debug(void) {
	std::cout
			<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!\n"
			<< std::endl;
}
void Karen::info(void) {
	std::cout
			<< "I cannot belive adding extra bacon cost more money.\nYou don put enough! If you did I would not have to ask for it!\n"
			<< std::endl;
}

void Karen::warning(void) {
	std::cout
			<< "I think I deserve to have extra bacon for free.\nI've been coming herre for years and you just started working here last month.\n"
			<< std::endl;
}
void Karen::error(void) {
	std::cout
			<< "This is unnacceptable, I want to speak to the manager now.\n"
			<< std::endl;
}
