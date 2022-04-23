//            __________Templates_In_Functions__________

#include <iostream>
using namespace std;

template <class T=int, class B=float> 

T mul(T x, B y){
B res = (x*y);
return res;
}

int main(){
float r;

r =  mul <float,float> (4.4,5.8);

cout<<endl<<"The Multiply is:- "<<r<<endl<<endl;
    return 0;
}