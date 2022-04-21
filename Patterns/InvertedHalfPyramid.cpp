#include<iostream>
using namespace std;

int main()
{
	int count;
	cin>>count;
	while(count!=0)
	{
		for(int i=0;i<count;i++)
		{
			cout<<"*";
		}
		cout<<endl;
		count--;
	}
	return 0;
}
