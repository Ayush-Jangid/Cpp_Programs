//                             *** POINTER ARITHMETIC IN ARRAY ***

#include <iostream>
using namespace std;

int main(){
    int arr[3] = {3,4,5};
    int *ptr;
    ptr = arr; // no need of &...

    cout<<"The address of arr[0] is:- "<<*ptr<<endl;
    cout<<"The address of arr[1] is:- "<<(*ptr+1)<<endl;
    cout<<"The address of arr[2] is:- "<<(*ptr+2)<<endl<<endl;

    
    cout<<"The address of arr[0] is:- "<<ptr<<endl;
    cout<<"The address of arr[1] is:- "<<(ptr+1)<<endl;
    cout<<"The address of arr[2] is:- "<<(ptr+2)<<endl<<endl;

    ptr++; // Address will be increased by 4 bytes... because the size of 1 array element =4bytes...

    cout<<ptr<<endl;
    
    
    return 0;
}