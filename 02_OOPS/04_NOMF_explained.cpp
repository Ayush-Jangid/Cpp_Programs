// Nesting of Member functio:- A member function can be called by using its name, 
//                             inside another member function of the same class...

#include <iostream>
using namespace std;

class test{
    private:
    void a(); // Private Member Function...
    
    public:
    void b(); // Public Member Function...
    void c(); // Public Member Function...
};

int main(){
    test call;
    // call.a(); // We can't access this function from here because this is a private function...
    call.b();
    call.c();
    return 0;
}

void test :: a(){
    int a = 1;
    cout<<a<<endl;
}

void test :: b(){
        a(); // b() called a() --> Nesting of member function...
        c(); // b() called c() --> Nesting of member function...
    int b = 2;
    cout<<b<<endl;
}

void test :: c(){
    //  b(); // It will cause infinite calling...(b() will call c() and c() will call b() again and again)...
    
    int c = 3;
    cout<<c<<endl;
}