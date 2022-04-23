#include <iostream>
using namespace std;

class players{
    int age; float weight;
    public:
    void setdata(int a, float w){
        age = a; weight = w;
    }

    void display(){
        cout<<endl<<"AGE:- "<<age<<"Kg"
        <<endl<<"WEIGHT:- "<<weight<<"Kg"<<endl;
    }
};

int main(){  cout<<endl;
int size =2;

players *ptr = new players[size]; // Array of Objects Created...
players *storeptr = ptr; // It will store the current value of ptr...


int ag;
float we;  
for(int i=0; i<size; i++){
    cout<<"Enter The Age Of Player["<<(i+1)<<"]:"<<endl;
    cin>>ag;
    cout<<"Enter The Weight Of Player["<<(i+1)<<"]:"<<endl;
    cin>>we; cout<<endl;
    ptr->setdata(ag,we);
    ptr++;
}

for(int i=0; i<size; i++){
    storeptr->display();
    storeptr++;
}

   cout<<endl; return 0;
}