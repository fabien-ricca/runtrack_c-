#include "../headers/main.hpp"

using std::cout, std::endl;


int doubleArray(int* array, int size){
    int sum = 0;

    for(int i=0; i<size ; i++){
        *(array + i) *= 2;
        sum += *(array + i);
    }
    return sum;
}


void printArray (const int* arr, int size){
    for(int i=0; i<size; i++){
        cout << *(arr + i) << " ";
    }
    cout << endl;
}


int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum= doubleArray(arr, size);
    cout << "Somme : " << sum << endl;

    printArray(arr, size);

    return 0;
}