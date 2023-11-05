//single inheritance using private class
#include<iostream>
using namespace std;
class apple//declaring a classs
{
	int a=10,b=2;
	public:
		int mul()
		{
			int c=a*b;
			return c;
		}	
};
class banana:private apple// using inheritance accessing apple in private
{
	public:
		void display()
		{
			int result=mul();//calling the function mul from apple class
			std::cout<<"the result of the multiplication is"<<result<<std::endl;//default is final, if final is there we would be using std::
		}
};
int main()
{
	banana b;
	b.display();
	return 0;
}
