//area of triangle using functions without arguments with return value
#include<iostream>
using namespace std;
class triangle
{
	public:
		float l,b;			
};
int main()
{
	float area;
	triangle t1;
	cout<<"enter the length"<<endl;
	cin>>t1.l;
	cout<<"enter the breadth"<<endl;
	cin>>t1.b;
	area=0.5*t1.l*t1.b;
	cout<<"area of the triangle"<<area<<endl;
	return 0;
}
