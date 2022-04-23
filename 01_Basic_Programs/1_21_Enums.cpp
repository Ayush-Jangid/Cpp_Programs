//                                     ***** ENUM *****

#include <iostream>
using namespace std;

int main(){
    
    enum Name{Rohit , Mohit , Lohit}; // it will store value from 1 to infinty(depends on member)...

    Name a = Mohit;    // Now, we can use Name as a datatype...

    cout<<a<<endl<<endl;

    cout<<Rohit<<endl;
    cout<<Mohit<<endl;
    cout<<Lohit<<endl;

    return 0;
}