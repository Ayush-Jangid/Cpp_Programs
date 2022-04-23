// Virtual function:- A virtual function is a member function which is declared within 
//                    a base class and is re-defined(Overridden) by a derived class...

#include <iostream>
using namespace std;

class Base{
    int a = 50;
    public:
    virtual void display(){ // Now it will not be call by base class's pointer...
        cout<<endl<<"A:- "<<a<<endl<<endl;
    }
};

class Derived : public Base{
    int b = 100;
    public:
    void display(){ // It will be called by base class's pointer...
        cout<<endl<<"B:- "<<b<<endl<<endl;
    }
};

int main(){
Derived der;
Base *ptr = &der;

ptr->display();

    return 0;
}
/*
Rules of Virtual functions:
1. They cannot be static...
2. They are accessed by objects pointers...
3. Virtual functions can be a friend of another class...
4. A virtual function in base class might not be used...
5. If a virtual function is defined in a base class,
   there is no need of redefining it in derived class...

*/