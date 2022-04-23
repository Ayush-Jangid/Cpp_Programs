// Inline function(One line function):- It is a request to the compiler(not a command)...

// Compiler replaces the function call with the correspoinding function code...


#include <iostream>
using namespace std;

inline int sum(int x,int y){
    return x+y;
}

int main(){
    int a = 2;
    int b = 3;

    cout<<endl<<"The sum of a and b is:- "<<sum(a,b)<<endl; 
    // sum(a,b) will be replaced by (x+y) means (a+b) at compile time...

    cout<<"The sum of a and b is:- "<<sum(a,b)<<endl;
    cout<<"The sum of a and b is:- "<<sum(a,b)<<endl;
    cout<<"The sum of a and b is:- "<<sum(a,b)<<endl;
    cout<<"The sum of a and b is:- "<<sum(a,b)<<endl;
    cout<<"The sum of a and b is:- "<<sum(a,b)<<endl<<endl;

    return 0;
}