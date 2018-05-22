#include <fstream> 
/* <fstream> classe de flux d'entrée et sortie pour faire 
fonctionner des fichiers>*/

#include <iostream> // bibliothèque entrée sortie standard
#include <string> // chaine de caractère
int main() // fonction principale 
{ const char *filename = "essai.txt"; // nom du fichier 
/*const indique que la valeur d'une variable est 
constante et fait en sorte que compilateur empêche 
le programmeur de la modifier*/
std::ifstream ifs(filename); /*ifstream: classe de flux de 
fichier d'entrée ,et en paramentre nom du fichier*/
if(!ifs)
	{ std::cerr << "Le fichier [" << filename << "] n'existe pas" 
<< std::endl;// cerr:flus de sortie standard pour les erreurs
 return 1; } 
 std::string line;
  while(std::getline(ifs,line)) 
  	std::cout << line << std::endl; ifs.close(); 
  return 0; }