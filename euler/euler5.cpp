#include<iostream>
using namespace std;
long factorial(int);
bool divisibleInRange(long,int,int);
int main(){
    long num=factorial(10);
    for(int i=2;i<=10;i++){
        long aux = num/i;
        if(divisibleInRange(aux,i+1,10))
            num=num/i;
    }
    cout<<num;
    return 0;
}
long factorial(int num){
    long rpta=1;
    for(int i=1;i<=num;i++){
        rpta=rpta*i;
    }
    return rpta;
}
bool divisibleInRange(long num, int x, int y){
    for(int i=x; i<=y; i++){
        if(num%i != 0)
            return false;
    }
    return true;
}