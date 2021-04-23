#include<iostream>
using namespace std;
int main(){
    int c=0;
    for(int i=1, j=2,k ;i<4000000;k=i,i=j,j=k+j){
        cout<<i<<"   ";
        if(i%2==0)
            c=c+i;
    }
    cout<<c;
    return 0;
}
	

