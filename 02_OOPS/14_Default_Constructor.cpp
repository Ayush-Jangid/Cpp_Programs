// Defalult Constructor:- Constructor that accepts no parameters...

#include <iostream>
using namespace std;

class sample{
    private:
    int a;
    public:
    sample(){
        a = 100;
        cout<<endl<<"The value of a is:- "<<a<<endl<<endl;
    }

    void display(){
        cout<<endl<<"The value of a is:- "<<a<<endl<<endl;
    }

};

int main(){


sample call; // Calling constructor by object simply... 


    return 0;
}