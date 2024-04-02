#include "../headers/main.hpp"

using std::vector, std::cout, std::endl;

int isSmallest(const vector<int>& array){
    int smallest = std::numeric_limits<int>::max();

    for(int elem: array){
        smallest = (elem < smallest) ? elem : smallest;
    }
    return smallest;
}

int main()
{
    vector<int> my_array = {10, 6, 855, 41};

    int smallest = isSmallest(my_array);
    cout << "Le plus petit est : " << smallest << endl;

    return 0;
}