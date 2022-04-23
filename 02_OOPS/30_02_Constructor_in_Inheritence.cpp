// What if there is multiple parameterized constructor in base class...
// Based on my research...

// Note:- You can initialize only one constructor of base class... 

#include <iostream>
using namespace std;

//     __________Base_Class___________
class base{
public:
base(int a);
base(int a, int b);
base(int a,int b,int c);
};

//     __________Derived_Class__________
class derived : public base{
public:
// derived() : base(1) // It will call constructor with one parameter...
// derived() : base(1,2) // It will call constructor with two parameters...
derived() : base(1,2,3) // It will call constructor with three parameters

// derived() : base1(1), base(1,2), base(1,2,3) 
// This will throw an error because you can initialize only one constructor of base class...

{
cout<<endl<<"_____Derived's_Constructor_Called_____"<<endl<<endl;
}

};

//     __________Main_Function__________
int main(){

derived call;

    return 0;
}



//     __________DEFINING_CONSTRUCTORS__________
base :: base(int a){
    cout<<endl<<"________Constructor_With_One_Parameter__________"<<endl<<endl;
}

base :: base(int a,int b){
    cout<<endl<<"________Constructor_With_Two_Parameter__________"<<endl<<endl;
}

base :: base(int a,int b,int c){
    cout<<endl<<"________Constructor_With_Three_Parameter__________"<<endl<<endl;
}