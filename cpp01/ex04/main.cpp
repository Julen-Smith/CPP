#include <iostream>
#include <fstream>
#include <string>
#define REPLACE_PATH "FILENAME.replace"

/*
	Se hace append constante del fichero antiguo en el nuevo
	Se mete un salto de linea extra.
	Solo cambia la primera coincidencia-
*/

std::string replaceSingleCoincidence(std::string line,std::string str1, std::string str2) 
{
	int pos = line.find(str1, 0);
	if(pos > 0)
	{
		line.erase(pos,str1.length());
		line.insert(pos,str2);
		pos = line.find(str1, 0);
		if (pos > 0)
		{
			while(pos > 0)
			{	
				pos = line.find(str1, 0);
				line.erase(pos,str1.length());
				line.insert(pos,str2);
			}
		}
		
	}
	line.insert(line.length(),"\n");

	return (line);
}

void write_fich(std::string line, FILE * file)
{
	
	if (file)
		fwrite(line.data(),sizeof(char),line.size(),file);
}


int main(int argc, char *argv[])
{
	FILE * file = fopen(REPLACE_PATH,"wa");
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
				line = replaceSingleCoincidence(line,argv[2],argv[3]);
				write_fich(line, file);
			}
		}
		
	}
	return (0);
}