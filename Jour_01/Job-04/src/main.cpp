#include "../headers/main.hpp"


int main()
{
    int saisie = 0;

        std::cout << "Veuillez saisir un nombre : ";
        std::cin >> saisie;

        std::string result = (saisie % 2 == 0) ? "Pair" : "Impair";

    std::cout << result << std::endl;

    return 0;
}
