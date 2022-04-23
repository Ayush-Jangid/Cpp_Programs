#include <iostream>
using namespace std;
//                         BUILT-IN DATATYPES:-

int glo = 55; // It's a global variable...

void display(){
    cout<< glo<<endl; // It will print the global variable bcz no glo variable declaration in this funtion...
}

int main(){

int glo = 25; // It's a local variable...

cout<< glo<<endl; // It will print the local variable bcz of same name...

cout<< ::glo<<endl; // :: is used to print global variable... if variable name is same...

display();

    return 0;
}