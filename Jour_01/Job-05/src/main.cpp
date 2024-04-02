#include "../headers/main.hpp"


int main()
{
    int nb1 = 0;
    int nb2 = 0;
    int temp = 0;

    std::cout << "Veuillez saisir un premier nombre : ";
    std::cin >> nb1;

    std::cout << "Veuillez saisir un second nombre : ";
    std::cin >> nb2;

    std::cout << "Avant échange : " << nb1 << " " << nb2 << std::endl;

    temp = nb1;
    nb1 = nb2;
    nb2 = temp;

    std::cout  << "Aprés échange : " << nb1 << " " << nb2 << std::endl;
    
    return 0;
}
