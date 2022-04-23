#include <iostream>
using namespace std;

class sample{
    int a,b;
    public:
    sample(int x, int y=1){ // Now, The default value of y is 1...
           a = x; // It means if you don't give any value it take y as 1...
           b = y;
    }
    void display(){
        cout<<endl<<"The value of a is:- "<<a<<endl;
        cout<<"The value of b is:- "<<b<<endl<<endl;
    }
};

int main(){
sample call(2,4); // The value of y will be 4...
call.display();   // Bcz you gave the value...

sample call2(4); // The value of y will be default(1)...
call2.display(); // Bcz you didn't give any value...

    return 0;
}