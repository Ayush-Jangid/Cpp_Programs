//       ____________Reading_And_Writing_Same_File_____________

#include <iostream>
#include <fstream>
using namespace std;

int main(){
string st; string store;

cout<<endl<<"Enter Your Name:"<<endl;
getline(cin,st);

//         __________Writing_Operation__________

ofstream wr("44_Write_Read.txt");
wr<<"Your Name is:- "<<st;
wr.close(); // close() function is used to deallocate or close the file...
// Note:- You can't read this file without closeing it in this program...


//         __________Reading_Operation__________

ifstream re("44_Write_Read.txt");
// re>>store;

getline(re,store);
cout<<endl<<store<<endl;
re.close();

cout<<endl; return 0;
}