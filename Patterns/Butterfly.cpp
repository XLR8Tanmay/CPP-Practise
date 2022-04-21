#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int stop=n;
	int count=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<count;j++)
		{
			cout<<"*";
		}
		for(int j=0;j<2*n-2*count;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<count;j++)
		{
			cout<<"*";
		}
		count++;
		cout<<endl;
	}
	for(int i=stop;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			cout<<"*";
		}
		for(int j=0;j<2*stop-2*i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
