//         __________Templates_With_Default_Parameters__________

#include <iostream>
using namespace std;

template <class I=string, class F=float, class C=char> // We gave templates a default
                                                    // parameter or datatype...
class nothing{
public:
I a; F b; C c;

nothing(I x,F y,C z){
    a = x; b = y; c= z;
}

void display(){
    cout<<endl<<"A:- "<<a
        <<endl<<"B:- "<<b
        <<endl<<"C:- "<<c<<endl<<endl;
}
};

int main(){

nothing <> call("Vishuuu", 5.5, 'A'); // Now, it will take Default Datatypes Declared Above...
call.display();


nothing <char, float, string> call2('A', 7.7, "Gotiyaaa"); // Now, it will take given parameters...
call2.display();

}