#include<iostream>
using namespace std;

int main()
{
	int stop;
	cin>>stop;
	bool check=true;
	int count=1;
	for(int i=0;i<stop;i++)
	{
		(i%2==0)?check=true:check=false;
		for(int j=0;j<count;j++)
		{
			if(check==true)
				cout<<"1"<<" ";
			else
				cout<<"0"<<" ";
			check=!check;
		}
		count++;
		cout<<endl;
	}
	return 0;
}
