#include <iostream>
using namespace std;

int main(){

int a = 45;
cout<<"The value of a was:- "<<a<<endl;

a = 25; // Value of a will be changed...
cout<<"The value of a is:- "<<a<<endl;

const int b = 45; // const:- It makes the value constant(unchangeable)...
cout<<"The value of b is:- "<<b<<endl;

// b = 25; :- Value can't be change because of const...
// cout<<"Now, the value of b is:- "<<b<<endl;

    return 0;
}