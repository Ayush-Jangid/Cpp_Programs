#include <iostream>
using namespace std;

// Base Class:
class employee{
    public:
    int id;
    float salary;
    employee(){} // Default constructor...
    employee(int idd,float sal=150.50){
        id = idd;
        salary = sal;
    }
};

// Derived Class Syntax:-  
/*
class {{derived-class-name}} : {{visiblity-mode}} {{base-class-name}}
{
    class members/methods/etc...
};
  Visiblity Mode:- It specifies whether the features is privately or publicly derived...
Note:
1. Default visiblity mode is private...
2. Public visiblity mode:- Public members of base class become public members
                           derived class...
3. Private visiblity mode:- Public members of base class become private members
                            derived class...
4. Private members can never be inherited...
*/

// ___________Creating Derived Class____________
class programmer : public employee {
public:
programmer(int iid){ 
    id = iid;
}
int lancode = 5;
void display(){
    cout<<endl<<"ID:- "<<id<<endl;
} 
};


int main(){
employee rohit(1), vipin(2);

programmer vishu(11);
vishu.display();
cout<<endl<<"Language Code:- "<<vishu.lancode<<endl;

cout<<endl;
    return 0;
}