// Parameterized constructor:- Constuctor that accepts or recieve parameters...

#include <iostream>
using namespace std;

class complex{
    private:
    int a,b;
    public:

    complex(int x,int y){
        a = x;
        b = y;
        cout<<endl<<"The complex number is:- "<<a<<" + "<<b<<"i"<<endl<<endl;

    }

    void display(){
        cout<<endl<<"The complex number is:- "<<a<<" + "<<b<<"i"<<endl<<endl;
    }

};

int main(){

// Implicit Call... --> When the constructor called by its objects...
complex a(3,5);

// Explicit Call... --> When the constructor called by its parameters...
complex b = complex(7,8);

    return 0;
}