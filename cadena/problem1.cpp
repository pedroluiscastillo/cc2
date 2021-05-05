#include <iostream>
#include <ctime>
#include <time.h>
using namespace std;
long int suma_recursivo(int [], int);
long int sumar(int [], int);
int main(){
    int arreglo[1000000];
    srand(time(NULL));
    for(int c = 0; c < 1000000; c++)
    {
        arreglo[c] = 1 + rand() % (1000000);
    }

    cout << sumar(arreglo, 1000000) << endl;
    cout << suma_recursivo(arreglo, 1000000) << endl;
    return 0;
}

long int sumar(int a[], int tam){
    long int total(0);
    int *ptr_arr = a;
    for (size_t i = 0; i < tam; i++)
    {
        total+=a[i];
        *ptr_arr++;
    }
    return total;
}

long int suma_recursivo(int arr[], int tam){
    if (tam == 1)
    {
        return *arr;
    }
    else
    {
        return *arr + suma_recursivo(++arr, --tam);
    }

}
