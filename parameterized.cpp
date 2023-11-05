//example program for PARAMETERIZED CONSTRUCTOR with dynamic input
#include<iostream>
using namespace std;
class wall{         //declare a class
	private:
		double length;
		double height;
		public:
			wall(double len,double heg)//constructor with arguments
			{
				length=len;
				height=heg;
			}
			double calculateArea()
			{
				return length*height;
			}		
};
int main()
{
	double l,b,x,y;
	cout<<"enter the height and breadth"<<endl;
	cin>>l>>b;
	cout<<"enter the height and breadth of 2nd rectangle"<<endl;
	cin>>x>>y;
	wall wall1(l,b);//declaration of an object(classname objectname)
	wall wall2(x,y);//declaration of an object(classname objectname)
	cout<<"area of the rectangle"<<wall1.calculateArea()<<endl;
	cout<<"area of the 2nd rectangle"<<wall2.calculateArea()<<endl;
	return 0;
}
