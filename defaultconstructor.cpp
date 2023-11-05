//example program for default complier
#include<iostream>
using namespace std;
class wall{             //declaring a class
	public:
		double length;
		public:
			wall()
			{
				length = 5.5;
      			cout << "Creating a wall." << endl;
      			cout << "Length = " << length << endl;
			}	
};
int main()
{
	wall l;
	return 0;
}
