/*
// Case1:
* Base class's constructor always executes before derived class's constructor...
      Class A : public B{
      Order of execution:- First B(), then A()...
      };

// Case2:
         Class A : public B, public C{
        Order of execution:- First B(), then C(), then A()...
         }

// Case3:
* Virtual Class will execute first, then base class, and at last derived class...
        Class A : public B, virtual public C{
        Order of execution:- First C(), then B(), then A()...
        }
*/


#include <iostream>
using namespace std;

// Class Base1...
class Base1{
    int d1;
    public:
    Base1(int x){ // Base1 Constructor...
            d1 = x;
            cout<<endl<<"Base[1]: ";
    }
    void print(){
        cout<<endl<<"PUBG Downloads:- "<<d1<<" Millions"<<endl;
    }
};

// Class Base2...
class Base2{
    int d2;
    public:
    Base2(int y){ // Base2 Constuctor...
            d2 = y;
        cout<<endl<<"Base[2]: ";
    }
    void display(){
        cout<<endl<<"BGMI Downloads:- "<<d2<<" Millions"<<endl;
    }
};


// Class Derived...
class Derived : public Base2, public Base1{ 
// Base2's constructor will execute first bcz we declared it first...
int d3;
public:
Derived(int a, int b, int c) : Base2(a) , Base1(b)
{
d3 = c;
cout<<endl<<"Derived: ";
}
void show(){
    cout<<endl<<"COD Downloads:- "<<d3<<" Millions"<<endl;
}
};

// Main Funcition()
int main(){
Derived call(50,100,10); cout<<endl;
call.display();
call.print();
call.show();

cout<<endl;
    return 0;
}