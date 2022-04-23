#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

string DecToHex(int num)
{
	string ans="";
	while(num>0)
	{
		int rem=num%16;
		if(rem<=9)
		{
			char ch=('0'+rem);
			ans=ch+ans;
		}
		else
		{
			char ch='A'+(rem-10);
			ans=ch+ans;
		}
		num/=16;
	}
	return ans;
}
int main()
{
	int n;
	cout<<"Enter the Decimal Number: ";
	cin>>n;
	cout<<"The Hexadecimal Representation is: "<<DecToHex(n);
	return 0;
}
