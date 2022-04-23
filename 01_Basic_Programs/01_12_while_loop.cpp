#include <iostream>
using namespace std;

int main(){
int n;
int i =0;
cout<<"Enter a number"<<endl;
cin>>n;

cout<<endl<<"Multiplication table of "<<n<<":-"<<endl<<endl;
while (i!=10)
{
    cout<<n<<" X "<<i+1<<" is:- "<<n*(i+1)<<endl;
    i++;
}


    return 0;
}