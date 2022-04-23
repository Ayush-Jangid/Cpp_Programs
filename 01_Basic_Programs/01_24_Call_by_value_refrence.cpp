#include <iostream>
using namespace std;

//                        ***** CALL BY VALUE *****
void swap(int x, int y){ 
    int temp;
    temp = x;
    x = y;
    y = temp;

// cout<<"The value of a:- "<<x<<endl<<"The value of b:- "<<y<<endl<<endl;
}

//                      ***** CALL BY REFRENCE USING POINTERS *****
void swapp(int *x, int *y){ 
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a = 2;
    int b = 3;

//                        ***** CALL BY VALUE *****

   swap(a,b);  // It will not swap a and b...
   cout<<endl<<"After Swap(Call by Value):-"<<endl<<"A = "<<a<<endl<<"B = "<<b<<endl<<endl;
   

//                      ***** CALL BY REFRENCE USING &*****

   swapp(&a,&b); // It will swap a and b...
      cout<<endl<<"After Swapp(Call by Refrence):-"<<endl<<"A = "<<a<<endl<<"B = "<<b<<endl<<endl;

    return 0;
}