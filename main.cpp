#include <iostream>
#include <time.h>
#include "./ordenamiento.h"
#include "ordenamientolineal.h"
//#include "./busqueda.h"

#define MIN 1
#define MAX 100

using namespace std;
//c
void fill(int*array, int n) {
    for (int i = 0; i < n; i++)
    {
        array[i] = rand()%(MAX - MIN + 1) + MIN;
    }    
}
void print(int*array, int n) {
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    srand(time(nullptr));
    int n;
    cout << "Inserta N: ";
    cin >> n;
    int* array = new int[n];
    fill(array, n);
    print(array, n);
    insertionSort(array, n);
    print(array, n);
    Buscador_lineal();
    delete array;
    return 0;
}
