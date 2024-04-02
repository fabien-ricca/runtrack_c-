#include "../headers/main.hpp"

using std::cout, std::endl;

void swapValues(int& a, int& b){

    int temp= a;
    a = b;
    b = temp;
}

int main()
{
    int x = 5;
    int y = 8;

    cout << "Avant swap : " << x << " " << y << endl;

    swapValues(x, y);

    cout << "Aprés swap : " << x << " " << y << endl;


    return 0;
}