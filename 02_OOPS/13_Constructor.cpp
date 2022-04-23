//                ----------  CONSTRUCTORS ----------
// Constructor:- It is a special member function with same name as of the class...

#include <iostream>
using namespace std;

class sample{
    private:
    int a,b;
    // sample(); --> We can't declare constructor in private area...
    public:
    sample(); // --> Constructor declared...

//    -------------------- We can also define consturctor here ---------------------
//  sample(){
//     cout<<"Enter the value of a:"<<endl;
//     cin>>a
// }
//     ---------------------------------------------------------------------------

    void display(){
        cout<<endl<<"The value of a is:- "<<a<<endl;
        cout<<"The value of b is:- "<<b<<endl<<endl;
    }

};
//             ---------- DEFINING CONSTRUCTOR ----------
sample :: sample(){
    cout<<endl<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    cout<<endl<<endl;
}

int main(){
// sample(); --> You can also call constructor like this for fun...
sample call;
call.display();
return 0;
}

/*            ------ CHARACTERSTICS OF CONSTRUCTORS ------

1. It should be declared in the public section of the class...
2. They are automatically invoked(excuted) whenever the object is created...
3. They cannot return value, they don't have return type...
4. It can have default arguments...
5. We can't refer their address...

*/