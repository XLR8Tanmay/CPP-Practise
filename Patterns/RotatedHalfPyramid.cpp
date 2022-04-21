#include<iostream>
using namespace std;

int main()
{
	int stop;
	cin>>stop;
	int i=1;
	while(i<=stop)
	{
		for(int j=0;j<stop;j++)
		{
			if(j<stop-i)
				cout<<" ";
			else
				cout<<"*";
		}
		cout<<endl;
		i++;
	}
	return 0;
}
