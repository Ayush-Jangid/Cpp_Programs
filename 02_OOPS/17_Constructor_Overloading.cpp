// Constructor Overloading:- Having more than one constructor in a class of same
//                           name is called constructor overloading...

#include <iostream>
using namespace std;

class sample{
  int a,b;
  public:
  void display();

// We can create multiple constructor in same class... 

//  Constructor 1.
  sample(){ // This will call when we will not give any parameters...
      a = 0; b = 0;
  }

//  Constructor 2.
  sample(int x){ // This will call when we give only one parameter...
      a = x; b = 0;
  }

//  Constructor 3.
  sample(int x, int y){ // This will call when we give two value...
      a = x; b = y;
  }   
  };


int main(){
// Constructor will call according to their need... 

sample call; // Constructor 1. will be call bcz you didn't give any value...
call.display();

sample call2(4); // Constructor 2. will be call bcz you gave only one value...
call.display();

sample call3(5,6); // Constructor 3. will be call bcz you gave two values...
call.display();

    return 0;
}

void sample :: display(){
cout<<endl<<"The value of a is:- "<<a<<endl;
cout<<"The value of b is:- "<<b<<endl<<endl;
}