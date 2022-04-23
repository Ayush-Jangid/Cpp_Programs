#include <iostream>
using namespace std;

int main(){
int a =10;
int *p = &a;
*p = 550;

cout<<endl<<"The value at address p is:- "<<(*p)<<endl;

// New Operator(keyword):- It is a request for the memory allocation on the heap. 

p = new int(23); // Defining new keyword...
cout<<endl<<"The value at adress p is:- "<<*p<<endl;

float *ptr = new float(25.23);
cout<<endl<<"The value at address ptr is:- "<<*(ptr)<<endl;

// Creating array using new keyword...
int *arr = new int[3];
  arr[0] = 4;
*(arr+1) = 8;    // arr[1] = 8;
  arr[2] = 12;

cout<<endl<<"The value arr[0] is:- "<<arr[0]
    <<endl<<"The value arr[1] is:- "<<arr[1]
    <<endl<<"The value arr[2] is:- "<<arr[2]<<endl;

// Delete Operator(keyword):- It is used to deallocate the allocated memory by new keyword...

// delete arr; // It is used to delete single initiated by new operator...
delete[] arr;  // It is used to delete a group of objects...

cout<<endl<<"\t_____Values After Delete Keyword_____"<<endl;
cout<<endl<<"The value arr[0] is:- "<<arr[0]
    <<endl<<"The value arr[1] is:- "<<arr[1]
    <<endl<<"The value arr[2] is:- "<<arr[2]<<endl;


cout<<endl;
    return 0;
}

// New Keyword:- Use of the new operator signifies a request for the memory allocation on the heap. 
// If the sufficient memory is available, 
// it initializes the memory and returns its address to the pointer variable.
// The new operator should only be used if the data object should remain in memory until delete is called.