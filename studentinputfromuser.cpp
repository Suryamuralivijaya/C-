#include<iostream>
using namespace std;
class student
{
	public:
		int id;
		string name;
};
int main()
{
	student s1;
	cout<<"enter the id"<<endl;
	cin>>s1.id;
	cout<<"enter the user name"<<endl;
	cin>>s1.name;
	cout<<"id "<<s1.id<<endl;
	cout<<"name "<<s1.name<<endl;
	return 0;
}

