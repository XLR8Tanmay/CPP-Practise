#include<iostream>
using namespace std;

int main()
{
	int stop;
	cin>>stop;
	int count=1;
	for(int i=0;i<stop;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<count<<" ";
			count++;
		}
		cout<<endl;
	}
	return 0;
	
}
