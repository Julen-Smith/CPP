#include <iostream>
#include <fstream>
int main(int argc, __unused char *argv[])
{
	std::fstream fs;


	if (argc != 4)
		std::cout << "Wrong arguments" << std::endl;
	else
	{
		fs.open(argv[1], std::fstream::out);

		fs << "lorem ipsum";
		fs.close();
	}
	return (0);
}