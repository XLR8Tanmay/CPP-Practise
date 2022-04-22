#include<iostream>
using namespace std;

int factorial(int num)
{
	int val=1;
	while(num>1)
	{
		val*=num;
		num--;
	}
	return val;
}
int main()
{
	int n,r;
	cin>>n>>r;
	int nCr= factorial(n)/(factorial(n-r)*factorial(r));
	cout<<nCr;
	
}
