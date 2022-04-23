#include <iostream>
using namespace std;

//                ***** Call by Refrence using Refrence Variables and Returning Value *****

int & swap(int &a, int &b){
    int temp;
    cout<<"The value of a is:- "<<a<<endl;
    cout<<"The value of b is:- "<<b<<endl<<endl;
    temp = a;
    a = b;
    b = temp;
    
    // return a,b; // b will be 500 means y...
    // return b,a; // a will be 500 means x...
    
    return a; // x will be 500...
}

int main(){
int x = 10;
int y = 5;
    
//                ***** Call by Refrence using Refrence Variables and Returning Value *****

  
swap(x,y) = 500;  // y will be 500 by default if we will not return anything...
cout<<endl<<"X = "<<x<<endl<<"Y = "<<y<<endl<<endl;

    return 0;
}