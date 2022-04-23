//                                      ***** FUNCTIONS *****

#include <iostream>
using namespace std;

int sum(int x , int y){
    // x any y are formal parameter... x and y will be take value from actual parameters...
    return x+y;
}
void display(){ // Void will use when no need to return value...
    cout<<"Nice You did it..."<<endl<<endl;
}

int main(){
    
int a,b,summ;

cout<<"Enter the value of a:"<<endl;
cin>>a;

cout<<"Enter the value of b:"<<endl;
cin>>b;

summ = sum(a,b); //  a and b are actual parameter...

cout<<endl<<"The sum of a and b is:- "<<summ<<endl<<endl;

display();

    return 0;
}