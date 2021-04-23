#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long long sum1= 0 , sum2 =0;
	for(long long i = 1; i<=100; i++){
		sum2= sum2 + i;
		sum1= sum1 + pow(i,2);
	}
	sum2 = sum2 * sum2;
	cout << sum2  - sum1 << endl;
	return 0;
}
	