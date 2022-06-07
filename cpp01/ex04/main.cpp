#include <iostream>
#include <fstream>
#include <string>
int main(int argc, char *argv[])
{


	if (argc != 4)
		std::cout << "Wrong arguments" << std::endl;
	else
	{
		std::fstream fd (argv[1]);
		std::string line;
		std::string target = argv[2];
		std::size_t pos;
		if (fd.is_open())
		{
			while (fd.good()) {
				std::getline(fd, line);
				pos = line.find(target, 0);
				if (pos != std::string::npos) {
					if (line.find(target, pos + target.size()) != std::string::npos)
						std::cout << "more than one coincidence ";
					/*else
					{
						replaceSingleCoincidence(target, line, argv[3]);
					}*/
					//std::cout << "Coincidence on position " << line.find(target, 0) << " And ends on position "
							//  << line.find(target) + target.size() << std::endl;
				}
				else
					std::cout << "No coincidence in this line" << std::endl;
			}
		}
	}
	return (0);
}

void replaceSingleCoincidence(std::string target, std::string line, std::string obj) {
	//Function to replace single coincidence
}