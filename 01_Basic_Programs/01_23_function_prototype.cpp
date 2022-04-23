//                                      ***** FUNCTIONS PROTOTYPE *****

#include <iostream>
using namespace std;

int sum(int , int); // function prototype... Now we are able to create sum funtion after main()...

int main(){
    
int a,b,summ;

cout<<"Enter the value of a:"<<endl;
cin>>a;

cout<<"Enter the value of b:"<<endl;
cin>>b;

summ = sum(a,b); 

cout<<endl<<"The sum of a and b is:- "<<summ<<endl<<endl;

    return 0;
}

int sum(int x , int y){
    return x+y;
}