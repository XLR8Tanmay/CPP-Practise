#include<iostream>
#include<cmath>
using namespace std;

int BinToDec(int num)
{
	int power=0;
	int decValue=0;
	while(num>0)
	{
		int rem=num%10;
		decValue+=rem*pow(2,power);
		power++;
		num/=10;
	}
	return decValue;
}
int main()
{
	int n;
	cout<<"Enter the Binary Number: ";
	cin>>n;
	cout<<"Decimal Conversion is: "<<BinToDec(n);
	return 0;
}
