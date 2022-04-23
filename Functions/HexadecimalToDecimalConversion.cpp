#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int HexToDec(string val)
{
	int x=1;
	int sum=0;
	for(int i=val.size()-1;i>=0;i--)
	{
		if(val[i]>='0' && val[i]<='9')
		{
			sum+=x*(val[i]-'0');
		}
		else if(val[i]>='A' && val[i]<='F')
		{
			sum+=x*(val[i]-'A'+10);
		}
		x*=16;
	}
	return sum;
}
int main()
{
	string n;
	cout<<"Enter the Hexadecimal Number: ";
	cin>>n;
	cout<<"The Decimal Representation is: "<<HexToDec(n);
	return 0;
	
}
