// 1. A static member function can be called even if no Objects of class exist...
// 2. A static member function can only access static data member,other member functions or
//      or any other function outside the class...

#include <iostream>
using namespace std;

class Myclass{
    static int count; // Declaring static member function...
    int numa;

    public:
    void increment();
    static void print(); // Static member function...
};

int Myclass :: count; // By default value is 0...

int main(){
    
    Myclass call, call2, call3;
    
    call.increment();
    Myclass :: print(); // We can directly call static funtion without any objects...

    call2.increment();
    Myclass :: print();

    call2.increment();
    Myclass :: print();

    return 0;
}

void Myclass :: increment(){
    count++;
}

// Defining static member function...
 void Myclass :: print(){

    //  num = 1; // --> We can't access other data members in static member funtion...
     cout<<"The value of count after increment is:- "<<count<<endl;
}