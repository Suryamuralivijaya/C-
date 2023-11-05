//example program for destructor
#include <iostream>
using namespace std;
class HelloWorld{
public:
  //Constructor
  HelloWorld(){
    cout<<"Constructor vanakam da mapla"<<endl;
  }
  //Destructor
  ~HelloWorld(){
    cout<<"Destructor varata mame durrr"<<endl;
   }
   //Member function
   void display(){
     cout<<"amuku dumuku amal dumaal than enna thala!!!!!!"<<endl;
   }
};
int main(){
   //Object created
   HelloWorld obj;
   //Member function called
   obj.display();
   return 0;
}

