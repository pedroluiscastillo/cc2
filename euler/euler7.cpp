#include <iostream>
using namespace std;

int main()
{
    long numero = 1; 
    int contador = 0, contador2 = 0;

    while (contador2 <= 10001)
    {
        contador = 0;
        for (long i = 1; i <= numero; i++)
        {
            if (numero % i == 0)
            {
                contador++;
            }
        }
        
        if (contador <= 2)
        {
            ++contador2;
        }
        ++numero;
    }
    cout << numero - 1 << endl;
    return 0;
}