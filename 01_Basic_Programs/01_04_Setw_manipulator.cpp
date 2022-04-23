#include <iostream>
#include <iomanip>
using namespace std;

//                           Manipulators in C++

int main(){
int a,b,c;
a = 4;
b = 34;
c = 1234;
//                       WITHOUT SETW:-
cout<<"The value of a is:- "<<a<<endl;
cout<<"The value of b is:- "<<b<<endl;
cout<<"The value of c is:- "<<c<<endl;
cout<<""<<endl;

//                        WITH SETW:-
cout<<"The value of a is:- "<<setw(4)<<a<<endl; // Setw(4) will take 4 integer space...
cout<<"The value of b is:- "<<setw(4)<<b<<endl;
cout<<"The value of c is:- "<<setw(4)<<c<<endl;

    return 0;
}