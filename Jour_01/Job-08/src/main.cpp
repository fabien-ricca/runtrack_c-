#include "../headers/main.hpp"

bool isBis(int annee){
    return (annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0);
}

int main()
{
    int annee = 0;

    std::cout << "Veuillez saisir une date : ";
    std::cin >> annee;

    std::string result = (isBis(annee)) ? "L'année est bissextile." : "L'année n'est pas bissextile." ;

    std::cout << result << std::endl;
    return 0;
}