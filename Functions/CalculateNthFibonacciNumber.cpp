#include<iostream>
using namespace std;

int calcFibonacci(int num)
{
	int a=0;
	int b=1;
	int s=a+b;
	for(int i=2;i<num;i++)
	{
		a=b;
		b=s;
		s=a+b;
	}
	return s;
}
int main()
{
	int n;
	cin>>n;
	cout<<n<<"th Fibonacci Number is: "<<calcFibonacci(n);
	return 0;
}
