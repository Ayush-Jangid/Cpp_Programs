//              __________Another_Way_To_Open_File__________

#include <iostream>
#include <fstream>
using namespace std;

int main(){ cout<<endl;
//              __________Writing_Operation__________

// Opening File with member function open() and writing it...

ofstream wrt;
wrt.open("44_Open_Me.txt"); // open() is used to open files...

wrt<<"You can use me same as cout<< function..."<<endl
   <<"You can print anything in me..."<<endl;
wrt<<"Will You going to Read me..."<<endl;

// wrt.close(); --->  File Will Automatically Close In This Case...



//              __________Reading_Operation__________

// Opening File with member function open() and reading it...

string st;
ifstream read;
read.open("44_Open_Me.txt");

while(read.eof() == 0){ // eof():- End Of File... 
getline(read,st);
cout<<st<<endl;
} // You can read the entire file using this method...


cout<<endl; return 0;
}