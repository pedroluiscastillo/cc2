#include <iostream>
using namespace std;

int main(){
	int a=0;
	for(int x=0;x<1000;x++){
		if(x%3==0 || x%5==0)
			a=a+x;
	}
	cout<<a<<endl;
	return 0;

}