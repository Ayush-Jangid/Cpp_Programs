// Destructor:- Basically, it deallocates the memory that is allocated by constructors...


#include <iostream>
using namespace std;

int count = 0; // Global variable...

class sample{
    public:
    sample(){
        count++;
        cout<<endl<<"Constructor called for Object"<<count<<endl;      
    }

//             ______________DESTRUCTOR_______________
~sample(){
    cout<<endl<<"Destructor called for Object"<<count<<endl;
    count--;
}
//    ____________________________________________________________
};

int main(){
cout<<endl<<"Entering main function()"
<<endl<<"Creating first object Obj1"<<endl;
sample obj1;
{
cout<<endl<<"Entering block"
<<endl<<"Creating two more objects"<<endl;
sample obj2, obj3;
cout<<"Exiting block"<<endl;
}
cout<<"Back to main funtion"<<endl;
    return 0;
}