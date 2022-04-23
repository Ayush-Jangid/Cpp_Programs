// Function Overloading:- 
//                       It is a feature of C++, Where we can use different functions with same names
//                        but different Arguments...

#include <iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}
// int sum(int a,int b){       // This function will give us a Error...
//     return a*b;             // Because parameter(arguments) also same...
// }

int sum(int a,int b,int c){ // This will run sucessfully 
    return a+b+c;           // Because, function name is same but arguments are different...
}

int main(){
    cout<<endl<<"Sum:- "<<sum(4,5)<<endl;

    cout<<endl<<"Sum:- "<<sum(2,3,5)<<endl<<endl;
    return 0;
}