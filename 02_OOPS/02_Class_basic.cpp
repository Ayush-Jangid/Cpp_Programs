// Class:- Class is a user-defined datatype which held its own data(member and member functions)...

#include <iostream>
using namespace std;

class student {
    private:  // You can't access without any class function... // --> Acess specifier...

    float marks;  // Data members...    
    int rollno;  // Data members...  

    public:   // You can access it from anywhere... // --> Acess specifier...

    char name[25];  // Data members...

    void input(student &s1); // Member functions... // Declaration...

    void output(student s){  // Member function...
           
            cout<<endl<<"Name:- "<<s.name<<endl;
            cout<<"Rollno of "<<s.name<<":-"<<s.rollno<<endl;
            cout<<"Marks of "<<s.name<<":-"<<s.marks<<endl<<endl;
    }
    


};

void student :: input(student &s1){ //        We can access memberfunction outside the class...
cout<<"Enter name:- "<<endl;
cin>>s1.name;

cout<<"Enter Rollno of "<<s1.name<<":- "<<endl;
cin>>s1.rollno;                                  // We can use private 

cout<<"Enter marks of "<<s1.name<<":- "<<endl;
cin>>s1.marks;                                  // We can use private 
}

int main(){
    
student rohit;
// rohit.rollno = 45;  // We can't access any private member from main();

rohit.input(rohit);

rohit.output(rohit);

    return 0;
}