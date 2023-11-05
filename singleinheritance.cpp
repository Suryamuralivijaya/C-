//example program for single inheritance 
#include<iostream>
using namespace std;
class single{
	public:
		int salary=6000;
};
class singles:public single {
	public:
		int bonus=500;
};
int main()
{
	singles p1;
	cout<<"Salary: "<<p1.salary<<endl;    
    cout<<"Bonus: "<<p1.bonus<<endl;    
    return 0;  
}
