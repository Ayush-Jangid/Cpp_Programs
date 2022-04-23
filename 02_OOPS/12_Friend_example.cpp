// CREATE A PROGRAM TO SWAP THE VALUE OF TWO MEMBERS OF DIFFERENT CLASS USING 
// FRIEND FUNCTION...

#include <iostream>
using namespace std;

// FORWARD DECLARATION...
class Y;

//              ---------- DEFINING CLASS X ----------
class X{
    private:
    int val;
    public:
    void input(int a){
        val = a;
    }
    void display(){
        cout<<endl<<"The value of X is:- "<<val<<endl;
    }
    friend void swap(X &,Y &);
};

//              ---------- DEFINING CLASS Y ----------

class Y{
    private:
    int val;
    public:
    void input(int b){
        val = b;
    }
    void display(){
        cout<<endl<<"The value of Y is:- "<<val<<endl<<endl;
    }
    friend void swap(X &,Y &);
};

//            ---------- DEFINING SWAP FUNCTION(SWAP) ----------

void swap(X & x, Y & y){ // Using refrence variables to swap values...
    int swapper;
    swapper  = x.val;
    x.val = y.val;
    y.val = swapper;

    cout<<endl<<"-------- After swap -------"<<endl;
    x.display();
    y.display();
}

//              ---------- MAIN FUNCTION() ----------

int main(){
X x;
Y y;

x.input(2);
y.input(5);

swap(x, y);

// x.display(); // We can also call this function from here...
// y.display(); // We can also call this function from here...

    return 0;
}