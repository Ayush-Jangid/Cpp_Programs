// Destructor:- Destructore is a member function which is used to deallocate the
//              memory that has been allocated for the objects of constructors...
//              It never takes arguments nor return any value...

// Destructor will never takes an argument not it return any value...

#include <iostream>
using namespace std;

class sample{
    private:
    int a;
    static int count;

    public:
    // Declaring and Defining a constructor...
    sample(){
        a=10;
        cout<<endl<<count<<". Constructor is called..."<<endl;  }


    // Declaring and Defining a constructor...

    // ~sample(int x,int y){} --> Destructor never takes arguments
    ~sample(){ 
        count++;
        cout<<endl<<count<<". Destructor is called..."<<endl<<endl;
    }
    void display();
};

int sample :: count = 1;

int main(){

sample call;
call.~sample(); // It will call destructor before display() function...
call.~sample(); // You can call destructor unlimited times...
call.display(); // After display() function again destructor will call automatically...

                 // Destructors will automaticaly call after end of all object...
    return 0;
}

void sample :: display(){
    cout<<endl<<"A:- "<<a<<endl<<endl;
}