#include<iostream>
using namespace std;

int main()
{
	int stop;
	cin>>stop;
	int count=1;
	for(int i=0;i<stop;i++)
	{
		for(int j=0;j<stop-i;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=count;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
		count++;
	}
	return 0;
}
