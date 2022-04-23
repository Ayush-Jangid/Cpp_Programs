/*
Create 2 classes:
1. SimpleCalculator:- Takes input of two numbers using utility function and performs 
                      +, -, *, / and displays the result using another function...

2.ScientificCalculator:- Takes input of two numbers using utility function and
                         performs any 3 scientific operation of your choice,
                         display the result using another funtion...

Create another class HybridCalculator and inherit it using these two classes:

1. Which type of inheritence are you using??? = Multiple...
2. Which mode of inheritence are you using??? = public...

*/
#include <cmath>
#include <iostream>
using namespace std;

float a,b,res; // global variables

// Class SciCalculator (Base Class-1)...
class SimpleCalculator{
    public:
// Functions...
void add();
void sub();
void mul();
void div();
};

// Class SciCalculator (Base Class-2)...
class SciCalculator{
public:
// Functions...
void rem();
void power();
void per();
};

// HybridCalculator(Derived-Class)...
class Hybridcalculator : public SimpleCalculator, public SciCalculator{




};
//                      Main Function() 
int main(){
SciCalculator sc; SimpleCalculator sp; Hybridcalculator hc;

sc.power(); // Calling function using SciCalculator...

sp.mul();  // Calling function using SimpleCalculator...

hc.per(); // Calling function using HybridCalculator...

cout<<endl;
    return 0;
}





// ----------------- Result-Function() -----------------------
void result(){
cout<<"The result is:- "<<res<<endl;
}
// ----------------- SimpleCalculator Funcitons ----------------------
void SimpleCalculator :: add(){
    cout<<endl<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    res = a+b;
    result();
}

void SimpleCalculator :: sub(){
    cout<<endl<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    res = (a-b);
    result();
}

void SimpleCalculator :: mul(){
    cout<<endl<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    res = (a*b);
    result();
    
}

void SimpleCalculator :: div(){
    cout<<endl<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    res = (a/b);
    result();
}


// ----------------- SciCalculator Funcitons ----------------------

void SciCalculator :: power(){
    cout<<endl<<"Enter a number: ";
    cin>>a;
    cout<<"Enter its's power: ";
    cin>>b;
    res = pow(a,b);
    result();
    }

void SciCalculator :: rem(){
    cout<<endl<<"Enter Divident: ";
    cin>>a;
    cout<<"Enter divident: ";
    cin>>b;
    res = ((int)a%(int)b);
    result();
}

void SciCalculator :: per(){
cout<<endl<<"Enter Value: ";
cin>>a;
cout<<"Enter Percetage: ";
cin>>b;

res = ((a/100) * b);
result();
}

