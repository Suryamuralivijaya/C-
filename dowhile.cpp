//Sample program for looping statements using do while loop
//printing numbers 
#include<iostream>
using namespace std;
int main()
{
	int n,i=1;
	cout<<"enter any number between 1-20";
	cin>>n;
	do
	{
		cout<<i<<endl;
		i++;
	}
	while(i<=n);
	return 0;
}
	
