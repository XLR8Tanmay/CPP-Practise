#include<iostream>
using namespace std;

int DecToOct(int num)
{
	int x=1;
	int ans=0;
	while(num>0)
	{
		int rem=num%8;
		ans+=rem*x;
		x*=10;
		num/=8;
	}
	return ans;
}
int main()
{
	int n;
	cout<<"Enter the Decimal Number: ";
	cin>>n;
	cout<<"The Octal Representation is: "<<DecToOct(n);
	return 0;
}
