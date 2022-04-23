// this:- this is a keyword which is a pointer which points to the object 
//        which invokes the member function...

#include <iostream>
using namespace std;

class sample{
    int a; // Instance variable:- A variable which is declared inside the class but 
            //                      outside of all methods called instance variable...
    
    public:
    void setdata(int a) //  a is a local variable...
    {
        this->a = a; // (this) is a pointer pointing instance variable...
        cout<<endl<<"address:- "<<this<<endl<<endl;
        // this is pointing at object(call) and stored it's address...
        // basically, this is a pointer of object(call)...
        // See this for better idea:-  *this = &call;
    }
    void display(){
        cout<<endl<<"The value of a is:- "<<a<<endl<<endl;
    }
};

int main(){

sample call;
sample *ptr = &call;
cout<<endl<<"Address:- "<<ptr<<endl;
call.setdata(23);
call.display();

    return 0;
}
/*
    Whenever the name of instance variable  and local variable both are same
    and if we initialize instance variable with the help of local variable
    then our compiler totally confused  that which one is local and which
    one is instance...

    In this condition we use this to refer instance variable...
*/