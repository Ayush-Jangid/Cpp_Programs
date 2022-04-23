#include <iostream>
using namespace std;
// Base Class:
class Base{
    int num1; // We can't derive this data bcz, its private...
    public:
    int num2;
    void setnum(){
        num1 = 15;
        num2 = 20;
    }
    int getnum1(){
        return num1;
    }

};

// Derived Class:
class Derived : public Base{
    public:
    int num3;
    void process();
    void display();
    
};

int main(){
Derived call;

// call.num1 = 34; --> We can't access private member of base class, by derived class...

call.setnum();
call.process();
call.display();

cout<<endl;
    return 0;
}

void Derived :: process(){
    num3 = num2 * getnum1();
}

void Derived :: display(){
    cout<<endl<<"The value of num1:- "<<getnum1()
    <<endl<<"The value of num2:- "<<num2
    <<endl<<"The value of num3:- "<<num3<<endl;
}