#include <iostream>
using namespace std;

void set(int x, int y){
    x = 10; 
    y = 20;
}

void swapp(int x,int y,int swapper){
swapper = x;
x = y;
y = swapper;
}

int main(){

int a=44,b=55; 
cout<<endl<<"Before:- "<<endl<<endl
<<"A:- "<<a<<endl
<<"B:- "<<b<<endl;

swapp(a,b);

cout<<endl<<"After:- "<<endl<<endl
<<"A:- "<<a<<endl
<<"B:- "<<b<<endl;
    return 0;
}