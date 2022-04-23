// Nexting of fuction explained in next program... (Check it out, now)...

// This is also an example of NOMF(nesting of Member Function)...
#include <iostream>
#include <string>
using namespace std;
//                               ********** CLASS PORTION **********
class binary
{
    // private: // class is  private(by default) if you not decare (private or public)...

    string s;     // Private member...
    void check(); // Private function...

public:
    void input();
    void display();
    void replace();
};



//                               ********* main() portion **********
int main()
{
    binary call;


    call.input();
    // call.check(); // We can't access this function from here because it is private...
    call.display();
    call.replace();

    return 0;
}
//                             ********** Functions portion **********
void binary ::input()
{
    cout << "Enter a binary number:" << endl;
    cin >> s;
}

void binary ::check()
{
    int yes = 0;
    for (int i = 0; i < s.length(); i++)
    {

        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "!Invalid, this is not a binary number..." << endl
                 << endl;
            // return 0; // We can't use return command in void function...
            exit(0);
        }
        else
        {
            yes = 1;
        }
    }

    if (yes == 1)
    {
        cout << "The number is:- ";
    }
}

void binary ::display()
{
    check(); // display() called check() --> Nesting of member function...

    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

void binary ::replace()
{

    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }

    cout << " after replacing 0 and 1 with each other is:- ";

    for (int i = 0; i < s.length(); i++)
    {

        if (s.at(i) == '1')
        {
            s.at(i) = '0';
            cout << s.at(i);
        }
        else
        {
            s.at(i) = '1';
            cout << s.at(i);
        }
    }
}


