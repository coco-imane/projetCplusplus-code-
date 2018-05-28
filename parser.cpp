#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

bool jump(std::ifstream & ifs, std::size_t count)
{
	for (std::size_t i = 0; i < count; i++)
	{
		std::string line;
		if (!std::getline(ifs, line))
			return false;
	}
	return true;
}

bool parse_header_names(std::ifstream & ifs)
{
	std::string line;
	if (!std::getline(ifs, line))
		return false;
	std::string token;
	std::istringstream token_stream{line};
	while (std::getline(token_stream, token, '\t'))
	{
		std::cout << "[" << token << "]";
	}
	return true;
}

int main()
{
	std::string filename{ "../Bicep 010.txt"};
	std::ifstream ifs{ filename};
	if (!ifs)
	{
		std::cerr << "Cannot open file [" << filename << "]" << std::endl;
		return 1;
	}
	if (!jump(ifs, 3))
		return 1;
	if (!parse_header_names(ifs))
		return 1;
	ifs.close();
	return 0;
}
