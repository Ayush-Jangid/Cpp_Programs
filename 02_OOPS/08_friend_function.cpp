#include <iostream>
using namespace std;
//                   _____Class_Complex_____
class Complex{
    int real,img;
    public:
    friend void sumcomp(Complex , Complex); // _____Friend_Function_Declared_____
    void input(int a,int b);
    void print();
};


//                _____Normal_Function_____
 void sumcomp(Complex x,Complex y){ 
     // x.print(); You can also call private functions of friend class...
cout<<endl<<"Complex Sum:- "<<(x.real+y.real)<<" + "<<(x.img+y.img)<<"i"<<endl<<endl; 
} // Now this function can use the private and protected member of Class Complex

//                ______Main_Function_____
int main(){ cout<<endl;

Complex obj,ob;
obj.input(3,5);
ob.input(2,15);
// ob.sumcomp(obj,ob); --> You can't call this friend function with objects...
sumcomp(obj,ob);
    return 0;
}

//   _____Defining_Functions_____
void Complex :: input(int a,int b){
    real = a; img = b;
}

void Complex :: print(){
    cout<<endl<<"The Complex Number is:- "<<real<<" + "<<img<<"i"<<endl;
}