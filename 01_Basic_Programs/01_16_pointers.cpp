// Pointers:- Pointer is a data type which stores the address of other datatypes...

#include <iostream>
using namespace std;

int main(){
    int i = 5;
    int *p; // pointer declared...
    p = &i; // & :- Address of Operator...
        int ** pp;
    pp = &p;

              // * :- Dereference Operator... 

    cout<<"The value of i is:- "<<*p<<endl; // * operator will print the value... 
    cout<<"The value of i is:- "<<*(&(*(&(*(&i))))) <<endl; // Only for fun...
    cout<<"The value of i is:- "<<i<<endl;
    cout<<"The value of i is:- "<<**pp<<endl<<endl;

    cout<<"The address of i is:- "<<p<<endl;
    cout<<"The address of i is:- "<<&(*(&(*p)))<<endl; // Only for fun...
    cout<<"The address of i is:- "<<&i<<endl; // & operator will print the address...
    cout<<"The address of i is:- "<<*pp<<endl<<endl;

    // int **pp; // pointer to pointer...
    // pp = &p;
    
    cout<<"The address of p is:- "<<pp<<endl;
    cout<<"The address of p is:- "<<&p<<endl;
    cout<<"The address of p is:- "<<&(*(&p))<<endl<<endl; // Only for fun...


    // pointer to pointer to pointer...
    int *** ppp;
    ppp = &pp;
    // and so on so on so on...



    return 0;
}