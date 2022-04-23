//            __________Abstract_Class_and_Pure_Virutal_Function__________

// Abstract Class:- A Class which contain atleast one pure virtual function...
//                  Creating a class as Abstract means, You cannot able to create its objects...

// Pure Virtual Function(Method):- It's a virtual function that is required to implemented
//                                 by Derived class. If not then Derived Class also becomes
//                                 an abstract class...

#include <iostream>
using namespace std;

class Base{
    public:
virtual void Display()=0; // =0 --> Do-nothing function or Pure Virtual function...
};

// This class inherits from Base class and implements setdata();
class Derived : public Base{
    public:
    // If this function will not override in this derived class,
    // Then it will also become an abstract class...
    void Display(){
        cout<<endl<<"This function is overidden by this Derived Class..."<<endl<<endl;
    }
};

int main(){
// Base obj;
// obj.setdata(); // We can't create objects of an abstract base class...   

Derived der;
der.Display();

// Creating Pointer of Abstract Base Class...
Derived *ptr; // You can create pointers of Abstract Base Class...
ptr = &der;
der.Display(); 

return 0;
}

void Base :: Display(){
    cout<<endl<<"Hello, There I am base class..."<<endl;
}

/*
 IMPORTANT:- 
 1. Abstrack Class are mainly used for Upcasting,
    so that it's Derived Classes can use it's interface...

 2. We can't create Objects of Abstract class...

 3. If an Abstract have Derived Class, they must implement all pure virtual functions,
    or else it will become Abstract too...

 4. You can't create Objects, but you can use pointers and references to Abstract class type...

 5. Abstract  can have normal functions and variables along with a pure virtual function...

*/