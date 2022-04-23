#include <iostream>
using namespace std;

int main(){
//                     ********* Refrence Variables ***************

//         Vishu == Ayush == bishnuu   --------> This is the diffent names of same person...
//                                               We can call him any of them...

int a = 45;
int &v = a; // Now v is the refrence variable of a... 

cout<<"The value of a is "<<a<<endl;
cout<<"The value of b is "<<v<<endl<<endl;

v = 33; // The value of a also change bcz they both are same...

cout<<"Now the value of a is "<<a<<endl;
cout<<"Now the value of v is "<<v<<endl;
cout<<endl;

a = 5; // It will change the value of a as well as v...

cout<<"Now, the value of a is "<<a<<endl;
cout<<"Now, the value of v is "<<v<<endl;
    return 0;
}