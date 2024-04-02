#include "../headers/main.hpp"


int main()
{
    int nb1 = 5;
    int nb2 = 8;

    std::cout << nb1 << " " << nb2 << std::endl;

    int temp = nb1;
    nb1 = nb2;
    nb2 = temp;

    std::cout << nb1 << " " << nb2 << std::endl;
    
    return 0;
}
