//                                  ***** UNION *****

#include <iostream>
using namespace std;

// Union is used for better memeory management...

union money{
    int dollar;
    int rupee;   // We can use only one of them...
    int pound;
};

int main(){
    cout<<endl;
money m;
m.dollar = 25;
cout<<"Value of pound:- "<<m.pound<<endl; 
cout<<"The value dollar is:- "<<m.dollar<<endl<<endl;

m.rupee = 10; //  m.dollar value will be deallocate...
cout<<"The value of rupee is:- "<<m.rupee<<endl<<endl;

cout<<"Value of dollar after rupee declaration:- "<<m.dollar<<endl; 
cout<<"Value of pound after rupee declaration:- "<<m.pound<<endl;

    return 0;
}