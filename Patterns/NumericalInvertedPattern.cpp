#include<iostream>
using namespace std;

int main()
{
	int stop;
	cin>> stop;
	while(stop!=0)
	{
		for(int i=1;i<=stop;i++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
		stop--;
	}
	return 0;
}
