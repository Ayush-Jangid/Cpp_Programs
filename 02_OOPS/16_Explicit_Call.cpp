// Explicit call:- When the constructor is called by its parameter...

#include <iostream>
using namespace std;

class sample{
    private:
    int a,b;
    public:
    sample(int x,int y){
        a = x;
        b = y;
        cout<<endl<<"The value of a is:- "<<a<<endl;
        cout<<"The value of b is:- "<<b<<endl<<endl;
    }

};

int main(){
    // Explicit call...
sample obj = sample(3,4); // --> Constructor called by its parameter...



sample ob(3,3); // --> This will called implicit call,
//                     because constructor is called by its object...
    return 0;
}