#include "../headers/main.hpp"


int main()
{
    double prixHT = 0;
    double nbKilos = 0;
    double TVA = 0;

    std::cout << "Veuillez saisir le prix HT : ";
    std::cin >> prixHT;

    std::cout << "Veuillez saisir le nombre de kilos souhaité : ";
    std::cin >> nbKilos;

    std::cout << "Veuillez saisir la TVA : ";
    std::cin >> TVA;

    double result = ((TVA / 100) + 1) * (prixHT * nbKilos);

    std::cout << result << std::endl;


    
    return 0;
}
