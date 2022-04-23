#include <iostream>
using namespace std;

class student{
    private:
    string name;
    int rollno;
    float marks;
    public:
    student(){
        cout<<endl<<"Constructor is called"<<endl;
        cout<<endl<<"Enter Name:"<<endl; cin>>name;
        cout<<"Enter Rollno:"<<endl; cin>>rollno;
        cout<<"Enter Marks:"<<endl; cin>>marks;
        cout<<endl;
    }
    
    void display(){
        cout<<endl<<"Student's Name:- "<<name<<endl;
        cout<<name<<"'s Rollno:- "<<rollno<<endl;
        cout<<marks<<"'s Marks:- "<<marks<<endl<<endl;
    }
    ~student(){cout<<endl<<"Destructor is called..."<<endl<<endl;}
};

int main(){

student s[4];
s[0].display();
s[1].display();
s[2].display();
s[3].display();
//              4 destructors will call after all 4 objects...

    return 0;
}