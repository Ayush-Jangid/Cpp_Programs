#include <iostream>
#include <string>
using namespace std;

int main(){
//                    length() function...    

string s = "helloooo"; // In C++ we can directly declare the string...


cout<<endl<<"The length of this string is:- "<<s.length()<<endl; 
// length() function is used to measure the length of string...


//                       at() function...

string stg = "Can change";

cout<<endl<<"The second letter is:- "<<stg.at(1)<<endl;  // It will print the 2nd letter of this string...
// at() is used to print character of string in nth Location...

// cout<< stg.at(-1); It will throw a error...

stg.at(0) = 'b'; // It will change(replace) the first letter of this string with b...

cout<<stg<<endl;

cout<< stg.at(stg.length() - 1) <<endl; // It will print the last letter of this string...

    return 0;
}