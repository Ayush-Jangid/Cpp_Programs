#include <iostream>
using namespace std;

// Template Class With Multiple Parameters...

template <class One, class Two, class Three> // Now, there is three custom templates...

class sample{
public:
One a; Two b; Three c;

sample(One first, Two Second, Three Third){
    a = first; b = Second; c = Third;
}
    
void display(){
    cout<<endl<<"First:- "<<a
        <<endl<<"Second:- "<<b  
        <<endl<<"Third:- "<<c
        <<endl<<endl;
}
};

int main(){

sample <int,float,char> call(2,3.4,'A');
call.display();

sample <string,float,float> call2("Vishuuu",4.3, 54.5);
call2.display();

    return 0;
}