#include<iostream>
using namespace std;

int factorial(int num)
{
	if(num==0)
		return 1;
	int val=1;
	while(num>1)
	{
		val*=num;
		num--;
	}
	return val;
}
int nCr(int n, int r)
{
	return factorial(n)/(factorial(r)*factorial(n-r));
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<nCr(i,j)<<" ";
		}
		cout<<endl;
	}
	return 0;
}
