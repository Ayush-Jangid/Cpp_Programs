//         ______Calling_Class's_Function_With_Constructor(Parameterized)______
#include <iostream>
using namespace std;

class t{
    private:
    int a;
    public:
    t(int d){
        a = d;
    }
    void display(){
        cout<<endl<<"A:- "<<a<<endl<<endl;
    }
};

int main(){

t call = t(5); // or t call(5);

call.display(); // Calling function with object...

t(1).display(); // Calling function with constructor...
t(2).display();
t(3).display();

// t.display(); --> It will throw an error bcz bcz of no parameters...



    return 0;
}