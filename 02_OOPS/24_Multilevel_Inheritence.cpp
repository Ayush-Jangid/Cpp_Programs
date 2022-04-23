//    **************** Read this program carefully *****************

#include <iostream>
using namespace std;
//  ------------------------Class-student------------------------
class student
{
protected:
    int rollno;

public:
    //  __________Constructor__________
    student()
    {
        cout << endl
             << "Enter the rollno.:- " << endl; // This will be call firstly...
        cin >> rollno; }
    //  _______________________________
};
//  -------------------------------------------------------------





//  ------------------------Class-exams--------------------------
class exams : protected student
{
protected:
    float maths;
    float english;

    //  __________Constructor__________
    exams() // This will be call after student's constructor...
    {
        cout << endl
             << "Enter Maths Marks:" << endl;
        cin >> maths;
        cout << "Enter English Marks:" << endl;
        cin >> english;
    }
    //  _______________________________

    void getmarks()
    {
        cout << endl
             << "Maths Marks:- " << maths << endl;
        cout << "English Marks:- " << english << endl;
    }
};
//  -------------------------------------------------------------

//  ------------------------Class-result-------------------------
class result : protected exams
{
private:
    float percentage;

public:
    void res()
    {
        getmarks();
        cout << endl
             << "Your result of rollno[" << rollno << "]is:- " << (maths + english) / 2 << "%" << endl;
    }
};
//  --------------------------------------------------------------

/*

      If we inherited B from A and C from B:[ A-->B-->C ]:- 
      1. A is the Base class for B, B is the Base class for C...
      2. A-->B-->C is called inhertence path...
toh kya krta hai phir pure din,

*/

int main()
{

    result rohit;
    rohit.res();

    cout << endl;
    return 0;
}