//example program for Copy CONSTRUCTOR with dynamic input
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
			wall(wall &obj)// copies data of the obj parameter
			{
				length=obj.length;
				height=obj.height;
			}
			double calculateArea()
			{
				return length*height;
			}		
};
int main()
{
	double l,b;
	cout<<"enter the height and breadth"<<endl;
	cin>>l>>b;
	wall wall1(l,b);//declaration of an object(classname objectname)
	wall wall2=wall1;// copy contents of wall1 to wall2
	cout<<"area of the rectangle"<<wall1.calculateArea()<<endl;
	cout<<"area of the 2nd rectangle"<<wall2.calculateArea()<<endl;
	return 0;
}
