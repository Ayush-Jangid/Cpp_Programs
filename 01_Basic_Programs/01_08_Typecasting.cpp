#include <iostream>
using namespace std;

int main(){
// Typecasting is used to typecast from one datatype to another... eg.. float to int, int to float etc...
int x = 20;
float y = 20.25;

cout<<"The value of x is:- "<<(float)x <<endl;
cout<<"The value of x is:- "<<float(x) <<endl<<endl;

int z = int(y); 
cout<<"The value of z is:- "<<z<<endl<<endl;

cout<<"The expression is:- "<<x +y<<endl;
cout<<"The expression is:- "<<x +(int)y <<endl;
cout<<endl;

// C++ Stores any decimal value as double by default, that's why we need to typecast...

float a = 25.5;
long double b = 25.5;

//     ************** float, double and long double Literals ***************
cout<<"The size of this variable is "<<sizeof(25.5)<<endl; // by default double...
cout<<"The size of this variable is "<<sizeof(25.5f)<<endl; // typecasted as float...
cout<<"The size of this variable is "<<sizeof(25.5l)<<endl; // typecasted as long double...
cout<<"The size of this variable is "<<sizeof(25.5F)<<endl; // typecasted as float...
cout<<"The size of this variable is "<<sizeof(25.5L)<<endl; // typecasted as long double...

cout<<"The size of this variable is "<<sizeof(a)<<endl;
cout<<"The size of this variable is "<<sizeof(b)<<endl;
    return 0;
}