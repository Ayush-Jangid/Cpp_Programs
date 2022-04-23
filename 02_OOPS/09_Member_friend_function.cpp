// Create a program to define the friend function in different classes...

#include <iostream>
using namespace std;

// forward declaration...
class complex;

class calculator{ 
    public:
    int sumreal(complex , complex );

    // int sumreal(complex o1, complex o2){
    //     return (o1.real + o2.real); // --> This will throw an error because
    // }                         // --> complex members not declared above...
};

class complex{
    friend int calculator :: sumreal(complex, complex); 
// We declared sumreal function of class calculator as friend of class complex...
// Now this function can access private members of class complex...
    private:
    int real,img;
    public:
    void setnumber(int n1, int n2){
            real = n1;
            img = n2;
    }
    void display(){
        cout<<endl<<"The complex number is:- "<<real<<" + "<<img<<"i"<<endl<<endl;
    }
};
//                  ------ MAIN FUNCION SECTOIN -------
 
int main(){
complex call1, call2;
call1.setnumber(2,3);
call2.setnumber(4,5);

calculator call;
int result;
result = call.sumreal(call1,call2);

cout<<endl<<"The sum of real part of this complex number is:- "<<result<<endl<<endl;

    return 0;
}

//                  ------ FUNCTION DEFINING AREA ------

int calculator :: sumreal(complex o2,complex o1){
    return (o1.real + o2.real);
}


