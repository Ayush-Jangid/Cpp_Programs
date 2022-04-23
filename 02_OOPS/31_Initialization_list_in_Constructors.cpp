// Initialization list:- It is used to direct initialize data members of a class...

#include <iostream>
using namespace std;

class Test{
int a; // a will initialize first because we declared it first here...
int b; // b will initialize after a...
public:
// Test(int x, int y) : a(x) , b(y) ---> Direct Initialization...
// Test(int x, int y) : a(x) , b(a*y)
// Test(int x, int y) : b(x) , a(y)
// Test(int x, int y) : a(b) , b(y) 

Test(int x, int y) : b(y) , a(b) // a(b) will be initialize first bcz we declared
//                                       it before b above...
{
cout<<endl<<"The value of a is:- "<<a
    <<endl<<"The value of b is:- "<<b<<endl<<endl;
}
};

int main(){
Test call(5,10);

    return 0;
}