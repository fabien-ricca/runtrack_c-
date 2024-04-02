#include "../headers/main.hpp"


int main()
{
    std::string saisie = "";

    std::cout << "Veuillez saisir un nombre : ";
    std::cin >> saisie;

    for(auto letter=saisie.end(); letter!=saisie.begin(); ){
        --letter;
        std::cout << *letter;
    }
    std::cout << std::endl;
    
    return 0;
}
