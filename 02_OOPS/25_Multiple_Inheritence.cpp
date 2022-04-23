// Multiple Inheritence:- A derived class with more than one base...


/*
Syntax:-
class (derived-name) : visiblity base1, visiblity base2, visiblity base 3
{
      Class body of class derived
}

*/

#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << endl
             << "Enter the value of a:"<<endl;
             cin>>a;
    }

protected:
    int a;
};

class B
{
public:
    B()
    {
        cout << endl
             << "Enter the value of b:"<<endl;
             cin>>b;
    }

protected:
    int b;
};

class C
{
public:
    C()
    {
        cout << endl
             << "Enter the value of c:"<<endl;
             cin>>c;
    }

protected:
    int c;
};

// ______Derived Class______
class X : public A, public B, public C
{
public:
    void display()
    {
        cout<<endl<<"The value of a is:- "<<a<<endl;
        cout<<"The value of b is:- "<<b<<endl;
        cout<<"The value of c is:- "<<c<<endl<<endl;
    }
};

int main()
{
class X call;
call.display();
    return 0;
}