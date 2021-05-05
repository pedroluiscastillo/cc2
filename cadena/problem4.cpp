#include <iostream>
using namespace std;
int tamanio(char *);
void tamanio_recursivo(char *, int);

int main(){
    char cad[] = "Esto es una cadena";
   
    cout << tamanio(cad) << endl;
    tamanio_recursivo(cad,0);
    return 0;
}

int tamanio(char *ab){
    int total(0);
    char * aux_ptr = ab;    
    for(; *aux_ptr != '\0'; aux_ptr++){
        total++;
    }
    return total;
}
    
void tamanio_recursivo(char *bc,int tam){
    int *ptr=&tam;
    if(*bc != '\0'){
        *bc++;
        tamanio_recursivo(bc,tam+1);
    }
    else{
        cout<<*ptr;
        }
}