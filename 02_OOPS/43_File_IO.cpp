#include <iostream>
#include <fstream>
/*
The Useful Classes for working with files in C++ are:
1. fstreambase
3. ofstream(Output File Stream):- Used to write a file --> Derived from fstreambase...
2. ifstream(Input File Stream):-  Used to read a file  --> Derived from fstreambase...

 In order to work with files in C++, You will have open it. Primarily, there are  
 two ways to open a file:

 1. Using the Constructor...
 2. Using the member function open() in the class...  

*/


using namespace std;

int main(){  cout<<endl;
string st = "Yeah, You Printed Me Successfully...";
string store;

// Opening File using constructor and Writing it...
 ofstream ccout("   "); // Writing Operation...
 ccout<<st; // We can use ccout<<(You can give it any name) same as cout<< function...



// Opening File using constructor and Reading it...
 ifstream ccin("44_Read_Me.txt"); // Reading Operation...
 ccin>>store; // This will work same as cin(You can give it any name of your choice)...


 getline(ccin, store); // getline function will read one line
 cout<<store<<endl;
 
 getline(ccin, store); // this will read second line...
 cout<<store<<endl;

cout<<endl; return 0;
}
/*

IMPORTANT NOTE:- 

It is possible to read and write the same file at different times,
read one file and write another at the same time is also possible,
but it isn't possible to read and write the same file at the same time.  

You can write and read same file using close() function...

*/