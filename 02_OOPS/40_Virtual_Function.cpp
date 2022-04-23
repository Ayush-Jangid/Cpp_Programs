#include <iostream>
using namespace std;

class Base{
    public:
    virtual void display(){ // Virtual function declared...
        cout<<endl<<"Base_Class_OP"<<endl;
    }
};

class Der1 : public Base{
    public:
    void display(){
        cout<<"1. Derived Class OP"<<endl;
    }
};

class Der2 : public Base{
    public:
    void display(){
        cout<<"2. Derived Class OP"<<endl;
    }
};

int main()
{
cout<<endl;
Der1 one; Der2 two;

Base *ptr[2]; // Creating Base array pointer...

ptr[0] = &one;
ptr[2] = &two;

// If virtual function is not declared above, Then it will print Base class's display() funciton...
ptr[0]->display();
ptr[1]->display();
ptr[2]->Base::display(); // It will invoke(call) base class display function no matter it's virtual or not...

cout<<endl; 
return 0;}