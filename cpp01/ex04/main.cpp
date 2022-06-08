#include <iostream>
#include <fstream>
#include <string>

/*
	Se hace append constante del fichero antiguo en el nuevo
	Se mete un salto de linea extra.
*/

void replaceSingleCoincidence(std::string *line,std::string str1, std::string str2)
{
	int pos = line->find(str1, 0);
	if(pos > 0)
	{
		line->erase(pos,str1.length());
		line->insert(pos,str2);
	}
	if (pos > 0)
		replaceSingleCoincidence(line, str1, str2);
}

int main(int argc, char *argv[])
{
	if (argc != 4)
		std::cout << "Wrong arguments" << std::endl;
	else
	{
		std::fstream file;
		std::string Name = argv[1];
		file.open(Name.append(".replace"), std::fstream::out | std::fstream::trunc);
		std::fstream fd (argv[1]);
		std::string line;
		if (fd.is_open())
		{
			while (fd.good()) {
				std::getline(fd, line);
				replaceSingleCoincidence(&line,argv[2],argv[3]);
				file << line;
				if (!fd.eof())
					file << "\n";
			}
		}
		
	}
	return (0);
}