#include <iostream>
using namespace std;

class complex{
    private:
    int a;
    int b;
    public:
    void getdata(int x, int y);
    void setdata(complex n1, complex n2);
    void print();
};

int main(){
    
complex c1, c2, c3;

c1.getdata(1,2);
c1.print();


c2.getdata(3,4);
c2.print();

c3.setdata(c1,c2);
c3.print();

    return 0;
}

void complex :: getdata(int x, int y){
a = x;
b = y;
}

void complex :: setdata(complex n1, complex n2){
a = n1.a + n2.a;
b = n1.b + n2.b;
}

void complex :: print(){
    cout<<"The complex number is:- "<<a<<" + "<<b<<"i"<<endl;
}