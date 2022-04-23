#include <iostream>
using namespace std;

template <class T>
class sample{
    public:
    T a;
    sample(T x){
        a = x;
    }
    void display(); // Member Function Declared...
};

template <class T> // Defining Template... 

void sample <T> :: display(){ // Defining Member function outside the class...
cout<<endl<<"A:- "<<a<<endl<<endl;
}


int main(){

sample <float> call(4.5);
call.display();

    return 0;
}