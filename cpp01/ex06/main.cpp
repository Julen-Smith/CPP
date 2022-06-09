//
// Created by bgarrido42 on 6/8/22.
//
#include "Karen.hpp"
#include <iostream>

enum {
	WARNING,
	ERROR,
	DEBUG,
	INFO,
	FOUL
};

int ConvertEnum(std::string level)
{
	if (level == "DEBUG")
		return DEBUG;
	if (level == "INFO")
		return INFO;
	if (level == "WARNING")
		return WARNING;
	if (level == "ERROR")
		return ERROR;
	return FOUL;
}

int main(int argc, char *argv[]){
	if (argc != 2)
	{
		std::cout << "[ Karen is happy about knowing you and her have the same IQ ]" << std::endl;
		return (1);
	}
	else
	{
		Karen karen;

		switch (ConvertEnum(argv[1])) {
			case DEBUG:
				std::cout << "[DEBUG]" << std::endl;
				karen.complain("DEBUG");
			case INFO:
				std::cout << "[INFO]" << std::endl;
				karen.complain("INFO");
			case WARNING:
				std::cout << "[WARNING]" << std::endl;
				karen.complain("WARNING");
			case ERROR:
				std::cout << "[ERROR]" << std::endl;
				karen.complain("ERROR");
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				break;
		}
	}
	return (0);
}