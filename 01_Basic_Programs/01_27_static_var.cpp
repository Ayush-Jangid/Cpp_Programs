#include <iostream>
using namespace std;

void result(
){
    static int z =0; // This will execute only once...
    z = z+1; // Next time the function is run, the value of z will be retained...
    
    cout<<"Z:- "<<z<<endl;
    }

int main(){
cout<<endl;
    result();
    result();
    result();
    result();
    result();
cout<<endl;
    return 0;
}
// Static value doesn't lose its value after function got destoryed...