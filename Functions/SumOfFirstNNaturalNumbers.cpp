#include<iostream>
using namespace std;

int sumOfFirstNNaturalNumbers(int num)
{
	return num*(num+1)/2;
}
int main()
{
	int n;
	cin>>n;
	cout<<sumOfFirstNNaturalNumbers(n)<<endl;
	return 0;
}

