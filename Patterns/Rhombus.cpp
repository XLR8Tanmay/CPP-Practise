#include<iostream>
using namespace std;

int main()
{
	int stop;
	cin>>stop;
	for(int i=0;i<stop;i++)
	{
		for(int j=0;j<stop-i-1;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<stop;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
