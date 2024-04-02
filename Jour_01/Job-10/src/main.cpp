#include "../headers/main.hpp"

using std::vector, std::cout, std::endl;

int isSmallest(const vector<int*>& array){
    int smallest = *(array[0]);

    for(int* elem: array){
        smallest = (*elem < smallest) ? *elem : smallest;
    }
    return smallest;
}

int main()
{
    vector<int*> my_array;

    for(int i=3; i<10; i++){
        my_array.push_back(new int(i));
    }

    int smallest = isSmallest(my_array);
    cout << "Le plus petit est : " << smallest << endl;

    return 0;
}