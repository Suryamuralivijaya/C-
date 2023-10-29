//area of triangle using functions without arguments with return value with method definition and declaration
#include<iostream>
using namespace std;
class triangle
{
	public:
	float l,b,area;	//data members
	double Area()  //member function or member definition
	{
		area=0.5*l*b;
	}		
};
int main()
{
	triangle t1;////creating an object 
	cout<<"enter the length"<<endl;
	cin>>t1.l;
	cout<<"enter the breadth"<<endl;
	cin>>t1.b;
	cout<<"area of the triangle"<<t1.Area()<<endl;
	return 0;
}
