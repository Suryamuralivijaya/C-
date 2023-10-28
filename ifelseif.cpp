//Sample program for decision making statements using if else if statement
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter two numbers ";
	cin>>a>>b;
	if(a==b)
	{
		cout<<"Result:equal";
	}
	else if(a>b)
	{
		cout<<"Result:"<<a;
	}
	else
	{
		cout<<"Result:"<<b;
	}
	return 0;
}
