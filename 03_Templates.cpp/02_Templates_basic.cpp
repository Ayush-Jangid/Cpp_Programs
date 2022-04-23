#include <iostream>
using namespace std;

template <class T> // Now T is a Custom Datatype, You can declare it as 
class sum{         // int,float,char etc. according to your use...
    public:
    T a, b, res;
    
    sum(T first, T second){
        a = first; b = second;
        res = (a+b);
    }

    void display(){
        cout<<"Multiply of "<<a<<" and "<<b<<" is:- "<<res<<endl;;
    }
};

int main(){ cout<<endl;

sum <int> obj1(10,13); // Declaring T as int...
obj1.display();


sum <float> obj2(5.6,6.5); // Declaring T as float...
obj2.display();

 cout<<endl; return 0;
}