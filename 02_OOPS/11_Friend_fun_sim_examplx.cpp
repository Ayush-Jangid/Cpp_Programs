#include <iostream>
using namespace std;

// Forward declaration...
class Y;

//           ----------- DEFINING CLASS X ------------
class X{
    private:
    int n;
    public:
    void input(){
        cout<<endl<<"Enter the vlaue:"<<endl;
        cin>>n;
    }
    friend void sum(X,Y); // Declaring as friend...
};

//           ----------- DEFINING CLASS Y ------------
class Y{
    private:
    int num;
    public:
    void input(){
        cout<<endl<<"Enter the value:"<<endl;
            cin>>num;
    }
    friend void sum(X,Y); // Declaring as friend...
};

//            --------- DEFINING SUM FUNCTION(FRIEND) ---------
void sum(X x1, Y y1){
    cout<<endl<<"The sum of X and Y is:- "<<(x1.n + y1.num)<<endl<<endl;
}

//            -------------- MAIN FUNCTION() -----------------
int main(){
X x;
x.input();

Y y;
y.input();

sum(x,y);

    return 0;
}