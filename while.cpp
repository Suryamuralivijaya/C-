//Sample program for looping statements using while loop
//printing numbers in reverse order
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter any number between 1-20";
	cin>>n;
	int i=n;
	while(i>=1)
	{
		cout<<i<<endl;
		i--;
	}
	return 0;	
}
