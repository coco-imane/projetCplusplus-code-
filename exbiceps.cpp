#include <QCoreApplication>

#include <fstream>


#include <iostream>
#include <string>
int main()
{
    const char *filename = "/Users/zemihiimane/desktop/essaiC/biceps.txt";
    std::ifstream ifs(filename);
    if(!ifs)
    {
        std::cerr << "Le fichier [" << filename << "] n'existe pas"
                  << std::endl;
        return 1;
    }
    std::string line;
    while(std::getline(ifs,line))
        std::cout << line << std::endl; ifs.close();
    return 0;
}
