#include<iostream>
#include<math.h>
using namespace std;

bool isPalindrome(long);
int totalDigits(long);
long potencia(long,int);

int main(){
    long mayor=0;
    for(int i=999;i>99;i--){
        for(int j=999;j>99;j--){
            long pro = i*j;
            if(isPalindrome(pro) && pro>mayor){
                mayor=pro;
            }
        }
        }
    cout<<mayor;
    return 0;
    }

bool isPalindrome(long num){
    int d=totalDigits(num);
    if(d<2)
        return false;
    else
    {
        for(int i=1,j=d-1;i<=d/2;i++,j--){
            int pd,sd; // pd=primer digito y ultimo digito
            pd=num/(potencia(10,j));
            sd=(num % (potencia(10,i)))/(potencia(10,i-1));
            if(pd!=sd)
                return false;
            else{
                num=num-(pd*(pow(10,j)));
                
            }
        }
        return true;
    }
    
}

int totalDigits(long num){
    int c=0;
    while(num>0){
        num=num/10;
        c++;
    }
    return c;

}

long potencia(long base,int exp){
    long rpta=1;
    for(int i=0;i<exp;i++){
        rpta=rpta*base;

    }
    return rpta;

}