
#include <fstream>
#include <iostream>
#include <string>

int main()
{
    const char *nomdufichier= "/users/zemihiimane/desktop/essai.txt";

    std::ifstream ifs(filename);
    if(!ifs)
{

    std::cerr << "Le fichier [" << nomdufichier<< "] inéxistant"

              << std::endl;
                            return 1;
 }
     std::string line;

       while(std::getline(ifs,line))

      std::cout << line << std::endl; ifs.close();

               return 0;

}
