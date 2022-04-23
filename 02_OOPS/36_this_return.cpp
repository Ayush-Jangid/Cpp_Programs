#include <iostream>
using namespace std;

class sample{
    int a;
    public:
    sample & setdata(int a) 
    {
        this->a = a; 
        return *this;
    }
    void display(){
        cout<<endl<<"The value of a is:- "<<a<<endl<<endl;
    }
};

int main(){

sample call, store;
call.setdata(25).display(); // Now we can directly invoke display() function using setdata()...

return 0;
}