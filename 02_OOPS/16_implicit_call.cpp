//                   ----------- IMPLICIT CALL ----------

// Implicit call:- Calling constructor by it's object is called implicit call...

#include <iostream>
using namespace std;

class sample{
    private:
    int a,b;
    public:
    sample(){
        cout<<endl<<"Enter the value of a:"<<endl;
        cin>>a;
        cout<<"Enter the value of b:"<<endl;
        cin>>b;
    }

    void display(){
        cout<<endl<<"The value of a is:- "<<a<<endl;
        cout<<"The value of b is:- "<<b<<endl<<endl;
    };

};

int main(){
sample obj; // Implicit call --> We created object to call constructor...
obj.display(); 
    return 0;
}