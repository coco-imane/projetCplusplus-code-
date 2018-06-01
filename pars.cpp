#include <fstream>
#include <iostream>
#include <sstream>//En-tête fournissant des classes de flux de chaînes.

using namespace std;

bool jump(std::ifstream & ifs, std::size_t count)/*jump qui permet de 
sauter count lignes*/
{
    for (std::size_t i = 0; i < count; i++)
    {
        std::string line;
        if (!std::getline(ifs, line))
            return false;//element d'un ensemble sont equivalent 
    }
    return true;
}

bool parse_line(std::ifstream & ifs)
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

bool parse_header_names(std::ifstream & ifs )
{
    return parse_line (ifs);
}

bool parse_header_units(std::ifstream & ifs )
{
    return parse_line (ifs);
}

int main()
{
    std::string filename{ "Bicep 010.txt"};
    std::ifstream ifs{ filename};
    if (!ifs)
    {
        std::cerr << "Cannot open file [" << filename << "]" << std::endl;
        return 1;
    }
    if (!jump(ifs, 3)) // ligne 4 
        return 1;
    if (!parse_header_names(ifs))
        return 1;
    if (!parse_header_units (ifs))
        return 1;
    ifs.close();
    return 0;
}
