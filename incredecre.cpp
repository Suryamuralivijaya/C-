#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the value of a:";
	cin>>a;
	cout<<"enter the value of b:";
	cin>>b;
	cout<<"preincrement of a"<<(++a)<<endl;
	cout<<"postincrement of a"<<(a++)<<endl;
	cout<<"predecrement of a"<<(--b)<<endl;
	cout<<"postdecrement of a"<<(b--)<<endl;
	return 0;
}
