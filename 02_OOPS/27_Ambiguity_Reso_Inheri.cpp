//       __________ Ambiguity_Resolution_of_functions_in_Inheritence__________
// When one class is derived from two or more base classes then,
// there is chances that the base classes have the function with same name...

#include <iostream>
using namespace std;

class Base1
{
public:
    void display()
    {
        cout << endl
             << "_____PUBG_MOBILE_____" << endl;
    }
};

class Base2
{
public:
    void display()
    {
        cout << endl
             << "_____CALL_OF_DUTY_MOBILE_____" << endl;
    }
};

class derived : public Base1, public Base2
{
public:
    void display()
    {
        Base1 ::display(); // Now it will take Base1's display() function...
        Base2 ::display(); // Now it will take Base2's display() function...

        // If you will declare both Base1 :: display() and Base2 :: display,
        // it will run both function()...
    }
};

int main()
{

    derived der;

    der.display();

    der.Base1::display(); // It will run Base1 display() function...
    der.Base2::display(); // It will run Base2 display() function...

    cout << endl;
    return 0;
}