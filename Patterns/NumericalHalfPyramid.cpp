#include<iostream>
using namespace std;

int main()
{
	int stop;
	cin>>stop;
	for(int i=1;i<=stop;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<i;
		}
		cout<<endl;
	}
	return 0;
}
