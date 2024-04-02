#include "../headers/main.hpp"


int main()
{
    int saisie = 0;
    int somme = 0;

    for(int i=0; i<5; i++){
        std::cout << "Veuillez saisir un nombre : ";
        std::cin >> saisie;

        somme += saisie;
    }
    std::cout << "La moyenne est de : " << (somme/5) << std::endl;

    return 0;
}
