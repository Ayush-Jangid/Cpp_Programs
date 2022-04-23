// Data members with same name in both derived and base class...

#include <iostream>
using namespace std;

class Base{
  protected:
  int a=45;
  int b=35;

  public:
void show(){
  cout<<endl<<"The value of a is:- "<<a
      <<endl<<"The value of b is:- "<<b<<endl;
}
};

class Derived : public Base{
  int a =10,b=20;
  
  public:
  void display(){
    cout<<endl<<"The value of a is:- "<<a
        <<endl<<"The value of b is:- "<<b<<endl;
  }
};

int main(){
Derived call;
call.show();
call.display();

  return 0;
}