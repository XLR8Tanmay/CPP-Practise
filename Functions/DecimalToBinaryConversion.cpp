#include<iostream>
using namespace std;

int DecToBin(int num)
{
	int x=1;
	int ans=0;
	while(num>0)
	{
		int rem=num%2;
		ans+=rem*x;
		x*=10;
		num/=2;
	}
	return ans;
}
int main()
{
	int n;
	cout<<"Enter the Decimal Number: ";
	cin>>n;
	cout<<"The Binary Representation is: ";
	cout<<DecToBin(n);
	return 0;
}
