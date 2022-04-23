#include <iostream>
using namespace std;
//                          ...OPERATORS IN C++...
int main(){
int a,b;
a = 10;
b = 5;
cout<<"Airthmetic Operators..."<<endl<<endl;
// Airthmetic operators...
cout<<"The value of a+b is "<<a+b<<endl;
cout<<"The value of a-b is "<<a-b<<endl;
cout<<"The value of a*b is "<<a*b<<endl;
cout<<"The value of a/b is "<<a/b<<endl;
cout<<"The value of a%b is "<<a%b<<endl;
cout<<"The value of a++ is "<<a++<<endl;
cout<<"The value of a-- is "<<a--<<endl;
cout<<"The value of ++a is "<<++a<<endl;
cout<<"The value of --a is "<<--a<<endl;

// Assignment Operators --> used to assign values to variables...
// int a = 3, b=8;
// char d = 'h';

cout<<endl<<"...Comparsion Operators..."<<endl<<endl;
// Comparision Operators...
cout<<"The value of a==b is "<<(a==b)<<endl;
cout<<"The value of a!=b is "<<(a!=b)<<endl;
cout<<"The value of a<=b is "<<(a<=b)<<endl;
cout<<"The value of a>=b is "<<(a>=b)<<endl;
cout<<"The value of a<b is "<<(a<b)<<endl;
cout<<"The value of a>b is "<<(a>b)<<endl;

// Logical Operators...
cout<<endl<<"...Logical Operators..."<<endl<<endl;

cout<<"The value of this Logical Operator: ((a==b) && (a<b))  is:- "<<((a==b) && (a<b))<<endl; // && and operator...

cout<<"The value of this Logical Operator: ((a==b) || (a<b))  is:- "<<((a==b) || (a>b))<<endl; // || or operator...

cout<<"The value of this Logical Operator: (!(a==b) && (a<b))  is:- "<<(!(a<b))<<endl; 
// ! :- not opetator... It will reverse the result...


    return 0;
}