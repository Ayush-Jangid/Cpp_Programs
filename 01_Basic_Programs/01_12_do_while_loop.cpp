#include <iostream>
using namespace std;
// factorial of 5 is = 5*4*3*2*1...
int main(){
int n;
int result =1;
cout<<"Enter a number:"<<endl;
cin>>n;
int i = n;

do
{
    result = result * n;  // result = 1 * 5;
    n--;
} while (n != 1);

cout<<endl<<"The factorial of "<<i<<" is:- "<<result<<endl<<endl;

    return 0;
}