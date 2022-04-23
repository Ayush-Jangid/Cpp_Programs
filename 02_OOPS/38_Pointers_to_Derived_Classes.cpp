//             __________Pointers_To_Derived_Classes__________
#include <iostream>
using namespace std;

 class Base{
     public:
     int a;
     void display(){
         cout<<"The value of is:- "<<a<<endl;
     }
 };

 class Derived : public Base{
     public:
     int b;
     void display(){
         cout<<endl<<"The value of b is:- "<<b<<endl;
     }
     void show(){
         cout<<"____Derived_Class_OP_____";
     }
 };

int main(){ cout<<endl;
//   _____Pointing_Base_class's_Pointer_to_derived_class's_Object_____
Derived der;
Base *ptr;
ptr = &der; 

ptr->a = 10;
// ptr->b = 10; ===> We can't access Derived class's members with this pointer...
ptr->display(); // Base class display() will be invoke...
// ptr->show(); ===> We can't access Derived class function with this pointer...


// ____________Pointing_Derived_Class's_Pointer_To_Derived_Class's_Object______________
Base base;
Derived *point;
// point = &base; ===> Derived Class's Pointer can't point base class...
point = &der;

point->a = 50; 
point->display();
point->b = 100;
point->display();
cout<<endl; return 0;
}