//         Dynamic Initialization of objects Using constructors...
// Dynamic Initialization:- It refers to initializing objects at run time,
//                          or providing value at run time...

#include <iostream>
using namespace std;

class bankdepo
{
    float amount;
    int years;
    float interest;
    float ramount;

public:
    bankdepo(float a, int y, int i);
    bankdepo(float a, int y, float i);

    void display();
};



//                  ______Main_Function()_____
int main()
{
    // int amt, in, yrs;
    // cout<<endl<<"Enter the amount you deposited:"<<endl;
    // cin>>amt;
    // cout<<"Enter duration(in years):"<<endl;
    // cin>>yrs;
    // cout<<"Enter interest:"<<endl<<endl;
    // cin>>in;

    bankdepo rohit(100, 2, 4); // Second constructor will call bcz of int value...
    rohit.display();

    bankdepo mohit(200,5,float(6.6)); // First constructor will call bcz of float value...
    mohit.display();

    return 0;
}



//              ______Constructor_Defining_Area_____

bankdepo ::bankdepo(float a, int y, float i)
{
    cout << endl
         << "_____First_Constructor_Called_____" << endl;
    amount = a;
    years = y;
    interest = i;

    ramount = amount * (1 + i);
}

bankdepo ::bankdepo(float a, int y, int i)
{
    cout << endl
         << "_____Second_Constructor_Called_____" << endl;

    amount = a;
    years = y;

    for (int i = 0; i < y; i++)
    {
        interest = (amount / 100) * i;
        amount = interest + amount; // 4 * 100 = 104
    }
    ramount = amount;
}

//      _____Defining_display_function_____
void bankdepo ::display()
{
    cout << endl
         << "The balance of " << amount << "rs is increased to "
         << ramount << "rs, After " << years << "year" << endl
         << endl;
}