//                ------------ FRIEND CLASS ------------

#include <iostream>
using namespace std;

// forward declaration...
class complex;

class calculator{ 
    public:
    int sumreal(complex , complex );
    int sumimg(complex , complex );
};

class complex{
// Declaring the entire class calculator as friend of class complex...
            friend class calculator;
// Now any function of this class can private members of class complex...

    //    ------------ individually declaration ------------ 

    // friend int calculator :: sumreal(complex, complex); 
    // friend int calculator :: sumcomp (complex, complex);

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

//             ------ FUNCTION DEFINING AREA ------

int calculator :: sumreal(complex o2,complex o1){
    return (o1.real + o2.real);
}

int calculator :: sumimg(complex o1, complex o2){
    return (o1.img + o2.img);
}

