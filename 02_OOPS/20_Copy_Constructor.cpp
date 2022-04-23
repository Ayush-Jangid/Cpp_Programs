// Copy constructor:- It is a method or member function which is used to create an 
//                    exact copy of an object within same value of an existing object...
// In others words:- When a new object is created from existing object...
// Important:- If i don't create a copy const., compiler will call its default copy const...


#include <iostream>
using namespace std;

class sample{
    int a;
    public:
    sample(){
        a = 0;
    };
    sample(int n){
        a = n;
    };
//                     __________COPY CONSTRUCTOR__________

//        When there is no constructor found, 
//        compiler supplies its own default copy constructor...
    sample(sample &m){
    cout<<endl<<"Calling copy constructor..."<<endl;
        a = m.a;
        cout<<endl<<"A = "<<a<<endl; }
//        ____________________________________________________________

    void display(){
      cout<<endl<<"The value of a is:- "<<a<<endl;
    }
};

int main(){
sample x,y,z(25), m, call2;
z.display();


// sample call(z); // Copy const. invoked --> It will copy the value of object z values...
// call.display();

call2 = z; // Copy constructor will not invoke(call)...
call2.display(); // Because object(z) already declared above...

sample call3 = z; // Copy constructor will call...
call3.display(); 

cout<<endl;
return 0;
}