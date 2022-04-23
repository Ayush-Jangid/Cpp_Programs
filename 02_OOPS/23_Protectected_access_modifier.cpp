// Protected members(or functions):- 
//       It's like private members, The class member declared as Protected are inaccessible outside 
//       the class but they can be accessed by any subclass(derived class) of that class.
//

#include <iostream>
using namespace std;

// _____Base-Class_____
class base{
    protected: // Protected declared...
    int a;
    };

/*
                             Public derivation      Private derivation      Protected derivation
 1. Private members:-    |   Not inherited     |    Not inherited       |   Not inherited
 2. Public members:-     |   Public            |    Private             |   Protected
 3. Protected members:-  |   Protected         |    Private             |   Protected

*/

// _____Derived-Class_____
class derived : public base{
 public: 

 void display(){
     a = 15; // We can access protected data(members) in derived class...
     cout<<endl<<"The value of a is:- "<<a<<endl<<endl;
 }

};


int main(){
base b;
derived d;

// d.a = 15;  --> We can't access protected data from outside the class...
// b.a = 20;  --> We can't access protected data from outside the class...

d.display();

    return 0;
}