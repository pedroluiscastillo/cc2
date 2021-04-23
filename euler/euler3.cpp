#include<math.h>
using namespace std;

bool IsPrime(long);
int main(){
    long num, rpta=2;
    cout<<"Introduzca numero: ";cin>>num;
    if(IsPrime(num))
        cout<<"El numero es primo";
    else{
        while(num>1){
            if(num%rpta==0){
                num=num/rpta;
            }
            else
                rpta++;
    }
        cout<<"El divisor mas grande es: "<<rpta;
    }

    return 0;
}

bool IsPrime(long num){
    if(num<2)
        return false;
    else{
        for(int i=2;i<sqrt(num);i++){
            if(num%i==0)
                return false;
        }
    }
    return true;

}