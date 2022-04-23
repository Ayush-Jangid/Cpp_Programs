// Static data member is shared by all objects...

// No matter how many objects of class are created, there is only one copy of static data member...

#include <iostream>
using namespace std;

// int rollno; // --> We can also use global variable for this...

class student
{
    // int rollno = 0; // it's vlaue get reset after function(object) destroy...

    static int rollno; // static data member declared...
    float marks;

public:
    void getdata();
    void setdata();
};

// Initialization...
// int student :: rollno=1; // --> By default value is 0...

int main()
{
    student rohit, vipin, hemant;

    rohit.getdata();
    rohit.setdata();

    vipin.getdata();
    vipin.setdata();

    hemant.getdata();
    hemant.setdata();

    return 0;
}

void student ::getdata()
{
    rollno++;
    cout <<endl<<"Enter the marks of rollno." << rollno << endl;
    cin >> marks;
}

void student ::setdata()
{
    cout << endl<< "The Marks of rollno." << rollno << " is:- " << marks << endl;
}