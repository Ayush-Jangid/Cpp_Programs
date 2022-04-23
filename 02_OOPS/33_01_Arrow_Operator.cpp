#include <iostream>
using namespace std;

class sample{
    int a,b;
    public:
    void setdata(int x,int y){
        a = x; b = y;
    }

    void display(){
        cout<<endl<<"The value of a is:- "<<a
            <<endl<<"The value of b is:- "<<b
            <<endl<<endl;
    }
};

int main(){
sample call; // Object created

//               _____Pointers_To_Objects______

// sample *ptr = &call; // Creating pointer and pointing it at an object...
sample *ptr = new sample; // We can also create it like this...

(*ptr).setdata(30,50);
(*ptr).display();

// Arrow Operator(->) :- It allows us to access elements in Class, Structure etc.
//                       by using a pointer...

// (*ptr).setdata(5,10); is as same as:  
 ptr->setdata(5,10); 

// (*ptr).display(); is as good as:
ptr->display();


    return 0;
}