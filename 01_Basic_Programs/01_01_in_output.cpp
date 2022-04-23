#include <iostream> // System Header file...

int main(){
int a,b;

std::cout<<"Enter the value of a";  // cout<<:- is used to print output... 
//                                     << :- Output Operator or Insertion Operator or put operator...

std::cin>>a;                        // cin>>:- is used to give input...
//                                     >> :- Input Operator or Extraction Operator or Get Operator...

std::cout<<"Enter the value of b:\n";
std::cin>>b;

int c = a+b;

std::cout<<"The sum of and b is:- "<<c;
    return 0;
}

