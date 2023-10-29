//area of triangle using functions with arguments with return value with method definition and declaration
#include<iostream>
using namespace std;
class triangle// define a class
{
	public:
	float area;	//data members
	double Area(float length,float breadth)  //member function or member definition
	{
		float l,b;
		l=length;
		b=breadth;
		area=0.5*l*b;
		cout<<"area of the triangle\t"<<area<<endl;
	}		
};
int main()
{
	float x,y;
	triangle t1;////creating an object 
	cout<<"enter the length"<<endl;
	cin>>x;
	cout<<"enter the breadth"<<endl;
	cin>>y;
	t1.Area(x,y);//// call function and pass Input as argument
	return 0;
}
