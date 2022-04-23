#include <iostream>
using namespace std;
int count=0;
class sample{
    public:
    int a;
    void input(){
        cout<<endl<<"Enter the value of a:"<<endl; cin>>a;
    }
    void display() 
    { 
        cout<<endl<<"A:- "<<a<<endl;
         count++;
    }
};

int main(){

sample *ptr = new sample;
ptr->input();
ptr->display();

delete ptr; // It will deallocate the memory that was allocated by ptr...

ptr->display(); // You will get garbage value...

cout<<endl; return 0;
}