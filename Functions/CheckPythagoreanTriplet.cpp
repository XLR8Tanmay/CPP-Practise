#include<iostream>
using namespace std;

bool checkPythagorean(int x,int y, int z)
{
	if(x>y && x>z && y*y+z*z==x*x)
		return true;
	else if(y>x && y>z && x*x+z*z==y*y)
		return true;
	else if(x*x+y*y==z*z)
		return true;
	return false;
}
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	if(checkPythagorean(x,y,z))
		cout<<"The trio x,y,z is a pythagorean triplet";
	else
		cout<<"The trio does not form a pythagorean triplet";
	return 0;
}
