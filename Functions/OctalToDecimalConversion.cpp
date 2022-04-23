#include<iostream>
#include<cmath>
using namespace std;

int OctToDec(int num)
{
	int power=0;
	int val=0;
	while(num>0)
	{
		int rem=num%10;
		val+=rem*pow(8,power);
		power++;
		num/=10;
	}
	return val;
}
int main()
{
	int n;
	cout<<"Enter the Octal Number: ";
	cin>>n;
	cout<<"Decimal Representation is: "<<OctToDec(n);
	return 0;
}
