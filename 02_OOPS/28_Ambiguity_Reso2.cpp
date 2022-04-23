//       __________ Ambiguity_Resolution_of_functions_in_Inheritence__________
// When one class is derived from two or more base classes then,
// there is chances that the base classes have the variables with same name...

#include <iostream>
using namespace std;

class base1{
    public:
    int n=1;
};

class base2{
    public:
    int n=2;
};

class derived : public base1 , public base2{
    public:
    // int n=3; // It will override base classes's n...

    // int n = base1 :: n; // Now, it will take base1 class's n; 
    int n = base2 :: n; // Now, it will take base2 class's n;
     };



int main(){

derived call;

call.n = 12;
cout<<endl<<"N:- "<<call.n<<endl<<endl;

call.base1::n = 24;
call.base2::n = 36;

cout<<"Base1's n:- "<<call.base1::n<<endl;
cout<<"Base2's n:- "<<call.base2::n<<endl<<endl;

    return 0;
}
