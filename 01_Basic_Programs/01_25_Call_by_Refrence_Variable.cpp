#include <iostream>
using namespace std;

//                  ***** Call by Refrence using Refrence Variables in C++ *****

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
int x = 10;
int y = 5;
    
//                  ***** Call by Refrence using Refrence Variables in C++ *****


swap(x,y); // It will swap the value...
cout<<endl<<"X = "<<x<<endl<<"Y = "<<y<<endl<<endl;
    return 0;
}