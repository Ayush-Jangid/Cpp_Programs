//             __________Overloading_Function()_Templates__________

#include <iostream>
using namespace std;

void display(){
    cout<<endl<<"Normal Function Called..."<<endl;
}

template <class T>
void display(){
    cout<<endl<<"Template Function Called..."<<endl<<endl;
}

int main(){

display(); // Exact match will Call...

display <int> (); // Best match wil Call...

    return 0;
}