#include <iostream>
#include <fstream>
int main(int argc, char *argv[])
{


	if (argc != 4)
		std::cout << "Wrong arguments" << std::endl;
	else
	{
		std::fstream fd (argv[1]);
		std::string line;
		if (fd.is_open())
		{
			while (fd.good()) {
				std::getline(fd, line);
				//fd >> line;
				std::cout << line << "\n";
			}
		}
	}
	return (0);
}